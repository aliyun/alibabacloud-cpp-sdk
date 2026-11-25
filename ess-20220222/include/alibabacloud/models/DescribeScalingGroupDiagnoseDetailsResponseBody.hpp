// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCALINGGROUPDIAGNOSEDETAILSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCALINGGROUPDIAGNOSEDETAILSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeScalingGroupDiagnoseDetailsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScalingGroupDiagnoseDetailsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Details, details_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScalingGroupDiagnoseDetailsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Details, details_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeScalingGroupDiagnoseDetailsResponseBody() = default ;
    DescribeScalingGroupDiagnoseDetailsResponseBody(const DescribeScalingGroupDiagnoseDetailsResponseBody &) = default ;
    DescribeScalingGroupDiagnoseDetailsResponseBody(DescribeScalingGroupDiagnoseDetailsResponseBody &&) = default ;
    DescribeScalingGroupDiagnoseDetailsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScalingGroupDiagnoseDetailsResponseBody() = default ;
    DescribeScalingGroupDiagnoseDetailsResponseBody& operator=(const DescribeScalingGroupDiagnoseDetailsResponseBody &) = default ;
    DescribeScalingGroupDiagnoseDetailsResponseBody& operator=(DescribeScalingGroupDiagnoseDetailsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Details : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Details& obj) { 
        DARABONBA_PTR_TO_JSON(DiagnoseType, diagnoseType_);
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Details& obj) { 
        DARABONBA_PTR_FROM_JSON(DiagnoseType, diagnoseType_);
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      Details() = default ;
      Details(const Details &) = default ;
      Details(Details &&) = default ;
      Details(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Details() = default ;
      Details& operator=(const Details &) = default ;
      Details& operator=(Details &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->diagnoseType_ == nullptr
        && this->errorCode_ == nullptr && this->resourceId_ == nullptr && this->status_ == nullptr; };
      // diagnoseType Field Functions 
      bool hasDiagnoseType() const { return this->diagnoseType_ != nullptr;};
      void deleteDiagnoseType() { this->diagnoseType_ = nullptr;};
      inline string getDiagnoseType() const { DARABONBA_PTR_GET_DEFAULT(diagnoseType_, "") };
      inline Details& setDiagnoseType(string diagnoseType) { DARABONBA_PTR_SET_VALUE(diagnoseType_, diagnoseType) };


      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline Details& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline Details& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Details& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // Item type for diagnostics. Possible values:
      // - AccountArrearage: Checks if the user\\"s account is in arrears.
      // - AccountNotEnoughBalance: Checks the account balance.
      // - ElasticStrength: Checks the inventory health of instance types corresponding to the scaling group configuration.
      // - VSwitch: Checks if the switch is available, for example, whether it has been deleted.
      // - SecurityGroup: Checks if the security group is available, for example, whether it has been deleted.
      // - KeyPair: Checks if the key pair is available, for example, whether it has been deleted.
      // - SlbBackendServerQuota: Checks if the number of ECS instances mounted to the default SLB group and virtual server group exceeds the quota.
      // - AlbBackendServerQuota: Checks if the number of ECS instances mounted to the ALB group exceeds the quota.
      // - NlbBackendServerQuota: Checks if the number of ECS instances mounted to the NLB group exceeds the quota.
      shared_ptr<string> diagnoseType_ {};
      // Error code of the diagnostic item. Possible values:
      // 
      // - VSwitchIdNotFound: The VSwitch does not exist.
      // 
      // - SecurityGroupNotFound: The security group does not exist.
      // 
      // - KeyPairNotFound: The key pair does not exist.
      // 
      // - SlbBackendServerQuotaExceeded: The number of ECS instances mounted on the backend of the SLB default group and virtual server group exceeds the quota.
      // 
      // - AlbBackendServerQuotaExceeded: The number of ECS instances mounted on the backend of the ALB group exceeds the quota.
      // 
      // - NlbBackendServerQuotaExceeded: The number of ECS instances mounted on the backend of the NLB group exceeds the quota.
      // 
      // - AccountArrearage: The account is in arrears.
      // 
      // - AccountNotEnoughBalance: The account balance is insufficient.
      // 
      // - ElasticStrengthAlert: The inventory health is poor.
      shared_ptr<string> errorCode_ {};
      // The resource ID corresponding to the diagnostic result.
      shared_ptr<string> resourceId_ {};
      // Status of the diagnostic item. Possible values:
      // 
      // - Normal: The diagnostic result is normal.
      // 
      // - Warn: The diagnostic result is a warning.
      // 
      // - Critical: The diagnostic result is critical.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->details_ == nullptr
        && this->requestId_ == nullptr; };
    // details Field Functions 
    bool hasDetails() const { return this->details_ != nullptr;};
    void deleteDetails() { this->details_ = nullptr;};
    inline const vector<DescribeScalingGroupDiagnoseDetailsResponseBody::Details> & getDetails() const { DARABONBA_PTR_GET_CONST(details_, vector<DescribeScalingGroupDiagnoseDetailsResponseBody::Details>) };
    inline vector<DescribeScalingGroupDiagnoseDetailsResponseBody::Details> getDetails() { DARABONBA_PTR_GET(details_, vector<DescribeScalingGroupDiagnoseDetailsResponseBody::Details>) };
    inline DescribeScalingGroupDiagnoseDetailsResponseBody& setDetails(const vector<DescribeScalingGroupDiagnoseDetailsResponseBody::Details> & details) { DARABONBA_PTR_SET_VALUE(details_, details) };
    inline DescribeScalingGroupDiagnoseDetailsResponseBody& setDetails(vector<DescribeScalingGroupDiagnoseDetailsResponseBody::Details> && details) { DARABONBA_PTR_SET_RVALUE(details_, details) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeScalingGroupDiagnoseDetailsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details of the diagnostic report.
    shared_ptr<vector<DescribeScalingGroupDiagnoseDetailsResponseBody::Details>> details_ {};
    // ID of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
