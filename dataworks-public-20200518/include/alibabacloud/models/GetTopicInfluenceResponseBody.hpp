// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTOPICINFLUENCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTOPICINFLUENCERESPONSEBODY_HPP_
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
  class GetTopicInfluenceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTopicInfluenceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetTopicInfluenceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetTopicInfluenceResponseBody() = default ;
    GetTopicInfluenceResponseBody(const GetTopicInfluenceResponseBody &) = default ;
    GetTopicInfluenceResponseBody(GetTopicInfluenceResponseBody &&) = default ;
    GetTopicInfluenceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTopicInfluenceResponseBody() = default ;
    GetTopicInfluenceResponseBody& operator=(const GetTopicInfluenceResponseBody &) = default ;
    GetTopicInfluenceResponseBody& operator=(GetTopicInfluenceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Influences, influences_);
        DARABONBA_PTR_TO_JSON(TopicId, topicId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Influences, influences_);
        DARABONBA_PTR_FROM_JSON(TopicId, topicId_);
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
      class Influences : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Influences& obj) { 
          DARABONBA_PTR_TO_JSON(BaselineId, baselineId_);
          DARABONBA_PTR_TO_JSON(BaselineName, baselineName_);
          DARABONBA_PTR_TO_JSON(Bizdate, bizdate_);
          DARABONBA_PTR_TO_JSON(Buffer, buffer_);
          DARABONBA_PTR_TO_JSON(InGroupId, inGroupId_);
          DARABONBA_PTR_TO_JSON(Owner, owner_);
          DARABONBA_PTR_TO_JSON(Priority, priority_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, Influences& obj) { 
          DARABONBA_PTR_FROM_JSON(BaselineId, baselineId_);
          DARABONBA_PTR_FROM_JSON(BaselineName, baselineName_);
          DARABONBA_PTR_FROM_JSON(Bizdate, bizdate_);
          DARABONBA_PTR_FROM_JSON(Buffer, buffer_);
          DARABONBA_PTR_FROM_JSON(InGroupId, inGroupId_);
          DARABONBA_PTR_FROM_JSON(Owner, owner_);
          DARABONBA_PTR_FROM_JSON(Priority, priority_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        Influences() = default ;
        Influences(const Influences &) = default ;
        Influences(Influences &&) = default ;
        Influences(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Influences() = default ;
        Influences& operator=(const Influences &) = default ;
        Influences& operator=(Influences &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->baselineId_ == nullptr
        && this->baselineName_ == nullptr && this->bizdate_ == nullptr && this->buffer_ == nullptr && this->inGroupId_ == nullptr && this->owner_ == nullptr
        && this->priority_ == nullptr && this->projectId_ == nullptr && this->status_ == nullptr; };
        // baselineId Field Functions 
        bool hasBaselineId() const { return this->baselineId_ != nullptr;};
        void deleteBaselineId() { this->baselineId_ = nullptr;};
        inline int64_t getBaselineId() const { DARABONBA_PTR_GET_DEFAULT(baselineId_, 0L) };
        inline Influences& setBaselineId(int64_t baselineId) { DARABONBA_PTR_SET_VALUE(baselineId_, baselineId) };


        // baselineName Field Functions 
        bool hasBaselineName() const { return this->baselineName_ != nullptr;};
        void deleteBaselineName() { this->baselineName_ = nullptr;};
        inline string getBaselineName() const { DARABONBA_PTR_GET_DEFAULT(baselineName_, "") };
        inline Influences& setBaselineName(string baselineName) { DARABONBA_PTR_SET_VALUE(baselineName_, baselineName) };


        // bizdate Field Functions 
        bool hasBizdate() const { return this->bizdate_ != nullptr;};
        void deleteBizdate() { this->bizdate_ = nullptr;};
        inline int64_t getBizdate() const { DARABONBA_PTR_GET_DEFAULT(bizdate_, 0L) };
        inline Influences& setBizdate(int64_t bizdate) { DARABONBA_PTR_SET_VALUE(bizdate_, bizdate) };


        // buffer Field Functions 
        bool hasBuffer() const { return this->buffer_ != nullptr;};
        void deleteBuffer() { this->buffer_ = nullptr;};
        inline int64_t getBuffer() const { DARABONBA_PTR_GET_DEFAULT(buffer_, 0L) };
        inline Influences& setBuffer(int64_t buffer) { DARABONBA_PTR_SET_VALUE(buffer_, buffer) };


        // inGroupId Field Functions 
        bool hasInGroupId() const { return this->inGroupId_ != nullptr;};
        void deleteInGroupId() { this->inGroupId_ = nullptr;};
        inline int32_t getInGroupId() const { DARABONBA_PTR_GET_DEFAULT(inGroupId_, 0) };
        inline Influences& setInGroupId(int32_t inGroupId) { DARABONBA_PTR_SET_VALUE(inGroupId_, inGroupId) };


        // owner Field Functions 
        bool hasOwner() const { return this->owner_ != nullptr;};
        void deleteOwner() { this->owner_ = nullptr;};
        inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
        inline Influences& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


        // priority Field Functions 
        bool hasPriority() const { return this->priority_ != nullptr;};
        void deletePriority() { this->priority_ = nullptr;};
        inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
        inline Influences& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
        inline Influences& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Influences& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The ID of the baseline.
        shared_ptr<int64_t> baselineId_ {};
        // The name of the baseline.
        shared_ptr<string> baselineName_ {};
        // The data timestamp of the baseline instance.
        shared_ptr<int64_t> bizdate_ {};
        // The margin of the baseline instance. Unit: seconds.
        shared_ptr<int64_t> buffer_ {};
        // The ID of the cycle of the baseline instance. For a baseline instance that is scheduled by day, the field value is 1. For a baseline instance that is scheduled by hour, the field value ranges from 1 to 24.
        shared_ptr<int32_t> inGroupId_ {};
        // The ID of the Alibaba Cloud account used by the baseline owner. Multiple IDs are separated by commas (,).
        shared_ptr<string> owner_ {};
        // The priority of the baseline. Valid values: 1, 2, 5, 7, and 8.
        shared_ptr<int32_t> priority_ {};
        // The ID of the workspace to which the baseline belongs.
        shared_ptr<int64_t> projectId_ {};
        // The status of the baseline. Valid values: ERROR, SAFE, DANGROUS, and OVER. The value ERROR indicates that no nodes are associated with the baseline, or all nodes associated with the baseline are suspended. The value SAFE indicates that nodes are run before the alert duration begins. The value DANGROUS indicates that nodes are still running after the alert duration ends but the committed time does not arrive. The value OVER indicates that nodes are still running after the committed time.
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->influences_ == nullptr
        && this->topicId_ == nullptr; };
      // influences Field Functions 
      bool hasInfluences() const { return this->influences_ != nullptr;};
      void deleteInfluences() { this->influences_ = nullptr;};
      inline const vector<Data::Influences> & getInfluences() const { DARABONBA_PTR_GET_CONST(influences_, vector<Data::Influences>) };
      inline vector<Data::Influences> getInfluences() { DARABONBA_PTR_GET(influences_, vector<Data::Influences>) };
      inline Data& setInfluences(const vector<Data::Influences> & influences) { DARABONBA_PTR_SET_VALUE(influences_, influences) };
      inline Data& setInfluences(vector<Data::Influences> && influences) { DARABONBA_PTR_SET_RVALUE(influences_, influences) };


      // topicId Field Functions 
      bool hasTopicId() const { return this->topicId_ != nullptr;};
      void deleteTopicId() { this->topicId_ = nullptr;};
      inline int64_t getTopicId() const { DARABONBA_PTR_GET_DEFAULT(topicId_, 0L) };
      inline Data& setTopicId(int64_t topicId) { DARABONBA_PTR_SET_VALUE(topicId_, topicId) };


    protected:
      // The affected baseline instances.
      shared_ptr<vector<Data::Influences>> influences_ {};
      // The ID of the event.
      shared_ptr<int64_t> topicId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetTopicInfluenceResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetTopicInfluenceResponseBody::Data) };
    inline GetTopicInfluenceResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetTopicInfluenceResponseBody::Data) };
    inline GetTopicInfluenceResponseBody& setData(const GetTopicInfluenceResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetTopicInfluenceResponseBody& setData(GetTopicInfluenceResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetTopicInfluenceResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetTopicInfluenceResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetTopicInfluenceResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTopicInfluenceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetTopicInfluenceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The data returned.
    shared_ptr<GetTopicInfluenceResponseBody::Data> data_ {};
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
