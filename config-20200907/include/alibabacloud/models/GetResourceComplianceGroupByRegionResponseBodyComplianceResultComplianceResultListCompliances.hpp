// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCECOMPLIANCEGROUPBYREGIONRESPONSEBODYCOMPLIANCERESULTCOMPLIANCERESULTLISTCOMPLIANCES_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCECOMPLIANCEGROUPBYREGIONRESPONSEBODYCOMPLIANCERESULTCOMPLIANCERESULTLISTCOMPLIANCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultListCompliances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultListCompliances& obj) { 
      DARABONBA_PTR_TO_JSON(ComplianceType, complianceType_);
      DARABONBA_PTR_TO_JSON(Count, count_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultListCompliances& obj) { 
      DARABONBA_PTR_FROM_JSON(ComplianceType, complianceType_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
    };
    GetResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultListCompliances() = default ;
    GetResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultListCompliances(const GetResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultListCompliances &) = default ;
    GetResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultListCompliances(GetResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultListCompliances &&) = default ;
    GetResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultListCompliances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultListCompliances() = default ;
    GetResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultListCompliances& operator=(const GetResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultListCompliances &) = default ;
    GetResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultListCompliances& operator=(GetResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultListCompliances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->complianceType_ == nullptr
        && return this->count_ == nullptr; };
    // complianceType Field Functions 
    bool hasComplianceType() const { return this->complianceType_ != nullptr;};
    void deleteComplianceType() { this->complianceType_ = nullptr;};
    inline string complianceType() const { DARABONBA_PTR_GET_DEFAULT(complianceType_, "") };
    inline GetResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultListCompliances& setComplianceType(string complianceType) { DARABONBA_PTR_SET_VALUE(complianceType_, complianceType) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline GetResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultListCompliances& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


  protected:
    // The evaluation result. Valid values:
    // 
    // *   COMPLIANT: The resources are evaluated as compliant.
    // *   NON_COMPLIANT: The resources are evaluated as non-compliant.
    // *   NOT_APPLICABLE: The rule does not apply to the resources.
    // *   INSUFFICIENT_DATA: No resource data is available.
    std::shared_ptr<string> complianceType_ = nullptr;
    // The total number of evaluation results.
    std::shared_ptr<int64_t> count_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
