// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROXYACCESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPROXYACCESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetProxyAccessResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProxyAccessResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(ProxyAccess, proxyAccess_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetProxyAccessResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(ProxyAccess, proxyAccess_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetProxyAccessResponseBody() = default ;
    GetProxyAccessResponseBody(const GetProxyAccessResponseBody &) = default ;
    GetProxyAccessResponseBody(GetProxyAccessResponseBody &&) = default ;
    GetProxyAccessResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProxyAccessResponseBody() = default ;
    GetProxyAccessResponseBody& operator=(const GetProxyAccessResponseBody &) = default ;
    GetProxyAccessResponseBody& operator=(GetProxyAccessResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ProxyAccess : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ProxyAccess& obj) { 
        DARABONBA_PTR_TO_JSON(AccessId, accessId_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(IndepAccount, indepAccount_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(OriginInfo, originInfo_);
        DARABONBA_PTR_TO_JSON(ProxyAccessId, proxyAccessId_);
        DARABONBA_PTR_TO_JSON(ProxyId, proxyId_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
        DARABONBA_PTR_TO_JSON(UserName, userName_);
        DARABONBA_PTR_TO_JSON(UserUid, userUid_);
      };
      friend void from_json(const Darabonba::Json& j, ProxyAccess& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessId, accessId_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(IndepAccount, indepAccount_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(OriginInfo, originInfo_);
        DARABONBA_PTR_FROM_JSON(ProxyAccessId, proxyAccessId_);
        DARABONBA_PTR_FROM_JSON(ProxyId, proxyId_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
        DARABONBA_PTR_FROM_JSON(UserName, userName_);
        DARABONBA_PTR_FROM_JSON(UserUid, userUid_);
      };
      ProxyAccess() = default ;
      ProxyAccess(const ProxyAccess &) = default ;
      ProxyAccess(ProxyAccess &&) = default ;
      ProxyAccess(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ProxyAccess() = default ;
      ProxyAccess& operator=(const ProxyAccess &) = default ;
      ProxyAccess& operator=(ProxyAccess &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accessId_ == nullptr
        && this->gmtCreate_ == nullptr && this->indepAccount_ == nullptr && this->instanceId_ == nullptr && this->originInfo_ == nullptr && this->proxyAccessId_ == nullptr
        && this->proxyId_ == nullptr && this->userId_ == nullptr && this->userName_ == nullptr && this->userUid_ == nullptr; };
      // accessId Field Functions 
      bool hasAccessId() const { return this->accessId_ != nullptr;};
      void deleteAccessId() { this->accessId_ = nullptr;};
      inline string getAccessId() const { DARABONBA_PTR_GET_DEFAULT(accessId_, "") };
      inline ProxyAccess& setAccessId(string accessId) { DARABONBA_PTR_SET_VALUE(accessId_, accessId) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline ProxyAccess& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // indepAccount Field Functions 
      bool hasIndepAccount() const { return this->indepAccount_ != nullptr;};
      void deleteIndepAccount() { this->indepAccount_ = nullptr;};
      inline string getIndepAccount() const { DARABONBA_PTR_GET_DEFAULT(indepAccount_, "") };
      inline ProxyAccess& setIndepAccount(string indepAccount) { DARABONBA_PTR_SET_VALUE(indepAccount_, indepAccount) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline int64_t getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
      inline ProxyAccess& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // originInfo Field Functions 
      bool hasOriginInfo() const { return this->originInfo_ != nullptr;};
      void deleteOriginInfo() { this->originInfo_ = nullptr;};
      inline string getOriginInfo() const { DARABONBA_PTR_GET_DEFAULT(originInfo_, "") };
      inline ProxyAccess& setOriginInfo(string originInfo) { DARABONBA_PTR_SET_VALUE(originInfo_, originInfo) };


      // proxyAccessId Field Functions 
      bool hasProxyAccessId() const { return this->proxyAccessId_ != nullptr;};
      void deleteProxyAccessId() { this->proxyAccessId_ = nullptr;};
      inline int64_t getProxyAccessId() const { DARABONBA_PTR_GET_DEFAULT(proxyAccessId_, 0L) };
      inline ProxyAccess& setProxyAccessId(int64_t proxyAccessId) { DARABONBA_PTR_SET_VALUE(proxyAccessId_, proxyAccessId) };


      // proxyId Field Functions 
      bool hasProxyId() const { return this->proxyId_ != nullptr;};
      void deleteProxyId() { this->proxyId_ = nullptr;};
      inline int64_t getProxyId() const { DARABONBA_PTR_GET_DEFAULT(proxyId_, 0L) };
      inline ProxyAccess& setProxyId(int64_t proxyId) { DARABONBA_PTR_SET_VALUE(proxyId_, proxyId) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
      inline ProxyAccess& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline ProxyAccess& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


      // userUid Field Functions 
      bool hasUserUid() const { return this->userUid_ != nullptr;};
      void deleteUserUid() { this->userUid_ = nullptr;};
      inline string getUserUid() const { DARABONBA_PTR_GET_DEFAULT(userUid_, "") };
      inline ProxyAccess& setUserUid(string userUid) { DARABONBA_PTR_SET_VALUE(userUid_, userUid) };


    protected:
      // The username of the database account that is authorized to enable the secure access proxy feature for an instance.
      shared_ptr<string> accessId_ {};
      // The time when the user is authorized to enable the secure access proxy feature for an instance.
      shared_ptr<string> gmtCreate_ {};
      // The username of the independent database account.
      shared_ptr<string> indepAccount_ {};
      // The ID of the instance for which the secure access proxy feature is enabled.
      shared_ptr<int64_t> instanceId_ {};
      // The method that is used to authorize the user to enable the secure access proxy feature for an instance. Valid values:
      // 
      // *   **Authorization by the Alibaba Cloud Account ()**: The information in the parentheses () indicates the ID of the Alibaba Cloud account.
      // *   **Authorization by submitting the ticket ()**:The information in the parentheses () indicates the number of the ticket that the user submits to apply for permissions.
      shared_ptr<string> originInfo_ {};
      // The ID that DMS generates after the user is authorized to enable the secure access proxy feature for an instance. The ID is unique in DMS. You can call the [ListProxyAccesses](https://help.aliyun.com/document_detail/295386.html) operation to query the ID.
      shared_ptr<int64_t> proxyAccessId_ {};
      // The ID of the secure access proxy.
      // 
      // >  You can call the [ListProxies](https://help.aliyun.com/document_detail/295371.html) operation to query the ID of the secure access proxy.
      shared_ptr<int64_t> proxyId_ {};
      // The ID of the user.
      shared_ptr<int64_t> userId_ {};
      // The nickname of the user.
      shared_ptr<string> userName_ {};
      // The ID of the Alibaba Cloud account.
      shared_ptr<string> userUid_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->proxyAccess_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetProxyAccessResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetProxyAccessResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // proxyAccess Field Functions 
    bool hasProxyAccess() const { return this->proxyAccess_ != nullptr;};
    void deleteProxyAccess() { this->proxyAccess_ = nullptr;};
    inline const GetProxyAccessResponseBody::ProxyAccess & getProxyAccess() const { DARABONBA_PTR_GET_CONST(proxyAccess_, GetProxyAccessResponseBody::ProxyAccess) };
    inline GetProxyAccessResponseBody::ProxyAccess getProxyAccess() { DARABONBA_PTR_GET(proxyAccess_, GetProxyAccessResponseBody::ProxyAccess) };
    inline GetProxyAccessResponseBody& setProxyAccess(const GetProxyAccessResponseBody::ProxyAccess & proxyAccess) { DARABONBA_PTR_SET_VALUE(proxyAccess_, proxyAccess) };
    inline GetProxyAccessResponseBody& setProxyAccess(GetProxyAccessResponseBody::ProxyAccess && proxyAccess) { DARABONBA_PTR_SET_RVALUE(proxyAccess_, proxyAccess) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetProxyAccessResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetProxyAccessResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message returned if the request failed.
    shared_ptr<string> errorMessage_ {};
    // The authorization information about the secure access proxy feature.
    shared_ptr<GetProxyAccessResponseBody::ProxyAccess> proxyAccess_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
