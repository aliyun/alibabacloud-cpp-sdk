// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAIOUTBOUNDTASKBIZDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAIOUTBOUNDTASKBIZDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class GetAiOutboundTaskBizDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAiOutboundTaskBizDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetAiOutboundTaskBizDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetAiOutboundTaskBizDataResponseBody() = default ;
    GetAiOutboundTaskBizDataResponseBody(const GetAiOutboundTaskBizDataResponseBody &) = default ;
    GetAiOutboundTaskBizDataResponseBody(GetAiOutboundTaskBizDataResponseBody &&) = default ;
    GetAiOutboundTaskBizDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAiOutboundTaskBizDataResponseBody() = default ;
    GetAiOutboundTaskBizDataResponseBody& operator=(const GetAiOutboundTaskBizDataResponseBody &) = default ;
    GetAiOutboundTaskBizDataResponseBody& operator=(GetAiOutboundTaskBizDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BizData, bizData_);
        DARABONBA_PTR_TO_JSON(CaseId, caseId_);
        DARABONBA_PTR_TO_JSON(PhoneNum, phoneNum_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BizData, bizData_);
        DARABONBA_PTR_FROM_JSON(CaseId, caseId_);
        DARABONBA_PTR_FROM_JSON(PhoneNum, phoneNum_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
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
      virtual bool empty() const override { return this->bizData_ == nullptr
        && this->caseId_ == nullptr && this->phoneNum_ == nullptr && this->taskId_ == nullptr; };
      // bizData Field Functions 
      bool hasBizData() const { return this->bizData_ != nullptr;};
      void deleteBizData() { this->bizData_ = nullptr;};
      inline string getBizData() const { DARABONBA_PTR_GET_DEFAULT(bizData_, "") };
      inline Data& setBizData(string bizData) { DARABONBA_PTR_SET_VALUE(bizData_, bizData) };


      // caseId Field Functions 
      bool hasCaseId() const { return this->caseId_ != nullptr;};
      void deleteCaseId() { this->caseId_ = nullptr;};
      inline int64_t getCaseId() const { DARABONBA_PTR_GET_DEFAULT(caseId_, 0L) };
      inline Data& setCaseId(int64_t caseId) { DARABONBA_PTR_SET_VALUE(caseId_, caseId) };


      // phoneNum Field Functions 
      bool hasPhoneNum() const { return this->phoneNum_ != nullptr;};
      void deletePhoneNum() { this->phoneNum_ = nullptr;};
      inline string getPhoneNum() const { DARABONBA_PTR_GET_DEFAULT(phoneNum_, "") };
      inline Data& setPhoneNum(string phoneNum) { DARABONBA_PTR_SET_VALUE(phoneNum_, phoneNum) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
      inline Data& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      shared_ptr<string> bizData_ {};
      shared_ptr<int64_t> caseId_ {};
      shared_ptr<string> phoneNum_ {};
      shared_ptr<int64_t> taskId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetAiOutboundTaskBizDataResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetAiOutboundTaskBizDataResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetAiOutboundTaskBizDataResponseBody::Data) };
    inline GetAiOutboundTaskBizDataResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetAiOutboundTaskBizDataResponseBody::Data) };
    inline GetAiOutboundTaskBizDataResponseBody& setData(const GetAiOutboundTaskBizDataResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAiOutboundTaskBizDataResponseBody& setData(GetAiOutboundTaskBizDataResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAiOutboundTaskBizDataResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAiOutboundTaskBizDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAiOutboundTaskBizDataResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetAiOutboundTaskBizDataResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
