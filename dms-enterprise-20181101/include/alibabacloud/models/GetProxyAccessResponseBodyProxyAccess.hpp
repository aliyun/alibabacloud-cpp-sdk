// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROXYACCESSRESPONSEBODYPROXYACCESS_HPP_
#define ALIBABACLOUD_MODELS_GETPROXYACCESSRESPONSEBODYPROXYACCESS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetProxyAccessResponseBodyProxyAccess : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProxyAccessResponseBodyProxyAccess& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetProxyAccessResponseBodyProxyAccess& obj) { 
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
    GetProxyAccessResponseBodyProxyAccess() = default ;
    GetProxyAccessResponseBodyProxyAccess(const GetProxyAccessResponseBodyProxyAccess &) = default ;
    GetProxyAccessResponseBodyProxyAccess(GetProxyAccessResponseBodyProxyAccess &&) = default ;
    GetProxyAccessResponseBodyProxyAccess(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProxyAccessResponseBodyProxyAccess() = default ;
    GetProxyAccessResponseBodyProxyAccess& operator=(const GetProxyAccessResponseBodyProxyAccess &) = default ;
    GetProxyAccessResponseBodyProxyAccess& operator=(GetProxyAccessResponseBodyProxyAccess &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessId_ == nullptr
        && return this->gmtCreate_ == nullptr && return this->indepAccount_ == nullptr && return this->instanceId_ == nullptr && return this->originInfo_ == nullptr && return this->proxyAccessId_ == nullptr
        && return this->proxyId_ == nullptr && return this->userId_ == nullptr && return this->userName_ == nullptr && return this->userUid_ == nullptr; };
    // accessId Field Functions 
    bool hasAccessId() const { return this->accessId_ != nullptr;};
    void deleteAccessId() { this->accessId_ = nullptr;};
    inline string accessId() const { DARABONBA_PTR_GET_DEFAULT(accessId_, "") };
    inline GetProxyAccessResponseBodyProxyAccess& setAccessId(string accessId) { DARABONBA_PTR_SET_VALUE(accessId_, accessId) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetProxyAccessResponseBodyProxyAccess& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // indepAccount Field Functions 
    bool hasIndepAccount() const { return this->indepAccount_ != nullptr;};
    void deleteIndepAccount() { this->indepAccount_ = nullptr;};
    inline string indepAccount() const { DARABONBA_PTR_GET_DEFAULT(indepAccount_, "") };
    inline GetProxyAccessResponseBodyProxyAccess& setIndepAccount(string indepAccount) { DARABONBA_PTR_SET_VALUE(indepAccount_, indepAccount) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline int64_t instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
    inline GetProxyAccessResponseBodyProxyAccess& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // originInfo Field Functions 
    bool hasOriginInfo() const { return this->originInfo_ != nullptr;};
    void deleteOriginInfo() { this->originInfo_ = nullptr;};
    inline string originInfo() const { DARABONBA_PTR_GET_DEFAULT(originInfo_, "") };
    inline GetProxyAccessResponseBodyProxyAccess& setOriginInfo(string originInfo) { DARABONBA_PTR_SET_VALUE(originInfo_, originInfo) };


    // proxyAccessId Field Functions 
    bool hasProxyAccessId() const { return this->proxyAccessId_ != nullptr;};
    void deleteProxyAccessId() { this->proxyAccessId_ = nullptr;};
    inline int64_t proxyAccessId() const { DARABONBA_PTR_GET_DEFAULT(proxyAccessId_, 0L) };
    inline GetProxyAccessResponseBodyProxyAccess& setProxyAccessId(int64_t proxyAccessId) { DARABONBA_PTR_SET_VALUE(proxyAccessId_, proxyAccessId) };


    // proxyId Field Functions 
    bool hasProxyId() const { return this->proxyId_ != nullptr;};
    void deleteProxyId() { this->proxyId_ = nullptr;};
    inline int64_t proxyId() const { DARABONBA_PTR_GET_DEFAULT(proxyId_, 0L) };
    inline GetProxyAccessResponseBodyProxyAccess& setProxyId(int64_t proxyId) { DARABONBA_PTR_SET_VALUE(proxyId_, proxyId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline GetProxyAccessResponseBodyProxyAccess& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline GetProxyAccessResponseBodyProxyAccess& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // userUid Field Functions 
    bool hasUserUid() const { return this->userUid_ != nullptr;};
    void deleteUserUid() { this->userUid_ = nullptr;};
    inline string userUid() const { DARABONBA_PTR_GET_DEFAULT(userUid_, "") };
    inline GetProxyAccessResponseBodyProxyAccess& setUserUid(string userUid) { DARABONBA_PTR_SET_VALUE(userUid_, userUid) };


  protected:
    // The username of the database account that is authorized to enable the secure access proxy feature for an instance.
    std::shared_ptr<string> accessId_ = nullptr;
    // The time when the user is authorized to enable the secure access proxy feature for an instance.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The username of the independent database account.
    std::shared_ptr<string> indepAccount_ = nullptr;
    // The ID of the instance for which the secure access proxy feature is enabled.
    std::shared_ptr<int64_t> instanceId_ = nullptr;
    // The method that is used to authorize the user to enable the secure access proxy feature for an instance. Valid values:
    // 
    // *   **Authorization by the Alibaba Cloud Account ()**: The information in the parentheses () indicates the ID of the Alibaba Cloud account.
    // *   **Authorization by submitting the ticket ()**:The information in the parentheses () indicates the number of the ticket that the user submits to apply for permissions.
    std::shared_ptr<string> originInfo_ = nullptr;
    // The ID that DMS generates after the user is authorized to enable the secure access proxy feature for an instance. The ID is unique in DMS. You can call the [ListProxyAccesses](https://help.aliyun.com/document_detail/295386.html) operation to query the ID.
    std::shared_ptr<int64_t> proxyAccessId_ = nullptr;
    // The ID of the secure access proxy.
    // 
    // >  You can call the [ListProxies](https://help.aliyun.com/document_detail/295371.html) operation to query the ID of the secure access proxy.
    std::shared_ptr<int64_t> proxyId_ = nullptr;
    // The ID of the user.
    std::shared_ptr<int64_t> userId_ = nullptr;
    // The nickname of the user.
    std::shared_ptr<string> userName_ = nullptr;
    // The ID of the Alibaba Cloud account.
    std::shared_ptr<string> userUid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
