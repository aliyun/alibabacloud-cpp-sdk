// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINSTANCECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINSTANCECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Milvus20231012
{
namespace Models
{
  class ModifyInstanceConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInstanceConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(UserConfig, userConfig_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInstanceConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(UserConfig, userConfig_);
    };
    ModifyInstanceConfigRequest() = default ;
    ModifyInstanceConfigRequest(const ModifyInstanceConfigRequest &) = default ;
    ModifyInstanceConfigRequest(ModifyInstanceConfigRequest &&) = default ;
    ModifyInstanceConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInstanceConfigRequest() = default ;
    ModifyInstanceConfigRequest& operator=(const ModifyInstanceConfigRequest &) = default ;
    ModifyInstanceConfigRequest& operator=(ModifyInstanceConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->reason_ != nullptr && this->userConfig_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyInstanceConfigRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline ModifyInstanceConfigRequest& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // userConfig Field Functions 
    bool hasUserConfig() const { return this->userConfig_ != nullptr;};
    void deleteUserConfig() { this->userConfig_ = nullptr;};
    inline string userConfig() const { DARABONBA_PTR_GET_DEFAULT(userConfig_, "") };
    inline ModifyInstanceConfigRequest& setUserConfig(string userConfig) { DARABONBA_PTR_SET_VALUE(userConfig_, userConfig) };


  protected:
    // The ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The reason for the update.
    // 
    // This parameter is required.
    std::shared_ptr<string> reason_ = nullptr;
    // User-defined configuration.
    std::shared_ptr<string> userConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Milvus20231012
#endif
