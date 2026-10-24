// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLIENTRULESTRATEGYSTATISTICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCLIENTRULESTRATEGYSTATISTICSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CsasEdr20241122
{
namespace Models
{
  class GetClientRuleStrategyStatisticsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClientRuleStrategyStatisticsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
    };
    friend void from_json(const Darabonba::Json& j, GetClientRuleStrategyStatisticsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
    };
    GetClientRuleStrategyStatisticsRequest() = default ;
    GetClientRuleStrategyStatisticsRequest(const GetClientRuleStrategyStatisticsRequest &) = default ;
    GetClientRuleStrategyStatisticsRequest(GetClientRuleStrategyStatisticsRequest &&) = default ;
    GetClientRuleStrategyStatisticsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClientRuleStrategyStatisticsRequest() = default ;
    GetClientRuleStrategyStatisticsRequest& operator=(const GetClientRuleStrategyStatisticsRequest &) = default ;
    GetClientRuleStrategyStatisticsRequest& operator=(GetClientRuleStrategyStatisticsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->policyType_ == nullptr; };
    // policyType Field Functions 
    bool hasPolicyType() const { return this->policyType_ != nullptr;};
    void deletePolicyType() { this->policyType_ = nullptr;};
    inline int32_t getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, 0) };
    inline GetClientRuleStrategyStatisticsRequest& setPolicyType(int32_t policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


  protected:
    // The policy type. Set this parameter to 2 to query the statistics of proactive defense policies.
    // 
    // This parameter is required.
    shared_ptr<int32_t> policyType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CsasEdr20241122
#endif
