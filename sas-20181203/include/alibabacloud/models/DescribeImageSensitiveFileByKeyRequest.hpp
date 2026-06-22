// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGESENSITIVEFILEBYKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGESENSITIVEFILEBYKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageSensitiveFileByKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageSensitiveFileByKeyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(ImageUuid, imageUuid_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ScanRange, scanRange_);
      DARABONBA_PTR_TO_JSON(SensitiveFileKey, sensitiveFileKey_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageSensitiveFileByKeyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(ImageUuid, imageUuid_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ScanRange, scanRange_);
      DARABONBA_PTR_FROM_JSON(SensitiveFileKey, sensitiveFileKey_);
    };
    DescribeImageSensitiveFileByKeyRequest() = default ;
    DescribeImageSensitiveFileByKeyRequest(const DescribeImageSensitiveFileByKeyRequest &) = default ;
    DescribeImageSensitiveFileByKeyRequest(DescribeImageSensitiveFileByKeyRequest &&) = default ;
    DescribeImageSensitiveFileByKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageSensitiveFileByKeyRequest() = default ;
    DescribeImageSensitiveFileByKeyRequest& operator=(const DescribeImageSensitiveFileByKeyRequest &) = default ;
    DescribeImageSensitiveFileByKeyRequest& operator=(DescribeImageSensitiveFileByKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->imageUuid_ == nullptr && this->lang_ == nullptr && this->pageSize_ == nullptr && this->scanRange_ == nullptr && this->sensitiveFileKey_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeImageSensitiveFileByKeyRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // imageUuid Field Functions 
    bool hasImageUuid() const { return this->imageUuid_ != nullptr;};
    void deleteImageUuid() { this->imageUuid_ = nullptr;};
    inline string getImageUuid() const { DARABONBA_PTR_GET_DEFAULT(imageUuid_, "") };
    inline DescribeImageSensitiveFileByKeyRequest& setImageUuid(string imageUuid) { DARABONBA_PTR_SET_VALUE(imageUuid_, imageUuid) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeImageSensitiveFileByKeyRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeImageSensitiveFileByKeyRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // scanRange Field Functions 
    bool hasScanRange() const { return this->scanRange_ != nullptr;};
    void deleteScanRange() { this->scanRange_ = nullptr;};
    inline const vector<string> & getScanRange() const { DARABONBA_PTR_GET_CONST(scanRange_, vector<string>) };
    inline vector<string> getScanRange() { DARABONBA_PTR_GET(scanRange_, vector<string>) };
    inline DescribeImageSensitiveFileByKeyRequest& setScanRange(const vector<string> & scanRange) { DARABONBA_PTR_SET_VALUE(scanRange_, scanRange) };
    inline DescribeImageSensitiveFileByKeyRequest& setScanRange(vector<string> && scanRange) { DARABONBA_PTR_SET_RVALUE(scanRange_, scanRange) };


    // sensitiveFileKey Field Functions 
    bool hasSensitiveFileKey() const { return this->sensitiveFileKey_ != nullptr;};
    void deleteSensitiveFileKey() { this->sensitiveFileKey_ = nullptr;};
    inline string getSensitiveFileKey() const { DARABONBA_PTR_GET_DEFAULT(sensitiveFileKey_, "") };
    inline DescribeImageSensitiveFileByKeyRequest& setSensitiveFileKey(string sensitiveFileKey) { DARABONBA_PTR_SET_VALUE(sensitiveFileKey_, sensitiveFileKey) };


  protected:
    // The page number of the page to return. Default value: **1**.
    shared_ptr<int32_t> currentPage_ {};
    // The UUID of the image.
    shared_ptr<string> imageUuid_ {};
    // The language of the content in the request and response. Default value: **zh**. Valid values:
    // - **zh**: Chinese.
    // - **en**: English.
    shared_ptr<string> lang_ {};
    // The maximum number of entries per page in paging query. Default value: **20**.
    shared_ptr<int32_t> pageSize_ {};
    // The scan scope. Valid values:
    // 
    // - **image**: Image.
    // - **container**: Container.
    shared_ptr<vector<string>> scanRange_ {};
    // The sensitive file alerting type. Valid values:
    // 
    // - **npm_token**: NPM access token
    // - **ftp_cfg**: FTP configuration
    // - **google_oauth_key**: Google OAuth Key
    // - **planetscale_passwd**: Planetscale password
    // - **github_ssh_key**: Github SSH key
    // - **msbuild_publish_profile**: MSBuild publish profile
    // - **fastly_cdn_token**: Fastly CDN token
    // - **ssh_private_key**: SSH private key
    // - **aws_cli**: AWS CLI credentials
    // - **cpanel_proftpd**: cPanel ProFTPd credentials
    // - **postgresql_passwd**: PostgreSQL password file
    // - **discord_client_cred**: Discord client credentials
    // - **rails_database**: Rails database configuration
    // - **aws_access_key**: AWS Access Key
    // - **esmtp_cfg**: ESMTP mail server configuration
    // - **docker_registry_cfg**: Docker image repository configuration
    // - **pem**: PEM
    // - **common_cred**: common credentials
    // - **sftp_cfg**: SFTP connection configuration
    // - **grafana_token**: Grafana token
    // - **slack_token**: Slack Token
    // - **ec_private_key**: EC private key
    // - **pypi_token**: PyPI upload token
    // - **finicity_token**: Finicity platform token
    // - **k8s_client_key**: Kubernetes client private key
    // - **git_cfg**: Git configuration
    // - **django_key**: Django key
    // - **jenkins_ssh**: Jenkins SSH configuration file
    // - **openssh_private_key**: OPENSSH private key
    // - **square_oauth**: Square OAuth credentials
    // - **typeform_token**: Typeform token
    // - **common_database_cfg**: common database connection configuration
    // - **wordpress_database_cfg**: WordPress database configuration
    // - **googlecloud_api_key**: Google Cloud API Key
    // - **vscode_sftp**: VSCode SFTP configuration
    // - **apache_htpasswd**: Apache htpasswd
    // - **planetscale_token**: Planetscale token
    // - **contentful_preview_token**: Contentful Preview token
    // - **php_database_cfg**: PHP application database password
    // - **atom_remote_sync**: Atom remote synchronization configuration
    // - **aws_session_token**: AWS session token
    // - **atom_sftp_cfg**: Atom SFTP configuration
    // - **asana_client_private_key**: Asana client private key
    // - **tencentcloud_ak**: third-party cloud SecretId
    // - **rsa_private_key**: RSA private key
    // - **github_personal_token**: Github Personal access token
    // - **pgp**: PGP encrypt file
    // - **stripe_skpk**: Stripe Secret Key
    // - **square_token**: Square access token
    // - **rails_carrierwave**: Rails Carrierwave file upload credentials
    // - **dbeaver_database_cfg**: DBeaver database configuration
    // - **robomongo_cred**: Robomongo credentials
    // - **github_oauth_token**: Github OAuth access token
    // - **pulumi_token**: Pulumi token
    // - **ventrilo_voip**: Ventrilo VoIP Server configuration
    // - **macos_keychain**: macOS Keychain
    // - **amazon_mws_token**: Amazon MWS Token
    // - **dynatrace_token**: Dynatrace token
    // - **java_keystore**: Java KeyStore
    // - **microsoft_sdf**: Microsoft SQL CE database
    // - **kubernetes_dashboard_cred**: Kubernetes Dashboard user credentials
    // - **atlassian_token**: Atlassian token
    // - **rdp**: Remote Desktop Protocol (RDP) connection
    // - **mailgun_key**: Mailgun Webhook Signing Key
    // - **mailchimp_api_key**: Mailchimp API Key
    // - **netrc_cfg**: .netrc configuration file
    // - **openvpn_cfg**: OpenVPN client configuration
    // - **github_refresh_token**: Github Refresh Token
    // - **salesforce**: Salesforce credentials
    // - **sendinblue**: Sendinblue token
    // - **pkcs_private_key**: PKCS#12 key
    // - **rubyonrails_passwd**: Ruby on Rails password file
    // - **filezilla_ftp**: FileZilla FTP configuration
    // - **databricks_token**: Databricks token
    // - **gitLab_personal_token**: GitLab Personal access token
    // - **rails_master_key**: Rails Master Key
    // - **sqlite**: SQLite3/SQLite database
    // - **firefox_logins**: Firefox logon configuration
    // - **mailgun_private_token**: Mailgun Private token
    // - **joomla_cfg**: Joomla configuration
    // - **hashicorp_terraform_token**: Hashicorp Terraform Token
    // - **jetbrains_ides**: Jetbrains IDEs configuration
    // - **heroku_api_key**: Heroku API key
    // - **messagebird_token**: MessageBird token
    // - **github_app_token**: Github App Token
    // - **hashicorp_vault_token**: Hashicorp Vault Token
    // - **pgp_private_key**: PGP private key
    // - **sshpasswd**: SSH password
    // - **huaweicloud_ak**: third-party cloud Secret Access Key
    // - **aws_s3cmd**: AWS S3cmd configuration
    // - **php_config**: PHP configuration
    // - **common_private_key**: common private key types
    // - **microsoft_mdf**: Microsoft SQL database
    // - **mediawiki_cfg**: MediaWiki configuration
    // - **jenkins_cred**: Jenkins credentials
    // - **rubygems_cred**: Rubygems credentials
    // - **clojars_token**: Clojars token
    // - **phoenix_web_passwd**: Phoenix Web credentials
    // - **puttygen_private_key**: PuTTYgen private key
    // - **google_oauth_token**: Google OAuth access token
    // - **rubyonrails_cfg**: Ruby On Rails database configuration
    // - **lob_api_key**: Lob API Key
    // - **pkcs_cred**: PKCS#12 certificate
    // - **otr_private_key**: OTR private key
    // - **contentful_delivery_token**: Contentful Delivery token
    // - **digital_ocean_tugboat**: Digital Ocean Tugboat configuration
    // - **dsa_private_key**: DSA private key
    // - **rails_app_token**: Rails App token
    // - **git_cred**: Git user credentials
    // - **newrelic_api_key**: New Relic User API Key
    // - **github_hub**: hub configuration that stores Github tokens
    // - **rubygem**: Rubygem token
    shared_ptr<string> sensitiveFileKey_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
