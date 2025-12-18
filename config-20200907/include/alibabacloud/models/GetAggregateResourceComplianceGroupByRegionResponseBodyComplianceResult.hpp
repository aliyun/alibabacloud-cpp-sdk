// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGGREGATERESOURCECOMPLIANCEGROUPBYREGIONRESPONSEBODYCOMPLIANCERESULT_HPP_
#define ALIBABACLOUD_MODELS_GETAGGREGATERESOURCECOMPLIANCEGROUPBYREGIONRESPONSEBODYCOMPLIANCERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAggregateResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetAggregateResourceComplianceGroupByRegionResponseBodyComplianceResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAggregateResourceComplianceGroupByRegionResponseBodyComplianceResult& obj) { 
      DARABONBA_PTR_TO_JSON(ComplianceResultList, complianceResultList_);
    };
    friend void from_json(const Darabonba::Json& j, GetAggregateResourceComplianceGroupByRegionResponseBodyComplianceResult& obj) { 
      DARABONBA_PTR_FROM_JSON(ComplianceResultList, complianceResultList_);
    };
    GetAggregateResourceComplianceGroupByRegionResponseBodyComplianceResult() = default ;
    GetAggregateResourceComplianceGroupByRegionResponseBodyComplianceResult(const GetAggregateResourceComplianceGroupByRegionResponseBodyComplianceResult &) = default ;
    GetAggregateResourceComplianceGroupByRegionResponseBodyComplianceResult(GetAggregateResourceComplianceGroupByRegionResponseBodyComplianceResult &&) = default ;
    GetAggregateResourceComplianceGroupByRegionResponseBodyComplianceResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAggregateResourceComplianceGroupByRegionResponseBodyComplianceResult() = default ;
    GetAggregateResourceComplianceGroupByRegionResponseBodyComplianceResult& operator=(const GetAggregateResourceComplianceGroupByRegionResponseBodyComplianceResult &) = default ;
    GetAggregateResourceComplianceGroupByRegionResponseBodyComplianceResult& operator=(GetAggregateResourceComplianceGroupByRegionResponseBodyComplianceResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->complianceResultList_ == nullptr; };
    // complianceResultList Field Functions 
    bool hasComplianceResultList() const { return this->complianceResultList_ != nullptr;};
    void deleteComplianceResultList() { this->complianceResultList_ = nullptr;};
    inline const vector<Models::GetAggregateResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultList> & complianceResultList() const { DARABONBA_PTR_GET_CONST(complianceResultList_, vector<Models::GetAggregateResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultList>) };
    inline vector<Models::GetAggregateResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultList> complianceResultList() { DARABONBA_PTR_GET(complianceResultList_, vector<Models::GetAggregateResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultList>) };
    inline GetAggregateResourceComplianceGroupByRegionResponseBodyComplianceResult& setComplianceResultList(const vector<Models::GetAggregateResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultList> & complianceResultList) { DARABONBA_PTR_SET_VALUE(complianceResultList_, complianceResultList) };
    inline GetAggregateResourceComplianceGroupByRegionResponseBodyComplianceResult& setComplianceResultList(vector<Models::GetAggregateResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultList> && complianceResultList) { DARABONBA_PTR_SET_RVALUE(complianceResultList_, complianceResultList) };


  protected:
    // The evaluation results grouped by region.
    std::shared_ptr<vector<Models::GetAggregateResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultList>> complianceResultList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
