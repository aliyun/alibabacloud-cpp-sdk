// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINSTANCECONFIGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINSTANCECONFIGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Milvus20231012
{
namespace Models
{
  class ModifyInstanceConfigShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInstanceConfigShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(UserConfig, userConfig_);
      DARABONBA_PTR_TO_JSON(body, bodyShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInstanceConfigShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(UserConfig, userConfig_);
      DARABONBA_PTR_FROM_JSON(body, bodyShrink_);
    };
    ModifyInstanceConfigShrinkRequest() = default ;
    ModifyInstanceConfigShrinkRequest(const ModifyInstanceConfigShrinkRequest &) = default ;
    ModifyInstanceConfigShrinkRequest(ModifyInstanceConfigShrinkRequest &&) = default ;
    ModifyInstanceConfigShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInstanceConfigShrinkRequest() = default ;
    ModifyInstanceConfigShrinkRequest& operator=(const ModifyInstanceConfigShrinkRequest &) = default ;
    ModifyInstanceConfigShrinkRequest& operator=(ModifyInstanceConfigShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->reason_ == nullptr && this->userConfig_ == nullptr && this->bodyShrink_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyInstanceConfigShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline ModifyInstanceConfigShrinkRequest& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // userConfig Field Functions 
    bool hasUserConfig() const { return this->userConfig_ != nullptr;};
    void deleteUserConfig() { this->userConfig_ = nullptr;};
    inline string getUserConfig() const { DARABONBA_PTR_GET_DEFAULT(userConfig_, "") };
    inline ModifyInstanceConfigShrinkRequest& setUserConfig(string userConfig) { DARABONBA_PTR_SET_VALUE(userConfig_, userConfig) };


    // bodyShrink Field Functions 
    bool hasBodyShrink() const { return this->bodyShrink_ != nullptr;};
    void deleteBodyShrink() { this->bodyShrink_ = nullptr;};
    inline string getBodyShrink() const { DARABONBA_PTR_GET_DEFAULT(bodyShrink_, "") };
    inline ModifyInstanceConfigShrinkRequest& setBodyShrink(string bodyShrink) { DARABONBA_PTR_SET_VALUE(bodyShrink_, bodyShrink) };


  protected:
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The reason for the update.
    // 
    // This parameter is required.
    shared_ptr<string> reason_ {};
    // The custom configuration.
    shared_ptr<string> userConfig_ {};
    // Submits the instance configurations to be updated as a JSON object.
    shared_ptr<string> bodyShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Milvus20231012
#endif
