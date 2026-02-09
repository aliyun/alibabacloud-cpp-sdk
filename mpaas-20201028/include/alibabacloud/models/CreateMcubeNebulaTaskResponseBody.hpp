// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMCUBENEBULATASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEMCUBENEBULATASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class CreateMcubeNebulaTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMcubeNebulaTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateMcubeNebulaTaskResult, createMcubeNebulaTaskResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMcubeNebulaTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateMcubeNebulaTaskResult, createMcubeNebulaTaskResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    CreateMcubeNebulaTaskResponseBody() = default ;
    CreateMcubeNebulaTaskResponseBody(const CreateMcubeNebulaTaskResponseBody &) = default ;
    CreateMcubeNebulaTaskResponseBody(CreateMcubeNebulaTaskResponseBody &&) = default ;
    CreateMcubeNebulaTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMcubeNebulaTaskResponseBody() = default ;
    CreateMcubeNebulaTaskResponseBody& operator=(const CreateMcubeNebulaTaskResponseBody &) = default ;
    CreateMcubeNebulaTaskResponseBody& operator=(CreateMcubeNebulaTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CreateMcubeNebulaTaskResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CreateMcubeNebulaTaskResult& obj) { 
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(NebulaTaskId, nebulaTaskId_);
        DARABONBA_PTR_TO_JSON(RequestId, requestId_);
        DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_TO_JSON(Success, success_);
      };
      friend void from_json(const Darabonba::Json& j, CreateMcubeNebulaTaskResult& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(NebulaTaskId, nebulaTaskId_);
        DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
        DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
      };
      CreateMcubeNebulaTaskResult() = default ;
      CreateMcubeNebulaTaskResult(const CreateMcubeNebulaTaskResult &) = default ;
      CreateMcubeNebulaTaskResult(CreateMcubeNebulaTaskResult &&) = default ;
      CreateMcubeNebulaTaskResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CreateMcubeNebulaTaskResult() = default ;
      CreateMcubeNebulaTaskResult& operator=(const CreateMcubeNebulaTaskResult &) = default ;
      CreateMcubeNebulaTaskResult& operator=(CreateMcubeNebulaTaskResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->nebulaTaskId_ == nullptr && this->requestId_ == nullptr && this->resultMsg_ == nullptr && this->success_ == nullptr; };
      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline CreateMcubeNebulaTaskResult& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // nebulaTaskId Field Functions 
      bool hasNebulaTaskId() const { return this->nebulaTaskId_ != nullptr;};
      void deleteNebulaTaskId() { this->nebulaTaskId_ = nullptr;};
      inline string getNebulaTaskId() const { DARABONBA_PTR_GET_DEFAULT(nebulaTaskId_, "") };
      inline CreateMcubeNebulaTaskResult& setNebulaTaskId(string nebulaTaskId) { DARABONBA_PTR_SET_VALUE(nebulaTaskId_, nebulaTaskId) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline CreateMcubeNebulaTaskResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


      // resultMsg Field Functions 
      bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
      void deleteResultMsg() { this->resultMsg_ = nullptr;};
      inline string getResultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
      inline CreateMcubeNebulaTaskResult& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline CreateMcubeNebulaTaskResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    protected:
      shared_ptr<string> errorCode_ {};
      shared_ptr<string> nebulaTaskId_ {};
      shared_ptr<string> requestId_ {};
      shared_ptr<string> resultMsg_ {};
      shared_ptr<bool> success_ {};
    };

    virtual bool empty() const override { return this->createMcubeNebulaTaskResult_ == nullptr
        && this->requestId_ == nullptr && this->resultCode_ == nullptr && this->resultMessage_ == nullptr; };
    // createMcubeNebulaTaskResult Field Functions 
    bool hasCreateMcubeNebulaTaskResult() const { return this->createMcubeNebulaTaskResult_ != nullptr;};
    void deleteCreateMcubeNebulaTaskResult() { this->createMcubeNebulaTaskResult_ = nullptr;};
    inline const CreateMcubeNebulaTaskResponseBody::CreateMcubeNebulaTaskResult & getCreateMcubeNebulaTaskResult() const { DARABONBA_PTR_GET_CONST(createMcubeNebulaTaskResult_, CreateMcubeNebulaTaskResponseBody::CreateMcubeNebulaTaskResult) };
    inline CreateMcubeNebulaTaskResponseBody::CreateMcubeNebulaTaskResult getCreateMcubeNebulaTaskResult() { DARABONBA_PTR_GET(createMcubeNebulaTaskResult_, CreateMcubeNebulaTaskResponseBody::CreateMcubeNebulaTaskResult) };
    inline CreateMcubeNebulaTaskResponseBody& setCreateMcubeNebulaTaskResult(const CreateMcubeNebulaTaskResponseBody::CreateMcubeNebulaTaskResult & createMcubeNebulaTaskResult) { DARABONBA_PTR_SET_VALUE(createMcubeNebulaTaskResult_, createMcubeNebulaTaskResult) };
    inline CreateMcubeNebulaTaskResponseBody& setCreateMcubeNebulaTaskResult(CreateMcubeNebulaTaskResponseBody::CreateMcubeNebulaTaskResult && createMcubeNebulaTaskResult) { DARABONBA_PTR_SET_RVALUE(createMcubeNebulaTaskResult_, createMcubeNebulaTaskResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateMcubeNebulaTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline CreateMcubeNebulaTaskResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string getResultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline CreateMcubeNebulaTaskResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    shared_ptr<CreateMcubeNebulaTaskResponseBody::CreateMcubeNebulaTaskResult> createMcubeNebulaTaskResult_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resultCode_ {};
    shared_ptr<string> resultMessage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
