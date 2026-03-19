// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAIORDERAPPROVALCOMMENTSSERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAIORDERAPPROVALCOMMENTSSERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetAIOrderApprovalCommentSSEResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAIOrderApprovalCommentSSEResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetAIOrderApprovalCommentSSEResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetAIOrderApprovalCommentSSEResponseBody() = default ;
    GetAIOrderApprovalCommentSSEResponseBody(const GetAIOrderApprovalCommentSSEResponseBody &) = default ;
    GetAIOrderApprovalCommentSSEResponseBody(GetAIOrderApprovalCommentSSEResponseBody &&) = default ;
    GetAIOrderApprovalCommentSSEResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAIOrderApprovalCommentSSEResponseBody() = default ;
    GetAIOrderApprovalCommentSSEResponseBody& operator=(const GetAIOrderApprovalCommentSSEResponseBody &) = default ;
    GetAIOrderApprovalCommentSSEResponseBody& operator=(GetAIOrderApprovalCommentSSEResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Output : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Output& obj) { 
        DARABONBA_PTR_TO_JSON(Content, content_);
      };
      friend void from_json(const Darabonba::Json& j, Output& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
      };
      Output() = default ;
      Output(const Output &) = default ;
      Output(Output &&) = default ;
      Output(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Output() = default ;
      Output& operator=(const Output &) = default ;
      Output& operator=(Output &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->content_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline Output& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    protected:
      shared_ptr<string> content_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->output_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string getData() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline GetAIOrderApprovalCommentSSEResponseBody& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetAIOrderApprovalCommentSSEResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetAIOrderApprovalCommentSSEResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const GetAIOrderApprovalCommentSSEResponseBody::Output & getOutput() const { DARABONBA_PTR_GET_CONST(output_, GetAIOrderApprovalCommentSSEResponseBody::Output) };
    inline GetAIOrderApprovalCommentSSEResponseBody::Output getOutput() { DARABONBA_PTR_GET(output_, GetAIOrderApprovalCommentSSEResponseBody::Output) };
    inline GetAIOrderApprovalCommentSSEResponseBody& setOutput(const GetAIOrderApprovalCommentSSEResponseBody::Output & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline GetAIOrderApprovalCommentSSEResponseBody& setOutput(GetAIOrderApprovalCommentSSEResponseBody::Output && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAIOrderApprovalCommentSSEResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAIOrderApprovalCommentSSEResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> data_ {};
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> errorMessage_ {};
    shared_ptr<GetAIOrderApprovalCommentSSEResponseBody::Output> output_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
