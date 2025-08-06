// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPLANSPECIFICATIONFORLICENSEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPLANSPECIFICATIONFORLICENSEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetPlanSpecificationForLicenseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPlanSpecificationForLicenseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FromApp, fromApp_);
      DARABONBA_PTR_TO_JSON(NeedItemSpecification, needItemSpecification_);
      DARABONBA_PTR_TO_JSON(PlanCode, planCode_);
      DARABONBA_PTR_TO_JSON(PlanId, planId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPlanSpecificationForLicenseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FromApp, fromApp_);
      DARABONBA_PTR_FROM_JSON(NeedItemSpecification, needItemSpecification_);
      DARABONBA_PTR_FROM_JSON(PlanCode, planCode_);
      DARABONBA_PTR_FROM_JSON(PlanId, planId_);
    };
    GetPlanSpecificationForLicenseRequest() = default ;
    GetPlanSpecificationForLicenseRequest(const GetPlanSpecificationForLicenseRequest &) = default ;
    GetPlanSpecificationForLicenseRequest(GetPlanSpecificationForLicenseRequest &&) = default ;
    GetPlanSpecificationForLicenseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPlanSpecificationForLicenseRequest() = default ;
    GetPlanSpecificationForLicenseRequest& operator=(const GetPlanSpecificationForLicenseRequest &) = default ;
    GetPlanSpecificationForLicenseRequest& operator=(GetPlanSpecificationForLicenseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fromApp_ != nullptr
        && this->needItemSpecification_ != nullptr && this->planCode_ != nullptr && this->planId_ != nullptr; };
    // fromApp Field Functions 
    bool hasFromApp() const { return this->fromApp_ != nullptr;};
    void deleteFromApp() { this->fromApp_ = nullptr;};
    inline string fromApp() const { DARABONBA_PTR_GET_DEFAULT(fromApp_, "") };
    inline GetPlanSpecificationForLicenseRequest& setFromApp(string fromApp) { DARABONBA_PTR_SET_VALUE(fromApp_, fromApp) };


    // needItemSpecification Field Functions 
    bool hasNeedItemSpecification() const { return this->needItemSpecification_ != nullptr;};
    void deleteNeedItemSpecification() { this->needItemSpecification_ = nullptr;};
    inline bool needItemSpecification() const { DARABONBA_PTR_GET_DEFAULT(needItemSpecification_, false) };
    inline GetPlanSpecificationForLicenseRequest& setNeedItemSpecification(bool needItemSpecification) { DARABONBA_PTR_SET_VALUE(needItemSpecification_, needItemSpecification) };


    // planCode Field Functions 
    bool hasPlanCode() const { return this->planCode_ != nullptr;};
    void deletePlanCode() { this->planCode_ = nullptr;};
    inline string planCode() const { DARABONBA_PTR_GET_DEFAULT(planCode_, "") };
    inline GetPlanSpecificationForLicenseRequest& setPlanCode(string planCode) { DARABONBA_PTR_SET_VALUE(planCode_, planCode) };


    // planId Field Functions 
    bool hasPlanId() const { return this->planId_ != nullptr;};
    void deletePlanId() { this->planId_ = nullptr;};
    inline string planId() const { DARABONBA_PTR_GET_DEFAULT(planId_, "") };
    inline GetPlanSpecificationForLicenseRequest& setPlanId(string planId) { DARABONBA_PTR_SET_VALUE(planId_, planId) };


  protected:
    std::shared_ptr<string> fromApp_ = nullptr;
    std::shared_ptr<bool> needItemSpecification_ = nullptr;
    std::shared_ptr<string> planCode_ = nullptr;
    std::shared_ptr<string> planId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
