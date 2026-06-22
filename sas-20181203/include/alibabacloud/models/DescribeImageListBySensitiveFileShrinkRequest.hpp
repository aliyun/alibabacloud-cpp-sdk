// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGELISTBYSENSITIVEFILESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGELISTBYSENSITIVEFILESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageListBySensitiveFileShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageListBySensitiveFileShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(ImageDigest, imageDigest_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RepoInstanceId, repoInstanceId_);
      DARABONBA_PTR_TO_JSON(RepoName, repoName_);
      DARABONBA_PTR_TO_JSON(RepoNamespace, repoNamespace_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(ScanRange, scanRangeShrink_);
      DARABONBA_PTR_TO_JSON(SensitiveFileKey, sensitiveFileKey_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageListBySensitiveFileShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(ImageDigest, imageDigest_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RepoInstanceId, repoInstanceId_);
      DARABONBA_PTR_FROM_JSON(RepoName, repoName_);
      DARABONBA_PTR_FROM_JSON(RepoNamespace, repoNamespace_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(ScanRange, scanRangeShrink_);
      DARABONBA_PTR_FROM_JSON(SensitiveFileKey, sensitiveFileKey_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeImageListBySensitiveFileShrinkRequest() = default ;
    DescribeImageListBySensitiveFileShrinkRequest(const DescribeImageListBySensitiveFileShrinkRequest &) = default ;
    DescribeImageListBySensitiveFileShrinkRequest(DescribeImageListBySensitiveFileShrinkRequest &&) = default ;
    DescribeImageListBySensitiveFileShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageListBySensitiveFileShrinkRequest() = default ;
    DescribeImageListBySensitiveFileShrinkRequest& operator=(const DescribeImageListBySensitiveFileShrinkRequest &) = default ;
    DescribeImageListBySensitiveFileShrinkRequest& operator=(DescribeImageListBySensitiveFileShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->imageDigest_ == nullptr && this->lang_ == nullptr && this->pageSize_ == nullptr && this->repoInstanceId_ == nullptr && this->repoName_ == nullptr
        && this->repoNamespace_ == nullptr && this->riskLevel_ == nullptr && this->scanRangeShrink_ == nullptr && this->sensitiveFileKey_ == nullptr && this->status_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeImageListBySensitiveFileShrinkRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // imageDigest Field Functions 
    bool hasImageDigest() const { return this->imageDigest_ != nullptr;};
    void deleteImageDigest() { this->imageDigest_ = nullptr;};
    inline string getImageDigest() const { DARABONBA_PTR_GET_DEFAULT(imageDigest_, "") };
    inline DescribeImageListBySensitiveFileShrinkRequest& setImageDigest(string imageDigest) { DARABONBA_PTR_SET_VALUE(imageDigest_, imageDigest) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeImageListBySensitiveFileShrinkRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeImageListBySensitiveFileShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // repoInstanceId Field Functions 
    bool hasRepoInstanceId() const { return this->repoInstanceId_ != nullptr;};
    void deleteRepoInstanceId() { this->repoInstanceId_ = nullptr;};
    inline string getRepoInstanceId() const { DARABONBA_PTR_GET_DEFAULT(repoInstanceId_, "") };
    inline DescribeImageListBySensitiveFileShrinkRequest& setRepoInstanceId(string repoInstanceId) { DARABONBA_PTR_SET_VALUE(repoInstanceId_, repoInstanceId) };


    // repoName Field Functions 
    bool hasRepoName() const { return this->repoName_ != nullptr;};
    void deleteRepoName() { this->repoName_ = nullptr;};
    inline string getRepoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
    inline DescribeImageListBySensitiveFileShrinkRequest& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


    // repoNamespace Field Functions 
    bool hasRepoNamespace() const { return this->repoNamespace_ != nullptr;};
    void deleteRepoNamespace() { this->repoNamespace_ = nullptr;};
    inline string getRepoNamespace() const { DARABONBA_PTR_GET_DEFAULT(repoNamespace_, "") };
    inline DescribeImageListBySensitiveFileShrinkRequest& setRepoNamespace(string repoNamespace) { DARABONBA_PTR_SET_VALUE(repoNamespace_, repoNamespace) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline DescribeImageListBySensitiveFileShrinkRequest& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // scanRangeShrink Field Functions 
    bool hasScanRangeShrink() const { return this->scanRangeShrink_ != nullptr;};
    void deleteScanRangeShrink() { this->scanRangeShrink_ = nullptr;};
    inline string getScanRangeShrink() const { DARABONBA_PTR_GET_DEFAULT(scanRangeShrink_, "") };
    inline DescribeImageListBySensitiveFileShrinkRequest& setScanRangeShrink(string scanRangeShrink) { DARABONBA_PTR_SET_VALUE(scanRangeShrink_, scanRangeShrink) };


    // sensitiveFileKey Field Functions 
    bool hasSensitiveFileKey() const { return this->sensitiveFileKey_ != nullptr;};
    void deleteSensitiveFileKey() { this->sensitiveFileKey_ = nullptr;};
    inline string getSensitiveFileKey() const { DARABONBA_PTR_GET_DEFAULT(sensitiveFileKey_, "") };
    inline DescribeImageListBySensitiveFileShrinkRequest& setSensitiveFileKey(string sensitiveFileKey) { DARABONBA_PTR_SET_VALUE(sensitiveFileKey_, sensitiveFileKey) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeImageListBySensitiveFileShrinkRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The page number of the current page to return. Minimum value: 1. Default value: 1.
    shared_ptr<int32_t> currentPage_ {};
    // The image digest.
    // > Fuzzy search is supported.
    shared_ptr<string> imageDigest_ {};
    // Sets the language type for request and response messages. Default value: **zh**. Valid values:
    // 
    // - **zh**: Chinese.
    // - **en**: English.
    shared_ptr<string> lang_ {};
    // The maximum number of entries to return on each page in a paginated query. Default value: 20.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the container image instance.
    // > You can call the [ListRepository](https://help.aliyun.com/document_detail/451339.html) operation of Container Registry to obtain the container image instance ID from the **InstanceId** response parameter.
    shared_ptr<string> repoInstanceId_ {};
    // The name of the image repository.
    // > Fuzzy search is supported.
    shared_ptr<string> repoName_ {};
    // The namespace of the image repository.
    // > Fuzzy search is supported.
    shared_ptr<string> repoNamespace_ {};
    // The risk level of the file. Separate multiple levels with commas (,). Valid values:
    // 
    // - **high**: High risk.
    // - **medium**: Medium risk.
    // - **low**: Low risk.
    shared_ptr<string> riskLevel_ {};
    // The collection of scan scopes. Valid values:
    // 
    // - **image**: Image.
    // - **container**: Container.
    shared_ptr<string> scanRangeShrink_ {};
    // The type of sensitive file alert. Valid values:
    // 
    // - **npm_token**: NPM access token
    // - **ftp_cfg**: FTP configuration
    // - **google_oauth_key**: Google OAuth Key
    // - **planetscale_passwd**: Planetscale password
    // - **github_ssh_key**: GitHub SSH key
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
    // - **docker_registry_cfg**: Docker image registry configuration
    // - **pem**: PEM
    // - **common_cred**: Common credentials
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
    // - **openssh_private_key**: OpenSSH private key
    // - **square_oauth**: Square OAuth credentials
    // - **typeform_token**: Typeform token
    // - **common_database_cfg**: Common database connection configuration
    // - **wordpress_database_cfg**: WordPress database configuration
    // - **googlecloud_api_key**: Google Cloud API Key
    // - **vscode_sftp**: VSCode SFTP configuration
    // - **apache_htpasswd**: Apache htpasswd
    // - **planetscale_token**: Planetscale token
    // - **contentful_preview_token**: Contentful Preview token
    // - **php_database_cfg**: PHP application database password
    // - **atom_remote_sync**: Atom remote sync configuration
    // - **aws_session_token**: AWS session token
    // - **atom_sftp_cfg**: Atom SFTP configuration
    // - **asana_client_private_key**: Asana project management platform client key
    // - **tencentcloud_ak**: Third-party cloud SecretId
    // - **rsa_private_key**: RSA private key
    // - **github_personal_token**: GitHub Personal access token
    // - **pgp**: PGP encrypted file
    // - **stripe_skpk**: Stripe Secret Key
    // - **square_token**: Square access token
    // - **rails_carrierwave**: Rails Carrierwave file upload credentials
    // - **dbeaver_database_cfg**: DBeaver database configuration
    // - **robomongo_cred**: Robomongo credentials
    // - **github_oauth_token**: GitHub OAuth access token
    // - **pulumi_token**: Pulumi token
    // - **ventrilo_voip**: Ventrilo VoIP Server configuration
    // - **macos_keychain**: macOS Keychain
    // - **amazon_mws_token**: Amazon MWS Token
    // - **dynatrace_token**: Dynatrace token
    // - **java_keystore**: Java Keystore
    // - **microsoft_sdf**: Microsoft SQL CE database
    // - **kubernetes_dashboard_cred**: Kubernetes Dashboard user credentials
    // - **atlassian_token**: Atlassian token
    // - **rdp**: Remote Desktop Connection RDP
    // - **mailgun_key**: Mailgun Webhook Signing Key
    // - **mailchimp_api_key**: Mailchimp API Key
    // - **netrc_cfg**: .netrc configuration file
    // - **openvpn_cfg**: OpenVPN client configuration
    // - **github_refresh_token**: GitHub Refresh Token
    // - **salesforce**: Salesforce credentials
    // - **sendinblue**: Sendinblue token
    // - **pkcs_private_key**: PKCS#12 key
    // - **rubyonrails_passwd**: Ruby on Rails password file
    // - **filezilla_ftp**: FileZilla FTP configuration
    // - **databricks_token**: Databricks token
    // - **gitLab_personal_token**: GitLab Personal access token
    // - **rails_master_key**: Rails Master Key
    // - **sqlite**: SQLite3/SQLite database
    // - **firefox_logins**: Firefox login configuration
    // - **mailgun_private_token**: Mailgun Private token
    // - **joomla_cfg**: Joomla configuration
    // - **hashicorp_terraform_token**: HashiCorp Terraform Token
    // - **jetbrains_ides**: JetBrains IDEs configuration
    // - **heroku_api_key**: Heroku API key
    // - **messagebird_token**: MessageBird token
    // - **github_app_token**: GitHub App Token
    // - **hashicorp_vault_token**: HashiCorp Vault Token
    // - **pgp_private_key**: PGP private key
    // - **sshpasswd**: SSH password
    // - **huaweicloud_ak**: Third-party cloud Secret Access Key
    // - **aws_s3cmd**: AWS S3cmd configuration
    // - **php_config**: PHP configuration
    // - **common_private_key**: Common private key type
    // - **microsoft_mdf**: Microsoft SQL database
    // - **mediawiki_cfg**: MediaWiki configuration
    // - **jenkins_cred**: Jenkins credentials
    // - **rubygems_cred**: RubyGems credentials
    // - **clojars_token**: Clojars token
    // - **phoenix_web_passwd**: Phoenix Web credentials
    // - **puttygen_private_key**: PuTTYgen private key
    // - **google_oauth_token**: Google OAuth access token
    // - **rubyonrails_cfg**: Ruby on Rails database configuration
    // - **lob_api_key**: Lob API Key
    // - **pkcs_cred**: PKCS#12 certificate
    // - **otr_private_key**: OTR private key
    // - **contentful_delivery_token**: Contentful Delivery token
    // - **digital_ocean_tugboat**: Digital Ocean Tugboat configuration
    // - **dsa_private_key**: DSA private key
    // - **rails_app_token**: Rails App token
    // - **git_cred**: Git user credentials
    // - **newrelic_api_key**: New Relic User API Key
    // - **github_hub**: Hub configuration storing GitHub tokens
    // - **rubygem**: RubyGem token
    shared_ptr<string> sensitiveFileKey_ {};
    // The status of the sensitive file. Valid values:
    // - **0**: Unhandled.
    // - **1**: Ignored.
    // - **2**: False positive.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
