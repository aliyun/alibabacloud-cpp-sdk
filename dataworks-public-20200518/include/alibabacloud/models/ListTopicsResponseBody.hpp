// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTOPICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTOPICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListTopicsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTopicsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListTopicsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListTopicsResponseBody() = default ;
    ListTopicsResponseBody(const ListTopicsResponseBody &) = default ;
    ListTopicsResponseBody(ListTopicsResponseBody &&) = default ;
    ListTopicsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTopicsResponseBody() = default ;
    ListTopicsResponseBody& operator=(const ListTopicsResponseBody &) = default ;
    ListTopicsResponseBody& operator=(ListTopicsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Topics, topics_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Topics, topics_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
      class Topics : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Topics& obj) { 
          DARABONBA_PTR_TO_JSON(AddTime, addTime_);
          DARABONBA_PTR_TO_JSON(FixTime, fixTime_);
          DARABONBA_PTR_TO_JSON(HappenTime, happenTime_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
          DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
          DARABONBA_PTR_TO_JSON(NodeOwner, nodeOwner_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(TopicId, topicId_);
          DARABONBA_PTR_TO_JSON(TopicName, topicName_);
          DARABONBA_PTR_TO_JSON(TopicStatus, topicStatus_);
          DARABONBA_PTR_TO_JSON(TopicType, topicType_);
        };
        friend void from_json(const Darabonba::Json& j, Topics& obj) { 
          DARABONBA_PTR_FROM_JSON(AddTime, addTime_);
          DARABONBA_PTR_FROM_JSON(FixTime, fixTime_);
          DARABONBA_PTR_FROM_JSON(HappenTime, happenTime_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
          DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
          DARABONBA_PTR_FROM_JSON(NodeOwner, nodeOwner_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          DARABONBA_PTR_FROM_JSON(TopicId, topicId_);
          DARABONBA_PTR_FROM_JSON(TopicName, topicName_);
          DARABONBA_PTR_FROM_JSON(TopicStatus, topicStatus_);
          DARABONBA_PTR_FROM_JSON(TopicType, topicType_);
        };
        Topics() = default ;
        Topics(const Topics &) = default ;
        Topics(Topics &&) = default ;
        Topics(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Topics() = default ;
        Topics& operator=(const Topics &) = default ;
        Topics& operator=(Topics &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->addTime_ == nullptr
        && this->fixTime_ == nullptr && this->happenTime_ == nullptr && this->instanceId_ == nullptr && this->nodeId_ == nullptr && this->nodeName_ == nullptr
        && this->nodeOwner_ == nullptr && this->projectId_ == nullptr && this->topicId_ == nullptr && this->topicName_ == nullptr && this->topicStatus_ == nullptr
        && this->topicType_ == nullptr; };
        // addTime Field Functions 
        bool hasAddTime() const { return this->addTime_ != nullptr;};
        void deleteAddTime() { this->addTime_ = nullptr;};
        inline int64_t getAddTime() const { DARABONBA_PTR_GET_DEFAULT(addTime_, 0L) };
        inline Topics& setAddTime(int64_t addTime) { DARABONBA_PTR_SET_VALUE(addTime_, addTime) };


        // fixTime Field Functions 
        bool hasFixTime() const { return this->fixTime_ != nullptr;};
        void deleteFixTime() { this->fixTime_ = nullptr;};
        inline int64_t getFixTime() const { DARABONBA_PTR_GET_DEFAULT(fixTime_, 0L) };
        inline Topics& setFixTime(int64_t fixTime) { DARABONBA_PTR_SET_VALUE(fixTime_, fixTime) };


        // happenTime Field Functions 
        bool hasHappenTime() const { return this->happenTime_ != nullptr;};
        void deleteHappenTime() { this->happenTime_ = nullptr;};
        inline int64_t getHappenTime() const { DARABONBA_PTR_GET_DEFAULT(happenTime_, 0L) };
        inline Topics& setHappenTime(int64_t happenTime) { DARABONBA_PTR_SET_VALUE(happenTime_, happenTime) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline int64_t getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
        inline Topics& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline int64_t getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
        inline Topics& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


        // nodeName Field Functions 
        bool hasNodeName() const { return this->nodeName_ != nullptr;};
        void deleteNodeName() { this->nodeName_ = nullptr;};
        inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
        inline Topics& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


        // nodeOwner Field Functions 
        bool hasNodeOwner() const { return this->nodeOwner_ != nullptr;};
        void deleteNodeOwner() { this->nodeOwner_ = nullptr;};
        inline string getNodeOwner() const { DARABONBA_PTR_GET_DEFAULT(nodeOwner_, "") };
        inline Topics& setNodeOwner(string nodeOwner) { DARABONBA_PTR_SET_VALUE(nodeOwner_, nodeOwner) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
        inline Topics& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // topicId Field Functions 
        bool hasTopicId() const { return this->topicId_ != nullptr;};
        void deleteTopicId() { this->topicId_ = nullptr;};
        inline int64_t getTopicId() const { DARABONBA_PTR_GET_DEFAULT(topicId_, 0L) };
        inline Topics& setTopicId(int64_t topicId) { DARABONBA_PTR_SET_VALUE(topicId_, topicId) };


        // topicName Field Functions 
        bool hasTopicName() const { return this->topicName_ != nullptr;};
        void deleteTopicName() { this->topicName_ = nullptr;};
        inline string getTopicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
        inline Topics& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


        // topicStatus Field Functions 
        bool hasTopicStatus() const { return this->topicStatus_ != nullptr;};
        void deleteTopicStatus() { this->topicStatus_ = nullptr;};
        inline string getTopicStatus() const { DARABONBA_PTR_GET_DEFAULT(topicStatus_, "") };
        inline Topics& setTopicStatus(string topicStatus) { DARABONBA_PTR_SET_VALUE(topicStatus_, topicStatus) };


        // topicType Field Functions 
        bool hasTopicType() const { return this->topicType_ != nullptr;};
        void deleteTopicType() { this->topicType_ = nullptr;};
        inline string getTopicType() const { DARABONBA_PTR_GET_DEFAULT(topicType_, "") };
        inline Topics& setTopicType(string topicType) { DARABONBA_PTR_SET_VALUE(topicType_, topicType) };


      protected:
        // The timestamp when the event was found.
        shared_ptr<int64_t> addTime_ {};
        // The timestamp when the event was processed.
        shared_ptr<int64_t> fixTime_ {};
        // The timestamp when the event occurred. A time difference may exist between the time when the event occurred and the time when the event was found.
        shared_ptr<int64_t> happenTime_ {};
        // The ID of the node instance that triggers the event.
        shared_ptr<int64_t> instanceId_ {};
        // The ID of the node that triggers the event.
        shared_ptr<int64_t> nodeId_ {};
        // The name of the node.
        shared_ptr<string> nodeName_ {};
        // The ID of the Alibaba Cloud account that is used by the node owner.
        shared_ptr<string> nodeOwner_ {};
        // The ID of the workspace to which the node belongs.
        shared_ptr<int64_t> projectId_ {};
        // The ID of the event.
        shared_ptr<int64_t> topicId_ {};
        // The name of the event.
        shared_ptr<string> topicName_ {};
        // The status of the event. Valid values: IGNORE, NEW, FIXING, and RECOVER. The value IGNORE indicates that the event is ignored. The value NEW indicates that the event is a new event. The value FIXING indicates that the event is being processed. The value RECOVER indicates that the event is processed.
        shared_ptr<string> topicStatus_ {};
        // The type of the event. Valid values: SLOW and ERROR. The value SLOW indicates that the running duration of the node in the current scheduling cycle is significantly longer than the average running duration of the node in previous scheduling cycles. The value ERROR indicates that the node fails to run.
        shared_ptr<string> topicType_ {};
      };

      virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->topics_ == nullptr && this->totalCount_ == nullptr; };
      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // topics Field Functions 
      bool hasTopics() const { return this->topics_ != nullptr;};
      void deleteTopics() { this->topics_ = nullptr;};
      inline const vector<Data::Topics> & getTopics() const { DARABONBA_PTR_GET_CONST(topics_, vector<Data::Topics>) };
      inline vector<Data::Topics> getTopics() { DARABONBA_PTR_GET(topics_, vector<Data::Topics>) };
      inline Data& setTopics(const vector<Data::Topics> & topics) { DARABONBA_PTR_SET_VALUE(topics_, topics) };
      inline Data& setTopics(vector<Data::Topics> && topics) { DARABONBA_PTR_SET_RVALUE(topics_, topics) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The page number of the returned page.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries returned per page.
      shared_ptr<int32_t> pageSize_ {};
      // The events returned.
      shared_ptr<vector<Data::Topics>> topics_ {};
      // The total number of the events returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListTopicsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListTopicsResponseBody::Data) };
    inline ListTopicsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListTopicsResponseBody::Data) };
    inline ListTopicsResponseBody& setData(const ListTopicsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListTopicsResponseBody& setData(ListTopicsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListTopicsResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListTopicsResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListTopicsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTopicsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListTopicsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The information about the events returned.
    shared_ptr<ListTopicsResponseBody::Data> data_ {};
    // The error code returned.
    shared_ptr<string> errorCode_ {};
    // The error message returned.
    shared_ptr<string> errorMessage_ {};
    // The HTTP status code returned.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The ID of the request. You can use the ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
