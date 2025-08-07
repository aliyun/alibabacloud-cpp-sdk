// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKSERVICEDEPLOYABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKSERVICEDEPLOYABLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class CheckServiceDeployableRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckServiceDeployableRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PostPaidAmount, postPaidAmount_);
      DARABONBA_PTR_TO_JSON(PrePaidAmount, prePaidAmount_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(ServiceVersion, serviceVersion_);
      DARABONBA_PTR_TO_JSON(TrialType, trialType_);
    };
    friend void from_json(const Darabonba::Json& j, CheckServiceDeployableRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PostPaidAmount, postPaidAmount_);
      DARABONBA_PTR_FROM_JSON(PrePaidAmount, prePaidAmount_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(ServiceVersion, serviceVersion_);
      DARABONBA_PTR_FROM_JSON(TrialType, trialType_);
    };
    CheckServiceDeployableRequest() = default ;
    CheckServiceDeployableRequest(const CheckServiceDeployableRequest &) = default ;
    CheckServiceDeployableRequest(CheckServiceDeployableRequest &&) = default ;
    CheckServiceDeployableRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckServiceDeployableRequest() = default ;
    CheckServiceDeployableRequest& operator=(const CheckServiceDeployableRequest &) = default ;
    CheckServiceDeployableRequest& operator=(CheckServiceDeployableRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->postPaidAmount_ != nullptr
        && this->prePaidAmount_ != nullptr && this->regionId_ != nullptr && this->serviceId_ != nullptr && this->serviceVersion_ != nullptr && this->trialType_ != nullptr; };
    // postPaidAmount Field Functions 
    bool hasPostPaidAmount() const { return this->postPaidAmount_ != nullptr;};
    void deletePostPaidAmount() { this->postPaidAmount_ = nullptr;};
    inline string postPaidAmount() const { DARABONBA_PTR_GET_DEFAULT(postPaidAmount_, "") };
    inline CheckServiceDeployableRequest& setPostPaidAmount(string postPaidAmount) { DARABONBA_PTR_SET_VALUE(postPaidAmount_, postPaidAmount) };


    // prePaidAmount Field Functions 
    bool hasPrePaidAmount() const { return this->prePaidAmount_ != nullptr;};
    void deletePrePaidAmount() { this->prePaidAmount_ = nullptr;};
    inline string prePaidAmount() const { DARABONBA_PTR_GET_DEFAULT(prePaidAmount_, "") };
    inline CheckServiceDeployableRequest& setPrePaidAmount(string prePaidAmount) { DARABONBA_PTR_SET_VALUE(prePaidAmount_, prePaidAmount) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CheckServiceDeployableRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline CheckServiceDeployableRequest& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceVersion Field Functions 
    bool hasServiceVersion() const { return this->serviceVersion_ != nullptr;};
    void deleteServiceVersion() { this->serviceVersion_ = nullptr;};
    inline string serviceVersion() const { DARABONBA_PTR_GET_DEFAULT(serviceVersion_, "") };
    inline CheckServiceDeployableRequest& setServiceVersion(string serviceVersion) { DARABONBA_PTR_SET_VALUE(serviceVersion_, serviceVersion) };


    // trialType Field Functions 
    bool hasTrialType() const { return this->trialType_ != nullptr;};
    void deleteTrialType() { this->trialType_ = nullptr;};
    inline string trialType() const { DARABONBA_PTR_GET_DEFAULT(trialType_, "") };
    inline CheckServiceDeployableRequest& setTrialType(string trialType) { DARABONBA_PTR_SET_VALUE(trialType_, trialType) };


  protected:
    // Total amount of postpaid.
    std::shared_ptr<string> postPaidAmount_ = nullptr;
    // Total amount of prepayment.
    std::shared_ptr<string> prePaidAmount_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The service ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceId_ = nullptr;
    // The service version.
    std::shared_ptr<string> serviceVersion_ = nullptr;
    // The trial type of the service instance. Valid values:
    // 
    // *   **Trial**: Trials are supported.
    // *   **NotTrial**: Trials are not supported.
    std::shared_ptr<string> trialType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
