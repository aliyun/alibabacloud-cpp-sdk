// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MANAGEAICLOGINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MANAGEAICLOGINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class ManageAICLoginRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ManageAICLoginRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActionName, actionName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(KeyGroup, keyGroup_);
      DARABONBA_PTR_TO_JSON(KeyName, keyName_);
    };
    friend void from_json(const Darabonba::Json& j, ManageAICLoginRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionName, actionName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(KeyGroup, keyGroup_);
      DARABONBA_PTR_FROM_JSON(KeyName, keyName_);
    };
    ManageAICLoginRequest() = default ;
    ManageAICLoginRequest(const ManageAICLoginRequest &) = default ;
    ManageAICLoginRequest(ManageAICLoginRequest &&) = default ;
    ManageAICLoginRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ManageAICLoginRequest() = default ;
    ManageAICLoginRequest& operator=(const ManageAICLoginRequest &) = default ;
    ManageAICLoginRequest& operator=(ManageAICLoginRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionName_ == nullptr
        && this->instanceId_ == nullptr && this->keyGroup_ == nullptr && this->keyName_ == nullptr; };
    // actionName Field Functions 
    bool hasActionName() const { return this->actionName_ != nullptr;};
    void deleteActionName() { this->actionName_ = nullptr;};
    inline string getActionName() const { DARABONBA_PTR_GET_DEFAULT(actionName_, "") };
    inline ManageAICLoginRequest& setActionName(string actionName) { DARABONBA_PTR_SET_VALUE(actionName_, actionName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ManageAICLoginRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // keyGroup Field Functions 
    bool hasKeyGroup() const { return this->keyGroup_ != nullptr;};
    void deleteKeyGroup() { this->keyGroup_ = nullptr;};
    inline string getKeyGroup() const { DARABONBA_PTR_GET_DEFAULT(keyGroup_, "") };
    inline ManageAICLoginRequest& setKeyGroup(string keyGroup) { DARABONBA_PTR_SET_VALUE(keyGroup_, keyGroup) };


    // keyName Field Functions 
    bool hasKeyName() const { return this->keyName_ != nullptr;};
    void deleteKeyName() { this->keyName_ = nullptr;};
    inline string getKeyName() const { DARABONBA_PTR_GET_DEFAULT(keyName_, "") };
    inline ManageAICLoginRequest& setKeyName(string keyName) { DARABONBA_PTR_SET_VALUE(keyName_, keyName) };


  protected:
    // The management action.
    // When this parameter is set to open, the AIC instance must be in the running state. You can call DescribeAICInstances to query the state.
    // 
    // This parameter is required.
    shared_ptr<string> actionName_ {};
    // The ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The group of the public key.
    // When you set ActionName to open and use the public key to log on, you must first upload the public key by calling UploadAICPublicKey and provide the corresponding KeyName and KeyGroup.
    shared_ptr<string> keyGroup_ {};
    // The name of the public key.
    // When you set ActionName to open and use the public key to log on, you must first upload the public key by calling UploadAICPublicKey and provide the corresponding KeyName and KeyGroup.
    shared_ptr<string> keyName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
