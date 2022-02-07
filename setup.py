from setuptools import setup, find_packages

setup(
    name='camus-chat',
    version='0.3.2',
    description='Peer-to-peer video chat using WebRTC',
    long_description=open('README.rst').read(),
    long_description_content_type="text/x-rst; charset=UTF-8",
    url='https://camus.chat/',
    download_url='https://pypi.org/project/camus-chat/',
    project_urls={
        'Code': 'https://github.com/camuschat/camus',
        'Issue tracker': 'https://github.com/camuschat/camus/issues',
        'Documentation': 'https://docs.camus.chat/',
    },
    author='Morgan Robertson',
    author_email='mrgnr@pm.me',
    license='AGPL-3.0-or-later',
    packages=find_packages(),
    include_package_data=True,
    install_requires=[
        'alembic==1.5.2',
        'bootstrap-flask==1.3.1',
        'flask-sqlalchemy==2.4.4',
        'flask-wtf==0.14.3',
        'hypercorn==0.11.1',
        'python-slugify==4.0.1',
        'quart==0.14.1',
        'SQLAlchemy==1.3.23',
        'twilio==6.45.4',
        'werkzeug==1.0.1',
    ],
    classifiers=[
        'License :: OSI Approved :: GNU Affero General Public License v3 or later (AGPLv3+)',
        'Environment :: Web Environment',
        'Programming Language :: Python :: 3.7',
        'Programming Language :: Python :: 3.8',
        'Topic :: Communications :: Conferencing',
        'Topic :: Multimedia :: Video',
    ],
    python_requires='>=3.7',
    scripts=['bin/camus'],
)
