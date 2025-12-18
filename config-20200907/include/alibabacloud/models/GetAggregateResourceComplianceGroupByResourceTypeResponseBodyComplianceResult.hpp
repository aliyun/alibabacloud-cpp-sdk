// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGGREGATERESOURCECOMPLIANCEGROUPBYRESOURCETYPERESPONSEBODYCOMPLIANCERESULT_HPP_
#define ALIBABACLOUD_MODELS_GETAGGREGATERESOURCECOMPLIANCEGROUPBYRESOURCETYPERESPONSEBODYCOMPLIANCERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAggregateResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetAggregateResourceComplianceGroupByResourceTypeResponseBodyComplianceResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAggregateResourceComplianceGroupByResourceTypeResponseBodyComplianceResult& obj) { 
      DARABONBA_PTR_TO_JSON(ComplianceResultList, complianceResultList_);
    };
    friend void from_json(const Darabonba::Json& j, GetAggregateResourceComplianceGroupByResourceTypeResponseBodyComplianceResult& obj) { 
      DARABONBA_PTR_FROM_JSON(ComplianceResultList, complianceResultList_);
    };
    GetAggregateResourceComplianceGroupByResourceTypeResponseBodyComplianceResult() = default ;
    GetAggregateResourceComplianceGroupByResourceTypeResponseBodyComplianceResult(const GetAggregateResourceComplianceGroupByResourceTypeResponseBodyComplianceResult &) = default ;
    GetAggregateResourceComplianceGroupByResourceTypeResponseBodyComplianceResult(GetAggregateResourceComplianceGroupByResourceTypeResponseBodyComplianceResult &&) = default ;
    GetAggregateResourceComplianceGroupByResourceTypeResponseBodyComplianceResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAggregateResourceComplianceGroupByResourceTypeResponseBodyComplianceResult() = default ;
    GetAggregateResourceComplianceGroupByResourceTypeResponseBodyComplianceResult& operator=(const GetAggregateResourceComplianceGroupByResourceTypeResponseBodyComplianceResult &) = default ;
    GetAggregateResourceComplianceGroupByResourceTypeResponseBodyComplianceResult& operator=(GetAggregateResourceComplianceGroupByResourceTypeResponseBodyComplianceResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->complianceResultList_ == nullptr; };
    // complianceResultList Field Functions 
    bool hasComplianceResultList() const { return this->complianceResultList_ != nullptr;};
    void deleteComplianceResultList() { this->complianceResultList_ = nullptr;};
    inline const vector<Models::GetAggregateResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultList> & complianceResultList() const { DARABONBA_PTR_GET_CONST(complianceResultList_, vector<Models::GetAggregateResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultList>) };
    inline vector<Models::GetAggregateResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultList> complianceResultList() { DARABONBA_PTR_GET(complianceResultList_, vector<Models::GetAggregateResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultList>) };
    inline GetAggregateResourceComplianceGroupByResourceTypeResponseBodyComplianceResult& setComplianceResultList(const vector<Models::GetAggregateResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultList> & complianceResultList) { DARABONBA_PTR_SET_VALUE(complianceResultList_, complianceResultList) };
    inline GetAggregateResourceComplianceGroupByResourceTypeResponseBodyComplianceResult& setComplianceResultList(vector<Models::GetAggregateResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultList> && complianceResultList) { DARABONBA_PTR_SET_RVALUE(complianceResultList_, complianceResultList) };


  protected:
    // The evaluation results grouped by resource type.
    std::shared_ptr<vector<Models::GetAggregateResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultList>> complianceResultList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
