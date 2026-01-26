// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCUSTOMHOSTNAMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCUSTOMHOSTNAMERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetCustomHostnameResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCustomHostnameResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CustomHostnameModel, customHostnameModel_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCustomHostnameResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomHostnameModel, customHostnameModel_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetCustomHostnameResponseBody() = default ;
    GetCustomHostnameResponseBody(const GetCustomHostnameResponseBody &) = default ;
    GetCustomHostnameResponseBody(GetCustomHostnameResponseBody &&) = default ;
    GetCustomHostnameResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCustomHostnameResponseBody() = default ;
    GetCustomHostnameResponseBody& operator=(const GetCustomHostnameResponseBody &) = default ;
    GetCustomHostnameResponseBody& operator=(GetCustomHostnameResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CustomHostnameModel : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CustomHostnameModel& obj) { 
        DARABONBA_PTR_TO_JSON(CasId, casId_);
        DARABONBA_PTR_TO_JSON(CertApplyCode, certApplyCode_);
        DARABONBA_PTR_TO_JSON(CertApplyMessage, certApplyMessage_);
        DARABONBA_PTR_TO_JSON(CertHttpKey, certHttpKey_);
        DARABONBA_PTR_TO_JSON(CertHttpValue, certHttpValue_);
        DARABONBA_PTR_TO_JSON(CertId, certId_);
        DARABONBA_PTR_TO_JSON(CertNotAfter, certNotAfter_);
        DARABONBA_PTR_TO_JSON(CertStatus, certStatus_);
        DARABONBA_PTR_TO_JSON(CertTxtKey, certTxtKey_);
        DARABONBA_PTR_TO_JSON(CertTxtValue, certTxtValue_);
        DARABONBA_PTR_TO_JSON(CertType, certType_);
        DARABONBA_PTR_TO_JSON(Certificate, certificate_);
        DARABONBA_PTR_TO_JSON(ConflictWith, conflictWith_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Hostname, hostname_);
        DARABONBA_PTR_TO_JSON(HostnameId, hostnameId_);
        DARABONBA_PTR_TO_JSON(OfflineReason, offlineReason_);
        DARABONBA_PTR_TO_JSON(PrivateKey, privateKey_);
        DARABONBA_PTR_TO_JSON(RecordId, recordId_);
        DARABONBA_PTR_TO_JSON(RecordName, recordName_);
        DARABONBA_PTR_TO_JSON(SiteId, siteId_);
        DARABONBA_PTR_TO_JSON(SiteName, siteName_);
        DARABONBA_PTR_TO_JSON(SslFlag, sslFlag_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(VerifyCode, verifyCode_);
        DARABONBA_PTR_TO_JSON(VerifyHost, verifyHost_);
      };
      friend void from_json(const Darabonba::Json& j, CustomHostnameModel& obj) { 
        DARABONBA_PTR_FROM_JSON(CasId, casId_);
        DARABONBA_PTR_FROM_JSON(CertApplyCode, certApplyCode_);
        DARABONBA_PTR_FROM_JSON(CertApplyMessage, certApplyMessage_);
        DARABONBA_PTR_FROM_JSON(CertHttpKey, certHttpKey_);
        DARABONBA_PTR_FROM_JSON(CertHttpValue, certHttpValue_);
        DARABONBA_PTR_FROM_JSON(CertId, certId_);
        DARABONBA_PTR_FROM_JSON(CertNotAfter, certNotAfter_);
        DARABONBA_PTR_FROM_JSON(CertStatus, certStatus_);
        DARABONBA_PTR_FROM_JSON(CertTxtKey, certTxtKey_);
        DARABONBA_PTR_FROM_JSON(CertTxtValue, certTxtValue_);
        DARABONBA_PTR_FROM_JSON(CertType, certType_);
        DARABONBA_PTR_FROM_JSON(Certificate, certificate_);
        DARABONBA_PTR_FROM_JSON(ConflictWith, conflictWith_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Hostname, hostname_);
        DARABONBA_PTR_FROM_JSON(HostnameId, hostnameId_);
        DARABONBA_PTR_FROM_JSON(OfflineReason, offlineReason_);
        DARABONBA_PTR_FROM_JSON(PrivateKey, privateKey_);
        DARABONBA_PTR_FROM_JSON(RecordId, recordId_);
        DARABONBA_PTR_FROM_JSON(RecordName, recordName_);
        DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
        DARABONBA_PTR_FROM_JSON(SiteName, siteName_);
        DARABONBA_PTR_FROM_JSON(SslFlag, sslFlag_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(VerifyCode, verifyCode_);
        DARABONBA_PTR_FROM_JSON(VerifyHost, verifyHost_);
      };
      CustomHostnameModel() = default ;
      CustomHostnameModel(const CustomHostnameModel &) = default ;
      CustomHostnameModel(CustomHostnameModel &&) = default ;
      CustomHostnameModel(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CustomHostnameModel() = default ;
      CustomHostnameModel& operator=(const CustomHostnameModel &) = default ;
      CustomHostnameModel& operator=(CustomHostnameModel &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->casId_ == nullptr
        && this->certApplyCode_ == nullptr && this->certApplyMessage_ == nullptr && this->certHttpKey_ == nullptr && this->certHttpValue_ == nullptr && this->certId_ == nullptr
        && this->certNotAfter_ == nullptr && this->certStatus_ == nullptr && this->certTxtKey_ == nullptr && this->certTxtValue_ == nullptr && this->certType_ == nullptr
        && this->certificate_ == nullptr && this->conflictWith_ == nullptr && this->createTime_ == nullptr && this->hostname_ == nullptr && this->hostnameId_ == nullptr
        && this->offlineReason_ == nullptr && this->privateKey_ == nullptr && this->recordId_ == nullptr && this->recordName_ == nullptr && this->siteId_ == nullptr
        && this->siteName_ == nullptr && this->sslFlag_ == nullptr && this->status_ == nullptr && this->updateTime_ == nullptr && this->verifyCode_ == nullptr
        && this->verifyHost_ == nullptr; };
      // casId Field Functions 
      bool hasCasId() const { return this->casId_ != nullptr;};
      void deleteCasId() { this->casId_ = nullptr;};
      inline int64_t getCasId() const { DARABONBA_PTR_GET_DEFAULT(casId_, 0L) };
      inline CustomHostnameModel& setCasId(int64_t casId) { DARABONBA_PTR_SET_VALUE(casId_, casId) };


      // certApplyCode Field Functions 
      bool hasCertApplyCode() const { return this->certApplyCode_ != nullptr;};
      void deleteCertApplyCode() { this->certApplyCode_ = nullptr;};
      inline int64_t getCertApplyCode() const { DARABONBA_PTR_GET_DEFAULT(certApplyCode_, 0L) };
      inline CustomHostnameModel& setCertApplyCode(int64_t certApplyCode) { DARABONBA_PTR_SET_VALUE(certApplyCode_, certApplyCode) };


      // certApplyMessage Field Functions 
      bool hasCertApplyMessage() const { return this->certApplyMessage_ != nullptr;};
      void deleteCertApplyMessage() { this->certApplyMessage_ = nullptr;};
      inline string getCertApplyMessage() const { DARABONBA_PTR_GET_DEFAULT(certApplyMessage_, "") };
      inline CustomHostnameModel& setCertApplyMessage(string certApplyMessage) { DARABONBA_PTR_SET_VALUE(certApplyMessage_, certApplyMessage) };


      // certHttpKey Field Functions 
      bool hasCertHttpKey() const { return this->certHttpKey_ != nullptr;};
      void deleteCertHttpKey() { this->certHttpKey_ = nullptr;};
      inline string getCertHttpKey() const { DARABONBA_PTR_GET_DEFAULT(certHttpKey_, "") };
      inline CustomHostnameModel& setCertHttpKey(string certHttpKey) { DARABONBA_PTR_SET_VALUE(certHttpKey_, certHttpKey) };


      // certHttpValue Field Functions 
      bool hasCertHttpValue() const { return this->certHttpValue_ != nullptr;};
      void deleteCertHttpValue() { this->certHttpValue_ = nullptr;};
      inline string getCertHttpValue() const { DARABONBA_PTR_GET_DEFAULT(certHttpValue_, "") };
      inline CustomHostnameModel& setCertHttpValue(string certHttpValue) { DARABONBA_PTR_SET_VALUE(certHttpValue_, certHttpValue) };


      // certId Field Functions 
      bool hasCertId() const { return this->certId_ != nullptr;};
      void deleteCertId() { this->certId_ = nullptr;};
      inline string getCertId() const { DARABONBA_PTR_GET_DEFAULT(certId_, "") };
      inline CustomHostnameModel& setCertId(string certId) { DARABONBA_PTR_SET_VALUE(certId_, certId) };


      // certNotAfter Field Functions 
      bool hasCertNotAfter() const { return this->certNotAfter_ != nullptr;};
      void deleteCertNotAfter() { this->certNotAfter_ = nullptr;};
      inline string getCertNotAfter() const { DARABONBA_PTR_GET_DEFAULT(certNotAfter_, "") };
      inline CustomHostnameModel& setCertNotAfter(string certNotAfter) { DARABONBA_PTR_SET_VALUE(certNotAfter_, certNotAfter) };


      // certStatus Field Functions 
      bool hasCertStatus() const { return this->certStatus_ != nullptr;};
      void deleteCertStatus() { this->certStatus_ = nullptr;};
      inline string getCertStatus() const { DARABONBA_PTR_GET_DEFAULT(certStatus_, "") };
      inline CustomHostnameModel& setCertStatus(string certStatus) { DARABONBA_PTR_SET_VALUE(certStatus_, certStatus) };


      // certTxtKey Field Functions 
      bool hasCertTxtKey() const { return this->certTxtKey_ != nullptr;};
      void deleteCertTxtKey() { this->certTxtKey_ = nullptr;};
      inline string getCertTxtKey() const { DARABONBA_PTR_GET_DEFAULT(certTxtKey_, "") };
      inline CustomHostnameModel& setCertTxtKey(string certTxtKey) { DARABONBA_PTR_SET_VALUE(certTxtKey_, certTxtKey) };


      // certTxtValue Field Functions 
      bool hasCertTxtValue() const { return this->certTxtValue_ != nullptr;};
      void deleteCertTxtValue() { this->certTxtValue_ = nullptr;};
      inline string getCertTxtValue() const { DARABONBA_PTR_GET_DEFAULT(certTxtValue_, "") };
      inline CustomHostnameModel& setCertTxtValue(string certTxtValue) { DARABONBA_PTR_SET_VALUE(certTxtValue_, certTxtValue) };


      // certType Field Functions 
      bool hasCertType() const { return this->certType_ != nullptr;};
      void deleteCertType() { this->certType_ = nullptr;};
      inline string getCertType() const { DARABONBA_PTR_GET_DEFAULT(certType_, "") };
      inline CustomHostnameModel& setCertType(string certType) { DARABONBA_PTR_SET_VALUE(certType_, certType) };


      // certificate Field Functions 
      bool hasCertificate() const { return this->certificate_ != nullptr;};
      void deleteCertificate() { this->certificate_ = nullptr;};
      inline string getCertificate() const { DARABONBA_PTR_GET_DEFAULT(certificate_, "") };
      inline CustomHostnameModel& setCertificate(string certificate) { DARABONBA_PTR_SET_VALUE(certificate_, certificate) };


      // conflictWith Field Functions 
      bool hasConflictWith() const { return this->conflictWith_ != nullptr;};
      void deleteConflictWith() { this->conflictWith_ = nullptr;};
      inline string getConflictWith() const { DARABONBA_PTR_GET_DEFAULT(conflictWith_, "") };
      inline CustomHostnameModel& setConflictWith(string conflictWith) { DARABONBA_PTR_SET_VALUE(conflictWith_, conflictWith) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline CustomHostnameModel& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // hostname Field Functions 
      bool hasHostname() const { return this->hostname_ != nullptr;};
      void deleteHostname() { this->hostname_ = nullptr;};
      inline string getHostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
      inline CustomHostnameModel& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


      // hostnameId Field Functions 
      bool hasHostnameId() const { return this->hostnameId_ != nullptr;};
      void deleteHostnameId() { this->hostnameId_ = nullptr;};
      inline int64_t getHostnameId() const { DARABONBA_PTR_GET_DEFAULT(hostnameId_, 0L) };
      inline CustomHostnameModel& setHostnameId(int64_t hostnameId) { DARABONBA_PTR_SET_VALUE(hostnameId_, hostnameId) };


      // offlineReason Field Functions 
      bool hasOfflineReason() const { return this->offlineReason_ != nullptr;};
      void deleteOfflineReason() { this->offlineReason_ = nullptr;};
      inline string getOfflineReason() const { DARABONBA_PTR_GET_DEFAULT(offlineReason_, "") };
      inline CustomHostnameModel& setOfflineReason(string offlineReason) { DARABONBA_PTR_SET_VALUE(offlineReason_, offlineReason) };


      // privateKey Field Functions 
      bool hasPrivateKey() const { return this->privateKey_ != nullptr;};
      void deletePrivateKey() { this->privateKey_ = nullptr;};
      inline string getPrivateKey() const { DARABONBA_PTR_GET_DEFAULT(privateKey_, "") };
      inline CustomHostnameModel& setPrivateKey(string privateKey) { DARABONBA_PTR_SET_VALUE(privateKey_, privateKey) };


      // recordId Field Functions 
      bool hasRecordId() const { return this->recordId_ != nullptr;};
      void deleteRecordId() { this->recordId_ = nullptr;};
      inline int64_t getRecordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, 0L) };
      inline CustomHostnameModel& setRecordId(int64_t recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


      // recordName Field Functions 
      bool hasRecordName() const { return this->recordName_ != nullptr;};
      void deleteRecordName() { this->recordName_ = nullptr;};
      inline string getRecordName() const { DARABONBA_PTR_GET_DEFAULT(recordName_, "") };
      inline CustomHostnameModel& setRecordName(string recordName) { DARABONBA_PTR_SET_VALUE(recordName_, recordName) };


      // siteId Field Functions 
      bool hasSiteId() const { return this->siteId_ != nullptr;};
      void deleteSiteId() { this->siteId_ = nullptr;};
      inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
      inline CustomHostnameModel& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


      // siteName Field Functions 
      bool hasSiteName() const { return this->siteName_ != nullptr;};
      void deleteSiteName() { this->siteName_ = nullptr;};
      inline string getSiteName() const { DARABONBA_PTR_GET_DEFAULT(siteName_, "") };
      inline CustomHostnameModel& setSiteName(string siteName) { DARABONBA_PTR_SET_VALUE(siteName_, siteName) };


      // sslFlag Field Functions 
      bool hasSslFlag() const { return this->sslFlag_ != nullptr;};
      void deleteSslFlag() { this->sslFlag_ = nullptr;};
      inline string getSslFlag() const { DARABONBA_PTR_GET_DEFAULT(sslFlag_, "") };
      inline CustomHostnameModel& setSslFlag(string sslFlag) { DARABONBA_PTR_SET_VALUE(sslFlag_, sslFlag) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline CustomHostnameModel& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline CustomHostnameModel& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // verifyCode Field Functions 
      bool hasVerifyCode() const { return this->verifyCode_ != nullptr;};
      void deleteVerifyCode() { this->verifyCode_ = nullptr;};
      inline string getVerifyCode() const { DARABONBA_PTR_GET_DEFAULT(verifyCode_, "") };
      inline CustomHostnameModel& setVerifyCode(string verifyCode) { DARABONBA_PTR_SET_VALUE(verifyCode_, verifyCode) };


      // verifyHost Field Functions 
      bool hasVerifyHost() const { return this->verifyHost_ != nullptr;};
      void deleteVerifyHost() { this->verifyHost_ = nullptr;};
      inline string getVerifyHost() const { DARABONBA_PTR_GET_DEFAULT(verifyHost_, "") };
      inline CustomHostnameModel& setVerifyHost(string verifyHost) { DARABONBA_PTR_SET_VALUE(verifyHost_, verifyHost) };


    protected:
      shared_ptr<int64_t> casId_ {};
      // 免费证书申请错误码
      shared_ptr<int64_t> certApplyCode_ {};
      // 免费证书申请错误说明
      shared_ptr<string> certApplyMessage_ {};
      // 证书校验HTTP名称
      shared_ptr<string> certHttpKey_ {};
      // 证书校验HTTP内容
      shared_ptr<string> certHttpValue_ {};
      shared_ptr<string> certId_ {};
      // 证书过期时间
      shared_ptr<string> certNotAfter_ {};
      // 证书状态
      shared_ptr<string> certStatus_ {};
      // 证书校验TXT名称
      shared_ptr<string> certTxtKey_ {};
      // 证书校验TXT内容
      shared_ptr<string> certTxtValue_ {};
      // 证书类型
      shared_ptr<string> certType_ {};
      // 上传的证书公钥
      shared_ptr<string> certificate_ {};
      shared_ptr<string> conflictWith_ {};
      // 创建时间
      shared_ptr<string> createTime_ {};
      // 用户自定义的主机名
      shared_ptr<string> hostname_ {};
      shared_ptr<int64_t> hostnameId_ {};
      shared_ptr<string> offlineReason_ {};
      shared_ptr<string> privateKey_ {};
      // 绑定的源站记录ID
      shared_ptr<int64_t> recordId_ {};
      // 绑定的源站记录名
      shared_ptr<string> recordName_ {};
      // 与主机名关联的站点ID
      shared_ptr<int64_t> siteId_ {};
      // 关联站点名称
      shared_ptr<string> siteName_ {};
      // SSL开关的状态
      shared_ptr<string> sslFlag_ {};
      // 自定义主机名状态
      shared_ptr<string> status_ {};
      // 更新时间
      shared_ptr<string> updateTime_ {};
      // 归属校验TXT内容
      shared_ptr<string> verifyCode_ {};
      // 归属校验TXT名称
      shared_ptr<string> verifyHost_ {};
    };

    virtual bool empty() const override { return this->customHostnameModel_ == nullptr
        && this->requestId_ == nullptr; };
    // customHostnameModel Field Functions 
    bool hasCustomHostnameModel() const { return this->customHostnameModel_ != nullptr;};
    void deleteCustomHostnameModel() { this->customHostnameModel_ = nullptr;};
    inline const GetCustomHostnameResponseBody::CustomHostnameModel & getCustomHostnameModel() const { DARABONBA_PTR_GET_CONST(customHostnameModel_, GetCustomHostnameResponseBody::CustomHostnameModel) };
    inline GetCustomHostnameResponseBody::CustomHostnameModel getCustomHostnameModel() { DARABONBA_PTR_GET(customHostnameModel_, GetCustomHostnameResponseBody::CustomHostnameModel) };
    inline GetCustomHostnameResponseBody& setCustomHostnameModel(const GetCustomHostnameResponseBody::CustomHostnameModel & customHostnameModel) { DARABONBA_PTR_SET_VALUE(customHostnameModel_, customHostnameModel) };
    inline GetCustomHostnameResponseBody& setCustomHostnameModel(GetCustomHostnameResponseBody::CustomHostnameModel && customHostnameModel) { DARABONBA_PTR_SET_RVALUE(customHostnameModel_, customHostnameModel) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCustomHostnameResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetCustomHostnameResponseBody::CustomHostnameModel> customHostnameModel_ {};
    // 本次请求的唯一标识
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
