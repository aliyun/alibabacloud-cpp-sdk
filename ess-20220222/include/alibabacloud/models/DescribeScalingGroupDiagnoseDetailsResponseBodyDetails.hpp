// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCALINGGROUPDIAGNOSEDETAILSRESPONSEBODYDETAILS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCALINGGROUPDIAGNOSEDETAILSRESPONSEBODYDETAILS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeScalingGroupDiagnoseDetailsResponseBodyDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScalingGroupDiagnoseDetailsResponseBodyDetails& obj) { 
      DARABONBA_PTR_TO_JSON(DiagnoseType, diagnoseType_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScalingGroupDiagnoseDetailsResponseBodyDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(DiagnoseType, diagnoseType_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeScalingGroupDiagnoseDetailsResponseBodyDetails() = default ;
    DescribeScalingGroupDiagnoseDetailsResponseBodyDetails(const DescribeScalingGroupDiagnoseDetailsResponseBodyDetails &) = default ;
    DescribeScalingGroupDiagnoseDetailsResponseBodyDetails(DescribeScalingGroupDiagnoseDetailsResponseBodyDetails &&) = default ;
    DescribeScalingGroupDiagnoseDetailsResponseBodyDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScalingGroupDiagnoseDetailsResponseBodyDetails() = default ;
    DescribeScalingGroupDiagnoseDetailsResponseBodyDetails& operator=(const DescribeScalingGroupDiagnoseDetailsResponseBodyDetails &) = default ;
    DescribeScalingGroupDiagnoseDetailsResponseBodyDetails& operator=(DescribeScalingGroupDiagnoseDetailsResponseBodyDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->diagnoseType_ == nullptr
        && return this->errorCode_ == nullptr && return this->resourceId_ == nullptr && return this->status_ == nullptr; };
    // diagnoseType Field Functions 
    bool hasDiagnoseType() const { return this->diagnoseType_ != nullptr;};
    void deleteDiagnoseType() { this->diagnoseType_ = nullptr;};
    inline string diagnoseType() const { DARABONBA_PTR_GET_DEFAULT(diagnoseType_, "") };
    inline DescribeScalingGroupDiagnoseDetailsResponseBodyDetails& setDiagnoseType(string diagnoseType) { DARABONBA_PTR_SET_VALUE(diagnoseType_, diagnoseType) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DescribeScalingGroupDiagnoseDetailsResponseBodyDetails& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline DescribeScalingGroupDiagnoseDetailsResponseBodyDetails& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeScalingGroupDiagnoseDetailsResponseBodyDetails& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The type of the diagnostic item. Valid values:
    // 
    // *   AccountArrearage: Checks whether your Alibaba Cloud account has overdue payments.
    // *   AccountNotEnoughBalance: Checks whether the balance of your Alibaba Cloud account is sufficient.
    // *   ElasticStrength: Checks whether the instance types that are specified in the scaling configuration are sufficient.
    // *   VSwitch: Checks whether the vSwitch is available. If the specified vSwitch is deleted, specify an existing vSwitch for the scaling group.
    // *   SecurityGroup: Checks whether the security group is available. If the specified security group is deleted, specify an existing security group for the scaling group.
    // *   KeyPair: Checks whether the key pair is available. If the specified key pair is deleted, specify another key pair for the scaling group.
    // *   SlbBackendServerQuota: Checks whether the number of ECS instances that are added to the default server group and the vServer groups of the SLB instances associated with the scaling group has reached the upper limit.
    // *   AlbBackendServerQuota: Checks whether the number of ECS instances that are attached to the ALB instances of the scaling group has reached the upper limit.
    // *   NlbBackendServerQuota: Checks whether the number of ECS instances that are attached to the NLB instances of the scaling group has reached the upper limit.
    std::shared_ptr<string> diagnoseType_ = nullptr;
    // The error code of the diagnostic item. Valid values:
    // 
    // *   VSwitchIdNotFound: The vSwitch does not exist.
    // *   SecurityGroupNotFound: The security group does not exist.
    // *   KeyPairNotFound: The key pair does not exist.
    // *   SlbBackendServerQuotaExceeded: The number of ECS instances that are added to the default server group and the vServer groups of the SLB instances associated with the scaling group has reached the upper limit.
    // *   AlbBackendServerQuotaExceeded: The number of ECS instances that are attached to the ALB instances of the scaling group has reached the upper limit.
    // *   NlbBackendServerQuotaExceeded: The number of ECS instances that are attached to the NLB instances of the scaling group has reached the upper limit.
    // *   AccountArrearage: Your account has an overdue payment.
    // *   AccountNotEnoughBalance: The balance of your Alibaba Cloud account is insufficient.
    // *   ElasticStrengthAlert: The inventory levels are lower than required.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The resource ID corresponding to the diagnostic result.
    std::shared_ptr<string> resourceId_ = nullptr;
    // Status of the diagnostic item. Possible values:
    // 
    // - Normal: The diagnostic result is normal.
    // 
    // - Warn: The diagnostic result is a warning.
    // 
    // - Critical: The diagnostic result is critical.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
