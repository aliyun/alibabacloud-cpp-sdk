// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSTRATEGYTARGETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSTRATEGYTARGETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyStrategyTargetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyStrategyTargetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(Target, target_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyStrategyTargetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ModifyStrategyTargetRequest() = default ;
    ModifyStrategyTargetRequest(const ModifyStrategyTargetRequest &) = default ;
    ModifyStrategyTargetRequest(ModifyStrategyTargetRequest &&) = default ;
    ModifyStrategyTargetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyStrategyTargetRequest() = default ;
    ModifyStrategyTargetRequest& operator=(const ModifyStrategyTargetRequest &) = default ;
    ModifyStrategyTargetRequest& operator=(ModifyStrategyTargetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr
        && return this->sourceIp_ == nullptr && return this->target_ == nullptr && return this->type_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline ModifyStrategyTargetRequest& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline ModifyStrategyTargetRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string target() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline ModifyStrategyTargetRequest& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ModifyStrategyTargetRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the baseline check policy. The ID is returned after the policy is created. The value of this parameter is in the JSON format and contains the following field:
    // 
    // *   **strategyId**: the ID of the policy
    // 
    // This parameter is required.
    std::shared_ptr<string> config_ = nullptr;
    // The source IP address of the request.
    std::shared_ptr<string> sourceIp_ = nullptr;
    // The information about the asset group to which the policy is applied. The value of this parameter is in the JSON format and contains the following fields:
    // 
    // *   **TargetType**: the type of the asset to which the policy is applied. Set the value to **groupId**, which indicates that the policy is applied to an asset group.
    // *   **BindUuidCount**: the number of servers to which the policy is applied.
    // *   **Target**: the ID of the asset group.
    // 
    // This parameter is required.
    std::shared_ptr<string> target_ = nullptr;
    // The type of the configuration. Set the value to **hc_strategy**.
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
