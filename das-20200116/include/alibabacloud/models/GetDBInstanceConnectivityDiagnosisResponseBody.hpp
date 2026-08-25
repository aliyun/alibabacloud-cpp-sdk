// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDBINSTANCECONNECTIVITYDIAGNOSISRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDBINSTANCECONNECTIVITYDIAGNOSISRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetDBInstanceConnectivityDiagnosisResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDBInstanceConnectivityDiagnosisResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetDBInstanceConnectivityDiagnosisResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetDBInstanceConnectivityDiagnosisResponseBody() = default ;
    GetDBInstanceConnectivityDiagnosisResponseBody(const GetDBInstanceConnectivityDiagnosisResponseBody &) = default ;
    GetDBInstanceConnectivityDiagnosisResponseBody(GetDBInstanceConnectivityDiagnosisResponseBody &&) = default ;
    GetDBInstanceConnectivityDiagnosisResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDBInstanceConnectivityDiagnosisResponseBody() = default ;
    GetDBInstanceConnectivityDiagnosisResponseBody& operator=(const GetDBInstanceConnectivityDiagnosisResponseBody &) = default ;
    GetDBInstanceConnectivityDiagnosisResponseBody& operator=(GetDBInstanceConnectivityDiagnosisResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(connCheckErrorCode, connCheckErrorCode_);
        DARABONBA_PTR_TO_JSON(connCheckErrorMessage, connCheckErrorMessage_);
        DARABONBA_PTR_TO_JSON(failType, failType_);
        DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(success, success_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(connCheckErrorCode, connCheckErrorCode_);
        DARABONBA_PTR_FROM_JSON(connCheckErrorMessage, connCheckErrorMessage_);
        DARABONBA_PTR_FROM_JSON(failType, failType_);
        DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(success, success_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->connCheckErrorCode_ == nullptr
        && this->connCheckErrorMessage_ == nullptr && this->failType_ == nullptr && this->instanceId_ == nullptr && this->success_ == nullptr; };
      // connCheckErrorCode Field Functions 
      bool hasConnCheckErrorCode() const { return this->connCheckErrorCode_ != nullptr;};
      void deleteConnCheckErrorCode() { this->connCheckErrorCode_ = nullptr;};
      inline string getConnCheckErrorCode() const { DARABONBA_PTR_GET_DEFAULT(connCheckErrorCode_, "") };
      inline Data& setConnCheckErrorCode(string connCheckErrorCode) { DARABONBA_PTR_SET_VALUE(connCheckErrorCode_, connCheckErrorCode) };


      // connCheckErrorMessage Field Functions 
      bool hasConnCheckErrorMessage() const { return this->connCheckErrorMessage_ != nullptr;};
      void deleteConnCheckErrorMessage() { this->connCheckErrorMessage_ = nullptr;};
      inline string getConnCheckErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(connCheckErrorMessage_, "") };
      inline Data& setConnCheckErrorMessage(string connCheckErrorMessage) { DARABONBA_PTR_SET_VALUE(connCheckErrorMessage_, connCheckErrorMessage) };


      // failType Field Functions 
      bool hasFailType() const { return this->failType_ != nullptr;};
      void deleteFailType() { this->failType_ = nullptr;};
      inline string getFailType() const { DARABONBA_PTR_GET_DEFAULT(failType_, "") };
      inline Data& setFailType(string failType) { DARABONBA_PTR_SET_VALUE(failType_, failType) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline Data& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    protected:
      // The outlier detection item. Valid values:
      // 
      // - **SRC_IP_NOT_IN_USER_WHITELIST**: The source IP address is not added to the user whitelist.
      // - **VIP_NOT_EXISTS**: The ALB instance corresponding to the VIP does not exist.
      // - **RS_NOT_EXISTS**: The RS is not properly mounted.
      // - **VIP_TUNNEL_ID_NOT_CONSISTENT**: The TUNNEL ID used by the VPC-type VIP is inconsistent with the actual TUNNEL ID of the VPC.
      // - **VIP_VPC_CLOUD_INSTANCE_NOT_EXISTS**: The VPC-type VIP does not exist.
      // - **VIP_IS_NOT_NGLB**: The NGLB pattern is shutdown for the VIP.
      // - **CUSTINS_NOT_ASSOCIATE_ECS_SECURITY_GROUP**: The instance is not associated with a security group.
      // - **SRC_IP_NOT_IN_USER_WHITELIST**: The source IP address is not added to the user whitelist.
      // - **SRC_IP_NOT_IN_ADMIN_WHITELIST**: The source IP address is not added to the management machine whitelist.
      // - **SRC_IP_NOT_IN_ECS_SECURITY_GROUP**: The source IP address is not added to the security group associated with the instance.
      // - **VPC_INSTANCE_IP_NOT_WORKING_STATUS**: The VPC IP address is in an abnormal state.
      shared_ptr<string> connCheckErrorCode_ {};
      // The details of the outlier detection item.
      shared_ptr<string> connCheckErrorMessage_ {};
      // The exception type. Valid values:
      // 
      // - **0**: The issue can be resolved by the user.
      // - **1**: The issue requires on-duty personnel to resolve.
      shared_ptr<string> failType_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      // Indicates whether the check is passed. Valid values:
      // 
      // - **true**: The check is passed.
      // - **false**: The check is not passed.
      shared_ptr<bool> success_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetDBInstanceConnectivityDiagnosisResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetDBInstanceConnectivityDiagnosisResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetDBInstanceConnectivityDiagnosisResponseBody::Data) };
    inline GetDBInstanceConnectivityDiagnosisResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetDBInstanceConnectivityDiagnosisResponseBody::Data) };
    inline GetDBInstanceConnectivityDiagnosisResponseBody& setData(const GetDBInstanceConnectivityDiagnosisResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetDBInstanceConnectivityDiagnosisResponseBody& setData(GetDBInstanceConnectivityDiagnosisResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetDBInstanceConnectivityDiagnosisResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDBInstanceConnectivityDiagnosisResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline GetDBInstanceConnectivityDiagnosisResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The returned status code.
    shared_ptr<string> code_ {};
    // The details.
    shared_ptr<GetDBInstanceConnectivityDiagnosisResponseBody::Data> data_ {};
    // The returned message.
    // >If the request is successful, **Successful** is returned. If the request fails, an error message is returned, such as an error code.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful. Valid values:
    // * **true**: The request is successful.
    // * **false**: The request fails.
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
