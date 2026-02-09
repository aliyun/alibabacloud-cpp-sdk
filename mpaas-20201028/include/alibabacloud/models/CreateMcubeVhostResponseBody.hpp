// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMCUBEVHOSTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEMCUBEVHOSTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class CreateMcubeVhostResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMcubeVhostResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateVhostResult, createVhostResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMcubeVhostResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateVhostResult, createVhostResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    CreateMcubeVhostResponseBody() = default ;
    CreateMcubeVhostResponseBody(const CreateMcubeVhostResponseBody &) = default ;
    CreateMcubeVhostResponseBody(CreateMcubeVhostResponseBody &&) = default ;
    CreateMcubeVhostResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMcubeVhostResponseBody() = default ;
    CreateMcubeVhostResponseBody& operator=(const CreateMcubeVhostResponseBody &) = default ;
    CreateMcubeVhostResponseBody& operator=(CreateMcubeVhostResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CreateVhostResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CreateVhostResult& obj) { 
        DARABONBA_PTR_TO_JSON(Data, data_);
        DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_TO_JSON(Success, success_);
      };
      friend void from_json(const Darabonba::Json& j, CreateVhostResult& obj) { 
        DARABONBA_PTR_FROM_JSON(Data, data_);
        DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
      };
      CreateVhostResult() = default ;
      CreateVhostResult(const CreateVhostResult &) = default ;
      CreateVhostResult(CreateVhostResult &&) = default ;
      CreateVhostResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CreateVhostResult() = default ;
      CreateVhostResult& operator=(const CreateVhostResult &) = default ;
      CreateVhostResult& operator=(CreateVhostResult &&) = default ;
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
      inline CreateVhostResult& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


      // resultMsg Field Functions 
      bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
      void deleteResultMsg() { this->resultMsg_ = nullptr;};
      inline string getResultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
      inline CreateVhostResult& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline CreateVhostResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    protected:
      shared_ptr<string> data_ {};
      shared_ptr<string> resultMsg_ {};
      shared_ptr<bool> success_ {};
    };

    virtual bool empty() const override { return this->createVhostResult_ == nullptr
        && this->requestId_ == nullptr && this->resultCode_ == nullptr && this->resultMessage_ == nullptr; };
    // createVhostResult Field Functions 
    bool hasCreateVhostResult() const { return this->createVhostResult_ != nullptr;};
    void deleteCreateVhostResult() { this->createVhostResult_ = nullptr;};
    inline const CreateMcubeVhostResponseBody::CreateVhostResult & getCreateVhostResult() const { DARABONBA_PTR_GET_CONST(createVhostResult_, CreateMcubeVhostResponseBody::CreateVhostResult) };
    inline CreateMcubeVhostResponseBody::CreateVhostResult getCreateVhostResult() { DARABONBA_PTR_GET(createVhostResult_, CreateMcubeVhostResponseBody::CreateVhostResult) };
    inline CreateMcubeVhostResponseBody& setCreateVhostResult(const CreateMcubeVhostResponseBody::CreateVhostResult & createVhostResult) { DARABONBA_PTR_SET_VALUE(createVhostResult_, createVhostResult) };
    inline CreateMcubeVhostResponseBody& setCreateVhostResult(CreateMcubeVhostResponseBody::CreateVhostResult && createVhostResult) { DARABONBA_PTR_SET_RVALUE(createVhostResult_, createVhostResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateMcubeVhostResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline CreateMcubeVhostResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string getResultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline CreateMcubeVhostResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    shared_ptr<CreateMcubeVhostResponseBody::CreateVhostResult> createVhostResult_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resultCode_ {};
    shared_ptr<string> resultMessage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
