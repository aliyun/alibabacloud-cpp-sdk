// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAGENTLESSSENSITIVEFILEBYKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAGENTLESSSENSITIVEFILEBYKEYREQUEST_HPP_
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
  class DescribeAgentlessSensitiveFileByKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAgentlessSensitiveFileByKeyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(ImageUuid, imageUuid_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(ScanRange, scanRange_);
      DARABONBA_PTR_TO_JSON(SensitiveFileKey, sensitiveFileKey_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAgentlessSensitiveFileByKeyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(ImageUuid, imageUuid_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(ScanRange, scanRange_);
      DARABONBA_PTR_FROM_JSON(SensitiveFileKey, sensitiveFileKey_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeAgentlessSensitiveFileByKeyRequest() = default ;
    DescribeAgentlessSensitiveFileByKeyRequest(const DescribeAgentlessSensitiveFileByKeyRequest &) = default ;
    DescribeAgentlessSensitiveFileByKeyRequest(DescribeAgentlessSensitiveFileByKeyRequest &&) = default ;
    DescribeAgentlessSensitiveFileByKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAgentlessSensitiveFileByKeyRequest() = default ;
    DescribeAgentlessSensitiveFileByKeyRequest& operator=(const DescribeAgentlessSensitiveFileByKeyRequest &) = default ;
    DescribeAgentlessSensitiveFileByKeyRequest& operator=(DescribeAgentlessSensitiveFileByKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->imageUuid_ == nullptr && this->instanceId_ == nullptr && this->pageSize_ == nullptr && this->remark_ == nullptr && this->scanRange_ == nullptr
        && this->sensitiveFileKey_ == nullptr && this->status_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeAgentlessSensitiveFileByKeyRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // imageUuid Field Functions 
    bool hasImageUuid() const { return this->imageUuid_ != nullptr;};
    void deleteImageUuid() { this->imageUuid_ = nullptr;};
    inline string getImageUuid() const { DARABONBA_PTR_GET_DEFAULT(imageUuid_, "") };
    inline DescribeAgentlessSensitiveFileByKeyRequest& setImageUuid(string imageUuid) { DARABONBA_PTR_SET_VALUE(imageUuid_, imageUuid) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeAgentlessSensitiveFileByKeyRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeAgentlessSensitiveFileByKeyRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline DescribeAgentlessSensitiveFileByKeyRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // scanRange Field Functions 
    bool hasScanRange() const { return this->scanRange_ != nullptr;};
    void deleteScanRange() { this->scanRange_ = nullptr;};
    inline const vector<string> & getScanRange() const { DARABONBA_PTR_GET_CONST(scanRange_, vector<string>) };
    inline vector<string> getScanRange() { DARABONBA_PTR_GET(scanRange_, vector<string>) };
    inline DescribeAgentlessSensitiveFileByKeyRequest& setScanRange(const vector<string> & scanRange) { DARABONBA_PTR_SET_VALUE(scanRange_, scanRange) };
    inline DescribeAgentlessSensitiveFileByKeyRequest& setScanRange(vector<string> && scanRange) { DARABONBA_PTR_SET_RVALUE(scanRange_, scanRange) };


    // sensitiveFileKey Field Functions 
    bool hasSensitiveFileKey() const { return this->sensitiveFileKey_ != nullptr;};
    void deleteSensitiveFileKey() { this->sensitiveFileKey_ = nullptr;};
    inline string getSensitiveFileKey() const { DARABONBA_PTR_GET_DEFAULT(sensitiveFileKey_, "") };
    inline DescribeAgentlessSensitiveFileByKeyRequest& setSensitiveFileKey(string sensitiveFileKey) { DARABONBA_PTR_SET_VALUE(sensitiveFileKey_, sensitiveFileKey) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeAgentlessSensitiveFileByKeyRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The page number of the page to return. Default value: **1**.
    shared_ptr<int32_t> currentPage_ {};
    // The UUID of the scanned asset. You can obtain the UUID on the Host Assets and Cloud Products pages. In the host security detection scenario, this parameter specifies the UUID of the scanned host. In the snapshot security detection and custom image security detection scenarios, this parameter specifies the ID of the scanned image or snapshot.
    shared_ptr<string> imageUuid_ {};
    // Instance ID of the asset instance to query. You can obtain instance ID by choosing Task Management > Details > Detection Target.
    shared_ptr<string> instanceId_ {};
    // The maximum number of entries to return on each page in a paged query. The default number of entries displayed per page is 20. If this parameter is left empty, 20 entries are returned by default for paging.
    // > Do not leave this parameter empty.
    shared_ptr<int32_t> pageSize_ {};
    // The name or IP address of the asset.
    shared_ptr<string> remark_ {};
    // The scan ranges.
    shared_ptr<vector<string>> scanRange_ {};
    // The type of the sensitive file. Valid values:
    // 
    // - **npm_token**: NPM access token
    // - **ftp_cfg**: FTP configuration
    // - **google_oauth_key**: Google OAuth key
    // - **planetscale_passwd**: PlanetScale password
    // - **github_ssh_key**: GitHub SSH key
    // - **msbuild_publish_profile**: MSBuild publish profile
    // - **fastly_cdn_token**: Fastly CDN token
    // - **ssh_private_key**: SSH private key
    // - **aws_cli**: AWS CLI credential
    // - **cpanel_proftpd**: cPanel ProFTPd credential
    // - **postgresql_passwd**: PostgreSQL password file
    // - **discord_client_cred**: Discord client credential
    // - **rails_database**: Rails database configuration
    // - **aws_access_key**: AWS access key
    // - **esmtp_cfg**: ESMTP mail server configuration
    // - **docker_registry_cfg**: Docker image registry configuration
    // - **pem**: PEM
    // - **common_cred**: common credential
    // - **sftp_cfg**: SFTP connection configuration
    // - **grafana_token**: Grafana token
    // - **slack_token**: Slack token
    // - **ec_private_key**: EC private key
    // - **pypi_token**: PyPI upload token
    // - **finicity_token**: Finicity platform token
    // - **k8s_client_key**: Kubernetes client private key
    // - **git_cfg**: Git configuration
    // - **django_key**: Django key
    // - **jenkins_ssh**: Jenkins SSH configuration file
    // - **openssh_private_key**: OpenSSH private key
    // - **square_oauth**: Square OAuth credential
    // - **typeform_token**: Typeform token
    // - **common_database_cfg**: common database connection configuration
    // - **wordpress_database_cfg**: WordPress database configuration
    // - **googlecloud_api_key**: Google Cloud API key
    // - **vscode_sftp**: VSCode SFTP configuration
    // - **apache_htpasswd**: Apache htpasswd
    // - **planetscale_token**: PlanetScale token
    // - **contentful_preview_token**: Contentful preview token
    // - **php_database_cfg**: PHP application database password
    // - **atom_remote_sync**: Atom remote sync configuration
    // - **aws_session_token**: AWS session token
    // - **atom_sftp_cfg**: Atom SFTP configuration
    // - **asana_client_private_key**: Asana project management platform client key
    // - **tencentcloud_ak**: SecretId of other cloud providers
    // - **rsa_private_key**: RSA private key
    // - **github_personal_token**: GitHub personal access token
    // - **pgp**: PGP encrypted file
    // - **stripe_skpk**: Stripe secret key
    // - **square_token**: Square access token
    // - **rails_carrierwave**: Rails Carrierwave file upload credential
    // - **dbeaver_database_cfg**: DBeaver database configuration
    // - **robomongo_cred**: Robomongo credential
    // - **github_oauth_token**: GitHub OAuth access token
    // - **pulumi_token**: Pulumi token
    // - **ventrilo_voip**: Ventrilo VoIP server configuration
    // - **macos_keychain**: macOS keychain
    // - **amazon_mws_token**: Amazon MWS token
    // - **dynatrace_token**: Dynatrace token
    // - **java_keystore**: Java keystore
    // - **microsoft_sdf**: Microsoft SQL CE database
    // - **kubernetes_dashboard_cred**: Kubernetes Dashboard user credential
    // - **atlassian_token**: Atlassian token
    // - **rdp**: Remote Desktop Protocol (RDP) connection
    // - **mailgun_key**: Mailgun webhook signing key
    // - **mailchimp_api_key**: Mailchimp API key
    // - **netrc_cfg**: .netrc configuration file
    // - **openvpn_cfg**: OpenVPN client configuration
    // - **github_refresh_token**: GitHub refresh token
    // - **salesforce**: Salesforce credential
    // - **sendinblue**: Sendinblue token
    // - **pkcs_private_key**: PKCS#12 key
    // - **rubyonrails_passwd**: Ruby on Rails password file
    // - **filezilla_ftp**: FileZilla FTP configuration
    // - **databricks_token**: Databricks token
    // - **gitLab_personal_token**: GitLab personal access token
    // - **rails_master_key**: Rails master key
    // - **sqlite**: SQLite3/SQLite database
    // - **firefox_logins**: Firefox logon configuration
    // - **mailgun_private_token**: Mailgun private token
    // - **joomla_cfg**: Joomla configuration
    // - **hashicorp_terraform_token**: HashiCorp Terraform token
    // - **jetbrains_ides**: JetBrains IDEs configuration
    // - **heroku_api_key**: Heroku API key
    // - **messagebird_token**: MessageBird token
    // - **github_app_token**: GitHub App token
    // - **hashicorp_vault_token**: HashiCorp Vault token
    // - **pgp_private_key**: PGP private key
    // - **sshpasswd**: SSH password
    // - **huaweicloud_ak**: Secret Access Key of other cloud providers
    // - **aws_s3cmd**: AWS S3cmd configuration
    // - **php_config**: PHP configuration
    // - **common_private_key**: common private key type
    // - **microsoft_mdf**: Microsoft SQL database
    // - **mediawiki_cfg**: MediaWiki configuration
    // - **jenkins_cred**: Jenkins credential
    // - **rubygems_cred**: RubyGems credential
    // - **clojars_token**: Clojars token
    // - **phoenix_web_passwd**: Phoenix Web credential
    // - **puttygen_private_key**: PuTTYgen private key
    // - **google_oauth_token**: Google OAuth access token
    // - **rubyonrails_cfg**: Ruby on Rails database configuration
    // - **lob_api_key**: Lob API key
    // - **pkcs_cred**: PKCS#12 certificate
    // - **otr_private_key**: OTR private key
    // - **contentful_delivery_token**: Contentful delivery token
    // - **digital_ocean_tugboat**: DigitalOcean Tugboat configuration
    // - **dsa_private_key**: DSA private key
    // - **rails_app_token**: Rails App token
    // - **git_cred**: Git user credential
    // - **newrelic_api_key**: New Relic User API key
    // - **github_hub**: hub configuration that stores GitHub tokens
    // - **rubygem**: RubyGems token
    // > This parameter is required. If this parameter is not provided, the API returns HTTP 400 and the error code -101.
    shared_ptr<string> sensitiveFileKey_ {};
    // The fix status of the baseline risk. Valid values:
    // - **0**: Unfixed.
    // - **1**: Fixed.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
