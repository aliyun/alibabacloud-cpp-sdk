// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCECOMPLIANCEGROUPBYREGIONRESPONSEBODYCOMPLIANCERESULT_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCECOMPLIANCEGROUPBYREGIONRESPONSEBODYCOMPLIANCERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetResourceComplianceGroupByRegionResponseBodyComplianceResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceComplianceGroupByRegionResponseBodyComplianceResult& obj) { 
      DARABONBA_PTR_TO_JSON(ComplianceResultList, complianceResultList_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceComplianceGroupByRegionResponseBodyComplianceResult& obj) { 
      DARABONBA_PTR_FROM_JSON(ComplianceResultList, complianceResultList_);
    };
    GetResourceComplianceGroupByRegionResponseBodyComplianceResult() = default ;
    GetResourceComplianceGroupByRegionResponseBodyComplianceResult(const GetResourceComplianceGroupByRegionResponseBodyComplianceResult &) = default ;
    GetResourceComplianceGroupByRegionResponseBodyComplianceResult(GetResourceComplianceGroupByRegionResponseBodyComplianceResult &&) = default ;
    GetResourceComplianceGroupByRegionResponseBodyComplianceResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceComplianceGroupByRegionResponseBodyComplianceResult() = default ;
    GetResourceComplianceGroupByRegionResponseBodyComplianceResult& operator=(const GetResourceComplianceGroupByRegionResponseBodyComplianceResult &) = default ;
    GetResourceComplianceGroupByRegionResponseBodyComplianceResult& operator=(GetResourceComplianceGroupByRegionResponseBodyComplianceResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->complianceResultList_ == nullptr; };
    // complianceResultList Field Functions 
    bool hasComplianceResultList() const { return this->complianceResultList_ != nullptr;};
    void deleteComplianceResultList() { this->complianceResultList_ = nullptr;};
    inline const vector<Models::GetResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultList> & complianceResultList() const { DARABONBA_PTR_GET_CONST(complianceResultList_, vector<Models::GetResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultList>) };
    inline vector<Models::GetResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultList> complianceResultList() { DARABONBA_PTR_GET(complianceResultList_, vector<Models::GetResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultList>) };
    inline GetResourceComplianceGroupByRegionResponseBodyComplianceResult& setComplianceResultList(const vector<Models::GetResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultList> & complianceResultList) { DARABONBA_PTR_SET_VALUE(complianceResultList_, complianceResultList) };
    inline GetResourceComplianceGroupByRegionResponseBodyComplianceResult& setComplianceResultList(vector<Models::GetResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultList> && complianceResultList) { DARABONBA_PTR_SET_RVALUE(complianceResultList_, complianceResultList) };


  protected:
    // The evaluation results grouped by region.
    std::shared_ptr<vector<Models::GetResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultList>> complianceResultList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
