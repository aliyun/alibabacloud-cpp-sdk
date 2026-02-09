// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMCUBEWHITELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEMCUBEWHITELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class CreateMcubeWhitelistResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMcubeWhitelistResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateWhitelistResult, createWhitelistResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMcubeWhitelistResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateWhitelistResult, createWhitelistResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    CreateMcubeWhitelistResponseBody() = default ;
    CreateMcubeWhitelistResponseBody(const CreateMcubeWhitelistResponseBody &) = default ;
    CreateMcubeWhitelistResponseBody(CreateMcubeWhitelistResponseBody &&) = default ;
    CreateMcubeWhitelistResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMcubeWhitelistResponseBody() = default ;
    CreateMcubeWhitelistResponseBody& operator=(const CreateMcubeWhitelistResponseBody &) = default ;
    CreateMcubeWhitelistResponseBody& operator=(CreateMcubeWhitelistResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CreateWhitelistResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CreateWhitelistResult& obj) { 
        DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_TO_JSON(Success, success_);
        DARABONBA_PTR_TO_JSON(WhitelistId, whitelistId_);
      };
      friend void from_json(const Darabonba::Json& j, CreateWhitelistResult& obj) { 
        DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
        DARABONBA_PTR_FROM_JSON(WhitelistId, whitelistId_);
      };
      CreateWhitelistResult() = default ;
      CreateWhitelistResult(const CreateWhitelistResult &) = default ;
      CreateWhitelistResult(CreateWhitelistResult &&) = default ;
      CreateWhitelistResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CreateWhitelistResult() = default ;
      CreateWhitelistResult& operator=(const CreateWhitelistResult &) = default ;
      CreateWhitelistResult& operator=(CreateWhitelistResult &&) = default ;
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
      inline CreateWhitelistResult& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline CreateWhitelistResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


      // whitelistId Field Functions 
      bool hasWhitelistId() const { return this->whitelistId_ != nullptr;};
      void deleteWhitelistId() { this->whitelistId_ = nullptr;};
      inline string getWhitelistId() const { DARABONBA_PTR_GET_DEFAULT(whitelistId_, "") };
      inline CreateWhitelistResult& setWhitelistId(string whitelistId) { DARABONBA_PTR_SET_VALUE(whitelistId_, whitelistId) };


    protected:
      shared_ptr<string> resultMsg_ {};
      shared_ptr<bool> success_ {};
      shared_ptr<string> whitelistId_ {};
    };

    virtual bool empty() const override { return this->createWhitelistResult_ == nullptr
        && this->requestId_ == nullptr && this->resultCode_ == nullptr && this->resultMessage_ == nullptr; };
    // createWhitelistResult Field Functions 
    bool hasCreateWhitelistResult() const { return this->createWhitelistResult_ != nullptr;};
    void deleteCreateWhitelistResult() { this->createWhitelistResult_ = nullptr;};
    inline const CreateMcubeWhitelistResponseBody::CreateWhitelistResult & getCreateWhitelistResult() const { DARABONBA_PTR_GET_CONST(createWhitelistResult_, CreateMcubeWhitelistResponseBody::CreateWhitelistResult) };
    inline CreateMcubeWhitelistResponseBody::CreateWhitelistResult getCreateWhitelistResult() { DARABONBA_PTR_GET(createWhitelistResult_, CreateMcubeWhitelistResponseBody::CreateWhitelistResult) };
    inline CreateMcubeWhitelistResponseBody& setCreateWhitelistResult(const CreateMcubeWhitelistResponseBody::CreateWhitelistResult & createWhitelistResult) { DARABONBA_PTR_SET_VALUE(createWhitelistResult_, createWhitelistResult) };
    inline CreateMcubeWhitelistResponseBody& setCreateWhitelistResult(CreateMcubeWhitelistResponseBody::CreateWhitelistResult && createWhitelistResult) { DARABONBA_PTR_SET_RVALUE(createWhitelistResult_, createWhitelistResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateMcubeWhitelistResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline CreateMcubeWhitelistResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string getResultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline CreateMcubeWhitelistResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    shared_ptr<CreateMcubeWhitelistResponseBody::CreateWhitelistResult> createWhitelistResult_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resultCode_ {};
    shared_ptr<string> resultMessage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
