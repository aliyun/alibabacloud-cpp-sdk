// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDWORKFLOWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDWORKFLOWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class AddWorkflowRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddWorkflowRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActionList, actionList_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(BizVersion, bizVersion_);
      DARABONBA_PTR_TO_JSON(CallbackConfig, callbackConfig_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, AddWorkflowRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionList, actionList_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(BizVersion, bizVersion_);
      DARABONBA_PTR_FROM_JSON(CallbackConfig, callbackConfig_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    AddWorkflowRequest() = default ;
    AddWorkflowRequest(const AddWorkflowRequest &) = default ;
    AddWorkflowRequest(AddWorkflowRequest &&) = default ;
    AddWorkflowRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddWorkflowRequest() = default ;
    AddWorkflowRequest& operator=(const AddWorkflowRequest &) = default ;
    AddWorkflowRequest& operator=(AddWorkflowRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->actionList_ != nullptr
        && this->appId_ != nullptr && this->bizVersion_ != nullptr && this->callbackConfig_ != nullptr && this->description_ != nullptr && this->name_ != nullptr
        && this->ownerId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr; };
    // actionList Field Functions 
    bool hasActionList() const { return this->actionList_ != nullptr;};
    void deleteActionList() { this->actionList_ = nullptr;};
    inline string actionList() const { DARABONBA_PTR_GET_DEFAULT(actionList_, "") };
    inline AddWorkflowRequest& setActionList(string actionList) { DARABONBA_PTR_SET_VALUE(actionList_, actionList) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline AddWorkflowRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // bizVersion Field Functions 
    bool hasBizVersion() const { return this->bizVersion_ != nullptr;};
    void deleteBizVersion() { this->bizVersion_ = nullptr;};
    inline string bizVersion() const { DARABONBA_PTR_GET_DEFAULT(bizVersion_, "") };
    inline AddWorkflowRequest& setBizVersion(string bizVersion) { DARABONBA_PTR_SET_VALUE(bizVersion_, bizVersion) };


    // callbackConfig Field Functions 
    bool hasCallbackConfig() const { return this->callbackConfig_ != nullptr;};
    void deleteCallbackConfig() { this->callbackConfig_ = nullptr;};
    inline string callbackConfig() const { DARABONBA_PTR_GET_DEFAULT(callbackConfig_, "") };
    inline AddWorkflowRequest& setCallbackConfig(string callbackConfig) { DARABONBA_PTR_SET_VALUE(callbackConfig_, callbackConfig) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline AddWorkflowRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AddWorkflowRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AddWorkflowRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline AddWorkflowRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline AddWorkflowRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> actionList_ = nullptr;
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> bizVersion_ = nullptr;
    std::shared_ptr<string> callbackConfig_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
