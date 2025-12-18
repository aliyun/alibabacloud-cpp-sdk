// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGGREGATERESOURCECOMPLIANCEBYCONFIGRULERESPONSEBODYCOMPLIANCERESULT_HPP_
#define ALIBABACLOUD_MODELS_GETAGGREGATERESOURCECOMPLIANCEBYCONFIGRULERESPONSEBODYCOMPLIANCERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAggregateResourceComplianceByConfigRuleResponseBodyComplianceResultCompliances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetAggregateResourceComplianceByConfigRuleResponseBodyComplianceResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAggregateResourceComplianceByConfigRuleResponseBodyComplianceResult& obj) { 
      DARABONBA_PTR_TO_JSON(Compliances, compliances_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetAggregateResourceComplianceByConfigRuleResponseBodyComplianceResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Compliances, compliances_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    GetAggregateResourceComplianceByConfigRuleResponseBodyComplianceResult() = default ;
    GetAggregateResourceComplianceByConfigRuleResponseBodyComplianceResult(const GetAggregateResourceComplianceByConfigRuleResponseBodyComplianceResult &) = default ;
    GetAggregateResourceComplianceByConfigRuleResponseBodyComplianceResult(GetAggregateResourceComplianceByConfigRuleResponseBodyComplianceResult &&) = default ;
    GetAggregateResourceComplianceByConfigRuleResponseBodyComplianceResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAggregateResourceComplianceByConfigRuleResponseBodyComplianceResult() = default ;
    GetAggregateResourceComplianceByConfigRuleResponseBodyComplianceResult& operator=(const GetAggregateResourceComplianceByConfigRuleResponseBodyComplianceResult &) = default ;
    GetAggregateResourceComplianceByConfigRuleResponseBodyComplianceResult& operator=(GetAggregateResourceComplianceByConfigRuleResponseBodyComplianceResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->compliances_ == nullptr
        && return this->totalCount_ == nullptr; };
    // compliances Field Functions 
    bool hasCompliances() const { return this->compliances_ != nullptr;};
    void deleteCompliances() { this->compliances_ = nullptr;};
    inline const vector<Models::GetAggregateResourceComplianceByConfigRuleResponseBodyComplianceResultCompliances> & compliances() const { DARABONBA_PTR_GET_CONST(compliances_, vector<Models::GetAggregateResourceComplianceByConfigRuleResponseBodyComplianceResultCompliances>) };
    inline vector<Models::GetAggregateResourceComplianceByConfigRuleResponseBodyComplianceResultCompliances> compliances() { DARABONBA_PTR_GET(compliances_, vector<Models::GetAggregateResourceComplianceByConfigRuleResponseBodyComplianceResultCompliances>) };
    inline GetAggregateResourceComplianceByConfigRuleResponseBodyComplianceResult& setCompliances(const vector<Models::GetAggregateResourceComplianceByConfigRuleResponseBodyComplianceResultCompliances> & compliances) { DARABONBA_PTR_SET_VALUE(compliances_, compliances) };
    inline GetAggregateResourceComplianceByConfigRuleResponseBodyComplianceResult& setCompliances(vector<Models::GetAggregateResourceComplianceByConfigRuleResponseBodyComplianceResultCompliances> && compliances) { DARABONBA_PTR_SET_RVALUE(compliances_, compliances) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline GetAggregateResourceComplianceByConfigRuleResponseBodyComplianceResult& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The compliance list result.
    std::shared_ptr<vector<Models::GetAggregateResourceComplianceByConfigRuleResponseBodyComplianceResultCompliances>> compliances_ = nullptr;
    // The total number of evaluated resources.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
