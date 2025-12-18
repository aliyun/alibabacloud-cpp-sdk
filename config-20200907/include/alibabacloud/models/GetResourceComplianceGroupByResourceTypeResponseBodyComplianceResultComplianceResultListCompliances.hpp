// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCECOMPLIANCEGROUPBYRESOURCETYPERESPONSEBODYCOMPLIANCERESULTCOMPLIANCERESULTLISTCOMPLIANCES_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCECOMPLIANCEGROUPBYRESOURCETYPERESPONSEBODYCOMPLIANCERESULTCOMPLIANCERESULTLISTCOMPLIANCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultListCompliances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultListCompliances& obj) { 
      DARABONBA_PTR_TO_JSON(ComplianceType, complianceType_);
      DARABONBA_PTR_TO_JSON(Count, count_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultListCompliances& obj) { 
      DARABONBA_PTR_FROM_JSON(ComplianceType, complianceType_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
    };
    GetResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultListCompliances() = default ;
    GetResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultListCompliances(const GetResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultListCompliances &) = default ;
    GetResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultListCompliances(GetResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultListCompliances &&) = default ;
    GetResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultListCompliances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultListCompliances() = default ;
    GetResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultListCompliances& operator=(const GetResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultListCompliances &) = default ;
    GetResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultListCompliances& operator=(GetResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultListCompliances &&) = default ;
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
    inline GetResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultListCompliances& setComplianceType(string complianceType) { DARABONBA_PTR_SET_VALUE(complianceType_, complianceType) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline GetResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultListCompliances& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


  protected:
    // The evaluation result. Valid values:
    // 
    // *   COMPLIANT: The resource is evaluated as compliant.
    // *   NON_COMPLIANT: The resource is evaluated as non-compliant.
    // *   NOT_APPLICABLE: The rule does not apply to the resource.
    // *   INSUFFICIENT_DATA: No data is available.
    std::shared_ptr<string> complianceType_ = nullptr;
    // The total number of evaluation results.
    std::shared_ptr<int64_t> count_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
