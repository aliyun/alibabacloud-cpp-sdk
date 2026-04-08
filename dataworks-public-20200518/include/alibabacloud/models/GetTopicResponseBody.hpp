// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTOPICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTOPICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetTopicResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTopicResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetTopicResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetTopicResponseBody() = default ;
    GetTopicResponseBody(const GetTopicResponseBody &) = default ;
    GetTopicResponseBody(GetTopicResponseBody &&) = default ;
    GetTopicResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTopicResponseBody() = default ;
    GetTopicResponseBody& operator=(const GetTopicResponseBody &) = default ;
    GetTopicResponseBody& operator=(GetTopicResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AddTime, addTime_);
        DARABONBA_PTR_TO_JSON(AlertTime, alertTime_);
        DARABONBA_PTR_TO_JSON(Assigner, assigner_);
        DARABONBA_PTR_TO_JSON(BaselineBuffer, baselineBuffer_);
        DARABONBA_PTR_TO_JSON(BaselineId, baselineId_);
        DARABONBA_PTR_TO_JSON(BaselineInGroupId, baselineInGroupId_);
        DARABONBA_PTR_TO_JSON(BaselineName, baselineName_);
        DARABONBA_PTR_TO_JSON(BaselineStatus, baselineStatus_);
        DARABONBA_PTR_TO_JSON(Buffer, buffer_);
        DARABONBA_PTR_TO_JSON(DealTime, dealTime_);
        DARABONBA_PTR_TO_JSON(DealUser, dealUser_);
        DARABONBA_PTR_TO_JSON(FixTime, fixTime_);
        DARABONBA_PTR_TO_JSON(HappenTime, happenTime_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(NextAlertTime, nextAlertTime_);
        DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
        DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
        DARABONBA_PTR_TO_JSON(Owner, owner_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        DARABONBA_PTR_TO_JSON(TopicId, topicId_);
        DARABONBA_PTR_TO_JSON(TopicName, topicName_);
        DARABONBA_PTR_TO_JSON(TopicStatus, topicStatus_);
        DARABONBA_PTR_TO_JSON(TopicType, topicType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AddTime, addTime_);
        DARABONBA_PTR_FROM_JSON(AlertTime, alertTime_);
        DARABONBA_PTR_FROM_JSON(Assigner, assigner_);
        DARABONBA_PTR_FROM_JSON(BaselineBuffer, baselineBuffer_);
        DARABONBA_PTR_FROM_JSON(BaselineId, baselineId_);
        DARABONBA_PTR_FROM_JSON(BaselineInGroupId, baselineInGroupId_);
        DARABONBA_PTR_FROM_JSON(BaselineName, baselineName_);
        DARABONBA_PTR_FROM_JSON(BaselineStatus, baselineStatus_);
        DARABONBA_PTR_FROM_JSON(Buffer, buffer_);
        DARABONBA_PTR_FROM_JSON(DealTime, dealTime_);
        DARABONBA_PTR_FROM_JSON(DealUser, dealUser_);
        DARABONBA_PTR_FROM_JSON(FixTime, fixTime_);
        DARABONBA_PTR_FROM_JSON(HappenTime, happenTime_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(NextAlertTime, nextAlertTime_);
        DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
        DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
        DARABONBA_PTR_FROM_JSON(Owner, owner_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        DARABONBA_PTR_FROM_JSON(TopicId, topicId_);
        DARABONBA_PTR_FROM_JSON(TopicName, topicName_);
        DARABONBA_PTR_FROM_JSON(TopicStatus, topicStatus_);
        DARABONBA_PTR_FROM_JSON(TopicType, topicType_);
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
      virtual bool empty() const override { return this->addTime_ == nullptr
        && this->alertTime_ == nullptr && this->assigner_ == nullptr && this->baselineBuffer_ == nullptr && this->baselineId_ == nullptr && this->baselineInGroupId_ == nullptr
        && this->baselineName_ == nullptr && this->baselineStatus_ == nullptr && this->buffer_ == nullptr && this->dealTime_ == nullptr && this->dealUser_ == nullptr
        && this->fixTime_ == nullptr && this->happenTime_ == nullptr && this->instanceId_ == nullptr && this->nextAlertTime_ == nullptr && this->nodeId_ == nullptr
        && this->nodeName_ == nullptr && this->owner_ == nullptr && this->projectId_ == nullptr && this->topicId_ == nullptr && this->topicName_ == nullptr
        && this->topicStatus_ == nullptr && this->topicType_ == nullptr; };
      // addTime Field Functions 
      bool hasAddTime() const { return this->addTime_ != nullptr;};
      void deleteAddTime() { this->addTime_ = nullptr;};
      inline int64_t getAddTime() const { DARABONBA_PTR_GET_DEFAULT(addTime_, 0L) };
      inline Data& setAddTime(int64_t addTime) { DARABONBA_PTR_SET_VALUE(addTime_, addTime) };


      // alertTime Field Functions 
      bool hasAlertTime() const { return this->alertTime_ != nullptr;};
      void deleteAlertTime() { this->alertTime_ = nullptr;};
      inline int64_t getAlertTime() const { DARABONBA_PTR_GET_DEFAULT(alertTime_, 0L) };
      inline Data& setAlertTime(int64_t alertTime) { DARABONBA_PTR_SET_VALUE(alertTime_, alertTime) };


      // assigner Field Functions 
      bool hasAssigner() const { return this->assigner_ != nullptr;};
      void deleteAssigner() { this->assigner_ = nullptr;};
      inline string getAssigner() const { DARABONBA_PTR_GET_DEFAULT(assigner_, "") };
      inline Data& setAssigner(string assigner) { DARABONBA_PTR_SET_VALUE(assigner_, assigner) };


      // baselineBuffer Field Functions 
      bool hasBaselineBuffer() const { return this->baselineBuffer_ != nullptr;};
      void deleteBaselineBuffer() { this->baselineBuffer_ = nullptr;};
      inline int64_t getBaselineBuffer() const { DARABONBA_PTR_GET_DEFAULT(baselineBuffer_, 0L) };
      inline Data& setBaselineBuffer(int64_t baselineBuffer) { DARABONBA_PTR_SET_VALUE(baselineBuffer_, baselineBuffer) };


      // baselineId Field Functions 
      bool hasBaselineId() const { return this->baselineId_ != nullptr;};
      void deleteBaselineId() { this->baselineId_ = nullptr;};
      inline int64_t getBaselineId() const { DARABONBA_PTR_GET_DEFAULT(baselineId_, 0L) };
      inline Data& setBaselineId(int64_t baselineId) { DARABONBA_PTR_SET_VALUE(baselineId_, baselineId) };


      // baselineInGroupId Field Functions 
      bool hasBaselineInGroupId() const { return this->baselineInGroupId_ != nullptr;};
      void deleteBaselineInGroupId() { this->baselineInGroupId_ = nullptr;};
      inline int32_t getBaselineInGroupId() const { DARABONBA_PTR_GET_DEFAULT(baselineInGroupId_, 0) };
      inline Data& setBaselineInGroupId(int32_t baselineInGroupId) { DARABONBA_PTR_SET_VALUE(baselineInGroupId_, baselineInGroupId) };


      // baselineName Field Functions 
      bool hasBaselineName() const { return this->baselineName_ != nullptr;};
      void deleteBaselineName() { this->baselineName_ = nullptr;};
      inline string getBaselineName() const { DARABONBA_PTR_GET_DEFAULT(baselineName_, "") };
      inline Data& setBaselineName(string baselineName) { DARABONBA_PTR_SET_VALUE(baselineName_, baselineName) };


      // baselineStatus Field Functions 
      bool hasBaselineStatus() const { return this->baselineStatus_ != nullptr;};
      void deleteBaselineStatus() { this->baselineStatus_ = nullptr;};
      inline string getBaselineStatus() const { DARABONBA_PTR_GET_DEFAULT(baselineStatus_, "") };
      inline Data& setBaselineStatus(string baselineStatus) { DARABONBA_PTR_SET_VALUE(baselineStatus_, baselineStatus) };


      // buffer Field Functions 
      bool hasBuffer() const { return this->buffer_ != nullptr;};
      void deleteBuffer() { this->buffer_ = nullptr;};
      inline int64_t getBuffer() const { DARABONBA_PTR_GET_DEFAULT(buffer_, 0L) };
      inline Data& setBuffer(int64_t buffer) { DARABONBA_PTR_SET_VALUE(buffer_, buffer) };


      // dealTime Field Functions 
      bool hasDealTime() const { return this->dealTime_ != nullptr;};
      void deleteDealTime() { this->dealTime_ = nullptr;};
      inline int64_t getDealTime() const { DARABONBA_PTR_GET_DEFAULT(dealTime_, 0L) };
      inline Data& setDealTime(int64_t dealTime) { DARABONBA_PTR_SET_VALUE(dealTime_, dealTime) };


      // dealUser Field Functions 
      bool hasDealUser() const { return this->dealUser_ != nullptr;};
      void deleteDealUser() { this->dealUser_ = nullptr;};
      inline string getDealUser() const { DARABONBA_PTR_GET_DEFAULT(dealUser_, "") };
      inline Data& setDealUser(string dealUser) { DARABONBA_PTR_SET_VALUE(dealUser_, dealUser) };


      // fixTime Field Functions 
      bool hasFixTime() const { return this->fixTime_ != nullptr;};
      void deleteFixTime() { this->fixTime_ = nullptr;};
      inline int64_t getFixTime() const { DARABONBA_PTR_GET_DEFAULT(fixTime_, 0L) };
      inline Data& setFixTime(int64_t fixTime) { DARABONBA_PTR_SET_VALUE(fixTime_, fixTime) };


      // happenTime Field Functions 
      bool hasHappenTime() const { return this->happenTime_ != nullptr;};
      void deleteHappenTime() { this->happenTime_ = nullptr;};
      inline int64_t getHappenTime() const { DARABONBA_PTR_GET_DEFAULT(happenTime_, 0L) };
      inline Data& setHappenTime(int64_t happenTime) { DARABONBA_PTR_SET_VALUE(happenTime_, happenTime) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline int64_t getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
      inline Data& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // nextAlertTime Field Functions 
      bool hasNextAlertTime() const { return this->nextAlertTime_ != nullptr;};
      void deleteNextAlertTime() { this->nextAlertTime_ = nullptr;};
      inline int64_t getNextAlertTime() const { DARABONBA_PTR_GET_DEFAULT(nextAlertTime_, 0L) };
      inline Data& setNextAlertTime(int64_t nextAlertTime) { DARABONBA_PTR_SET_VALUE(nextAlertTime_, nextAlertTime) };


      // nodeId Field Functions 
      bool hasNodeId() const { return this->nodeId_ != nullptr;};
      void deleteNodeId() { this->nodeId_ = nullptr;};
      inline int64_t getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
      inline Data& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


      // nodeName Field Functions 
      bool hasNodeName() const { return this->nodeName_ != nullptr;};
      void deleteNodeName() { this->nodeName_ = nullptr;};
      inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
      inline Data& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


      // owner Field Functions 
      bool hasOwner() const { return this->owner_ != nullptr;};
      void deleteOwner() { this->owner_ = nullptr;};
      inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
      inline Data& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline Data& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // topicId Field Functions 
      bool hasTopicId() const { return this->topicId_ != nullptr;};
      void deleteTopicId() { this->topicId_ = nullptr;};
      inline int64_t getTopicId() const { DARABONBA_PTR_GET_DEFAULT(topicId_, 0L) };
      inline Data& setTopicId(int64_t topicId) { DARABONBA_PTR_SET_VALUE(topicId_, topicId) };


      // topicName Field Functions 
      bool hasTopicName() const { return this->topicName_ != nullptr;};
      void deleteTopicName() { this->topicName_ = nullptr;};
      inline string getTopicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
      inline Data& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


      // topicStatus Field Functions 
      bool hasTopicStatus() const { return this->topicStatus_ != nullptr;};
      void deleteTopicStatus() { this->topicStatus_ = nullptr;};
      inline string getTopicStatus() const { DARABONBA_PTR_GET_DEFAULT(topicStatus_, "") };
      inline Data& setTopicStatus(string topicStatus) { DARABONBA_PTR_SET_VALUE(topicStatus_, topicStatus) };


      // topicType Field Functions 
      bool hasTopicType() const { return this->topicType_ != nullptr;};
      void deleteTopicType() { this->topicType_ = nullptr;};
      inline string getTopicType() const { DARABONBA_PTR_GET_DEFAULT(topicType_, "") };
      inline Data& setTopicType(string topicType) { DARABONBA_PTR_SET_VALUE(topicType_, topicType) };


    protected:
      // The timestamp when the event was found.
      shared_ptr<int64_t> addTime_ {};
      // The timestamp when the first alert was reported.
      shared_ptr<int64_t> alertTime_ {};
      // The ID of the Alibaba Cloud account used by the alert recipient.
      shared_ptr<string> assigner_ {};
      // The margin of the worst baseline instance. Unit: seconds.
      shared_ptr<int64_t> baselineBuffer_ {};
      // The ID of the baseline to which the worst baseline instance belongs.
      shared_ptr<int64_t> baselineId_ {};
      // The ID of the cycle of the worst baseline instance.
      shared_ptr<int32_t> baselineInGroupId_ {};
      // The name of the baseline to which the worst baseline instance belongs.
      shared_ptr<string> baselineName_ {};
      // The status of the baseline. Valid values: ERROR, SAFE, DANGROUS, and OVER. The value ERROR indicates that no nodes are associated with the baseline, or all nodes associated with the baseline are suspended. The value SAFE indicates that nodes are run before the alert duration begins. The value DANGROUS indicates that nodes are still running after the alert duration ends but the committed completion time does not arrive. The value OVER indicates that nodes are still running after the committed completion time.
      shared_ptr<string> baselineStatus_ {};
      // The margin of the event. Unit: seconds.
      shared_ptr<int64_t> buffer_ {};
      // The timestamp when the event was last processed.
      shared_ptr<int64_t> dealTime_ {};
      // The ID of the Alibaba Cloud account used by the user who last processed the event.
      shared_ptr<string> dealUser_ {};
      // The timestamp when the event was processed.
      shared_ptr<int64_t> fixTime_ {};
      // The timestamp when the event occurred. A time difference may exist between the time when the event occurred and the time when the event was found.
      shared_ptr<int64_t> happenTime_ {};
      // The ID of the instance that triggered the event.
      shared_ptr<int64_t> instanceId_ {};
      // The timestamp when the system reports the next alert.
      shared_ptr<int64_t> nextAlertTime_ {};
      // The ID of the node that triggered the event.
      shared_ptr<int64_t> nodeId_ {};
      // The name of the node that triggered the event.
      shared_ptr<string> nodeName_ {};
      // The ID of the Alibaba Cloud account used by the event owner.
      shared_ptr<string> owner_ {};
      // The ID of the workspace to which the node that triggered the event belongs.
      shared_ptr<int64_t> projectId_ {};
      // The event ID.
      shared_ptr<int64_t> topicId_ {};
      // The name of the event.
      shared_ptr<string> topicName_ {};
      // The status of the event. Valid values: IGNORE, NEW, FIXING, and RECOVER.
      shared_ptr<string> topicStatus_ {};
      // The type of the event. Valid values: SLOW and ERROR. The value SLOW indicates that the duration of the task is significantly longer than the average duration of the task in previous cycles. The value ERROR indicates that the task fails to run.
      shared_ptr<string> topicType_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetTopicResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetTopicResponseBody::Data) };
    inline GetTopicResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetTopicResponseBody::Data) };
    inline GetTopicResponseBody& setData(const GetTopicResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetTopicResponseBody& setData(GetTopicResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetTopicResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetTopicResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetTopicResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTopicResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetTopicResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The details of the event.
    shared_ptr<GetTopicResponseBody::Data> data_ {};
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMessage_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
