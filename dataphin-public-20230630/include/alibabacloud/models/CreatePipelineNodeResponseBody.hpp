// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPIPELINENODERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEPIPELINENODERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CreatePipelineNodeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePipelineNodeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePipelineNodeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreatePipelineNodeResponseBody() = default ;
    CreatePipelineNodeResponseBody(const CreatePipelineNodeResponseBody &) = default ;
    CreatePipelineNodeResponseBody(CreatePipelineNodeResponseBody &&) = default ;
    CreatePipelineNodeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePipelineNodeResponseBody() = default ;
    CreatePipelineNodeResponseBody& operator=(const CreatePipelineNodeResponseBody &) = default ;
    CreatePipelineNodeResponseBody& operator=(CreatePipelineNodeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ErrorCodeList, errorCodeList_);
        DARABONBA_PTR_TO_JSON(ErrorMessageList, errorMessageList_);
        DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrorCodeList, errorCodeList_);
        DARABONBA_PTR_FROM_JSON(ErrorMessageList, errorMessageList_);
        DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
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
      virtual bool empty() const override { return this->errorCodeList_ == nullptr
        && this->errorMessageList_ == nullptr && this->pipelineId_ == nullptr; };
      // errorCodeList Field Functions 
      bool hasErrorCodeList() const { return this->errorCodeList_ != nullptr;};
      void deleteErrorCodeList() { this->errorCodeList_ = nullptr;};
      inline const vector<string> & getErrorCodeList() const { DARABONBA_PTR_GET_CONST(errorCodeList_, vector<string>) };
      inline vector<string> getErrorCodeList() { DARABONBA_PTR_GET(errorCodeList_, vector<string>) };
      inline Data& setErrorCodeList(const vector<string> & errorCodeList) { DARABONBA_PTR_SET_VALUE(errorCodeList_, errorCodeList) };
      inline Data& setErrorCodeList(vector<string> && errorCodeList) { DARABONBA_PTR_SET_RVALUE(errorCodeList_, errorCodeList) };


      // errorMessageList Field Functions 
      bool hasErrorMessageList() const { return this->errorMessageList_ != nullptr;};
      void deleteErrorMessageList() { this->errorMessageList_ = nullptr;};
      inline const vector<string> & getErrorMessageList() const { DARABONBA_PTR_GET_CONST(errorMessageList_, vector<string>) };
      inline vector<string> getErrorMessageList() { DARABONBA_PTR_GET(errorMessageList_, vector<string>) };
      inline Data& setErrorMessageList(const vector<string> & errorMessageList) { DARABONBA_PTR_SET_VALUE(errorMessageList_, errorMessageList) };
      inline Data& setErrorMessageList(vector<string> && errorMessageList) { DARABONBA_PTR_SET_RVALUE(errorMessageList_, errorMessageList) };


      // pipelineId Field Functions 
      bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
      void deletePipelineId() { this->pipelineId_ = nullptr;};
      inline int64_t getPipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, 0L) };
      inline Data& setPipelineId(int64_t pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


    protected:
      shared_ptr<vector<string>> errorCodeList_ {};
      shared_ptr<vector<string>> errorMessageList_ {};
      shared_ptr<int64_t> pipelineId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreatePipelineNodeResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreatePipelineNodeResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreatePipelineNodeResponseBody::Data) };
    inline CreatePipelineNodeResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreatePipelineNodeResponseBody::Data) };
    inline CreatePipelineNodeResponseBody& setData(const CreatePipelineNodeResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreatePipelineNodeResponseBody& setData(CreatePipelineNodeResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline CreatePipelineNodeResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreatePipelineNodeResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreatePipelineNodeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreatePipelineNodeResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<CreatePipelineNodeResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
