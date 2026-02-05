// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBATCHREPEATJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEBATCHREPEATJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class CreateBatchRepeatJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBatchRepeatJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(JobGroup, jobGroup_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBatchRepeatJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(JobGroup, jobGroup_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateBatchRepeatJobResponseBody() = default ;
    CreateBatchRepeatJobResponseBody(const CreateBatchRepeatJobResponseBody &) = default ;
    CreateBatchRepeatJobResponseBody(CreateBatchRepeatJobResponseBody &&) = default ;
    CreateBatchRepeatJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBatchRepeatJobResponseBody() = default ;
    CreateBatchRepeatJobResponseBody& operator=(const CreateBatchRepeatJobResponseBody &) = default ;
    CreateBatchRepeatJobResponseBody& operator=(CreateBatchRepeatJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class JobGroup : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const JobGroup& obj) { 
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(MinConcurrency, minConcurrency_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(RingingDuration, ringingDuration_);
      };
      friend void from_json(const Darabonba::Json& j, JobGroup& obj) { 
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(MinConcurrency, minConcurrency_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(RingingDuration, ringingDuration_);
      };
      JobGroup() = default ;
      JobGroup(const JobGroup &) = default ;
      JobGroup(JobGroup &&) = default ;
      JobGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~JobGroup() = default ;
      JobGroup& operator=(const JobGroup &) = default ;
      JobGroup& operator=(JobGroup &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->id_ == nullptr
        && this->minConcurrency_ == nullptr && this->priority_ == nullptr && this->ringingDuration_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline JobGroup& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // minConcurrency Field Functions 
      bool hasMinConcurrency() const { return this->minConcurrency_ != nullptr;};
      void deleteMinConcurrency() { this->minConcurrency_ = nullptr;};
      inline int64_t getMinConcurrency() const { DARABONBA_PTR_GET_DEFAULT(minConcurrency_, 0L) };
      inline JobGroup& setMinConcurrency(int64_t minConcurrency) { DARABONBA_PTR_SET_VALUE(minConcurrency_, minConcurrency) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline string getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
      inline JobGroup& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // ringingDuration Field Functions 
      bool hasRingingDuration() const { return this->ringingDuration_ != nullptr;};
      void deleteRingingDuration() { this->ringingDuration_ = nullptr;};
      inline int64_t getRingingDuration() const { DARABONBA_PTR_GET_DEFAULT(ringingDuration_, 0L) };
      inline JobGroup& setRingingDuration(int64_t ringingDuration) { DARABONBA_PTR_SET_VALUE(ringingDuration_, ringingDuration) };


    protected:
      shared_ptr<string> id_ {};
      shared_ptr<int64_t> minConcurrency_ {};
      shared_ptr<string> priority_ {};
      shared_ptr<int64_t> ringingDuration_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->jobGroup_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateBatchRepeatJobResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline CreateBatchRepeatJobResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // jobGroup Field Functions 
    bool hasJobGroup() const { return this->jobGroup_ != nullptr;};
    void deleteJobGroup() { this->jobGroup_ = nullptr;};
    inline const CreateBatchRepeatJobResponseBody::JobGroup & getJobGroup() const { DARABONBA_PTR_GET_CONST(jobGroup_, CreateBatchRepeatJobResponseBody::JobGroup) };
    inline CreateBatchRepeatJobResponseBody::JobGroup getJobGroup() { DARABONBA_PTR_GET(jobGroup_, CreateBatchRepeatJobResponseBody::JobGroup) };
    inline CreateBatchRepeatJobResponseBody& setJobGroup(const CreateBatchRepeatJobResponseBody::JobGroup & jobGroup) { DARABONBA_PTR_SET_VALUE(jobGroup_, jobGroup) };
    inline CreateBatchRepeatJobResponseBody& setJobGroup(CreateBatchRepeatJobResponseBody::JobGroup && jobGroup) { DARABONBA_PTR_SET_RVALUE(jobGroup_, jobGroup) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateBatchRepeatJobResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateBatchRepeatJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateBatchRepeatJobResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<CreateBatchRepeatJobResponseBody::JobGroup> jobGroup_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
