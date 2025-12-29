// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONSCALINGRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONSCALINGRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeApplicationScalingRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationScalingRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ScalingRuleName, scalingRuleName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationScalingRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ScalingRuleName, scalingRuleName_);
    };
    DescribeApplicationScalingRuleRequest() = default ;
    DescribeApplicationScalingRuleRequest(const DescribeApplicationScalingRuleRequest &) = default ;
    DescribeApplicationScalingRuleRequest(DescribeApplicationScalingRuleRequest &&) = default ;
    DescribeApplicationScalingRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationScalingRuleRequest() = default ;
    DescribeApplicationScalingRuleRequest& operator=(const DescribeApplicationScalingRuleRequest &) = default ;
    DescribeApplicationScalingRuleRequest& operator=(DescribeApplicationScalingRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->scalingRuleName_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeApplicationScalingRuleRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // scalingRuleName Field Functions 
    bool hasScalingRuleName() const { return this->scalingRuleName_ != nullptr;};
    void deleteScalingRuleName() { this->scalingRuleName_ = nullptr;};
    inline string getScalingRuleName() const { DARABONBA_PTR_GET_DEFAULT(scalingRuleName_, "") };
    inline DescribeApplicationScalingRuleRequest& setScalingRuleName(string scalingRuleName) { DARABONBA_PTR_SET_VALUE(scalingRuleName_, scalingRuleName) };


  protected:
    // a0d2e04c-159d-40a8-b240-d2f2c263\\*\\*\\*\\*
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // test
    // 
    // This parameter is required.
    shared_ptr<string> scalingRuleName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
