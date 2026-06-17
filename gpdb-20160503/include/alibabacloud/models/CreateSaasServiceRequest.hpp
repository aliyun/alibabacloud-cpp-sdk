// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESAASSERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESAASSERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class CreateSaasServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSaasServiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Cu, cu_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(Plan, plan_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_TO_JSON(UsedTime, usedTime_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSaasServiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Cu, cu_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(Plan, plan_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_FROM_JSON(UsedTime, usedTime_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateSaasServiceRequest() = default ;
    CreateSaasServiceRequest(const CreateSaasServiceRequest &) = default ;
    CreateSaasServiceRequest(CreateSaasServiceRequest &&) = default ;
    CreateSaasServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSaasServiceRequest() = default ;
    CreateSaasServiceRequest& operator=(const CreateSaasServiceRequest &) = default ;
    CreateSaasServiceRequest& operator=(CreateSaasServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cu_ == nullptr
        && this->payType_ == nullptr && this->period_ == nullptr && this->plan_ == nullptr && this->regionId_ == nullptr && this->serviceType_ == nullptr
        && this->usedTime_ == nullptr && this->workspaceId_ == nullptr; };
    // cu Field Functions 
    bool hasCu() const { return this->cu_ != nullptr;};
    void deleteCu() { this->cu_ = nullptr;};
    inline int32_t getCu() const { DARABONBA_PTR_GET_DEFAULT(cu_, 0) };
    inline CreateSaasServiceRequest& setCu(int32_t cu) { DARABONBA_PTR_SET_VALUE(cu_, cu) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline CreateSaasServiceRequest& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline CreateSaasServiceRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // plan Field Functions 
    bool hasPlan() const { return this->plan_ != nullptr;};
    void deletePlan() { this->plan_ = nullptr;};
    inline string getPlan() const { DARABONBA_PTR_GET_DEFAULT(plan_, "") };
    inline CreateSaasServiceRequest& setPlan(string plan) { DARABONBA_PTR_SET_VALUE(plan_, plan) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateSaasServiceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline string getServiceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
    inline CreateSaasServiceRequest& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


    // usedTime Field Functions 
    bool hasUsedTime() const { return this->usedTime_ != nullptr;};
    void deleteUsedTime() { this->usedTime_ = nullptr;};
    inline string getUsedTime() const { DARABONBA_PTR_GET_DEFAULT(usedTime_, "") };
    inline CreateSaasServiceRequest& setUsedTime(string usedTime) { DARABONBA_PTR_SET_VALUE(usedTime_, usedTime) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateSaasServiceRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The compute resources of the SaaS service.
    shared_ptr<int32_t> cu_ {};
    // The billing method. Valid values:
    // 
    // - **Postpaid**: pay-as-you-go.
    // - **Prepaid**: subscription.
    // 
    // > - If you leave this parameter empty, a Free service is created by default.
    // > - The subscription billing method offers discounts for purchases of one year or longer. Select a billing method as needed.
    shared_ptr<string> payType_ {};
    // The unit of the duration for which you want to purchase the resource. Valid values:
    // - **Month**: month.
    // - **Year**: year.
    // 
    // > This parameter is required when you create a subscription instance.
    shared_ptr<string> period_ {};
    // Deprecated.
    shared_ptr<string> plan_ {};
    // The region ID of the instance.
    shared_ptr<string> regionId_ {};
    // The service type. Valid values:
    // 
    // - **memroy**
    // - **drama**.
    // 
    // This parameter is required.
    shared_ptr<string> serviceType_ {};
    // The duration for which you want to purchase the resource. Valid values:
    // - If **Period** is set to **Month**, the valid values are 1 to 11.
    // - If **Period** is set to **Year**, the valid values are 1 to 3.
    // 
    // > This parameter is required when you create a subscription instance.
    shared_ptr<string> usedTime_ {};
    // The workspace of the SaaS service.
    // 
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
