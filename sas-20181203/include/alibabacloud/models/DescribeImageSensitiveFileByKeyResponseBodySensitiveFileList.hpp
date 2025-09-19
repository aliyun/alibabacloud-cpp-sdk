// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGESENSITIVEFILEBYKEYRESPONSEBODYSENSITIVEFILELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGESENSITIVEFILEBYKEYRESPONSEBODYSENSITIVEFILELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageSensitiveFileByKeyResponseBodySensitiveFileList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageSensitiveFileByKeyResponseBodySensitiveFileList& obj) { 
      DARABONBA_PTR_TO_JSON(Advice, advice_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FilePath, filePath_);
      DARABONBA_PTR_TO_JSON(FirstScanTime, firstScanTime_);
      DARABONBA_PTR_TO_JSON(LastScanTime, lastScanTime_);
      DARABONBA_PTR_TO_JSON(LayerDigest, layerDigest_);
      DARABONBA_PTR_TO_JSON(Md5, md5_);
      DARABONBA_PTR_TO_JSON(Promt, promt_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(SensitiveFileKey, sensitiveFileKey_);
      DARABONBA_PTR_TO_JSON(SensitiveFileName, sensitiveFileName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageSensitiveFileByKeyResponseBodySensitiveFileList& obj) { 
      DARABONBA_PTR_FROM_JSON(Advice, advice_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FilePath, filePath_);
      DARABONBA_PTR_FROM_JSON(FirstScanTime, firstScanTime_);
      DARABONBA_PTR_FROM_JSON(LastScanTime, lastScanTime_);
      DARABONBA_PTR_FROM_JSON(LayerDigest, layerDigest_);
      DARABONBA_PTR_FROM_JSON(Md5, md5_);
      DARABONBA_PTR_FROM_JSON(Promt, promt_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(SensitiveFileKey, sensitiveFileKey_);
      DARABONBA_PTR_FROM_JSON(SensitiveFileName, sensitiveFileName_);
    };
    DescribeImageSensitiveFileByKeyResponseBodySensitiveFileList() = default ;
    DescribeImageSensitiveFileByKeyResponseBodySensitiveFileList(const DescribeImageSensitiveFileByKeyResponseBodySensitiveFileList &) = default ;
    DescribeImageSensitiveFileByKeyResponseBodySensitiveFileList(DescribeImageSensitiveFileByKeyResponseBodySensitiveFileList &&) = default ;
    DescribeImageSensitiveFileByKeyResponseBodySensitiveFileList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageSensitiveFileByKeyResponseBodySensitiveFileList() = default ;
    DescribeImageSensitiveFileByKeyResponseBodySensitiveFileList& operator=(const DescribeImageSensitiveFileByKeyResponseBodySensitiveFileList &) = default ;
    DescribeImageSensitiveFileByKeyResponseBodySensitiveFileList& operator=(DescribeImageSensitiveFileByKeyResponseBodySensitiveFileList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->advice_ != nullptr
        && this->description_ != nullptr && this->filePath_ != nullptr && this->firstScanTime_ != nullptr && this->lastScanTime_ != nullptr && this->layerDigest_ != nullptr
        && this->md5_ != nullptr && this->promt_ != nullptr && this->riskLevel_ != nullptr && this->sensitiveFileKey_ != nullptr && this->sensitiveFileName_ != nullptr; };
    // advice Field Functions 
    bool hasAdvice() const { return this->advice_ != nullptr;};
    void deleteAdvice() { this->advice_ = nullptr;};
    inline string advice() const { DARABONBA_PTR_GET_DEFAULT(advice_, "") };
    inline DescribeImageSensitiveFileByKeyResponseBodySensitiveFileList& setAdvice(string advice) { DARABONBA_PTR_SET_VALUE(advice_, advice) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeImageSensitiveFileByKeyResponseBodySensitiveFileList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // filePath Field Functions 
    bool hasFilePath() const { return this->filePath_ != nullptr;};
    void deleteFilePath() { this->filePath_ = nullptr;};
    inline string filePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
    inline DescribeImageSensitiveFileByKeyResponseBodySensitiveFileList& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


    // firstScanTime Field Functions 
    bool hasFirstScanTime() const { return this->firstScanTime_ != nullptr;};
    void deleteFirstScanTime() { this->firstScanTime_ = nullptr;};
    inline int64_t firstScanTime() const { DARABONBA_PTR_GET_DEFAULT(firstScanTime_, 0L) };
    inline DescribeImageSensitiveFileByKeyResponseBodySensitiveFileList& setFirstScanTime(int64_t firstScanTime) { DARABONBA_PTR_SET_VALUE(firstScanTime_, firstScanTime) };


    // lastScanTime Field Functions 
    bool hasLastScanTime() const { return this->lastScanTime_ != nullptr;};
    void deleteLastScanTime() { this->lastScanTime_ = nullptr;};
    inline int64_t lastScanTime() const { DARABONBA_PTR_GET_DEFAULT(lastScanTime_, 0L) };
    inline DescribeImageSensitiveFileByKeyResponseBodySensitiveFileList& setLastScanTime(int64_t lastScanTime) { DARABONBA_PTR_SET_VALUE(lastScanTime_, lastScanTime) };


    // layerDigest Field Functions 
    bool hasLayerDigest() const { return this->layerDigest_ != nullptr;};
    void deleteLayerDigest() { this->layerDigest_ = nullptr;};
    inline string layerDigest() const { DARABONBA_PTR_GET_DEFAULT(layerDigest_, "") };
    inline DescribeImageSensitiveFileByKeyResponseBodySensitiveFileList& setLayerDigest(string layerDigest) { DARABONBA_PTR_SET_VALUE(layerDigest_, layerDigest) };


    // md5 Field Functions 
    bool hasMd5() const { return this->md5_ != nullptr;};
    void deleteMd5() { this->md5_ = nullptr;};
    inline string md5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
    inline DescribeImageSensitiveFileByKeyResponseBodySensitiveFileList& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


    // promt Field Functions 
    bool hasPromt() const { return this->promt_ != nullptr;};
    void deletePromt() { this->promt_ = nullptr;};
    inline string promt() const { DARABONBA_PTR_GET_DEFAULT(promt_, "") };
    inline DescribeImageSensitiveFileByKeyResponseBodySensitiveFileList& setPromt(string promt) { DARABONBA_PTR_SET_VALUE(promt_, promt) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline DescribeImageSensitiveFileByKeyResponseBodySensitiveFileList& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // sensitiveFileKey Field Functions 
    bool hasSensitiveFileKey() const { return this->sensitiveFileKey_ != nullptr;};
    void deleteSensitiveFileKey() { this->sensitiveFileKey_ = nullptr;};
    inline string sensitiveFileKey() const { DARABONBA_PTR_GET_DEFAULT(sensitiveFileKey_, "") };
    inline DescribeImageSensitiveFileByKeyResponseBodySensitiveFileList& setSensitiveFileKey(string sensitiveFileKey) { DARABONBA_PTR_SET_VALUE(sensitiveFileKey_, sensitiveFileKey) };


    // sensitiveFileName Field Functions 
    bool hasSensitiveFileName() const { return this->sensitiveFileName_ != nullptr;};
    void deleteSensitiveFileName() { this->sensitiveFileName_ = nullptr;};
    inline string sensitiveFileName() const { DARABONBA_PTR_GET_DEFAULT(sensitiveFileName_, "") };
    inline DescribeImageSensitiveFileByKeyResponseBodySensitiveFileList& setSensitiveFileName(string sensitiveFileName) { DARABONBA_PTR_SET_VALUE(sensitiveFileName_, sensitiveFileName) };


  protected:
    // The suggestion.
    std::shared_ptr<string> advice_ = nullptr;
    // The description of the sensitive file.
    std::shared_ptr<string> description_ = nullptr;
    // The file path.
    std::shared_ptr<string> filePath_ = nullptr;
    // The timestamp generated when the first scan was performed. Unit: milliseconds.
    std::shared_ptr<int64_t> firstScanTime_ = nullptr;
    // The timestamp when the last scan was performed. Unit: milliseconds.
    std::shared_ptr<int64_t> lastScanTime_ = nullptr;
    // The digest of the image.
    std::shared_ptr<string> layerDigest_ = nullptr;
    // The MD5 value of the sensitive file.
    std::shared_ptr<string> md5_ = nullptr;
    // The sensitive content.
    std::shared_ptr<string> promt_ = nullptr;
    // The risk level. Valid values:
    // 
    // *   **high**
    // *   **medium**
    // *   **low**
    std::shared_ptr<string> riskLevel_ = nullptr;
    // The type of the alert for the sensitive file. Valid values:
    // 
    // *   **npm_token**: NPM access token
    // *   **ftp_cfg**: FTP configuration
    // *   **google_oauth_key**: Google OAuth key
    // *   **planetscale_passwd**: PlanetScale password
    // *   **github_ssh_key**: Github SSH key
    // *   **msbuild_publish_profile**: MSBuild publish profile
    // *   **fastly_cdn_token**: Fastly CDN token
    // *   **ssh_private_key**: SSH private key
    // *   **aws_cli**: Amazon Web Services (AWS) CLI credential
    // *   **cpanel_proftpd**: cPanel ProFTPD credential
    // *   **postgresql_passwd**: PostgreSQL password file
    // *   **discord_client_cred**: Discord client credential
    // *   **rails_database**: Rails database configuration
    // *   **aws_access_key**: AWS Access Key
    // *   **esmtp_cfg**: Extended Simple Mail Transfer Protocol (ESMTP) configuration
    // *   **docker_registry_cfg**: configuration of a Docker image repository
    // *   **pem**: Privacy-Enhanced Mail (PEM)
    // *   **common_cred**: common credential
    // *   **sftp_cfg**: configuration of connection over Secure File Transfer Protocol (SFTP)
    // *   **grafana_token**: Grafana token
    // *   **slack_token**: Slack token
    // *   **ec_private_key**: Elliptic Curve (EC) private key
    // *   **pypi_token**: Python Package Index (PyPI) token
    // *   **finicity_token**: Finicity token
    // *   **k8s_client_key**: private key for the Kubernetes client
    // *   **git_cfg**: Git configuration
    // *   **django_key**: Django key
    // *   **jenkins_ssh**: SSH configuration file for Jenkins
    // *   **openssh_private_key**: OpenSSH private key
    // *   **square_oauth**: Square OAuth credential
    // *   **typeform_token**: Typeform token
    // *   **common_database_cfg**: configuration of general database connection
    // *   **wordpress_database_cfg**: WordPress database configuration
    // *   **googlecloud_api_key**: API key for Google Cloud
    // *   **vscode_sftp**: VSCode SFTP configuration
    // *   **apache_htpasswd**: Apache htpasswd
    // *   **planetscale_token**: PlanetScale token
    // *   **contentful_preview_token**: preview token for Contentful
    // *   **php_database_cfg**: database password for a PHP application
    // *   **atom_remote_sync**: Atom remote synchronization configuration
    // *   **aws_session_token**: AWS session token
    // *   **atom_sftp_cfg**: Atom SFTP configuration
    // *   **asana_client_private_key**: Asana client key
    // *   **tencentcloud_ak**: secret ID of a third-party cloud
    // *   **rsa_private_key**: Rivest-Shamir-Adleman (RSA) private key
    // *   **github_personal_token**: personal access token for GitHub
    // *   **pgp**: Pretty Good Privacy (PGP) encrypted file
    // *   **stripe_skpk**: Stripe secret key
    // *   **square_token**: Square access token
    // *   **rails_carrierwave**: Rails Carrierwave credential
    // *   **dbeaver_database_cfg**: DBeaver database configuration
    // *   **robomongo_cred**: RoboMongo credential
    // *   **github_oauth_token**: OAuth access token for GitHub
    // *   **pulumi_token**: Pulumi token
    // *   **ventrilo_voip**: configuration of a Ventrilo VoIP server
    // *   **macos_keychain**: macOS Keychain
    // *   **amazon_mws_token**: Amazon MWS token
    // *   **dynatrace_token**: Dynatrace token
    // *   **java_keystore**: Java KeyStore (JKS)
    // *   **microsoft_sdf**: Microsoft SQL Server Compact Edition (CE) database
    // *   **kubernetes_dashboard_cred**: user credential for Kubernetes Dashboard
    // *   **atlassian_token**: Atlassian token
    // *   **rdp**: remote desktop protocol (RDP)
    // *   **mailgun_key**: Mailgun webhook signing key
    // *   **mailchimp_api_key**: API key for Mailchimp
    // *   **netrc_cfg**: netrc configuration file
    // *   **openvpn_cfg**: configuration of the OpenVPN client
    // *   **github_refresh_token**: GitHub refresh token
    // *   **salesforce**: Salesforce credential
    // *   **salesforce**: Sendinblue token
    // *   **pkcs_private_key**: PKCS#12 private key
    // *   **rubyonrails_passwd**: Ruby on Rails password file
    // *   **filezilla_ftp**: FileZilla FTP configuration
    // *   **databricks_token**: Databricks token
    // *   **gitLab_personal_toke**: personal access token for GitLab
    // *   **rails_master_key**: Rails master key
    // *   **sqlite**: SQLite3 or SQLite database
    // *   **firefox_logins**: Firefox logon configuration
    // *   **mailgun_private_token**: Mailgun private token
    // *   **joomla_cfg**: Joomla configuration
    // *   **hashicorp_terraform_token**: HashiCorp Terraform token
    // *   **jetbrains_ides**: JetBrains IDEs configuration
    // *   **heroku_api_key**: API key for Heroku
    // *   **messagebird_token**: MessageBird token
    // *   **github_app_token**: Github app token
    // *   **hashicorp_vault_token**: HashiCorp Vault token
    // *   **pgp_private_key**: PGP private key
    // *   **sshpasswd**: SSH password
    // *   **huaweicloud_ak**: secret access key of a third-party cloud
    // *   **aws_s3cmd**: AWS S3cmd configuration
    // *   **php_config**: PHP configuration
    // *   **common_private_key**: common private key
    // *   **microsoft_mdf**: Microsoft SQL Server database
    // *   **mediawiki_cfg**: MediaWiki configuration
    // *   **jenkins_cred**: Jenkins credential
    // *   **rubygems_cred**: RubyGems credential
    // *   **clojars_token**: Clojars token
    // *   **phoenix_web_passwd**: Phoenix web credential
    // *   **puttygen_private_key**: PuTTYgen private key
    // *   **google_oauth_token**: Google OAuth access token
    // *   **rubyonrails_cfg**: Ruby On Rails database configuration
    // *   **lob_api_key**: Lob API key for Lob
    // *   **pkcs_cred**: PKCS#12 certificate
    // *   **otr_private_key**: Off-the-Record Messaging (OTR) private key
    // *   **contentful_delivery_token**: Contentful delivery token
    // *   **digital_ocean_tugboat**: DigitalOcean Tugboat configuration
    // *   **dsa_private_key**: Digital Signature Algorithm (DSA) private key
    // *   **rails_app_token**: app token for Rails
    // *   **git_cred**: Git user credential
    // *   **newrelic_api_key**: User API key for New Relic
    // *   **github_hub**: hub configuration for storing GitHub tokens
    // *   **rubygem**: Rubygem Token
    std::shared_ptr<string> sensitiveFileKey_ = nullptr;
    // The name of the alert type for the sensitive file.
    std::shared_ptr<string> sensitiveFileName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
