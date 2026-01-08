// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOTATASKBYTASKIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETOTATASKBYTASKIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class GetOtaTaskByTaskIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOtaTaskByTaskIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(OtaVersion, otaVersion_);
      DARABONBA_PTR_TO_JSON(ReleaseNote, releaseNote_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskStartTime, taskStartTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetOtaTaskByTaskIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(OtaVersion, otaVersion_);
      DARABONBA_PTR_FROM_JSON(ReleaseNote, releaseNote_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskStartTime, taskStartTime_);
    };
    GetOtaTaskByTaskIdResponseBody() = default ;
    GetOtaTaskByTaskIdResponseBody(const GetOtaTaskByTaskIdResponseBody &) = default ;
    GetOtaTaskByTaskIdResponseBody(GetOtaTaskByTaskIdResponseBody &&) = default ;
    GetOtaTaskByTaskIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOtaTaskByTaskIdResponseBody() = default ;
    GetOtaTaskByTaskIdResponseBody& operator=(const GetOtaTaskByTaskIdResponseBody &) = default ;
    GetOtaTaskByTaskIdResponseBody& operator=(GetOtaTaskByTaskIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->otaVersion_ == nullptr && this->releaseNote_ == nullptr && this->requestId_ == nullptr && this->taskStartTime_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetOtaTaskByTaskIdResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetOtaTaskByTaskIdResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // otaVersion Field Functions 
    bool hasOtaVersion() const { return this->otaVersion_ != nullptr;};
    void deleteOtaVersion() { this->otaVersion_ = nullptr;};
    inline string getOtaVersion() const { DARABONBA_PTR_GET_DEFAULT(otaVersion_, "") };
    inline GetOtaTaskByTaskIdResponseBody& setOtaVersion(string otaVersion) { DARABONBA_PTR_SET_VALUE(otaVersion_, otaVersion) };


    // releaseNote Field Functions 
    bool hasReleaseNote() const { return this->releaseNote_ != nullptr;};
    void deleteReleaseNote() { this->releaseNote_ = nullptr;};
    inline string getReleaseNote() const { DARABONBA_PTR_GET_DEFAULT(releaseNote_, "") };
    inline GetOtaTaskByTaskIdResponseBody& setReleaseNote(string releaseNote) { DARABONBA_PTR_SET_VALUE(releaseNote_, releaseNote) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetOtaTaskByTaskIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskStartTime Field Functions 
    bool hasTaskStartTime() const { return this->taskStartTime_ != nullptr;};
    void deleteTaskStartTime() { this->taskStartTime_ = nullptr;};
    inline string getTaskStartTime() const { DARABONBA_PTR_GET_DEFAULT(taskStartTime_, "") };
    inline GetOtaTaskByTaskIdResponseBody& setTaskStartTime(string taskStartTime) { DARABONBA_PTR_SET_VALUE(taskStartTime_, taskStartTime) };


  protected:
    // The error code.
    shared_ptr<string> code_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The OTA version.
    shared_ptr<string> otaVersion_ {};
    // The version description.
    shared_ptr<string> releaseNote_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The execution time of the OTA update task. The time follows the ISO 8601 standard.
    // 
    // Use the UTC time format: yyyy-MM-ddTHH:mmZ
    shared_ptr<string> taskStartTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
