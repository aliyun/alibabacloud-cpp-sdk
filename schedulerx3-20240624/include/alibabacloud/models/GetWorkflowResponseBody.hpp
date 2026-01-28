// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKFLOWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETWORKFLOWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class GetWorkflowResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkflowResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkflowResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetWorkflowResponseBody() = default ;
    GetWorkflowResponseBody(const GetWorkflowResponseBody &) = default ;
    GetWorkflowResponseBody(GetWorkflowResponseBody &&) = default ;
    GetWorkflowResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkflowResponseBody() = default ;
    GetWorkflowResponseBody& operator=(const GetWorkflowResponseBody &) = default ;
    GetWorkflowResponseBody& operator=(GetWorkflowResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AppName, appName_);
        DARABONBA_PTR_TO_JSON(Calendar, calendar_);
        DARABONBA_PTR_TO_JSON(Creator, creator_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(MaxConcurrency, maxConcurrency_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TimeExpression, timeExpression_);
        DARABONBA_PTR_TO_JSON(TimeType, timeType_);
        DARABONBA_PTR_TO_JSON(Timezone, timezone_);
        DARABONBA_PTR_TO_JSON(Updater, updater_);
        DARABONBA_PTR_TO_JSON(WorkflowId, workflowId_);
        DARABONBA_PTR_TO_JSON(Xattrs, xattrs_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AppName, appName_);
        DARABONBA_PTR_FROM_JSON(Calendar, calendar_);
        DARABONBA_PTR_FROM_JSON(Creator, creator_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(MaxConcurrency, maxConcurrency_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TimeExpression, timeExpression_);
        DARABONBA_PTR_FROM_JSON(TimeType, timeType_);
        DARABONBA_PTR_FROM_JSON(Timezone, timezone_);
        DARABONBA_PTR_FROM_JSON(Updater, updater_);
        DARABONBA_PTR_FROM_JSON(WorkflowId, workflowId_);
        DARABONBA_PTR_FROM_JSON(Xattrs, xattrs_);
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
      virtual bool empty() const override { return this->appName_ == nullptr
        && this->calendar_ == nullptr && this->creator_ == nullptr && this->description_ == nullptr && this->maxConcurrency_ == nullptr && this->name_ == nullptr
        && this->status_ == nullptr && this->timeExpression_ == nullptr && this->timeType_ == nullptr && this->timezone_ == nullptr && this->updater_ == nullptr
        && this->workflowId_ == nullptr && this->xattrs_ == nullptr; };
      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline Data& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // calendar Field Functions 
      bool hasCalendar() const { return this->calendar_ != nullptr;};
      void deleteCalendar() { this->calendar_ = nullptr;};
      inline string getCalendar() const { DARABONBA_PTR_GET_DEFAULT(calendar_, "") };
      inline Data& setCalendar(string calendar) { DARABONBA_PTR_SET_VALUE(calendar_, calendar) };


      // creator Field Functions 
      bool hasCreator() const { return this->creator_ != nullptr;};
      void deleteCreator() { this->creator_ = nullptr;};
      inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
      inline Data& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // maxConcurrency Field Functions 
      bool hasMaxConcurrency() const { return this->maxConcurrency_ != nullptr;};
      void deleteMaxConcurrency() { this->maxConcurrency_ = nullptr;};
      inline int32_t getMaxConcurrency() const { DARABONBA_PTR_GET_DEFAULT(maxConcurrency_, 0) };
      inline Data& setMaxConcurrency(int32_t maxConcurrency) { DARABONBA_PTR_SET_VALUE(maxConcurrency_, maxConcurrency) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Data& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // timeExpression Field Functions 
      bool hasTimeExpression() const { return this->timeExpression_ != nullptr;};
      void deleteTimeExpression() { this->timeExpression_ = nullptr;};
      inline string getTimeExpression() const { DARABONBA_PTR_GET_DEFAULT(timeExpression_, "") };
      inline Data& setTimeExpression(string timeExpression) { DARABONBA_PTR_SET_VALUE(timeExpression_, timeExpression) };


      // timeType Field Functions 
      bool hasTimeType() const { return this->timeType_ != nullptr;};
      void deleteTimeType() { this->timeType_ = nullptr;};
      inline int32_t getTimeType() const { DARABONBA_PTR_GET_DEFAULT(timeType_, 0) };
      inline Data& setTimeType(int32_t timeType) { DARABONBA_PTR_SET_VALUE(timeType_, timeType) };


      // timezone Field Functions 
      bool hasTimezone() const { return this->timezone_ != nullptr;};
      void deleteTimezone() { this->timezone_ = nullptr;};
      inline string getTimezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
      inline Data& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


      // updater Field Functions 
      bool hasUpdater() const { return this->updater_ != nullptr;};
      void deleteUpdater() { this->updater_ = nullptr;};
      inline string getUpdater() const { DARABONBA_PTR_GET_DEFAULT(updater_, "") };
      inline Data& setUpdater(string updater) { DARABONBA_PTR_SET_VALUE(updater_, updater) };


      // workflowId Field Functions 
      bool hasWorkflowId() const { return this->workflowId_ != nullptr;};
      void deleteWorkflowId() { this->workflowId_ = nullptr;};
      inline int64_t getWorkflowId() const { DARABONBA_PTR_GET_DEFAULT(workflowId_, 0L) };
      inline Data& setWorkflowId(int64_t workflowId) { DARABONBA_PTR_SET_VALUE(workflowId_, workflowId) };


      // xattrs Field Functions 
      bool hasXattrs() const { return this->xattrs_ != nullptr;};
      void deleteXattrs() { this->xattrs_ = nullptr;};
      inline string getXattrs() const { DARABONBA_PTR_GET_DEFAULT(xattrs_, "") };
      inline Data& setXattrs(string xattrs) { DARABONBA_PTR_SET_VALUE(xattrs_, xattrs) };


    protected:
      shared_ptr<string> appName_ {};
      shared_ptr<string> calendar_ {};
      shared_ptr<string> creator_ {};
      shared_ptr<string> description_ {};
      shared_ptr<int32_t> maxConcurrency_ {};
      shared_ptr<string> name_ {};
      shared_ptr<int32_t> status_ {};
      shared_ptr<string> timeExpression_ {};
      shared_ptr<int32_t> timeType_ {};
      shared_ptr<string> timezone_ {};
      shared_ptr<string> updater_ {};
      shared_ptr<int64_t> workflowId_ {};
      shared_ptr<string> xattrs_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetWorkflowResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetWorkflowResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetWorkflowResponseBody::Data) };
    inline GetWorkflowResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetWorkflowResponseBody::Data) };
    inline GetWorkflowResponseBody& setData(const GetWorkflowResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetWorkflowResponseBody& setData(GetWorkflowResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetWorkflowResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetWorkflowResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetWorkflowResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<int32_t> code_ {};
    // -
    shared_ptr<GetWorkflowResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
