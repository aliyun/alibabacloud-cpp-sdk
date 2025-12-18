// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCECOMPLIANCEGROUPBYRESOURCETYPERESPONSEBODYCOMPLIANCERESULT_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCECOMPLIANCEGROUPBYRESOURCETYPERESPONSEBODYCOMPLIANCERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetResourceComplianceGroupByResourceTypeResponseBodyComplianceResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceComplianceGroupByResourceTypeResponseBodyComplianceResult& obj) { 
      DARABONBA_PTR_TO_JSON(ComplianceResultList, complianceResultList_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceComplianceGroupByResourceTypeResponseBodyComplianceResult& obj) { 
      DARABONBA_PTR_FROM_JSON(ComplianceResultList, complianceResultList_);
    };
    GetResourceComplianceGroupByResourceTypeResponseBodyComplianceResult() = default ;
    GetResourceComplianceGroupByResourceTypeResponseBodyComplianceResult(const GetResourceComplianceGroupByResourceTypeResponseBodyComplianceResult &) = default ;
    GetResourceComplianceGroupByResourceTypeResponseBodyComplianceResult(GetResourceComplianceGroupByResourceTypeResponseBodyComplianceResult &&) = default ;
    GetResourceComplianceGroupByResourceTypeResponseBodyComplianceResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceComplianceGroupByResourceTypeResponseBodyComplianceResult() = default ;
    GetResourceComplianceGroupByResourceTypeResponseBodyComplianceResult& operator=(const GetResourceComplianceGroupByResourceTypeResponseBodyComplianceResult &) = default ;
    GetResourceComplianceGroupByResourceTypeResponseBodyComplianceResult& operator=(GetResourceComplianceGroupByResourceTypeResponseBodyComplianceResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->complianceResultList_ == nullptr; };
    // complianceResultList Field Functions 
    bool hasComplianceResultList() const { return this->complianceResultList_ != nullptr;};
    void deleteComplianceResultList() { this->complianceResultList_ = nullptr;};
    inline const vector<Models::GetResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultList> & complianceResultList() const { DARABONBA_PTR_GET_CONST(complianceResultList_, vector<Models::GetResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultList>) };
    inline vector<Models::GetResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultList> complianceResultList() { DARABONBA_PTR_GET(complianceResultList_, vector<Models::GetResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultList>) };
    inline GetResourceComplianceGroupByResourceTypeResponseBodyComplianceResult& setComplianceResultList(const vector<Models::GetResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultList> & complianceResultList) { DARABONBA_PTR_SET_VALUE(complianceResultList_, complianceResultList) };
    inline GetResourceComplianceGroupByResourceTypeResponseBodyComplianceResult& setComplianceResultList(vector<Models::GetResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultList> && complianceResultList) { DARABONBA_PTR_SET_RVALUE(complianceResultList_, complianceResultList) };


  protected:
    // The evaluation results grouped by resource type.
    std::shared_ptr<vector<Models::GetResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultList>> complianceResultList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
