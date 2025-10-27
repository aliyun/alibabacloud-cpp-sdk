// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCLIENTCONFSETUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCLIENTCONFSETUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyClientConfSetupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyClientConfSetupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(StrategyConfig, strategyConfig_);
      DARABONBA_PTR_TO_JSON(StrategyTag, strategyTag_);
      DARABONBA_PTR_TO_JSON(StrategyTagValue, strategyTagValue_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyClientConfSetupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(StrategyConfig, strategyConfig_);
      DARABONBA_PTR_FROM_JSON(StrategyTag, strategyTag_);
      DARABONBA_PTR_FROM_JSON(StrategyTagValue, strategyTagValue_);
    };
    ModifyClientConfSetupRequest() = default ;
    ModifyClientConfSetupRequest(const ModifyClientConfSetupRequest &) = default ;
    ModifyClientConfSetupRequest(ModifyClientConfSetupRequest &&) = default ;
    ModifyClientConfSetupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyClientConfSetupRequest() = default ;
    ModifyClientConfSetupRequest& operator=(const ModifyClientConfSetupRequest &) = default ;
    ModifyClientConfSetupRequest& operator=(ModifyClientConfSetupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->strategyConfig_ == nullptr
        && return this->strategyTag_ == nullptr && return this->strategyTagValue_ == nullptr; };
    // strategyConfig Field Functions 
    bool hasStrategyConfig() const { return this->strategyConfig_ != nullptr;};
    void deleteStrategyConfig() { this->strategyConfig_ = nullptr;};
    inline string strategyConfig() const { DARABONBA_PTR_GET_DEFAULT(strategyConfig_, "") };
    inline ModifyClientConfSetupRequest& setStrategyConfig(string strategyConfig) { DARABONBA_PTR_SET_VALUE(strategyConfig_, strategyConfig) };


    // strategyTag Field Functions 
    bool hasStrategyTag() const { return this->strategyTag_ != nullptr;};
    void deleteStrategyTag() { this->strategyTag_ = nullptr;};
    inline string strategyTag() const { DARABONBA_PTR_GET_DEFAULT(strategyTag_, "") };
    inline ModifyClientConfSetupRequest& setStrategyTag(string strategyTag) { DARABONBA_PTR_SET_VALUE(strategyTag_, strategyTag) };


    // strategyTagValue Field Functions 
    bool hasStrategyTagValue() const { return this->strategyTagValue_ != nullptr;};
    void deleteStrategyTagValue() { this->strategyTagValue_ = nullptr;};
    inline string strategyTagValue() const { DARABONBA_PTR_GET_DEFAULT(strategyTagValue_, "") };
    inline ModifyClientConfSetupRequest& setStrategyTagValue(string strategyTagValue) { DARABONBA_PTR_SET_VALUE(strategyTagValue_, strategyTagValue) };


  protected:
    // The configurations of the Security Center agent.
    // 
    // *   cpu: the maximum CPU utilization that can be occupied by the Security Center agent on the server
    // *   mem: the maximum memory usage that can be occupied by the Security Center agent on the server
    std::shared_ptr<string> strategyConfig_ = nullptr;
    // The type of the tag.
    // 
    // This parameter is required.
    std::shared_ptr<string> strategyTag_ = nullptr;
    // The value of the tag. Valid values:
    // 
    // *   major
    // *   advanced
    // *   basic
    // 
    // This parameter is required.
    std::shared_ptr<string> strategyTagValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
