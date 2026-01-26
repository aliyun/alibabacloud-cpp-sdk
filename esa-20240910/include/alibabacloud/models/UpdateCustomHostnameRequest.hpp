// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECUSTOMHOSTNAMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECUSTOMHOSTNAMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UpdateCustomHostnameRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCustomHostnameRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CasId, casId_);
      DARABONBA_PTR_TO_JSON(CasRegion, casRegion_);
      DARABONBA_PTR_TO_JSON(CertType, certType_);
      DARABONBA_PTR_TO_JSON(Certificate, certificate_);
      DARABONBA_PTR_TO_JSON(HostnameId, hostnameId_);
      DARABONBA_PTR_TO_JSON(PrivateKey, privateKey_);
      DARABONBA_PTR_TO_JSON(RecordId, recordId_);
      DARABONBA_PTR_TO_JSON(SslFlag, sslFlag_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCustomHostnameRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CasId, casId_);
      DARABONBA_PTR_FROM_JSON(CasRegion, casRegion_);
      DARABONBA_PTR_FROM_JSON(CertType, certType_);
      DARABONBA_PTR_FROM_JSON(Certificate, certificate_);
      DARABONBA_PTR_FROM_JSON(HostnameId, hostnameId_);
      DARABONBA_PTR_FROM_JSON(PrivateKey, privateKey_);
      DARABONBA_PTR_FROM_JSON(RecordId, recordId_);
      DARABONBA_PTR_FROM_JSON(SslFlag, sslFlag_);
    };
    UpdateCustomHostnameRequest() = default ;
    UpdateCustomHostnameRequest(const UpdateCustomHostnameRequest &) = default ;
    UpdateCustomHostnameRequest(UpdateCustomHostnameRequest &&) = default ;
    UpdateCustomHostnameRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCustomHostnameRequest() = default ;
    UpdateCustomHostnameRequest& operator=(const UpdateCustomHostnameRequest &) = default ;
    UpdateCustomHostnameRequest& operator=(UpdateCustomHostnameRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->casId_ == nullptr
        && this->casRegion_ == nullptr && this->certType_ == nullptr && this->certificate_ == nullptr && this->hostnameId_ == nullptr && this->privateKey_ == nullptr
        && this->recordId_ == nullptr && this->sslFlag_ == nullptr; };
    // casId Field Functions 
    bool hasCasId() const { return this->casId_ != nullptr;};
    void deleteCasId() { this->casId_ = nullptr;};
    inline int64_t getCasId() const { DARABONBA_PTR_GET_DEFAULT(casId_, 0L) };
    inline UpdateCustomHostnameRequest& setCasId(int64_t casId) { DARABONBA_PTR_SET_VALUE(casId_, casId) };


    // casRegion Field Functions 
    bool hasCasRegion() const { return this->casRegion_ != nullptr;};
    void deleteCasRegion() { this->casRegion_ = nullptr;};
    inline string getCasRegion() const { DARABONBA_PTR_GET_DEFAULT(casRegion_, "") };
    inline UpdateCustomHostnameRequest& setCasRegion(string casRegion) { DARABONBA_PTR_SET_VALUE(casRegion_, casRegion) };


    // certType Field Functions 
    bool hasCertType() const { return this->certType_ != nullptr;};
    void deleteCertType() { this->certType_ = nullptr;};
    inline string getCertType() const { DARABONBA_PTR_GET_DEFAULT(certType_, "") };
    inline UpdateCustomHostnameRequest& setCertType(string certType) { DARABONBA_PTR_SET_VALUE(certType_, certType) };


    // certificate Field Functions 
    bool hasCertificate() const { return this->certificate_ != nullptr;};
    void deleteCertificate() { this->certificate_ = nullptr;};
    inline string getCertificate() const { DARABONBA_PTR_GET_DEFAULT(certificate_, "") };
    inline UpdateCustomHostnameRequest& setCertificate(string certificate) { DARABONBA_PTR_SET_VALUE(certificate_, certificate) };


    // hostnameId Field Functions 
    bool hasHostnameId() const { return this->hostnameId_ != nullptr;};
    void deleteHostnameId() { this->hostnameId_ = nullptr;};
    inline int64_t getHostnameId() const { DARABONBA_PTR_GET_DEFAULT(hostnameId_, 0L) };
    inline UpdateCustomHostnameRequest& setHostnameId(int64_t hostnameId) { DARABONBA_PTR_SET_VALUE(hostnameId_, hostnameId) };


    // privateKey Field Functions 
    bool hasPrivateKey() const { return this->privateKey_ != nullptr;};
    void deletePrivateKey() { this->privateKey_ = nullptr;};
    inline string getPrivateKey() const { DARABONBA_PTR_GET_DEFAULT(privateKey_, "") };
    inline UpdateCustomHostnameRequest& setPrivateKey(string privateKey) { DARABONBA_PTR_SET_VALUE(privateKey_, privateKey) };


    // recordId Field Functions 
    bool hasRecordId() const { return this->recordId_ != nullptr;};
    void deleteRecordId() { this->recordId_ = nullptr;};
    inline int64_t getRecordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, 0L) };
    inline UpdateCustomHostnameRequest& setRecordId(int64_t recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


    // sslFlag Field Functions 
    bool hasSslFlag() const { return this->sslFlag_ != nullptr;};
    void deleteSslFlag() { this->sslFlag_ = nullptr;};
    inline string getSslFlag() const { DARABONBA_PTR_GET_DEFAULT(sslFlag_, "") };
    inline UpdateCustomHostnameRequest& setSslFlag(string sslFlag) { DARABONBA_PTR_SET_VALUE(sslFlag_, sslFlag) };


  protected:
    // 云盾证书ID，使用云盾证书时必填
    shared_ptr<int64_t> casId_ {};
    // 云盾证书所在地域，使用云盾证书时必填
    shared_ptr<string> casRegion_ {};
    // 证书类型，SSL 开启时必填
    shared_ptr<string> certType_ {};
    // 证书公钥，使用上传证书时必填
    shared_ptr<string> certificate_ {};
    // This parameter is required.
    shared_ptr<int64_t> hostnameId_ {};
    // 证书私钥，使用上传证书时必填
    shared_ptr<string> privateKey_ {};
    // 绑定的源站记录ID
    shared_ptr<int64_t> recordId_ {};
    // SSL开关
    shared_ptr<string> sslFlag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
