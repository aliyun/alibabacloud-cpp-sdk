// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECUSTOMHOSTNAMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECUSTOMHOSTNAMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateCustomHostnameRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCustomHostnameRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CasId, casId_);
      DARABONBA_PTR_TO_JSON(CasRegion, casRegion_);
      DARABONBA_PTR_TO_JSON(CertType, certType_);
      DARABONBA_PTR_TO_JSON(Certificate, certificate_);
      DARABONBA_PTR_TO_JSON(Hostname, hostname_);
      DARABONBA_PTR_TO_JSON(PrivateKey, privateKey_);
      DARABONBA_PTR_TO_JSON(RecordId, recordId_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(SslFlag, sslFlag_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCustomHostnameRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CasId, casId_);
      DARABONBA_PTR_FROM_JSON(CasRegion, casRegion_);
      DARABONBA_PTR_FROM_JSON(CertType, certType_);
      DARABONBA_PTR_FROM_JSON(Certificate, certificate_);
      DARABONBA_PTR_FROM_JSON(Hostname, hostname_);
      DARABONBA_PTR_FROM_JSON(PrivateKey, privateKey_);
      DARABONBA_PTR_FROM_JSON(RecordId, recordId_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(SslFlag, sslFlag_);
    };
    CreateCustomHostnameRequest() = default ;
    CreateCustomHostnameRequest(const CreateCustomHostnameRequest &) = default ;
    CreateCustomHostnameRequest(CreateCustomHostnameRequest &&) = default ;
    CreateCustomHostnameRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCustomHostnameRequest() = default ;
    CreateCustomHostnameRequest& operator=(const CreateCustomHostnameRequest &) = default ;
    CreateCustomHostnameRequest& operator=(CreateCustomHostnameRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->casId_ == nullptr
        && this->casRegion_ == nullptr && this->certType_ == nullptr && this->certificate_ == nullptr && this->hostname_ == nullptr && this->privateKey_ == nullptr
        && this->recordId_ == nullptr && this->siteId_ == nullptr && this->sslFlag_ == nullptr; };
    // casId Field Functions 
    bool hasCasId() const { return this->casId_ != nullptr;};
    void deleteCasId() { this->casId_ = nullptr;};
    inline int64_t getCasId() const { DARABONBA_PTR_GET_DEFAULT(casId_, 0L) };
    inline CreateCustomHostnameRequest& setCasId(int64_t casId) { DARABONBA_PTR_SET_VALUE(casId_, casId) };


    // casRegion Field Functions 
    bool hasCasRegion() const { return this->casRegion_ != nullptr;};
    void deleteCasRegion() { this->casRegion_ = nullptr;};
    inline string getCasRegion() const { DARABONBA_PTR_GET_DEFAULT(casRegion_, "") };
    inline CreateCustomHostnameRequest& setCasRegion(string casRegion) { DARABONBA_PTR_SET_VALUE(casRegion_, casRegion) };


    // certType Field Functions 
    bool hasCertType() const { return this->certType_ != nullptr;};
    void deleteCertType() { this->certType_ = nullptr;};
    inline string getCertType() const { DARABONBA_PTR_GET_DEFAULT(certType_, "") };
    inline CreateCustomHostnameRequest& setCertType(string certType) { DARABONBA_PTR_SET_VALUE(certType_, certType) };


    // certificate Field Functions 
    bool hasCertificate() const { return this->certificate_ != nullptr;};
    void deleteCertificate() { this->certificate_ = nullptr;};
    inline string getCertificate() const { DARABONBA_PTR_GET_DEFAULT(certificate_, "") };
    inline CreateCustomHostnameRequest& setCertificate(string certificate) { DARABONBA_PTR_SET_VALUE(certificate_, certificate) };


    // hostname Field Functions 
    bool hasHostname() const { return this->hostname_ != nullptr;};
    void deleteHostname() { this->hostname_ = nullptr;};
    inline string getHostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
    inline CreateCustomHostnameRequest& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


    // privateKey Field Functions 
    bool hasPrivateKey() const { return this->privateKey_ != nullptr;};
    void deletePrivateKey() { this->privateKey_ = nullptr;};
    inline string getPrivateKey() const { DARABONBA_PTR_GET_DEFAULT(privateKey_, "") };
    inline CreateCustomHostnameRequest& setPrivateKey(string privateKey) { DARABONBA_PTR_SET_VALUE(privateKey_, privateKey) };


    // recordId Field Functions 
    bool hasRecordId() const { return this->recordId_ != nullptr;};
    void deleteRecordId() { this->recordId_ = nullptr;};
    inline int64_t getRecordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, 0L) };
    inline CreateCustomHostnameRequest& setRecordId(int64_t recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline CreateCustomHostnameRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // sslFlag Field Functions 
    bool hasSslFlag() const { return this->sslFlag_ != nullptr;};
    void deleteSslFlag() { this->sslFlag_ = nullptr;};
    inline string getSslFlag() const { DARABONBA_PTR_GET_DEFAULT(sslFlag_, "") };
    inline CreateCustomHostnameRequest& setSslFlag(string sslFlag) { DARABONBA_PTR_SET_VALUE(sslFlag_, sslFlag) };


  protected:
    // 云盾证书ID，使用云盾证书时必填
    shared_ptr<int64_t> casId_ {};
    // 云盾证书所在地域，使用云盾证书时必填
    shared_ptr<string> casRegion_ {};
    // 证书类型，SSL 开启时必填
    shared_ptr<string> certType_ {};
    // 证书公钥，使用上传证书时必填
    shared_ptr<string> certificate_ {};
    // 自定义主机名
    // 
    // This parameter is required.
    shared_ptr<string> hostname_ {};
    // 证书私钥，使用上传证书时必填
    shared_ptr<string> privateKey_ {};
    // 绑定的源站记录ID
    // 
    // This parameter is required.
    shared_ptr<int64_t> recordId_ {};
    // 关联站点ID
    // 
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
    // SSL开关
    // 
    // This parameter is required.
    shared_ptr<string> sslFlag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
