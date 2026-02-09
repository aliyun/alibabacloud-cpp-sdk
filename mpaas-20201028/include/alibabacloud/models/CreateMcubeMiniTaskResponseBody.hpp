// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMCUBEMINITASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEMCUBEMINITASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class CreateMcubeMiniTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMcubeMiniTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateMiniTaskResult, createMiniTaskResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMcubeMiniTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateMiniTaskResult, createMiniTaskResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    CreateMcubeMiniTaskResponseBody() = default ;
    CreateMcubeMiniTaskResponseBody(const CreateMcubeMiniTaskResponseBody &) = default ;
    CreateMcubeMiniTaskResponseBody(CreateMcubeMiniTaskResponseBody &&) = default ;
    CreateMcubeMiniTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMcubeMiniTaskResponseBody() = default ;
    CreateMcubeMiniTaskResponseBody& operator=(const CreateMcubeMiniTaskResponseBody &) = default ;
    CreateMcubeMiniTaskResponseBody& operator=(CreateMcubeMiniTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CreateMiniTaskResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CreateMiniTaskResult& obj) { 
        DARABONBA_PTR_TO_JSON(MiniTaskId, miniTaskId_);
        DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_TO_JSON(Success, success_);
      };
      friend void from_json(const Darabonba::Json& j, CreateMiniTaskResult& obj) { 
        DARABONBA_PTR_FROM_JSON(MiniTaskId, miniTaskId_);
        DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
      };
      CreateMiniTaskResult() = default ;
      CreateMiniTaskResult(const CreateMiniTaskResult &) = default ;
      CreateMiniTaskResult(CreateMiniTaskResult &&) = default ;
      CreateMiniTaskResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CreateMiniTaskResult() = default ;
      CreateMiniTaskResult& operator=(const CreateMiniTaskResult &) = default ;
      CreateMiniTaskResult& operator=(CreateMiniTaskResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->miniTaskId_ == nullptr
        && this->resultMsg_ == nullptr && this->success_ == nullptr; };
      // miniTaskId Field Functions 
      bool hasMiniTaskId() const { return this->miniTaskId_ != nullptr;};
      void deleteMiniTaskId() { this->miniTaskId_ = nullptr;};
      inline string getMiniTaskId() const { DARABONBA_PTR_GET_DEFAULT(miniTaskId_, "") };
      inline CreateMiniTaskResult& setMiniTaskId(string miniTaskId) { DARABONBA_PTR_SET_VALUE(miniTaskId_, miniTaskId) };


      // resultMsg Field Functions 
      bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
      void deleteResultMsg() { this->resultMsg_ = nullptr;};
      inline string getResultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
      inline CreateMiniTaskResult& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline CreateMiniTaskResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    protected:
      shared_ptr<string> miniTaskId_ {};
      shared_ptr<string> resultMsg_ {};
      shared_ptr<bool> success_ {};
    };

    virtual bool empty() const override { return this->createMiniTaskResult_ == nullptr
        && this->requestId_ == nullptr && this->resultCode_ == nullptr && this->resultMessage_ == nullptr; };
    // createMiniTaskResult Field Functions 
    bool hasCreateMiniTaskResult() const { return this->createMiniTaskResult_ != nullptr;};
    void deleteCreateMiniTaskResult() { this->createMiniTaskResult_ = nullptr;};
    inline const CreateMcubeMiniTaskResponseBody::CreateMiniTaskResult & getCreateMiniTaskResult() const { DARABONBA_PTR_GET_CONST(createMiniTaskResult_, CreateMcubeMiniTaskResponseBody::CreateMiniTaskResult) };
    inline CreateMcubeMiniTaskResponseBody::CreateMiniTaskResult getCreateMiniTaskResult() { DARABONBA_PTR_GET(createMiniTaskResult_, CreateMcubeMiniTaskResponseBody::CreateMiniTaskResult) };
    inline CreateMcubeMiniTaskResponseBody& setCreateMiniTaskResult(const CreateMcubeMiniTaskResponseBody::CreateMiniTaskResult & createMiniTaskResult) { DARABONBA_PTR_SET_VALUE(createMiniTaskResult_, createMiniTaskResult) };
    inline CreateMcubeMiniTaskResponseBody& setCreateMiniTaskResult(CreateMcubeMiniTaskResponseBody::CreateMiniTaskResult && createMiniTaskResult) { DARABONBA_PTR_SET_RVALUE(createMiniTaskResult_, createMiniTaskResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateMcubeMiniTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline CreateMcubeMiniTaskResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string getResultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline CreateMcubeMiniTaskResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    shared_ptr<CreateMcubeMiniTaskResponseBody::CreateMiniTaskResult> createMiniTaskResult_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resultCode_ {};
    shared_ptr<string> resultMessage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
