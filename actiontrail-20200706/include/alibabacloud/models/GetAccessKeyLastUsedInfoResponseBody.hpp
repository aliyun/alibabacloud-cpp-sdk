// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCESSKEYLASTUSEDINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETACCESSKEYLASTUSEDINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class GetAccessKeyLastUsedInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccessKeyLastUsedInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessKeyId, accessKeyId_);
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(AccountType, accountType_);
      DARABONBA_PTR_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(ServiceNameCn, serviceNameCn_);
      DARABONBA_PTR_TO_JSON(ServiceNameEn, serviceNameEn_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(UsedTimestamp, usedTimestamp_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccessKeyLastUsedInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessKeyId, accessKeyId_);
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(AccountType, accountType_);
      DARABONBA_PTR_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(ServiceNameCn, serviceNameCn_);
      DARABONBA_PTR_FROM_JSON(ServiceNameEn, serviceNameEn_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(UsedTimestamp, usedTimestamp_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    GetAccessKeyLastUsedInfoResponseBody() = default ;
    GetAccessKeyLastUsedInfoResponseBody(const GetAccessKeyLastUsedInfoResponseBody &) = default ;
    GetAccessKeyLastUsedInfoResponseBody(GetAccessKeyLastUsedInfoResponseBody &&) = default ;
    GetAccessKeyLastUsedInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccessKeyLastUsedInfoResponseBody() = default ;
    GetAccessKeyLastUsedInfoResponseBody& operator=(const GetAccessKeyLastUsedInfoResponseBody &) = default ;
    GetAccessKeyLastUsedInfoResponseBody& operator=(GetAccessKeyLastUsedInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessKeyId_ != nullptr
        && this->accountId_ != nullptr && this->accountType_ != nullptr && this->detail_ != nullptr && this->ownerId_ != nullptr && this->requestId_ != nullptr
        && this->serviceName_ != nullptr && this->serviceNameCn_ != nullptr && this->serviceNameEn_ != nullptr && this->source_ != nullptr && this->usedTimestamp_ != nullptr
        && this->userName_ != nullptr; };
    // accessKeyId Field Functions 
    bool hasAccessKeyId() const { return this->accessKeyId_ != nullptr;};
    void deleteAccessKeyId() { this->accessKeyId_ = nullptr;};
    inline string accessKeyId() const { DARABONBA_PTR_GET_DEFAULT(accessKeyId_, "") };
    inline GetAccessKeyLastUsedInfoResponseBody& setAccessKeyId(string accessKeyId) { DARABONBA_PTR_SET_VALUE(accessKeyId_, accessKeyId) };


    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline GetAccessKeyLastUsedInfoResponseBody& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // accountType Field Functions 
    bool hasAccountType() const { return this->accountType_ != nullptr;};
    void deleteAccountType() { this->accountType_ = nullptr;};
    inline string accountType() const { DARABONBA_PTR_GET_DEFAULT(accountType_, "") };
    inline GetAccessKeyLastUsedInfoResponseBody& setAccountType(string accountType) { DARABONBA_PTR_SET_VALUE(accountType_, accountType) };


    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline string detail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
    inline GetAccessKeyLastUsedInfoResponseBody& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline GetAccessKeyLastUsedInfoResponseBody& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAccessKeyLastUsedInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline GetAccessKeyLastUsedInfoResponseBody& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // serviceNameCn Field Functions 
    bool hasServiceNameCn() const { return this->serviceNameCn_ != nullptr;};
    void deleteServiceNameCn() { this->serviceNameCn_ = nullptr;};
    inline string serviceNameCn() const { DARABONBA_PTR_GET_DEFAULT(serviceNameCn_, "") };
    inline GetAccessKeyLastUsedInfoResponseBody& setServiceNameCn(string serviceNameCn) { DARABONBA_PTR_SET_VALUE(serviceNameCn_, serviceNameCn) };


    // serviceNameEn Field Functions 
    bool hasServiceNameEn() const { return this->serviceNameEn_ != nullptr;};
    void deleteServiceNameEn() { this->serviceNameEn_ = nullptr;};
    inline string serviceNameEn() const { DARABONBA_PTR_GET_DEFAULT(serviceNameEn_, "") };
    inline GetAccessKeyLastUsedInfoResponseBody& setServiceNameEn(string serviceNameEn) { DARABONBA_PTR_SET_VALUE(serviceNameEn_, serviceNameEn) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline GetAccessKeyLastUsedInfoResponseBody& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // usedTimestamp Field Functions 
    bool hasUsedTimestamp() const { return this->usedTimestamp_ != nullptr;};
    void deleteUsedTimestamp() { this->usedTimestamp_ = nullptr;};
    inline int64_t usedTimestamp() const { DARABONBA_PTR_GET_DEFAULT(usedTimestamp_, 0L) };
    inline GetAccessKeyLastUsedInfoResponseBody& setUsedTimestamp(int64_t usedTimestamp) { DARABONBA_PTR_SET_VALUE(usedTimestamp_, usedTimestamp) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline GetAccessKeyLastUsedInfoResponseBody& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // The AccessKey ID.
    std::shared_ptr<string> accessKeyId_ = nullptr;
    // The ID of the Alibaba Cloud account.
    std::shared_ptr<string> accountId_ = nullptr;
    // The type of the account to which the AccessKey pair belongs.
    std::shared_ptr<string> accountType_ = nullptr;
    // The details about the event.
    std::shared_ptr<string> detail_ = nullptr;
    // The ID of the account to which the AccessKey pair belongs.
    std::shared_ptr<string> ownerId_ = nullptr;
    // The ID of the request.
    // 
    // This parameter is required.
    std::shared_ptr<string> requestId_ = nullptr;
    // The Alibaba Cloud service that was last accessed.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceName_ = nullptr;
    // The Chinese name of the Alibaba Cloud service that was last accessed.
    std::shared_ptr<string> serviceNameCn_ = nullptr;
    // The English name of the Alibaba Cloud service that was last accessed.
    std::shared_ptr<string> serviceNameEn_ = nullptr;
    // The event source.
    std::shared_ptr<string> source_ = nullptr;
    // The timestamp when the AccessKey pair was last called.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> usedTimestamp_ = nullptr;
    // The name of the account to which the AccessKey pair belongs.
    // 
    // If the value of the AccountType parameter is root-account, the value of the UserName parameter is root. If the value of the AccountType parameter is ram-user, the value of the UserName parameter is the name of a RAM user.
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
