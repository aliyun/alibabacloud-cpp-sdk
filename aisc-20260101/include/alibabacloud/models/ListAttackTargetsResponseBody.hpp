// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTATTACKTARGETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTATTACKTARGETSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AISC20260101
{
namespace Models
{
  class ListAttackTargetsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAttackTargetsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAttackTargetsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAttackTargetsResponseBody() = default ;
    ListAttackTargetsResponseBody(const ListAttackTargetsResponseBody &) = default ;
    ListAttackTargetsResponseBody(ListAttackTargetsResponseBody &&) = default ;
    ListAttackTargetsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAttackTargetsResponseBody() = default ;
    ListAttackTargetsResponseBody& operator=(const ListAttackTargetsResponseBody &) = default ;
    ListAttackTargetsResponseBody& operator=(ListAttackTargetsResponseBody &&) = default ;
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
        DARABONBA_PTR_TO_JSON(LastVerifyMessage, lastVerifyMessage_);
        DARABONBA_PTR_TO_JSON(ModelName, modelName_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(Provider, provider_);
        DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_TO_JSON(ScanCount, scanCount_);
        DARABONBA_PTR_TO_JSON(TargetId, targetId_);
        DARABONBA_PTR_TO_JSON(TargetName, targetName_);
        DARABONBA_PTR_TO_JSON(TargetType, targetType_);
        DARABONBA_PTR_TO_JSON(VerifyStatus, verifyStatus_);
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
        DARABONBA_PTR_FROM_JSON(LastVerifyMessage, lastVerifyMessage_);
        DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(Provider, provider_);
        DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_FROM_JSON(ScanCount, scanCount_);
        DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
        DARABONBA_PTR_FROM_JSON(TargetName, targetName_);
        DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
        DARABONBA_PTR_FROM_JSON(VerifyStatus, verifyStatus_);
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
        && this->lastScanFailMessage_ == nullptr && this->lastScanStatus_ == nullptr && this->lastScanTime_ == nullptr && this->lastVerifyMessage_ == nullptr && this->modelName_ == nullptr
        && this->modifyTime_ == nullptr && this->provider_ == nullptr && this->riskLevel_ == nullptr && this->scanCount_ == nullptr && this->targetId_ == nullptr
        && this->targetName_ == nullptr && this->targetType_ == nullptr && this->verifyStatus_ == nullptr; };
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


      // lastVerifyMessage Field Functions 
      bool hasLastVerifyMessage() const { return this->lastVerifyMessage_ != nullptr;};
      void deleteLastVerifyMessage() { this->lastVerifyMessage_ = nullptr;};
      inline string getLastVerifyMessage() const { DARABONBA_PTR_GET_DEFAULT(lastVerifyMessage_, "") };
      inline Data& setLastVerifyMessage(string lastVerifyMessage) { DARABONBA_PTR_SET_VALUE(lastVerifyMessage_, lastVerifyMessage) };


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


      // verifyStatus Field Functions 
      bool hasVerifyStatus() const { return this->verifyStatus_ != nullptr;};
      void deleteVerifyStatus() { this->verifyStatus_ = nullptr;};
      inline string getVerifyStatus() const { DARABONBA_PTR_GET_DEFAULT(verifyStatus_, "") };
      inline Data& setVerifyStatus(string verifyStatus) { DARABONBA_PTR_SET_VALUE(verifyStatus_, verifyStatus) };


    protected:
      // The advanced connection configuration for the target (JSON character string). For common fields and provider configuration templates, see the ConnectionConfig parameter description of the CreateAttackTarget operation.
      shared_ptr<string> connectionConfig_ {};
      // The connection protocol type of the target service.
      shared_ptr<string> connectionMethod_ {};
      // The time when the target was created. The value is a millisecond-level UNIX timestamp.
      shared_ptr<int64_t> createTime_ {};
      // The description of the scan target.
      shared_ptr<string> description_ {};
      // The HTTP or HTTPS endpoint address of the target model service.
      shared_ptr<string> endpoint_ {};
      // The time when the first scan was performed. The value is a millisecond-level UNIX timestamp. This parameter is null if no scan has been performed.
      shared_ptr<int64_t> firstScanTime_ {};
      // The failure reason of the most recent scan task. This parameter is empty if the most recent scan did not fail.
      shared_ptr<string> lastScanFailMessage_ {};
      // The detection status of the most recent scan task.
      shared_ptr<string> lastScanStatus_ {};
      // The time when the last scan was performed. The value is a millisecond-level UNIX timestamp. This parameter is null if no scan has been performed.
      shared_ptr<int64_t> lastScanTime_ {};
      // The detailed message of the most recent connectivity verification. If the verification succeeded, the value is a response content snippet returned by the target service. If the verification failed, the value is the error reason.
      shared_ptr<string> lastVerifyMessage_ {};
      // The name of the target model.
      shared_ptr<string> modelName_ {};
      // The time when the target was last modified. The value is a millisecond-level UNIX timestamp.
      shared_ptr<int64_t> modifyTime_ {};
      // The business label of the model or agent provider.
      shared_ptr<string> provider_ {};
      // The risk level derived from the most recent completed scan task. This parameter is null if no scan has been performed.
      shared_ptr<string> riskLevel_ {};
      // The total number of scans performed. The value is 0 if no scan has been performed.
      shared_ptr<int64_t> scanCount_ {};
      // The unique identifier of the scan target.
      shared_ptr<string> targetId_ {};
      // The display name of the scan target.
      shared_ptr<string> targetName_ {};
      // The type of the scan target.
      shared_ptr<string> targetType_ {};
      // The connectivity verification status of the target.
      shared_ptr<string> verifyStatus_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListAttackTargetsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListAttackTargetsResponseBody::Data>) };
    inline vector<ListAttackTargetsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListAttackTargetsResponseBody::Data>) };
    inline ListAttackTargetsResponseBody& setData(const vector<ListAttackTargetsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListAttackTargetsResponseBody& setData(vector<ListAttackTargetsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListAttackTargetsResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListAttackTargetsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAttackTargetsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListAttackTargetsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of scan targets on the current page.
    shared_ptr<vector<ListAttackTargetsResponseBody::Data>> data_ {};
    // The normalized page number that takes effect. The value may differ from the input parameter.
    shared_ptr<int64_t> pageNumber_ {};
    // The normalized number of entries per page that takes effect. The value may differ from the input parameter.
    shared_ptr<int64_t> pageSize_ {};
    // The request ID. You can use this ID for troubleshooting and log tracing.
    shared_ptr<string> requestId_ {};
    // The total number of scan targets that match the filter conditions. In post-filtering scenarios, this value is the total count after in-memory filtering.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AISC20260101
#endif
