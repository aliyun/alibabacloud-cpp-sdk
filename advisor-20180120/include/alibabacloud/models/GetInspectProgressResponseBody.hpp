// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSPECTPROGRESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSPECTPROGRESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Advisor20180120
{
namespace Models
{
  class GetInspectProgressResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInspectProgressResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetInspectProgressResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetInspectProgressResponseBody() = default ;
    GetInspectProgressResponseBody(const GetInspectProgressResponseBody &) = default ;
    GetInspectProgressResponseBody(GetInspectProgressResponseBody &&) = default ;
    GetInspectProgressResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInspectProgressResponseBody() = default ;
    GetInspectProgressResponseBody& operator=(const GetInspectProgressResponseBody &) = default ;
    GetInspectProgressResponseBody& operator=(GetInspectProgressResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AllSubtaskCount, allSubtaskCount_);
        DARABONBA_PTR_TO_JSON(Finish, finish_);
        DARABONBA_PTR_TO_JSON(FinishRate, finishRate_);
        DARABONBA_PTR_TO_JSON(FinishSubtaskCount, finishSubtaskCount_);
        DARABONBA_PTR_TO_JSON(LastInspectDate, lastInspectDate_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(UsedTime, usedTime_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AllSubtaskCount, allSubtaskCount_);
        DARABONBA_PTR_FROM_JSON(Finish, finish_);
        DARABONBA_PTR_FROM_JSON(FinishRate, finishRate_);
        DARABONBA_PTR_FROM_JSON(FinishSubtaskCount, finishSubtaskCount_);
        DARABONBA_PTR_FROM_JSON(LastInspectDate, lastInspectDate_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(UsedTime, usedTime_);
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
      virtual bool empty() const override { return this->allSubtaskCount_ == nullptr
        && this->finish_ == nullptr && this->finishRate_ == nullptr && this->finishSubtaskCount_ == nullptr && this->lastInspectDate_ == nullptr && this->taskId_ == nullptr
        && this->usedTime_ == nullptr; };
      // allSubtaskCount Field Functions 
      bool hasAllSubtaskCount() const { return this->allSubtaskCount_ != nullptr;};
      void deleteAllSubtaskCount() { this->allSubtaskCount_ = nullptr;};
      inline int32_t getAllSubtaskCount() const { DARABONBA_PTR_GET_DEFAULT(allSubtaskCount_, 0) };
      inline Data& setAllSubtaskCount(int32_t allSubtaskCount) { DARABONBA_PTR_SET_VALUE(allSubtaskCount_, allSubtaskCount) };


      // finish Field Functions 
      bool hasFinish() const { return this->finish_ != nullptr;};
      void deleteFinish() { this->finish_ = nullptr;};
      inline bool getFinish() const { DARABONBA_PTR_GET_DEFAULT(finish_, false) };
      inline Data& setFinish(bool finish) { DARABONBA_PTR_SET_VALUE(finish_, finish) };


      // finishRate Field Functions 
      bool hasFinishRate() const { return this->finishRate_ != nullptr;};
      void deleteFinishRate() { this->finishRate_ = nullptr;};
      inline double getFinishRate() const { DARABONBA_PTR_GET_DEFAULT(finishRate_, 0.0) };
      inline Data& setFinishRate(double finishRate) { DARABONBA_PTR_SET_VALUE(finishRate_, finishRate) };


      // finishSubtaskCount Field Functions 
      bool hasFinishSubtaskCount() const { return this->finishSubtaskCount_ != nullptr;};
      void deleteFinishSubtaskCount() { this->finishSubtaskCount_ = nullptr;};
      inline int32_t getFinishSubtaskCount() const { DARABONBA_PTR_GET_DEFAULT(finishSubtaskCount_, 0) };
      inline Data& setFinishSubtaskCount(int32_t finishSubtaskCount) { DARABONBA_PTR_SET_VALUE(finishSubtaskCount_, finishSubtaskCount) };


      // lastInspectDate Field Functions 
      bool hasLastInspectDate() const { return this->lastInspectDate_ != nullptr;};
      void deleteLastInspectDate() { this->lastInspectDate_ = nullptr;};
      inline int64_t getLastInspectDate() const { DARABONBA_PTR_GET_DEFAULT(lastInspectDate_, 0L) };
      inline Data& setLastInspectDate(int64_t lastInspectDate) { DARABONBA_PTR_SET_VALUE(lastInspectDate_, lastInspectDate) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
      inline Data& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // usedTime Field Functions 
      bool hasUsedTime() const { return this->usedTime_ != nullptr;};
      void deleteUsedTime() { this->usedTime_ = nullptr;};
      inline int64_t getUsedTime() const { DARABONBA_PTR_GET_DEFAULT(usedTime_, 0L) };
      inline Data& setUsedTime(int64_t usedTime) { DARABONBA_PTR_SET_VALUE(usedTime_, usedTime) };


    protected:
      shared_ptr<int32_t> allSubtaskCount_ {};
      shared_ptr<bool> finish_ {};
      shared_ptr<double> finishRate_ {};
      shared_ptr<int32_t> finishSubtaskCount_ {};
      shared_ptr<int64_t> lastInspectDate_ {};
      shared_ptr<int64_t> taskId_ {};
      shared_ptr<int64_t> usedTime_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetInspectProgressResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetInspectProgressResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetInspectProgressResponseBody::Data) };
    inline GetInspectProgressResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetInspectProgressResponseBody::Data) };
    inline GetInspectProgressResponseBody& setData(const GetInspectProgressResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetInspectProgressResponseBody& setData(GetInspectProgressResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetInspectProgressResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInspectProgressResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetInspectProgressResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetInspectProgressResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Advisor20180120
#endif
