// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISABLEAPPLICATIONSCALINGRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISABLEAPPLICATIONSCALINGRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DisableApplicationScalingRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisableApplicationScalingRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ScalingRuleName, scalingRuleName_);
    };
    friend void from_json(const Darabonba::Json& j, DisableApplicationScalingRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ScalingRuleName, scalingRuleName_);
    };
    DisableApplicationScalingRuleRequest() = default ;
    DisableApplicationScalingRuleRequest(const DisableApplicationScalingRuleRequest &) = default ;
    DisableApplicationScalingRuleRequest(DisableApplicationScalingRuleRequest &&) = default ;
    DisableApplicationScalingRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisableApplicationScalingRuleRequest() = default ;
    DisableApplicationScalingRuleRequest& operator=(const DisableApplicationScalingRuleRequest &) = default ;
    DisableApplicationScalingRuleRequest& operator=(DisableApplicationScalingRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->scalingRuleName_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DisableApplicationScalingRuleRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // scalingRuleName Field Functions 
    bool hasScalingRuleName() const { return this->scalingRuleName_ != nullptr;};
    void deleteScalingRuleName() { this->scalingRuleName_ = nullptr;};
    inline string scalingRuleName() const { DARABONBA_PTR_GET_DEFAULT(scalingRuleName_, "") };
    inline DisableApplicationScalingRuleRequest& setScalingRuleName(string scalingRuleName) { DARABONBA_PTR_SET_VALUE(scalingRuleName_, scalingRuleName) };


  protected:
    // timer-0800-2100
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The ID of the request.
    // 
    // This parameter is required.
    std::shared_ptr<string> scalingRuleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
