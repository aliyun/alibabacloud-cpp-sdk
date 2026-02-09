// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMCUBEWHITELISTFORIDERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEMCUBEWHITELISTFORIDERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class CreateMcubeWhitelistForIdeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMcubeWhitelistForIdeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateWhitelistForIdeResult, createWhitelistForIdeResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMcubeWhitelistForIdeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateWhitelistForIdeResult, createWhitelistForIdeResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    CreateMcubeWhitelistForIdeResponseBody() = default ;
    CreateMcubeWhitelistForIdeResponseBody(const CreateMcubeWhitelistForIdeResponseBody &) = default ;
    CreateMcubeWhitelistForIdeResponseBody(CreateMcubeWhitelistForIdeResponseBody &&) = default ;
    CreateMcubeWhitelistForIdeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMcubeWhitelistForIdeResponseBody() = default ;
    CreateMcubeWhitelistForIdeResponseBody& operator=(const CreateMcubeWhitelistForIdeResponseBody &) = default ;
    CreateMcubeWhitelistForIdeResponseBody& operator=(CreateMcubeWhitelistForIdeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CreateWhitelistForIdeResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CreateWhitelistForIdeResult& obj) { 
        DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_TO_JSON(Success, success_);
        DARABONBA_PTR_TO_JSON(WhitelistId, whitelistId_);
      };
      friend void from_json(const Darabonba::Json& j, CreateWhitelistForIdeResult& obj) { 
        DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
        DARABONBA_PTR_FROM_JSON(WhitelistId, whitelistId_);
      };
      CreateWhitelistForIdeResult() = default ;
      CreateWhitelistForIdeResult(const CreateWhitelistForIdeResult &) = default ;
      CreateWhitelistForIdeResult(CreateWhitelistForIdeResult &&) = default ;
      CreateWhitelistForIdeResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CreateWhitelistForIdeResult() = default ;
      CreateWhitelistForIdeResult& operator=(const CreateWhitelistForIdeResult &) = default ;
      CreateWhitelistForIdeResult& operator=(CreateWhitelistForIdeResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->resultMsg_ == nullptr
        && this->success_ == nullptr && this->whitelistId_ == nullptr; };
      // resultMsg Field Functions 
      bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
      void deleteResultMsg() { this->resultMsg_ = nullptr;};
      inline string getResultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
      inline CreateWhitelistForIdeResult& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline CreateWhitelistForIdeResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


      // whitelistId Field Functions 
      bool hasWhitelistId() const { return this->whitelistId_ != nullptr;};
      void deleteWhitelistId() { this->whitelistId_ = nullptr;};
      inline string getWhitelistId() const { DARABONBA_PTR_GET_DEFAULT(whitelistId_, "") };
      inline CreateWhitelistForIdeResult& setWhitelistId(string whitelistId) { DARABONBA_PTR_SET_VALUE(whitelistId_, whitelistId) };


    protected:
      shared_ptr<string> resultMsg_ {};
      shared_ptr<bool> success_ {};
      shared_ptr<string> whitelistId_ {};
    };

    virtual bool empty() const override { return this->createWhitelistForIdeResult_ == nullptr
        && this->requestId_ == nullptr && this->resultCode_ == nullptr && this->resultMessage_ == nullptr; };
    // createWhitelistForIdeResult Field Functions 
    bool hasCreateWhitelistForIdeResult() const { return this->createWhitelistForIdeResult_ != nullptr;};
    void deleteCreateWhitelistForIdeResult() { this->createWhitelistForIdeResult_ = nullptr;};
    inline const CreateMcubeWhitelistForIdeResponseBody::CreateWhitelistForIdeResult & getCreateWhitelistForIdeResult() const { DARABONBA_PTR_GET_CONST(createWhitelistForIdeResult_, CreateMcubeWhitelistForIdeResponseBody::CreateWhitelistForIdeResult) };
    inline CreateMcubeWhitelistForIdeResponseBody::CreateWhitelistForIdeResult getCreateWhitelistForIdeResult() { DARABONBA_PTR_GET(createWhitelistForIdeResult_, CreateMcubeWhitelistForIdeResponseBody::CreateWhitelistForIdeResult) };
    inline CreateMcubeWhitelistForIdeResponseBody& setCreateWhitelistForIdeResult(const CreateMcubeWhitelistForIdeResponseBody::CreateWhitelistForIdeResult & createWhitelistForIdeResult) { DARABONBA_PTR_SET_VALUE(createWhitelistForIdeResult_, createWhitelistForIdeResult) };
    inline CreateMcubeWhitelistForIdeResponseBody& setCreateWhitelistForIdeResult(CreateMcubeWhitelistForIdeResponseBody::CreateWhitelistForIdeResult && createWhitelistForIdeResult) { DARABONBA_PTR_SET_RVALUE(createWhitelistForIdeResult_, createWhitelistForIdeResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateMcubeWhitelistForIdeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline CreateMcubeWhitelistForIdeResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string getResultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline CreateMcubeWhitelistForIdeResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    shared_ptr<CreateMcubeWhitelistForIdeResponseBody::CreateWhitelistForIdeResult> createWhitelistForIdeResult_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resultCode_ {};
    shared_ptr<string> resultMessage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
