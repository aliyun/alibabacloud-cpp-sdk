// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMCUBEHOTPATCHTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEMCUBEHOTPATCHTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class CreateMcubeHotpatchTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMcubeHotpatchTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateHotpatchTaskResult, createHotpatchTaskResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMcubeHotpatchTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateHotpatchTaskResult, createHotpatchTaskResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    CreateMcubeHotpatchTaskResponseBody() = default ;
    CreateMcubeHotpatchTaskResponseBody(const CreateMcubeHotpatchTaskResponseBody &) = default ;
    CreateMcubeHotpatchTaskResponseBody(CreateMcubeHotpatchTaskResponseBody &&) = default ;
    CreateMcubeHotpatchTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMcubeHotpatchTaskResponseBody() = default ;
    CreateMcubeHotpatchTaskResponseBody& operator=(const CreateMcubeHotpatchTaskResponseBody &) = default ;
    CreateMcubeHotpatchTaskResponseBody& operator=(CreateMcubeHotpatchTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CreateHotpatchTaskResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CreateHotpatchTaskResult& obj) { 
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(HotpatchTaskId, hotpatchTaskId_);
        DARABONBA_PTR_TO_JSON(RequestId, requestId_);
        DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_TO_JSON(Success, success_);
      };
      friend void from_json(const Darabonba::Json& j, CreateHotpatchTaskResult& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(HotpatchTaskId, hotpatchTaskId_);
        DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
        DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
      };
      CreateHotpatchTaskResult() = default ;
      CreateHotpatchTaskResult(const CreateHotpatchTaskResult &) = default ;
      CreateHotpatchTaskResult(CreateHotpatchTaskResult &&) = default ;
      CreateHotpatchTaskResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CreateHotpatchTaskResult() = default ;
      CreateHotpatchTaskResult& operator=(const CreateHotpatchTaskResult &) = default ;
      CreateHotpatchTaskResult& operator=(CreateHotpatchTaskResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->hotpatchTaskId_ == nullptr && this->requestId_ == nullptr && this->resultMsg_ == nullptr && this->success_ == nullptr; };
      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline CreateHotpatchTaskResult& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // hotpatchTaskId Field Functions 
      bool hasHotpatchTaskId() const { return this->hotpatchTaskId_ != nullptr;};
      void deleteHotpatchTaskId() { this->hotpatchTaskId_ = nullptr;};
      inline string getHotpatchTaskId() const { DARABONBA_PTR_GET_DEFAULT(hotpatchTaskId_, "") };
      inline CreateHotpatchTaskResult& setHotpatchTaskId(string hotpatchTaskId) { DARABONBA_PTR_SET_VALUE(hotpatchTaskId_, hotpatchTaskId) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline CreateHotpatchTaskResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


      // resultMsg Field Functions 
      bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
      void deleteResultMsg() { this->resultMsg_ = nullptr;};
      inline string getResultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
      inline CreateHotpatchTaskResult& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline CreateHotpatchTaskResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    protected:
      shared_ptr<string> errorCode_ {};
      shared_ptr<string> hotpatchTaskId_ {};
      shared_ptr<string> requestId_ {};
      shared_ptr<string> resultMsg_ {};
      shared_ptr<bool> success_ {};
    };

    virtual bool empty() const override { return this->createHotpatchTaskResult_ == nullptr
        && this->requestId_ == nullptr && this->resultCode_ == nullptr && this->resultMessage_ == nullptr; };
    // createHotpatchTaskResult Field Functions 
    bool hasCreateHotpatchTaskResult() const { return this->createHotpatchTaskResult_ != nullptr;};
    void deleteCreateHotpatchTaskResult() { this->createHotpatchTaskResult_ = nullptr;};
    inline const CreateMcubeHotpatchTaskResponseBody::CreateHotpatchTaskResult & getCreateHotpatchTaskResult() const { DARABONBA_PTR_GET_CONST(createHotpatchTaskResult_, CreateMcubeHotpatchTaskResponseBody::CreateHotpatchTaskResult) };
    inline CreateMcubeHotpatchTaskResponseBody::CreateHotpatchTaskResult getCreateHotpatchTaskResult() { DARABONBA_PTR_GET(createHotpatchTaskResult_, CreateMcubeHotpatchTaskResponseBody::CreateHotpatchTaskResult) };
    inline CreateMcubeHotpatchTaskResponseBody& setCreateHotpatchTaskResult(const CreateMcubeHotpatchTaskResponseBody::CreateHotpatchTaskResult & createHotpatchTaskResult) { DARABONBA_PTR_SET_VALUE(createHotpatchTaskResult_, createHotpatchTaskResult) };
    inline CreateMcubeHotpatchTaskResponseBody& setCreateHotpatchTaskResult(CreateMcubeHotpatchTaskResponseBody::CreateHotpatchTaskResult && createHotpatchTaskResult) { DARABONBA_PTR_SET_RVALUE(createHotpatchTaskResult_, createHotpatchTaskResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateMcubeHotpatchTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline CreateMcubeHotpatchTaskResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string getResultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline CreateMcubeHotpatchTaskResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    shared_ptr<CreateMcubeHotpatchTaskResponseBody::CreateHotpatchTaskResult> createHotpatchTaskResult_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resultCode_ {};
    shared_ptr<string> resultMessage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
