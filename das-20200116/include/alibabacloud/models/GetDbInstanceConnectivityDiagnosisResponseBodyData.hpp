// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDBINSTANCECONNECTIVITYDIAGNOSISRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETDBINSTANCECONNECTIVITYDIAGNOSISRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetDBInstanceConnectivityDiagnosisResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDBInstanceConnectivityDiagnosisResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(connCheckErrorCode, connCheckErrorCode_);
      DARABONBA_PTR_TO_JSON(connCheckErrorMessage, connCheckErrorMessage_);
      DARABONBA_PTR_TO_JSON(failType, failType_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetDBInstanceConnectivityDiagnosisResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(connCheckErrorCode, connCheckErrorCode_);
      DARABONBA_PTR_FROM_JSON(connCheckErrorMessage, connCheckErrorMessage_);
      DARABONBA_PTR_FROM_JSON(failType, failType_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetDBInstanceConnectivityDiagnosisResponseBodyData() = default ;
    GetDBInstanceConnectivityDiagnosisResponseBodyData(const GetDBInstanceConnectivityDiagnosisResponseBodyData &) = default ;
    GetDBInstanceConnectivityDiagnosisResponseBodyData(GetDBInstanceConnectivityDiagnosisResponseBodyData &&) = default ;
    GetDBInstanceConnectivityDiagnosisResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDBInstanceConnectivityDiagnosisResponseBodyData() = default ;
    GetDBInstanceConnectivityDiagnosisResponseBodyData& operator=(const GetDBInstanceConnectivityDiagnosisResponseBodyData &) = default ;
    GetDBInstanceConnectivityDiagnosisResponseBodyData& operator=(GetDBInstanceConnectivityDiagnosisResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connCheckErrorCode_ == nullptr
        && return this->connCheckErrorMessage_ == nullptr && return this->failType_ == nullptr && return this->instanceId_ == nullptr && return this->success_ == nullptr; };
    // connCheckErrorCode Field Functions 
    bool hasConnCheckErrorCode() const { return this->connCheckErrorCode_ != nullptr;};
    void deleteConnCheckErrorCode() { this->connCheckErrorCode_ = nullptr;};
    inline string connCheckErrorCode() const { DARABONBA_PTR_GET_DEFAULT(connCheckErrorCode_, "") };
    inline GetDBInstanceConnectivityDiagnosisResponseBodyData& setConnCheckErrorCode(string connCheckErrorCode) { DARABONBA_PTR_SET_VALUE(connCheckErrorCode_, connCheckErrorCode) };


    // connCheckErrorMessage Field Functions 
    bool hasConnCheckErrorMessage() const { return this->connCheckErrorMessage_ != nullptr;};
    void deleteConnCheckErrorMessage() { this->connCheckErrorMessage_ = nullptr;};
    inline string connCheckErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(connCheckErrorMessage_, "") };
    inline GetDBInstanceConnectivityDiagnosisResponseBodyData& setConnCheckErrorMessage(string connCheckErrorMessage) { DARABONBA_PTR_SET_VALUE(connCheckErrorMessage_, connCheckErrorMessage) };


    // failType Field Functions 
    bool hasFailType() const { return this->failType_ != nullptr;};
    void deleteFailType() { this->failType_ = nullptr;};
    inline string failType() const { DARABONBA_PTR_GET_DEFAULT(failType_, "") };
    inline GetDBInstanceConnectivityDiagnosisResponseBodyData& setFailType(string failType) { DARABONBA_PTR_SET_VALUE(failType_, failType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetDBInstanceConnectivityDiagnosisResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDBInstanceConnectivityDiagnosisResponseBodyData& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The exception detection items:
    // 
    // *   **SRC_IP_NOT_IN_USER_WHITELIST**: The source IP address is not added to the whitelist of the user.
    // *   **VIP_NOT_EXISTS**: The Application Load Balancer (ALB) instance corresponding to the virtual IP address (VIP) does not exist.
    // *   **RS_NOT_EXISTS**: The resource sharing (RS) is not properly mounted.
    // *   **VIP_TUNNEL_ID_NOT_CONSISTENT**: The tunnel ID used by the VIP of the virtual private cloud (VPC) type is different from the tunnel ID of the VPC.
    // *   **VIP_VPC_CLOUD_INSTANCE_NOT_EXISTS**: The VIP of the VPC type does not exist.
    // *   **VIP_IS_NOT_NGLB**: The NGLB mode is disabled for the VIP.
    // *   **CUSTINS_NOT_ASSOCIATE_ECS_SECURITY_GROUP**: No security group is associated with the instance.
    // *   **SRC_IP_NOT_IN_USER_WHITELIST**: The source IP address is not added to the whitelist of the user.
    // *   **SRC_IP_NOT_IN_ADMIN_WHITELIST**: The source IP address is not added to the whitelist of the instance.
    // *   **SRC_IP_NOT_IN_ECS_SECURITY_GROUP**: The source IP address is not added to the security group that is associated with the instance.
    // *   **VPC_INSTANCE_IP_NOT_WORKING_STATUS**: The IP address in the VPC is in an abnormal state.
    std::shared_ptr<string> connCheckErrorCode_ = nullptr;
    // The details of the exception detection.
    std::shared_ptr<string> connCheckErrorMessage_ = nullptr;
    // The type of the exception:
    // 
    // *   **0**: an exception that can be handled by the user.
    // *   **1**: an exception that can be handled by a technical engineer.
    std::shared_ptr<string> failType_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Indicates whether the connectivity test was passed:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
