// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMCUBEMINIAPPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEMCUBEMINIAPPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class CreateMcubeMiniAppResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMcubeMiniAppResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateMiniResult, createMiniResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMcubeMiniAppResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateMiniResult, createMiniResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    CreateMcubeMiniAppResponseBody() = default ;
    CreateMcubeMiniAppResponseBody(const CreateMcubeMiniAppResponseBody &) = default ;
    CreateMcubeMiniAppResponseBody(CreateMcubeMiniAppResponseBody &&) = default ;
    CreateMcubeMiniAppResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMcubeMiniAppResponseBody() = default ;
    CreateMcubeMiniAppResponseBody& operator=(const CreateMcubeMiniAppResponseBody &) = default ;
    CreateMcubeMiniAppResponseBody& operator=(CreateMcubeMiniAppResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CreateMiniResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CreateMiniResult& obj) { 
        DARABONBA_PTR_TO_JSON(Data, data_);
        DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_TO_JSON(Success, success_);
      };
      friend void from_json(const Darabonba::Json& j, CreateMiniResult& obj) { 
        DARABONBA_PTR_FROM_JSON(Data, data_);
        DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
      };
      CreateMiniResult() = default ;
      CreateMiniResult(const CreateMiniResult &) = default ;
      CreateMiniResult(CreateMiniResult &&) = default ;
      CreateMiniResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CreateMiniResult() = default ;
      CreateMiniResult& operator=(const CreateMiniResult &) = default ;
      CreateMiniResult& operator=(CreateMiniResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->data_ == nullptr
        && this->resultMsg_ == nullptr && this->success_ == nullptr; };
      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline string getData() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
      inline CreateMiniResult& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


      // resultMsg Field Functions 
      bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
      void deleteResultMsg() { this->resultMsg_ = nullptr;};
      inline string getResultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
      inline CreateMiniResult& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline CreateMiniResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    protected:
      shared_ptr<string> data_ {};
      shared_ptr<string> resultMsg_ {};
      shared_ptr<bool> success_ {};
    };

    virtual bool empty() const override { return this->createMiniResult_ == nullptr
        && this->requestId_ == nullptr && this->resultCode_ == nullptr && this->resultMessage_ == nullptr; };
    // createMiniResult Field Functions 
    bool hasCreateMiniResult() const { return this->createMiniResult_ != nullptr;};
    void deleteCreateMiniResult() { this->createMiniResult_ = nullptr;};
    inline const CreateMcubeMiniAppResponseBody::CreateMiniResult & getCreateMiniResult() const { DARABONBA_PTR_GET_CONST(createMiniResult_, CreateMcubeMiniAppResponseBody::CreateMiniResult) };
    inline CreateMcubeMiniAppResponseBody::CreateMiniResult getCreateMiniResult() { DARABONBA_PTR_GET(createMiniResult_, CreateMcubeMiniAppResponseBody::CreateMiniResult) };
    inline CreateMcubeMiniAppResponseBody& setCreateMiniResult(const CreateMcubeMiniAppResponseBody::CreateMiniResult & createMiniResult) { DARABONBA_PTR_SET_VALUE(createMiniResult_, createMiniResult) };
    inline CreateMcubeMiniAppResponseBody& setCreateMiniResult(CreateMcubeMiniAppResponseBody::CreateMiniResult && createMiniResult) { DARABONBA_PTR_SET_RVALUE(createMiniResult_, createMiniResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateMcubeMiniAppResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline CreateMcubeMiniAppResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string getResultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline CreateMcubeMiniAppResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    shared_ptr<CreateMcubeMiniAppResponseBody::CreateMiniResult> createMiniResult_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resultCode_ {};
    shared_ptr<string> resultMessage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
