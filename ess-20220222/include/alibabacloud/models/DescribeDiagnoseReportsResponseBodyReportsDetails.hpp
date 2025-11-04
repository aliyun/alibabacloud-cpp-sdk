// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSEREPORTSRESPONSEBODYREPORTSDETAILS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSEREPORTSRESPONSEBODYREPORTSDETAILS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeDiagnoseReportsResponseBodyReportsDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiagnoseReportsResponseBodyReportsDetails& obj) { 
      DARABONBA_PTR_TO_JSON(DiagnoseType, diagnoseType_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiagnoseReportsResponseBodyReportsDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(DiagnoseType, diagnoseType_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeDiagnoseReportsResponseBodyReportsDetails() = default ;
    DescribeDiagnoseReportsResponseBodyReportsDetails(const DescribeDiagnoseReportsResponseBodyReportsDetails &) = default ;
    DescribeDiagnoseReportsResponseBodyReportsDetails(DescribeDiagnoseReportsResponseBodyReportsDetails &&) = default ;
    DescribeDiagnoseReportsResponseBodyReportsDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiagnoseReportsResponseBodyReportsDetails() = default ;
    DescribeDiagnoseReportsResponseBodyReportsDetails& operator=(const DescribeDiagnoseReportsResponseBodyReportsDetails &) = default ;
    DescribeDiagnoseReportsResponseBodyReportsDetails& operator=(DescribeDiagnoseReportsResponseBodyReportsDetails &&) = default ;
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
    inline DescribeDiagnoseReportsResponseBodyReportsDetails& setDiagnoseType(string diagnoseType) { DARABONBA_PTR_SET_VALUE(diagnoseType_, diagnoseType) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DescribeDiagnoseReportsResponseBodyReportsDetails& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline DescribeDiagnoseReportsResponseBodyReportsDetails& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDiagnoseReportsResponseBodyReportsDetails& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The type of the diagnostic item. Valid values:
    // 
    // *   AccountArrearage: Checks whether your Alibaba Cloud account has overdue payments.
    // *   AccountNotEnoughBalance: Checks whether the balance of your Alibaba Cloud account at the China site (aliyun.com) is greater than or equal to CNY 100.
    // *   ElasticStrength: Checks whether the instance types that are specified in the scaling configuration are sufficient.
    // *   VSwitch: Checks whether a specific vSwitch can work as expected. For example, if a vSwitch is deleted, the vSwitch cannot provide services and an exception occurs.
    // *   SecurityGroup: Checks whether a specific security group can work as expected. For example, if a security group is deleted, the security group cannot provide services and an exception occurs.
    // *   KeyPair: Checks whether the key pair is available. If the specified key pair is deleted, specify another key pair for the scaling group.
    // *   SlbBackendServerQuota: Checks whether the number of ECS instances that are added to the default server group and the vServer groups of the SLB instances associated with the scaling group has reached the upper limit.
    // *   AlbBackendServerQuota: Checks whether the number of ECS instances that are added to the backend server groups of the ALB instances associated with the scaling group has reached the upper limit.
    // *   NlbBackendServerQuota: Checks whether the number of ECS instances that are added to the backend server groups of the NLB instances associated with the scaling group has reached the upper limit.
    std::shared_ptr<string> diagnoseType_ = nullptr;
    // The error code of the diagnostic item. Valid values:
    // 
    // *   VSwitchIdNotFound: The vSwitch does not exist.
    // *   SecurityGroupNotFound: The security group does not exist.
    // *   KeyPairNotFound: The key pair does not exist.
    // *   SlbBackendServerQuotaExceeded: The number of ECS instances that are added to the default server group and the vServer groups of the SLB instances associated with the scaling group has reached the upper limit.
    // *   AlbBackendServerQuotaExceeded: The number of ECS instances that are attached to the ALB instances of the scaling group has reached the upper limit.
    // *   NlbBackendServerQuotaExceeded: The number of ECS instances that are attached to the NLB instances of the scaling group has reached the upper limit.
    // *   AccountArrearage: Your account has overdue payments.
    // *   AccountNotEnoughBalance: The balance of your Alibaba Cloud account is less than CNY 100.
    // *   ElasticStrengthAlert: The inventory levels are lower than expected.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The ID of the resource.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The status of the diagnostic item. Valid values:
    // 
    // *   Normal: The diagnostic result is normal.
    // *   Warn: The diagnostic result is warning.
    // *   Critical: The diagnostic result is critical.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
