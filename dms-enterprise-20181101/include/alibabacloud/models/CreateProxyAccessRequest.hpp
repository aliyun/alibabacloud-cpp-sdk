// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROXYACCESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROXYACCESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class CreateProxyAccessRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateProxyAccessRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IndepAccount, indepAccount_);
      DARABONBA_PTR_TO_JSON(IndepPassword, indepPassword_);
      DARABONBA_PTR_TO_JSON(ProxyId, proxyId_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateProxyAccessRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IndepAccount, indepAccount_);
      DARABONBA_PTR_FROM_JSON(IndepPassword, indepPassword_);
      DARABONBA_PTR_FROM_JSON(ProxyId, proxyId_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    CreateProxyAccessRequest() = default ;
    CreateProxyAccessRequest(const CreateProxyAccessRequest &) = default ;
    CreateProxyAccessRequest(CreateProxyAccessRequest &&) = default ;
    CreateProxyAccessRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateProxyAccessRequest() = default ;
    CreateProxyAccessRequest& operator=(const CreateProxyAccessRequest &) = default ;
    CreateProxyAccessRequest& operator=(CreateProxyAccessRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->indepAccount_ != nullptr
        && this->indepPassword_ != nullptr && this->proxyId_ != nullptr && this->tid_ != nullptr && this->userId_ != nullptr; };
    // indepAccount Field Functions 
    bool hasIndepAccount() const { return this->indepAccount_ != nullptr;};
    void deleteIndepAccount() { this->indepAccount_ = nullptr;};
    inline string indepAccount() const { DARABONBA_PTR_GET_DEFAULT(indepAccount_, "") };
    inline CreateProxyAccessRequest& setIndepAccount(string indepAccount) { DARABONBA_PTR_SET_VALUE(indepAccount_, indepAccount) };


    // indepPassword Field Functions 
    bool hasIndepPassword() const { return this->indepPassword_ != nullptr;};
    void deleteIndepPassword() { this->indepPassword_ = nullptr;};
    inline string indepPassword() const { DARABONBA_PTR_GET_DEFAULT(indepPassword_, "") };
    inline CreateProxyAccessRequest& setIndepPassword(string indepPassword) { DARABONBA_PTR_SET_VALUE(indepPassword_, indepPassword) };


    // proxyId Field Functions 
    bool hasProxyId() const { return this->proxyId_ != nullptr;};
    void deleteProxyId() { this->proxyId_ = nullptr;};
    inline int64_t proxyId() const { DARABONBA_PTR_GET_DEFAULT(proxyId_, 0L) };
    inline CreateProxyAccessRequest& setProxyId(int64_t proxyId) { DARABONBA_PTR_SET_VALUE(proxyId_, proxyId) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline CreateProxyAccessRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline CreateProxyAccessRequest& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The database account.
    std::shared_ptr<string> indepAccount_ = nullptr;
    // The password that is used to log on to the database.
    std::shared_ptr<string> indepPassword_ = nullptr;
    // The ID of the security protection agent. You can call the [ListProxies](https://www.alibabacloud.com/help/en/data-management-service/latest/listproxies) or [GetProxy](https://www.alibabacloud.com/help/en/data-management-service/latest/getproxy) operation to obtain this parameter.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> proxyId_ = nullptr;
    // The ID of the tenant. You can call the [GetUserActiveTenant](https://www.alibabacloud.com/help/en/data-management-service/latest/getuseractivetenant) or [ListUserTenants](https://www.alibabacloud.com/help/en/data-management-service/latest/listusertenants) operation to obtain this parameter.
    std::shared_ptr<int64_t> tid_ = nullptr;
    // The ID of the user. You can call the [ListUsers](https://www.alibabacloud.com/help/en/data-management-service/latest/listusers) or [GetUser](https://www.alibabacloud.com/help/en/data-management-service/latest/getuser) operation to obtain this parameter.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
