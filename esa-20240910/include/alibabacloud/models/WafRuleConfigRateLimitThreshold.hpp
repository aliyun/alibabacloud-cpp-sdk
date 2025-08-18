// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WAFRULECONFIGRATELIMITTHRESHOLD_HPP_
#define ALIBABACLOUD_MODELS_WAFRULECONFIGRATELIMITTHRESHOLD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/WafRuleConfigRateLimitThresholdResponseStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class WafRuleConfigRateLimitThreshold : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WafRuleConfigRateLimitThreshold& obj) { 
      DARABONBA_PTR_TO_JSON(DistinctManagedRules, distinctManagedRules_);
      DARABONBA_PTR_TO_JSON(ManagedRulesBlocked, managedRulesBlocked_);
      DARABONBA_PTR_TO_JSON(Request, request_);
      DARABONBA_PTR_TO_JSON(ResponseStatus, responseStatus_);
      DARABONBA_PTR_TO_JSON(Traffic, traffic_);
    };
    friend void from_json(const Darabonba::Json& j, WafRuleConfigRateLimitThreshold& obj) { 
      DARABONBA_PTR_FROM_JSON(DistinctManagedRules, distinctManagedRules_);
      DARABONBA_PTR_FROM_JSON(ManagedRulesBlocked, managedRulesBlocked_);
      DARABONBA_PTR_FROM_JSON(Request, request_);
      DARABONBA_PTR_FROM_JSON(ResponseStatus, responseStatus_);
      DARABONBA_PTR_FROM_JSON(Traffic, traffic_);
    };
    WafRuleConfigRateLimitThreshold() = default ;
    WafRuleConfigRateLimitThreshold(const WafRuleConfigRateLimitThreshold &) = default ;
    WafRuleConfigRateLimitThreshold(WafRuleConfigRateLimitThreshold &&) = default ;
    WafRuleConfigRateLimitThreshold(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WafRuleConfigRateLimitThreshold() = default ;
    WafRuleConfigRateLimitThreshold& operator=(const WafRuleConfigRateLimitThreshold &) = default ;
    WafRuleConfigRateLimitThreshold& operator=(WafRuleConfigRateLimitThreshold &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->distinctManagedRules_ != nullptr
        && this->managedRulesBlocked_ != nullptr && this->request_ != nullptr && this->responseStatus_ != nullptr && this->traffic_ != nullptr; };
    // distinctManagedRules Field Functions 
    bool hasDistinctManagedRules() const { return this->distinctManagedRules_ != nullptr;};
    void deleteDistinctManagedRules() { this->distinctManagedRules_ = nullptr;};
    inline int32_t distinctManagedRules() const { DARABONBA_PTR_GET_DEFAULT(distinctManagedRules_, 0) };
    inline WafRuleConfigRateLimitThreshold& setDistinctManagedRules(int32_t distinctManagedRules) { DARABONBA_PTR_SET_VALUE(distinctManagedRules_, distinctManagedRules) };


    // managedRulesBlocked Field Functions 
    bool hasManagedRulesBlocked() const { return this->managedRulesBlocked_ != nullptr;};
    void deleteManagedRulesBlocked() { this->managedRulesBlocked_ = nullptr;};
    inline int32_t managedRulesBlocked() const { DARABONBA_PTR_GET_DEFAULT(managedRulesBlocked_, 0) };
    inline WafRuleConfigRateLimitThreshold& setManagedRulesBlocked(int32_t managedRulesBlocked) { DARABONBA_PTR_SET_VALUE(managedRulesBlocked_, managedRulesBlocked) };


    // request Field Functions 
    bool hasRequest() const { return this->request_ != nullptr;};
    void deleteRequest() { this->request_ = nullptr;};
    inline int32_t request() const { DARABONBA_PTR_GET_DEFAULT(request_, 0) };
    inline WafRuleConfigRateLimitThreshold& setRequest(int32_t request) { DARABONBA_PTR_SET_VALUE(request_, request) };


    // responseStatus Field Functions 
    bool hasResponseStatus() const { return this->responseStatus_ != nullptr;};
    void deleteResponseStatus() { this->responseStatus_ = nullptr;};
    inline const Models::WafRuleConfigRateLimitThresholdResponseStatus & responseStatus() const { DARABONBA_PTR_GET_CONST(responseStatus_, Models::WafRuleConfigRateLimitThresholdResponseStatus) };
    inline Models::WafRuleConfigRateLimitThresholdResponseStatus responseStatus() { DARABONBA_PTR_GET(responseStatus_, Models::WafRuleConfigRateLimitThresholdResponseStatus) };
    inline WafRuleConfigRateLimitThreshold& setResponseStatus(const Models::WafRuleConfigRateLimitThresholdResponseStatus & responseStatus) { DARABONBA_PTR_SET_VALUE(responseStatus_, responseStatus) };
    inline WafRuleConfigRateLimitThreshold& setResponseStatus(Models::WafRuleConfigRateLimitThresholdResponseStatus && responseStatus) { DARABONBA_PTR_SET_RVALUE(responseStatus_, responseStatus) };


    // traffic Field Functions 
    bool hasTraffic() const { return this->traffic_ != nullptr;};
    void deleteTraffic() { this->traffic_ = nullptr;};
    inline string traffic() const { DARABONBA_PTR_GET_DEFAULT(traffic_, "") };
    inline WafRuleConfigRateLimitThreshold& setTraffic(string traffic) { DARABONBA_PTR_SET_VALUE(traffic_, traffic) };


  protected:
    std::shared_ptr<int32_t> distinctManagedRules_ = nullptr;
    std::shared_ptr<int32_t> managedRulesBlocked_ = nullptr;
    std::shared_ptr<int32_t> request_ = nullptr;
    std::shared_ptr<Models::WafRuleConfigRateLimitThresholdResponseStatus> responseStatus_ = nullptr;
    std::shared_ptr<string> traffic_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
