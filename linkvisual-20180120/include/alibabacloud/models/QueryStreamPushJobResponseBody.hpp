// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSTREAMPUSHJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSTREAMPUSHJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class QueryStreamPushJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryStreamPushJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryStreamPushJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryStreamPushJobResponseBody() = default ;
    QueryStreamPushJobResponseBody(const QueryStreamPushJobResponseBody &) = default ;
    QueryStreamPushJobResponseBody(QueryStreamPushJobResponseBody &&) = default ;
    QueryStreamPushJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryStreamPushJobResponseBody() = default ;
    QueryStreamPushJobResponseBody& operator=(const QueryStreamPushJobResponseBody &) = default ;
    QueryStreamPushJobResponseBody& operator=(QueryStreamPushJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(JobType, jobType_);
        DARABONBA_PTR_TO_JSON(PushStatus, pushStatus_);
        DARABONBA_PTR_TO_JSON(PushUrl, pushUrl_);
        DARABONBA_PTR_TO_JSON(StreamType, streamType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(JobType, jobType_);
        DARABONBA_PTR_FROM_JSON(PushStatus, pushStatus_);
        DARABONBA_PTR_FROM_JSON(PushUrl, pushUrl_);
        DARABONBA_PTR_FROM_JSON(StreamType, streamType_);
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
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->jobType_ == nullptr && this->pushStatus_ == nullptr && this->pushUrl_ == nullptr && this->streamType_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int32_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0) };
      inline Data& setCreateTime(int32_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // jobType Field Functions 
      bool hasJobType() const { return this->jobType_ != nullptr;};
      void deleteJobType() { this->jobType_ = nullptr;};
      inline int32_t getJobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, 0) };
      inline Data& setJobType(int32_t jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


      // pushStatus Field Functions 
      bool hasPushStatus() const { return this->pushStatus_ != nullptr;};
      void deletePushStatus() { this->pushStatus_ = nullptr;};
      inline int32_t getPushStatus() const { DARABONBA_PTR_GET_DEFAULT(pushStatus_, 0) };
      inline Data& setPushStatus(int32_t pushStatus) { DARABONBA_PTR_SET_VALUE(pushStatus_, pushStatus) };


      // pushUrl Field Functions 
      bool hasPushUrl() const { return this->pushUrl_ != nullptr;};
      void deletePushUrl() { this->pushUrl_ = nullptr;};
      inline string getPushUrl() const { DARABONBA_PTR_GET_DEFAULT(pushUrl_, "") };
      inline Data& setPushUrl(string pushUrl) { DARABONBA_PTR_SET_VALUE(pushUrl_, pushUrl) };


      // streamType Field Functions 
      bool hasStreamType() const { return this->streamType_ != nullptr;};
      void deleteStreamType() { this->streamType_ = nullptr;};
      inline int32_t getStreamType() const { DARABONBA_PTR_GET_DEFAULT(streamType_, 0) };
      inline Data& setStreamType(int32_t streamType) { DARABONBA_PTR_SET_VALUE(streamType_, streamType) };


    protected:
      // The time when the job was created. Unit: seconds.
      shared_ptr<int32_t> createTime_ {};
      // The type of the stream push job. Valid values:
      // 
      // - **1**: Continuous job.
      // - **2**: Triggered job, which ends after an interruption.
      shared_ptr<int32_t> jobType_ {};
      // The current stream push status. Valid values:
      // 
      // - **1**: Pushing.
      // - **2**: Waiting to push.
      // - **3**: Push ended.
      shared_ptr<int32_t> pushStatus_ {};
      // The stream push URL.
      shared_ptr<string> pushUrl_ {};
      // The stream type. Valid values:
      // 
      // - **0**: Main stream.
      // - **1**: Sub stream.
      shared_ptr<int32_t> streamType_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryStreamPushJobResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryStreamPushJobResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryStreamPushJobResponseBody::Data) };
    inline QueryStreamPushJobResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryStreamPushJobResponseBody::Data) };
    inline QueryStreamPushJobResponseBody& setData(const QueryStreamPushJobResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryStreamPushJobResponseBody& setData(QueryStreamPushJobResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline QueryStreamPushJobResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryStreamPushJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryStreamPushJobResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code.
    // 
    // - **200**: The call is successful.
    // - Other values: An error code. For more information, see [Error codes](https://help.aliyun.com/document_detail/145071.html).
    shared_ptr<string> code_ {};
    // The result returned if the call is successful.
    shared_ptr<QueryStreamPushJobResponseBody::Data> data_ {};
    // The error message returned if the call fails.
    shared_ptr<string> errorMessage_ {};
    // The unique identifier that Alibaba Cloud generates for the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful. Valid values:
    // - **true**: The call was successful.
    // - **false**: The call failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
