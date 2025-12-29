// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBIDDINGDOCINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETBIDDINGDOCINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetBiddingDocInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBiddingDocInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetBiddingDocInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetBiddingDocInfoResponseBody() = default ;
    GetBiddingDocInfoResponseBody(const GetBiddingDocInfoResponseBody &) = default ;
    GetBiddingDocInfoResponseBody(GetBiddingDocInfoResponseBody &&) = default ;
    GetBiddingDocInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBiddingDocInfoResponseBody() = default ;
    GetBiddingDocInfoResponseBody& operator=(const GetBiddingDocInfoResponseBody &) = default ;
    GetBiddingDocInfoResponseBody& operator=(GetBiddingDocInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(ContentFormat, contentFormat_);
        DARABONBA_PTR_TO_JSON(ContentType, contentType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Step, step_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TenderDocUrl, tenderDocUrl_);
        DARABONBA_PTR_TO_JSON(TenderFileType, tenderFileType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(ContentFormat, contentFormat_);
        DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Step, step_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TenderDocUrl, tenderDocUrl_);
        DARABONBA_PTR_FROM_JSON(TenderFileType, tenderFileType_);
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
      virtual bool empty() const override { return this->content_ == nullptr
        && this->contentFormat_ == nullptr && this->contentType_ == nullptr && this->status_ == nullptr && this->step_ == nullptr && this->taskId_ == nullptr
        && this->tenderDocUrl_ == nullptr && this->tenderFileType_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline Data& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // contentFormat Field Functions 
      bool hasContentFormat() const { return this->contentFormat_ != nullptr;};
      void deleteContentFormat() { this->contentFormat_ = nullptr;};
      inline string getContentFormat() const { DARABONBA_PTR_GET_DEFAULT(contentFormat_, "") };
      inline Data& setContentFormat(string contentFormat) { DARABONBA_PTR_SET_VALUE(contentFormat_, contentFormat) };


      // contentType Field Functions 
      bool hasContentType() const { return this->contentType_ != nullptr;};
      void deleteContentType() { this->contentType_ = nullptr;};
      inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
      inline Data& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Data& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // step Field Functions 
      bool hasStep() const { return this->step_ != nullptr;};
      void deleteStep() { this->step_ = nullptr;};
      inline string getStep() const { DARABONBA_PTR_GET_DEFAULT(step_, "") };
      inline Data& setStep(string step) { DARABONBA_PTR_SET_VALUE(step_, step) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // tenderDocUrl Field Functions 
      bool hasTenderDocUrl() const { return this->tenderDocUrl_ != nullptr;};
      void deleteTenderDocUrl() { this->tenderDocUrl_ = nullptr;};
      inline string getTenderDocUrl() const { DARABONBA_PTR_GET_DEFAULT(tenderDocUrl_, "") };
      inline Data& setTenderDocUrl(string tenderDocUrl) { DARABONBA_PTR_SET_VALUE(tenderDocUrl_, tenderDocUrl) };


      // tenderFileType Field Functions 
      bool hasTenderFileType() const { return this->tenderFileType_ != nullptr;};
      void deleteTenderFileType() { this->tenderFileType_ = nullptr;};
      inline string getTenderFileType() const { DARABONBA_PTR_GET_DEFAULT(tenderFileType_, "") };
      inline Data& setTenderFileType(string tenderFileType) { DARABONBA_PTR_SET_VALUE(tenderFileType_, tenderFileType) };


    protected:
      shared_ptr<string> content_ {};
      shared_ptr<string> contentFormat_ {};
      shared_ptr<string> contentType_ {};
      shared_ptr<int32_t> status_ {};
      shared_ptr<string> step_ {};
      shared_ptr<string> taskId_ {};
      shared_ptr<string> tenderDocUrl_ {};
      shared_ptr<string> tenderFileType_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetBiddingDocInfoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetBiddingDocInfoResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetBiddingDocInfoResponseBody::Data) };
    inline GetBiddingDocInfoResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetBiddingDocInfoResponseBody::Data) };
    inline GetBiddingDocInfoResponseBody& setData(const GetBiddingDocInfoResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetBiddingDocInfoResponseBody& setData(GetBiddingDocInfoResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetBiddingDocInfoResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetBiddingDocInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetBiddingDocInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetBiddingDocInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetBiddingDocInfoResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
