// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDAGENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDAGENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20230516
{
namespace Models
{
  class AddAgentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddAgentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Account, account_);
      DARABONBA_PTR_TO_JSON(AgentTag, agentTag_);
      DARABONBA_PTR_TO_JSON(ExtensionPwd, extensionPwd_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, AddAgentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Account, account_);
      DARABONBA_PTR_FROM_JSON(AgentTag, agentTag_);
      DARABONBA_PTR_FROM_JSON(ExtensionPwd, extensionPwd_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    AddAgentRequest() = default ;
    AddAgentRequest(const AddAgentRequest &) = default ;
    AddAgentRequest(AddAgentRequest &&) = default ;
    AddAgentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddAgentRequest() = default ;
    AddAgentRequest& operator=(const AddAgentRequest &) = default ;
    AddAgentRequest& operator=(AddAgentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->account_ == nullptr
        && this->agentTag_ == nullptr && this->extensionPwd_ == nullptr && this->name_ == nullptr && this->ownerId_ == nullptr && this->password_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // account Field Functions 
    bool hasAccount() const { return this->account_ != nullptr;};
    void deleteAccount() { this->account_ = nullptr;};
    inline string getAccount() const { DARABONBA_PTR_GET_DEFAULT(account_, "") };
    inline AddAgentRequest& setAccount(string account) { DARABONBA_PTR_SET_VALUE(account_, account) };


    // agentTag Field Functions 
    bool hasAgentTag() const { return this->agentTag_ != nullptr;};
    void deleteAgentTag() { this->agentTag_ = nullptr;};
    inline string getAgentTag() const { DARABONBA_PTR_GET_DEFAULT(agentTag_, "") };
    inline AddAgentRequest& setAgentTag(string agentTag) { DARABONBA_PTR_SET_VALUE(agentTag_, agentTag) };


    // extensionPwd Field Functions 
    bool hasExtensionPwd() const { return this->extensionPwd_ != nullptr;};
    void deleteExtensionPwd() { this->extensionPwd_ = nullptr;};
    inline string getExtensionPwd() const { DARABONBA_PTR_GET_DEFAULT(extensionPwd_, "") };
    inline AddAgentRequest& setExtensionPwd(string extensionPwd) { DARABONBA_PTR_SET_VALUE(extensionPwd_, extensionPwd) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AddAgentRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AddAgentRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline AddAgentRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline AddAgentRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline AddAgentRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // 坐席账号名(必须唯一)
    // 
    // This parameter is required.
    shared_ptr<string> account_ {};
    // 合作方唯一标识
    shared_ptr<string> agentTag_ {};
    // 分机密码
    // 
    // This parameter is required.
    shared_ptr<string> extensionPwd_ {};
    // 坐席名称
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    shared_ptr<int64_t> ownerId_ {};
    // 坐席账号密码 (可以跟分机密码一致)
    // 
    // This parameter is required.
    shared_ptr<string> password_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20230516
#endif
