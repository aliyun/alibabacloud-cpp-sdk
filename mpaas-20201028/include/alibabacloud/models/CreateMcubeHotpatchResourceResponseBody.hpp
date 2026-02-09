// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMCUBEHOTPATCHRESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEMCUBEHOTPATCHRESOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class CreateMcubeHotpatchResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMcubeHotpatchResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateHotpatchResourceResult, createHotpatchResourceResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMcubeHotpatchResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateHotpatchResourceResult, createHotpatchResourceResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    CreateMcubeHotpatchResourceResponseBody() = default ;
    CreateMcubeHotpatchResourceResponseBody(const CreateMcubeHotpatchResourceResponseBody &) = default ;
    CreateMcubeHotpatchResourceResponseBody(CreateMcubeHotpatchResourceResponseBody &&) = default ;
    CreateMcubeHotpatchResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMcubeHotpatchResourceResponseBody() = default ;
    CreateMcubeHotpatchResourceResponseBody& operator=(const CreateMcubeHotpatchResourceResponseBody &) = default ;
    CreateMcubeHotpatchResourceResponseBody& operator=(CreateMcubeHotpatchResourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CreateHotpatchResourceResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CreateHotpatchResourceResult& obj) { 
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(HotpatchResourceId, hotpatchResourceId_);
        DARABONBA_PTR_TO_JSON(RequestId, requestId_);
        DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_TO_JSON(Success, success_);
      };
      friend void from_json(const Darabonba::Json& j, CreateHotpatchResourceResult& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(HotpatchResourceId, hotpatchResourceId_);
        DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
        DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
      };
      CreateHotpatchResourceResult() = default ;
      CreateHotpatchResourceResult(const CreateHotpatchResourceResult &) = default ;
      CreateHotpatchResourceResult(CreateHotpatchResourceResult &&) = default ;
      CreateHotpatchResourceResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CreateHotpatchResourceResult() = default ;
      CreateHotpatchResourceResult& operator=(const CreateHotpatchResourceResult &) = default ;
      CreateHotpatchResourceResult& operator=(CreateHotpatchResourceResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->hotpatchResourceId_ == nullptr && this->requestId_ == nullptr && this->resultMsg_ == nullptr && this->success_ == nullptr; };
      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline CreateHotpatchResourceResult& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // hotpatchResourceId Field Functions 
      bool hasHotpatchResourceId() const { return this->hotpatchResourceId_ != nullptr;};
      void deleteHotpatchResourceId() { this->hotpatchResourceId_ = nullptr;};
      inline string getHotpatchResourceId() const { DARABONBA_PTR_GET_DEFAULT(hotpatchResourceId_, "") };
      inline CreateHotpatchResourceResult& setHotpatchResourceId(string hotpatchResourceId) { DARABONBA_PTR_SET_VALUE(hotpatchResourceId_, hotpatchResourceId) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline CreateHotpatchResourceResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


      // resultMsg Field Functions 
      bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
      void deleteResultMsg() { this->resultMsg_ = nullptr;};
      inline string getResultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
      inline CreateHotpatchResourceResult& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline CreateHotpatchResourceResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    protected:
      shared_ptr<string> errorCode_ {};
      shared_ptr<string> hotpatchResourceId_ {};
      shared_ptr<string> requestId_ {};
      shared_ptr<string> resultMsg_ {};
      shared_ptr<bool> success_ {};
    };

    virtual bool empty() const override { return this->createHotpatchResourceResult_ == nullptr
        && this->requestId_ == nullptr && this->resultCode_ == nullptr && this->resultMessage_ == nullptr; };
    // createHotpatchResourceResult Field Functions 
    bool hasCreateHotpatchResourceResult() const { return this->createHotpatchResourceResult_ != nullptr;};
    void deleteCreateHotpatchResourceResult() { this->createHotpatchResourceResult_ = nullptr;};
    inline const CreateMcubeHotpatchResourceResponseBody::CreateHotpatchResourceResult & getCreateHotpatchResourceResult() const { DARABONBA_PTR_GET_CONST(createHotpatchResourceResult_, CreateMcubeHotpatchResourceResponseBody::CreateHotpatchResourceResult) };
    inline CreateMcubeHotpatchResourceResponseBody::CreateHotpatchResourceResult getCreateHotpatchResourceResult() { DARABONBA_PTR_GET(createHotpatchResourceResult_, CreateMcubeHotpatchResourceResponseBody::CreateHotpatchResourceResult) };
    inline CreateMcubeHotpatchResourceResponseBody& setCreateHotpatchResourceResult(const CreateMcubeHotpatchResourceResponseBody::CreateHotpatchResourceResult & createHotpatchResourceResult) { DARABONBA_PTR_SET_VALUE(createHotpatchResourceResult_, createHotpatchResourceResult) };
    inline CreateMcubeHotpatchResourceResponseBody& setCreateHotpatchResourceResult(CreateMcubeHotpatchResourceResponseBody::CreateHotpatchResourceResult && createHotpatchResourceResult) { DARABONBA_PTR_SET_RVALUE(createHotpatchResourceResult_, createHotpatchResourceResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateMcubeHotpatchResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline CreateMcubeHotpatchResourceResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string getResultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline CreateMcubeHotpatchResourceResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    shared_ptr<CreateMcubeHotpatchResourceResponseBody::CreateHotpatchResourceResult> createHotpatchResourceResult_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resultCode_ {};
    shared_ptr<string> resultMessage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
