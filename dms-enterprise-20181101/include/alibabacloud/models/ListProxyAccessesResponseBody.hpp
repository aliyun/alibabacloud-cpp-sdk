// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROXYACCESSESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPROXYACCESSESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListProxyAccessesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProxyAccessesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(ProxyAccessList, proxyAccessList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListProxyAccessesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(ProxyAccessList, proxyAccessList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListProxyAccessesResponseBody() = default ;
    ListProxyAccessesResponseBody(const ListProxyAccessesResponseBody &) = default ;
    ListProxyAccessesResponseBody(ListProxyAccessesResponseBody &&) = default ;
    ListProxyAccessesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProxyAccessesResponseBody() = default ;
    ListProxyAccessesResponseBody& operator=(const ListProxyAccessesResponseBody &) = default ;
    ListProxyAccessesResponseBody& operator=(ListProxyAccessesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ProxyAccessList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ProxyAccessList& obj) { 
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
      friend void from_json(const Darabonba::Json& j, ProxyAccessList& obj) { 
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
      ProxyAccessList() = default ;
      ProxyAccessList(const ProxyAccessList &) = default ;
      ProxyAccessList(ProxyAccessList &&) = default ;
      ProxyAccessList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ProxyAccessList() = default ;
      ProxyAccessList& operator=(const ProxyAccessList &) = default ;
      ProxyAccessList& operator=(ProxyAccessList &&) = default ;
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
      inline ProxyAccessList& setAccessId(string accessId) { DARABONBA_PTR_SET_VALUE(accessId_, accessId) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline ProxyAccessList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // indepAccount Field Functions 
      bool hasIndepAccount() const { return this->indepAccount_ != nullptr;};
      void deleteIndepAccount() { this->indepAccount_ = nullptr;};
      inline string getIndepAccount() const { DARABONBA_PTR_GET_DEFAULT(indepAccount_, "") };
      inline ProxyAccessList& setIndepAccount(string indepAccount) { DARABONBA_PTR_SET_VALUE(indepAccount_, indepAccount) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline int64_t getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
      inline ProxyAccessList& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // originInfo Field Functions 
      bool hasOriginInfo() const { return this->originInfo_ != nullptr;};
      void deleteOriginInfo() { this->originInfo_ = nullptr;};
      inline string getOriginInfo() const { DARABONBA_PTR_GET_DEFAULT(originInfo_, "") };
      inline ProxyAccessList& setOriginInfo(string originInfo) { DARABONBA_PTR_SET_VALUE(originInfo_, originInfo) };


      // proxyAccessId Field Functions 
      bool hasProxyAccessId() const { return this->proxyAccessId_ != nullptr;};
      void deleteProxyAccessId() { this->proxyAccessId_ = nullptr;};
      inline int64_t getProxyAccessId() const { DARABONBA_PTR_GET_DEFAULT(proxyAccessId_, 0L) };
      inline ProxyAccessList& setProxyAccessId(int64_t proxyAccessId) { DARABONBA_PTR_SET_VALUE(proxyAccessId_, proxyAccessId) };


      // proxyId Field Functions 
      bool hasProxyId() const { return this->proxyId_ != nullptr;};
      void deleteProxyId() { this->proxyId_ = nullptr;};
      inline int64_t getProxyId() const { DARABONBA_PTR_GET_DEFAULT(proxyId_, 0L) };
      inline ProxyAccessList& setProxyId(int64_t proxyId) { DARABONBA_PTR_SET_VALUE(proxyId_, proxyId) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
      inline ProxyAccessList& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline ProxyAccessList& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


      // userUid Field Functions 
      bool hasUserUid() const { return this->userUid_ != nullptr;};
      void deleteUserUid() { this->userUid_ = nullptr;};
      inline string getUserUid() const { DARABONBA_PTR_GET_DEFAULT(userUid_, "") };
      inline ProxyAccessList& setUserUid(string userUid) { DARABONBA_PTR_SET_VALUE(userUid_, userUid) };


    protected:
      // The username of the database account that is authorized to access the database instance by using the secure access proxy feature.
      shared_ptr<string> accessId_ {};
      // The time when the user is authorized to access the database instance by using the secure access proxy feature.
      shared_ptr<string> gmtCreate_ {};
      // The username of the independent database account.
      shared_ptr<string> indepAccount_ {};
      // The ID of the database instance.
      shared_ptr<int64_t> instanceId_ {};
      // The method that is used to authorize the user to access the database instance by using the secure access proxy feature. Valid values: 
      // 
      // - **Authorization by the Alibaba Cloud Account ()**: The information in the parentheses () indicates the user ID (UID) of the Alibaba Cloud account.
      // - **Authorization by submitting the ticket ()**:The information in the parentheses () indicates the number of the ticket that the user submits to apply for permissions.
      shared_ptr<string> originInfo_ {};
      // The ID that DMS generates after the user is authorized to access the database instance by using the secure access proxy feature. The ID is unique in DMS.
      shared_ptr<int64_t> proxyAccessId_ {};
      // The ID of the secure access proxy.
      shared_ptr<int64_t> proxyId_ {};
      // The ID of the user.
      shared_ptr<int64_t> userId_ {};
      // The nickname of the user.
      shared_ptr<string> userName_ {};
      // The UID of the Alibaba Cloud account.
      shared_ptr<string> userUid_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->proxyAccessList_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListProxyAccessesResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListProxyAccessesResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // proxyAccessList Field Functions 
    bool hasProxyAccessList() const { return this->proxyAccessList_ != nullptr;};
    void deleteProxyAccessList() { this->proxyAccessList_ = nullptr;};
    inline const vector<ListProxyAccessesResponseBody::ProxyAccessList> & getProxyAccessList() const { DARABONBA_PTR_GET_CONST(proxyAccessList_, vector<ListProxyAccessesResponseBody::ProxyAccessList>) };
    inline vector<ListProxyAccessesResponseBody::ProxyAccessList> getProxyAccessList() { DARABONBA_PTR_GET(proxyAccessList_, vector<ListProxyAccessesResponseBody::ProxyAccessList>) };
    inline ListProxyAccessesResponseBody& setProxyAccessList(const vector<ListProxyAccessesResponseBody::ProxyAccessList> & proxyAccessList) { DARABONBA_PTR_SET_VALUE(proxyAccessList_, proxyAccessList) };
    inline ListProxyAccessesResponseBody& setProxyAccessList(vector<ListProxyAccessesResponseBody::ProxyAccessList> && proxyAccessList) { DARABONBA_PTR_SET_RVALUE(proxyAccessList_, proxyAccessList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListProxyAccessesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListProxyAccessesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code returned.
    shared_ptr<string> errorCode_ {};
    // The error message returned.
    shared_ptr<string> errorMessage_ {};
    // The information about the users that are authorized to access the database instance by using the secure access proxy feature.
    shared_ptr<vector<ListProxyAccessesResponseBody::ProxyAccessList>> proxyAccessList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // - **true**: The request was successful.
    // - **false**: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
