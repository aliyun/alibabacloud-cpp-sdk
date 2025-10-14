// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WAFRULECONFIGAPPSDK_HPP_
#define ALIBABACLOUD_MODELS_WAFRULECONFIGAPPSDK_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/WafRuleConfigAppSdkCustomSign.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class WafRuleConfigAppSdk : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WafRuleConfigAppSdk& obj) { 
      DARABONBA_PTR_TO_JSON(CustomSign, customSign_);
      DARABONBA_PTR_TO_JSON(CustomSignStatus, customSignStatus_);
      DARABONBA_PTR_TO_JSON(FeatureAbnormal, featureAbnormal_);
    };
    friend void from_json(const Darabonba::Json& j, WafRuleConfigAppSdk& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomSign, customSign_);
      DARABONBA_PTR_FROM_JSON(CustomSignStatus, customSignStatus_);
      DARABONBA_PTR_FROM_JSON(FeatureAbnormal, featureAbnormal_);
    };
    WafRuleConfigAppSdk() = default ;
    WafRuleConfigAppSdk(const WafRuleConfigAppSdk &) = default ;
    WafRuleConfigAppSdk(WafRuleConfigAppSdk &&) = default ;
    WafRuleConfigAppSdk(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WafRuleConfigAppSdk() = default ;
    WafRuleConfigAppSdk& operator=(const WafRuleConfigAppSdk &) = default ;
    WafRuleConfigAppSdk& operator=(WafRuleConfigAppSdk &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customSign_ == nullptr
        && return this->customSignStatus_ == nullptr && return this->featureAbnormal_ == nullptr; };
    // customSign Field Functions 
    bool hasCustomSign() const { return this->customSign_ != nullptr;};
    void deleteCustomSign() { this->customSign_ = nullptr;};
    inline const Models::WafRuleConfigAppSdkCustomSign & customSign() const { DARABONBA_PTR_GET_CONST(customSign_, Models::WafRuleConfigAppSdkCustomSign) };
    inline Models::WafRuleConfigAppSdkCustomSign customSign() { DARABONBA_PTR_GET(customSign_, Models::WafRuleConfigAppSdkCustomSign) };
    inline WafRuleConfigAppSdk& setCustomSign(const Models::WafRuleConfigAppSdkCustomSign & customSign) { DARABONBA_PTR_SET_VALUE(customSign_, customSign) };
    inline WafRuleConfigAppSdk& setCustomSign(Models::WafRuleConfigAppSdkCustomSign && customSign) { DARABONBA_PTR_SET_RVALUE(customSign_, customSign) };


    // customSignStatus Field Functions 
    bool hasCustomSignStatus() const { return this->customSignStatus_ != nullptr;};
    void deleteCustomSignStatus() { this->customSignStatus_ = nullptr;};
    inline string customSignStatus() const { DARABONBA_PTR_GET_DEFAULT(customSignStatus_, "") };
    inline WafRuleConfigAppSdk& setCustomSignStatus(string customSignStatus) { DARABONBA_PTR_SET_VALUE(customSignStatus_, customSignStatus) };


    // featureAbnormal Field Functions 
    bool hasFeatureAbnormal() const { return this->featureAbnormal_ != nullptr;};
    void deleteFeatureAbnormal() { this->featureAbnormal_ = nullptr;};
    inline const vector<string> & featureAbnormal() const { DARABONBA_PTR_GET_CONST(featureAbnormal_, vector<string>) };
    inline vector<string> featureAbnormal() { DARABONBA_PTR_GET(featureAbnormal_, vector<string>) };
    inline WafRuleConfigAppSdk& setFeatureAbnormal(const vector<string> & featureAbnormal) { DARABONBA_PTR_SET_VALUE(featureAbnormal_, featureAbnormal) };
    inline WafRuleConfigAppSdk& setFeatureAbnormal(vector<string> && featureAbnormal) { DARABONBA_PTR_SET_RVALUE(featureAbnormal_, featureAbnormal) };


  protected:
    std::shared_ptr<Models::WafRuleConfigAppSdkCustomSign> customSign_ = nullptr;
    std::shared_ptr<string> customSignStatus_ = nullptr;
    std::shared_ptr<vector<string>> featureAbnormal_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
