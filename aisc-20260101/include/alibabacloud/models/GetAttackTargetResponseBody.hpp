// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETATTACKTARGETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETATTACKTARGETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AISC20260101
{
namespace Models
{
  class GetAttackTargetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAttackTargetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAttackTargetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAttackTargetResponseBody() = default ;
    GetAttackTargetResponseBody(const GetAttackTargetResponseBody &) = default ;
    GetAttackTargetResponseBody(GetAttackTargetResponseBody &&) = default ;
    GetAttackTargetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAttackTargetResponseBody() = default ;
    GetAttackTargetResponseBody& operator=(const GetAttackTargetResponseBody &) = default ;
    GetAttackTargetResponseBody& operator=(GetAttackTargetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ConnectionConfig, connectionConfig_);
        DARABONBA_PTR_TO_JSON(ConnectionMethod, connectionMethod_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
        DARABONBA_PTR_TO_JSON(FirstScanTime, firstScanTime_);
        DARABONBA_PTR_TO_JSON(LastScanFailMessage, lastScanFailMessage_);
        DARABONBA_PTR_TO_JSON(LastScanStatus, lastScanStatus_);
        DARABONBA_PTR_TO_JSON(LastScanTime, lastScanTime_);
        DARABONBA_PTR_TO_JSON(ModelName, modelName_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(Provider, provider_);
        DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_TO_JSON(ScanCount, scanCount_);
        DARABONBA_PTR_TO_JSON(ScanTaskConfig, scanTaskConfig_);
        DARABONBA_PTR_TO_JSON(TargetId, targetId_);
        DARABONBA_PTR_TO_JSON(TargetName, targetName_);
        DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ConnectionConfig, connectionConfig_);
        DARABONBA_PTR_FROM_JSON(ConnectionMethod, connectionMethod_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
        DARABONBA_PTR_FROM_JSON(FirstScanTime, firstScanTime_);
        DARABONBA_PTR_FROM_JSON(LastScanFailMessage, lastScanFailMessage_);
        DARABONBA_PTR_FROM_JSON(LastScanStatus, lastScanStatus_);
        DARABONBA_PTR_FROM_JSON(LastScanTime, lastScanTime_);
        DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(Provider, provider_);
        DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_FROM_JSON(ScanCount, scanCount_);
        DARABONBA_PTR_FROM_JSON(ScanTaskConfig, scanTaskConfig_);
        DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
        DARABONBA_PTR_FROM_JSON(TargetName, targetName_);
        DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
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
      virtual bool empty() const override { return this->connectionConfig_ == nullptr
        && this->connectionMethod_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr && this->endpoint_ == nullptr && this->firstScanTime_ == nullptr
        && this->lastScanFailMessage_ == nullptr && this->lastScanStatus_ == nullptr && this->lastScanTime_ == nullptr && this->modelName_ == nullptr && this->modifyTime_ == nullptr
        && this->provider_ == nullptr && this->riskLevel_ == nullptr && this->scanCount_ == nullptr && this->scanTaskConfig_ == nullptr && this->targetId_ == nullptr
        && this->targetName_ == nullptr && this->targetType_ == nullptr; };
      // connectionConfig Field Functions 
      bool hasConnectionConfig() const { return this->connectionConfig_ != nullptr;};
      void deleteConnectionConfig() { this->connectionConfig_ = nullptr;};
      inline string getConnectionConfig() const { DARABONBA_PTR_GET_DEFAULT(connectionConfig_, "") };
      inline Data& setConnectionConfig(string connectionConfig) { DARABONBA_PTR_SET_VALUE(connectionConfig_, connectionConfig) };


      // connectionMethod Field Functions 
      bool hasConnectionMethod() const { return this->connectionMethod_ != nullptr;};
      void deleteConnectionMethod() { this->connectionMethod_ = nullptr;};
      inline string getConnectionMethod() const { DARABONBA_PTR_GET_DEFAULT(connectionMethod_, "") };
      inline Data& setConnectionMethod(string connectionMethod) { DARABONBA_PTR_SET_VALUE(connectionMethod_, connectionMethod) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Data& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // endpoint Field Functions 
      bool hasEndpoint() const { return this->endpoint_ != nullptr;};
      void deleteEndpoint() { this->endpoint_ = nullptr;};
      inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
      inline Data& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


      // firstScanTime Field Functions 
      bool hasFirstScanTime() const { return this->firstScanTime_ != nullptr;};
      void deleteFirstScanTime() { this->firstScanTime_ = nullptr;};
      inline int64_t getFirstScanTime() const { DARABONBA_PTR_GET_DEFAULT(firstScanTime_, 0L) };
      inline Data& setFirstScanTime(int64_t firstScanTime) { DARABONBA_PTR_SET_VALUE(firstScanTime_, firstScanTime) };


      // lastScanFailMessage Field Functions 
      bool hasLastScanFailMessage() const { return this->lastScanFailMessage_ != nullptr;};
      void deleteLastScanFailMessage() { this->lastScanFailMessage_ = nullptr;};
      inline string getLastScanFailMessage() const { DARABONBA_PTR_GET_DEFAULT(lastScanFailMessage_, "") };
      inline Data& setLastScanFailMessage(string lastScanFailMessage) { DARABONBA_PTR_SET_VALUE(lastScanFailMessage_, lastScanFailMessage) };


      // lastScanStatus Field Functions 
      bool hasLastScanStatus() const { return this->lastScanStatus_ != nullptr;};
      void deleteLastScanStatus() { this->lastScanStatus_ = nullptr;};
      inline string getLastScanStatus() const { DARABONBA_PTR_GET_DEFAULT(lastScanStatus_, "") };
      inline Data& setLastScanStatus(string lastScanStatus) { DARABONBA_PTR_SET_VALUE(lastScanStatus_, lastScanStatus) };


      // lastScanTime Field Functions 
      bool hasLastScanTime() const { return this->lastScanTime_ != nullptr;};
      void deleteLastScanTime() { this->lastScanTime_ = nullptr;};
      inline int64_t getLastScanTime() const { DARABONBA_PTR_GET_DEFAULT(lastScanTime_, 0L) };
      inline Data& setLastScanTime(int64_t lastScanTime) { DARABONBA_PTR_SET_VALUE(lastScanTime_, lastScanTime) };


      // modelName Field Functions 
      bool hasModelName() const { return this->modelName_ != nullptr;};
      void deleteModelName() { this->modelName_ = nullptr;};
      inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
      inline Data& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline int64_t getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
      inline Data& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // provider Field Functions 
      bool hasProvider() const { return this->provider_ != nullptr;};
      void deleteProvider() { this->provider_ = nullptr;};
      inline string getProvider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
      inline Data& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


      // riskLevel Field Functions 
      bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
      void deleteRiskLevel() { this->riskLevel_ = nullptr;};
      inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
      inline Data& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


      // scanCount Field Functions 
      bool hasScanCount() const { return this->scanCount_ != nullptr;};
      void deleteScanCount() { this->scanCount_ = nullptr;};
      inline int64_t getScanCount() const { DARABONBA_PTR_GET_DEFAULT(scanCount_, 0L) };
      inline Data& setScanCount(int64_t scanCount) { DARABONBA_PTR_SET_VALUE(scanCount_, scanCount) };


      // scanTaskConfig Field Functions 
      bool hasScanTaskConfig() const { return this->scanTaskConfig_ != nullptr;};
      void deleteScanTaskConfig() { this->scanTaskConfig_ = nullptr;};
      inline string getScanTaskConfig() const { DARABONBA_PTR_GET_DEFAULT(scanTaskConfig_, "") };
      inline Data& setScanTaskConfig(string scanTaskConfig) { DARABONBA_PTR_SET_VALUE(scanTaskConfig_, scanTaskConfig) };


      // targetId Field Functions 
      bool hasTargetId() const { return this->targetId_ != nullptr;};
      void deleteTargetId() { this->targetId_ = nullptr;};
      inline string getTargetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
      inline Data& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


      // targetName Field Functions 
      bool hasTargetName() const { return this->targetName_ != nullptr;};
      void deleteTargetName() { this->targetName_ = nullptr;};
      inline string getTargetName() const { DARABONBA_PTR_GET_DEFAULT(targetName_, "") };
      inline Data& setTargetName(string targetName) { DARABONBA_PTR_SET_VALUE(targetName_, targetName) };


      // targetType Field Functions 
      bool hasTargetType() const { return this->targetType_ != nullptr;};
      void deleteTargetType() { this->targetType_ = nullptr;};
      inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
      inline Data& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    protected:
      // The advanced connection configuration (JSON character string). For common fields and provider configuration templates, refer to the ConnectionConfig parameter of CreateAttackTarget.
      shared_ptr<string> connectionConfig_ {};
      // The connection protocol type of the target service.
      shared_ptr<string> connectionMethod_ {};
      // The time when the target was created. This value is a UNIX timestamp in milliseconds.
      shared_ptr<int64_t> createTime_ {};
      // The description of the scan target. This value may be empty.
      shared_ptr<string> description_ {};
      // The HTTP or HTTPS endpoint of the target model service. When ConnectionMethod is set to enterprise_relay, this value is a fixed internal endpoint.
      shared_ptr<string> endpoint_ {};
      // The time of the first scan. This value is a UNIX timestamp in milliseconds. This is an aggregate field that is not populated by this operation and returns an empty value. Refer to ListAttackTargets.
      shared_ptr<int64_t> firstScanTime_ {};
      // The failure reason of the most recent scan task. This is an aggregate field that is not populated by this operation and returns an empty value. Refer to ListAttackTargets.
      shared_ptr<string> lastScanFailMessage_ {};
      // The status of the most recent scan task. This is an aggregate field that is not populated by this operation and returns an empty value. Refer to ListAttackTargets.
      shared_ptr<string> lastScanStatus_ {};
      // The time of the most recent scan. This value is a UNIX timestamp in milliseconds. This is an aggregate field that is not populated by this operation and returns an empty value. Refer to ListAttackTargets.
      shared_ptr<int64_t> lastScanTime_ {};
      // The name of the target model. When ConnectionMethod is set to enterprise_relay, this value is the fixed platform value Agent.
      shared_ptr<string> modelName_ {};
      // The time when the target was last modified. This value is a UNIX timestamp in milliseconds.
      shared_ptr<int64_t> modifyTime_ {};
      // The business label of the model or agent provider.
      shared_ptr<string> provider_ {};
      // The risk level of the task result. This is an aggregate field that is not populated by this operation and returns an empty value. Refer to ListAttackTargets.
      shared_ptr<string> riskLevel_ {};
      // The cumulative number of scans. This is an aggregate field that is not populated by this operation and returns an empty value. For the meaning and example values, refer to the ListAttackTargets response.
      shared_ptr<int64_t> scanCount_ {};
      // The scan node configuration (JSON character string). Common fields include scanType (scan pattern: attack for security attack scan, tc260 for TC260 filing scan), scannerType (execute DPI engine: classic for per-sample execute, agent for multi-round autonomous attack), and sampleScope (sample scope: version for the current effective version, all for full samples). If the target is not configured, the default configurations are returned.
      shared_ptr<string> scanTaskConfig_ {};
      // The unique identifier of the scan target.
      shared_ptr<string> targetId_ {};
      // The display name of the scan target.
      shared_ptr<string> targetName_ {};
      // The type of the scan target.
      shared_ptr<string> targetType_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetAttackTargetResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetAttackTargetResponseBody::Data) };
    inline GetAttackTargetResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetAttackTargetResponseBody::Data) };
    inline GetAttackTargetResponseBody& setData(const GetAttackTargetResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAttackTargetResponseBody& setData(GetAttackTargetResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAttackTargetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The scan target details.
    shared_ptr<GetAttackTargetResponseBody::Data> data_ {};
    // The request ID. You can use this ID for troubleshooting and log tracing.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AISC20260101
#endif
