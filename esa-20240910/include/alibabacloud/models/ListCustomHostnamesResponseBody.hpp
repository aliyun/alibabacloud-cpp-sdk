// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMHOSTNAMESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMHOSTNAMESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListCustomHostnamesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomHostnamesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Hostnames, hostnames_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomHostnamesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Hostnames, hostnames_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListCustomHostnamesResponseBody() = default ;
    ListCustomHostnamesResponseBody(const ListCustomHostnamesResponseBody &) = default ;
    ListCustomHostnamesResponseBody(ListCustomHostnamesResponseBody &&) = default ;
    ListCustomHostnamesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomHostnamesResponseBody() = default ;
    ListCustomHostnamesResponseBody& operator=(const ListCustomHostnamesResponseBody &) = default ;
    ListCustomHostnamesResponseBody& operator=(ListCustomHostnamesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Hostnames : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Hostnames& obj) { 
        DARABONBA_PTR_TO_JSON(CertApplyCode, certApplyCode_);
        DARABONBA_PTR_TO_JSON(CertApplyMessage, certApplyMessage_);
        DARABONBA_PTR_TO_JSON(CertHttpKey, certHttpKey_);
        DARABONBA_PTR_TO_JSON(CertHttpValue, certHttpValue_);
        DARABONBA_PTR_TO_JSON(CertNotAfter, certNotAfter_);
        DARABONBA_PTR_TO_JSON(CertStatus, certStatus_);
        DARABONBA_PTR_TO_JSON(CertTxtKey, certTxtKey_);
        DARABONBA_PTR_TO_JSON(CertTxtValue, certTxtValue_);
        DARABONBA_PTR_TO_JSON(CertType, certType_);
        DARABONBA_PTR_TO_JSON(ConflictWith, conflictWith_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Hostname, hostname_);
        DARABONBA_PTR_TO_JSON(HostnameId, hostnameId_);
        DARABONBA_PTR_TO_JSON(OfflineReason, offlineReason_);
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
      friend void from_json(const Darabonba::Json& j, Hostnames& obj) { 
        DARABONBA_PTR_FROM_JSON(CertApplyCode, certApplyCode_);
        DARABONBA_PTR_FROM_JSON(CertApplyMessage, certApplyMessage_);
        DARABONBA_PTR_FROM_JSON(CertHttpKey, certHttpKey_);
        DARABONBA_PTR_FROM_JSON(CertHttpValue, certHttpValue_);
        DARABONBA_PTR_FROM_JSON(CertNotAfter, certNotAfter_);
        DARABONBA_PTR_FROM_JSON(CertStatus, certStatus_);
        DARABONBA_PTR_FROM_JSON(CertTxtKey, certTxtKey_);
        DARABONBA_PTR_FROM_JSON(CertTxtValue, certTxtValue_);
        DARABONBA_PTR_FROM_JSON(CertType, certType_);
        DARABONBA_PTR_FROM_JSON(ConflictWith, conflictWith_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Hostname, hostname_);
        DARABONBA_PTR_FROM_JSON(HostnameId, hostnameId_);
        DARABONBA_PTR_FROM_JSON(OfflineReason, offlineReason_);
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
      Hostnames() = default ;
      Hostnames(const Hostnames &) = default ;
      Hostnames(Hostnames &&) = default ;
      Hostnames(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Hostnames() = default ;
      Hostnames& operator=(const Hostnames &) = default ;
      Hostnames& operator=(Hostnames &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->certApplyCode_ == nullptr
        && this->certApplyMessage_ == nullptr && this->certHttpKey_ == nullptr && this->certHttpValue_ == nullptr && this->certNotAfter_ == nullptr && this->certStatus_ == nullptr
        && this->certTxtKey_ == nullptr && this->certTxtValue_ == nullptr && this->certType_ == nullptr && this->conflictWith_ == nullptr && this->createTime_ == nullptr
        && this->hostname_ == nullptr && this->hostnameId_ == nullptr && this->offlineReason_ == nullptr && this->recordId_ == nullptr && this->recordName_ == nullptr
        && this->siteId_ == nullptr && this->siteName_ == nullptr && this->sslFlag_ == nullptr && this->status_ == nullptr && this->updateTime_ == nullptr
        && this->verifyCode_ == nullptr && this->verifyHost_ == nullptr; };
      // certApplyCode Field Functions 
      bool hasCertApplyCode() const { return this->certApplyCode_ != nullptr;};
      void deleteCertApplyCode() { this->certApplyCode_ = nullptr;};
      inline int64_t getCertApplyCode() const { DARABONBA_PTR_GET_DEFAULT(certApplyCode_, 0L) };
      inline Hostnames& setCertApplyCode(int64_t certApplyCode) { DARABONBA_PTR_SET_VALUE(certApplyCode_, certApplyCode) };


      // certApplyMessage Field Functions 
      bool hasCertApplyMessage() const { return this->certApplyMessage_ != nullptr;};
      void deleteCertApplyMessage() { this->certApplyMessage_ = nullptr;};
      inline string getCertApplyMessage() const { DARABONBA_PTR_GET_DEFAULT(certApplyMessage_, "") };
      inline Hostnames& setCertApplyMessage(string certApplyMessage) { DARABONBA_PTR_SET_VALUE(certApplyMessage_, certApplyMessage) };


      // certHttpKey Field Functions 
      bool hasCertHttpKey() const { return this->certHttpKey_ != nullptr;};
      void deleteCertHttpKey() { this->certHttpKey_ = nullptr;};
      inline string getCertHttpKey() const { DARABONBA_PTR_GET_DEFAULT(certHttpKey_, "") };
      inline Hostnames& setCertHttpKey(string certHttpKey) { DARABONBA_PTR_SET_VALUE(certHttpKey_, certHttpKey) };


      // certHttpValue Field Functions 
      bool hasCertHttpValue() const { return this->certHttpValue_ != nullptr;};
      void deleteCertHttpValue() { this->certHttpValue_ = nullptr;};
      inline string getCertHttpValue() const { DARABONBA_PTR_GET_DEFAULT(certHttpValue_, "") };
      inline Hostnames& setCertHttpValue(string certHttpValue) { DARABONBA_PTR_SET_VALUE(certHttpValue_, certHttpValue) };


      // certNotAfter Field Functions 
      bool hasCertNotAfter() const { return this->certNotAfter_ != nullptr;};
      void deleteCertNotAfter() { this->certNotAfter_ = nullptr;};
      inline string getCertNotAfter() const { DARABONBA_PTR_GET_DEFAULT(certNotAfter_, "") };
      inline Hostnames& setCertNotAfter(string certNotAfter) { DARABONBA_PTR_SET_VALUE(certNotAfter_, certNotAfter) };


      // certStatus Field Functions 
      bool hasCertStatus() const { return this->certStatus_ != nullptr;};
      void deleteCertStatus() { this->certStatus_ = nullptr;};
      inline string getCertStatus() const { DARABONBA_PTR_GET_DEFAULT(certStatus_, "") };
      inline Hostnames& setCertStatus(string certStatus) { DARABONBA_PTR_SET_VALUE(certStatus_, certStatus) };


      // certTxtKey Field Functions 
      bool hasCertTxtKey() const { return this->certTxtKey_ != nullptr;};
      void deleteCertTxtKey() { this->certTxtKey_ = nullptr;};
      inline string getCertTxtKey() const { DARABONBA_PTR_GET_DEFAULT(certTxtKey_, "") };
      inline Hostnames& setCertTxtKey(string certTxtKey) { DARABONBA_PTR_SET_VALUE(certTxtKey_, certTxtKey) };


      // certTxtValue Field Functions 
      bool hasCertTxtValue() const { return this->certTxtValue_ != nullptr;};
      void deleteCertTxtValue() { this->certTxtValue_ = nullptr;};
      inline string getCertTxtValue() const { DARABONBA_PTR_GET_DEFAULT(certTxtValue_, "") };
      inline Hostnames& setCertTxtValue(string certTxtValue) { DARABONBA_PTR_SET_VALUE(certTxtValue_, certTxtValue) };


      // certType Field Functions 
      bool hasCertType() const { return this->certType_ != nullptr;};
      void deleteCertType() { this->certType_ = nullptr;};
      inline string getCertType() const { DARABONBA_PTR_GET_DEFAULT(certType_, "") };
      inline Hostnames& setCertType(string certType) { DARABONBA_PTR_SET_VALUE(certType_, certType) };


      // conflictWith Field Functions 
      bool hasConflictWith() const { return this->conflictWith_ != nullptr;};
      void deleteConflictWith() { this->conflictWith_ = nullptr;};
      inline string getConflictWith() const { DARABONBA_PTR_GET_DEFAULT(conflictWith_, "") };
      inline Hostnames& setConflictWith(string conflictWith) { DARABONBA_PTR_SET_VALUE(conflictWith_, conflictWith) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Hostnames& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // hostname Field Functions 
      bool hasHostname() const { return this->hostname_ != nullptr;};
      void deleteHostname() { this->hostname_ = nullptr;};
      inline string getHostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
      inline Hostnames& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


      // hostnameId Field Functions 
      bool hasHostnameId() const { return this->hostnameId_ != nullptr;};
      void deleteHostnameId() { this->hostnameId_ = nullptr;};
      inline int64_t getHostnameId() const { DARABONBA_PTR_GET_DEFAULT(hostnameId_, 0L) };
      inline Hostnames& setHostnameId(int64_t hostnameId) { DARABONBA_PTR_SET_VALUE(hostnameId_, hostnameId) };


      // offlineReason Field Functions 
      bool hasOfflineReason() const { return this->offlineReason_ != nullptr;};
      void deleteOfflineReason() { this->offlineReason_ = nullptr;};
      inline string getOfflineReason() const { DARABONBA_PTR_GET_DEFAULT(offlineReason_, "") };
      inline Hostnames& setOfflineReason(string offlineReason) { DARABONBA_PTR_SET_VALUE(offlineReason_, offlineReason) };


      // recordId Field Functions 
      bool hasRecordId() const { return this->recordId_ != nullptr;};
      void deleteRecordId() { this->recordId_ = nullptr;};
      inline int64_t getRecordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, 0L) };
      inline Hostnames& setRecordId(int64_t recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


      // recordName Field Functions 
      bool hasRecordName() const { return this->recordName_ != nullptr;};
      void deleteRecordName() { this->recordName_ = nullptr;};
      inline string getRecordName() const { DARABONBA_PTR_GET_DEFAULT(recordName_, "") };
      inline Hostnames& setRecordName(string recordName) { DARABONBA_PTR_SET_VALUE(recordName_, recordName) };


      // siteId Field Functions 
      bool hasSiteId() const { return this->siteId_ != nullptr;};
      void deleteSiteId() { this->siteId_ = nullptr;};
      inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
      inline Hostnames& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


      // siteName Field Functions 
      bool hasSiteName() const { return this->siteName_ != nullptr;};
      void deleteSiteName() { this->siteName_ = nullptr;};
      inline string getSiteName() const { DARABONBA_PTR_GET_DEFAULT(siteName_, "") };
      inline Hostnames& setSiteName(string siteName) { DARABONBA_PTR_SET_VALUE(siteName_, siteName) };


      // sslFlag Field Functions 
      bool hasSslFlag() const { return this->sslFlag_ != nullptr;};
      void deleteSslFlag() { this->sslFlag_ = nullptr;};
      inline string getSslFlag() const { DARABONBA_PTR_GET_DEFAULT(sslFlag_, "") };
      inline Hostnames& setSslFlag(string sslFlag) { DARABONBA_PTR_SET_VALUE(sslFlag_, sslFlag) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Hostnames& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Hostnames& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // verifyCode Field Functions 
      bool hasVerifyCode() const { return this->verifyCode_ != nullptr;};
      void deleteVerifyCode() { this->verifyCode_ = nullptr;};
      inline string getVerifyCode() const { DARABONBA_PTR_GET_DEFAULT(verifyCode_, "") };
      inline Hostnames& setVerifyCode(string verifyCode) { DARABONBA_PTR_SET_VALUE(verifyCode_, verifyCode) };


      // verifyHost Field Functions 
      bool hasVerifyHost() const { return this->verifyHost_ != nullptr;};
      void deleteVerifyHost() { this->verifyHost_ = nullptr;};
      inline string getVerifyHost() const { DARABONBA_PTR_GET_DEFAULT(verifyHost_, "") };
      inline Hostnames& setVerifyHost(string verifyHost) { DARABONBA_PTR_SET_VALUE(verifyHost_, verifyHost) };


    protected:
      // 免费证书申请错误码
      shared_ptr<int64_t> certApplyCode_ {};
      // 免费证书申请错误说明
      shared_ptr<string> certApplyMessage_ {};
      // 证书校验HTTP名称
      shared_ptr<string> certHttpKey_ {};
      // 证书校验HTTP内容
      shared_ptr<string> certHttpValue_ {};
      // 证书过期时间
      shared_ptr<string> certNotAfter_ {};
      shared_ptr<string> certStatus_ {};
      // 证书校验TXT名称
      shared_ptr<string> certTxtKey_ {};
      // 证书校验TXT内容
      shared_ptr<string> certTxtValue_ {};
      // 证书类型
      shared_ptr<string> certType_ {};
      shared_ptr<string> conflictWith_ {};
      // 创建时间
      shared_ptr<string> createTime_ {};
      // 用户自定义的主机名
      shared_ptr<string> hostname_ {};
      shared_ptr<int64_t> hostnameId_ {};
      shared_ptr<string> offlineReason_ {};
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

    virtual bool empty() const override { return this->hostnames_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // hostnames Field Functions 
    bool hasHostnames() const { return this->hostnames_ != nullptr;};
    void deleteHostnames() { this->hostnames_ = nullptr;};
    inline const vector<ListCustomHostnamesResponseBody::Hostnames> & getHostnames() const { DARABONBA_PTR_GET_CONST(hostnames_, vector<ListCustomHostnamesResponseBody::Hostnames>) };
    inline vector<ListCustomHostnamesResponseBody::Hostnames> getHostnames() { DARABONBA_PTR_GET(hostnames_, vector<ListCustomHostnamesResponseBody::Hostnames>) };
    inline ListCustomHostnamesResponseBody& setHostnames(const vector<ListCustomHostnamesResponseBody::Hostnames> & hostnames) { DARABONBA_PTR_SET_VALUE(hostnames_, hostnames) };
    inline ListCustomHostnamesResponseBody& setHostnames(vector<ListCustomHostnamesResponseBody::Hostnames> && hostnames) { DARABONBA_PTR_SET_RVALUE(hostnames_, hostnames) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListCustomHostnamesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCustomHostnamesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCustomHostnamesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListCustomHostnamesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListCustomHostnamesResponseBody::Hostnames>> hostnames_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
