// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDAGENTGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDAGENTGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20230516
{
namespace Models
{
  class AddAgentGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddAgentGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentGroupName, agentGroupName_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, AddAgentGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentGroupName, agentGroupName_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    AddAgentGroupRequest() = default ;
    AddAgentGroupRequest(const AddAgentGroupRequest &) = default ;
    AddAgentGroupRequest(AddAgentGroupRequest &&) = default ;
    AddAgentGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddAgentGroupRequest() = default ;
    AddAgentGroupRequest& operator=(const AddAgentGroupRequest &) = default ;
    AddAgentGroupRequest& operator=(AddAgentGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentGroupName_ == nullptr
        && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // agentGroupName Field Functions 
    bool hasAgentGroupName() const { return this->agentGroupName_ != nullptr;};
    void deleteAgentGroupName() { this->agentGroupName_ = nullptr;};
    inline string getAgentGroupName() const { DARABONBA_PTR_GET_DEFAULT(agentGroupName_, "") };
    inline AddAgentGroupRequest& setAgentGroupName(string agentGroupName) { DARABONBA_PTR_SET_VALUE(agentGroupName_, agentGroupName) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AddAgentGroupRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline AddAgentGroupRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline AddAgentGroupRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // 坐席组名称，不能为空且最大长度为20个字符
    // 
    // This parameter is required.
    shared_ptr<string> agentGroupName_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20230516
#endif
