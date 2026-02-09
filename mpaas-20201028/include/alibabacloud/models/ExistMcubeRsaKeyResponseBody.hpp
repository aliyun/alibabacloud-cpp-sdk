// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXISTMCUBERSAKEYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_EXISTMCUBERSAKEYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class ExistMcubeRsaKeyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExistMcubeRsaKeyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CheckRsaKeyResult, checkRsaKeyResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, ExistMcubeRsaKeyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckRsaKeyResult, checkRsaKeyResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    ExistMcubeRsaKeyResponseBody() = default ;
    ExistMcubeRsaKeyResponseBody(const ExistMcubeRsaKeyResponseBody &) = default ;
    ExistMcubeRsaKeyResponseBody(ExistMcubeRsaKeyResponseBody &&) = default ;
    ExistMcubeRsaKeyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExistMcubeRsaKeyResponseBody() = default ;
    ExistMcubeRsaKeyResponseBody& operator=(const ExistMcubeRsaKeyResponseBody &) = default ;
    ExistMcubeRsaKeyResponseBody& operator=(ExistMcubeRsaKeyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CheckRsaKeyResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CheckRsaKeyResult& obj) { 
        DARABONBA_PTR_TO_JSON(Data, data_);
        DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_TO_JSON(Success, success_);
      };
      friend void from_json(const Darabonba::Json& j, CheckRsaKeyResult& obj) { 
        DARABONBA_PTR_FROM_JSON(Data, data_);
        DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
      };
      CheckRsaKeyResult() = default ;
      CheckRsaKeyResult(const CheckRsaKeyResult &) = default ;
      CheckRsaKeyResult(CheckRsaKeyResult &&) = default ;
      CheckRsaKeyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CheckRsaKeyResult() = default ;
      CheckRsaKeyResult& operator=(const CheckRsaKeyResult &) = default ;
      CheckRsaKeyResult& operator=(CheckRsaKeyResult &&) = default ;
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
      inline CheckRsaKeyResult& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


      // resultMsg Field Functions 
      bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
      void deleteResultMsg() { this->resultMsg_ = nullptr;};
      inline string getResultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
      inline CheckRsaKeyResult& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline CheckRsaKeyResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    protected:
      shared_ptr<string> data_ {};
      shared_ptr<string> resultMsg_ {};
      shared_ptr<bool> success_ {};
    };

    virtual bool empty() const override { return this->checkRsaKeyResult_ == nullptr
        && this->requestId_ == nullptr && this->resultCode_ == nullptr && this->resultMessage_ == nullptr; };
    // checkRsaKeyResult Field Functions 
    bool hasCheckRsaKeyResult() const { return this->checkRsaKeyResult_ != nullptr;};
    void deleteCheckRsaKeyResult() { this->checkRsaKeyResult_ = nullptr;};
    inline const ExistMcubeRsaKeyResponseBody::CheckRsaKeyResult & getCheckRsaKeyResult() const { DARABONBA_PTR_GET_CONST(checkRsaKeyResult_, ExistMcubeRsaKeyResponseBody::CheckRsaKeyResult) };
    inline ExistMcubeRsaKeyResponseBody::CheckRsaKeyResult getCheckRsaKeyResult() { DARABONBA_PTR_GET(checkRsaKeyResult_, ExistMcubeRsaKeyResponseBody::CheckRsaKeyResult) };
    inline ExistMcubeRsaKeyResponseBody& setCheckRsaKeyResult(const ExistMcubeRsaKeyResponseBody::CheckRsaKeyResult & checkRsaKeyResult) { DARABONBA_PTR_SET_VALUE(checkRsaKeyResult_, checkRsaKeyResult) };
    inline ExistMcubeRsaKeyResponseBody& setCheckRsaKeyResult(ExistMcubeRsaKeyResponseBody::CheckRsaKeyResult && checkRsaKeyResult) { DARABONBA_PTR_SET_RVALUE(checkRsaKeyResult_, checkRsaKeyResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ExistMcubeRsaKeyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline ExistMcubeRsaKeyResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string getResultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline ExistMcubeRsaKeyResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    shared_ptr<ExistMcubeRsaKeyResponseBody::CheckRsaKeyResult> checkRsaKeyResult_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resultCode_ {};
    shared_ptr<string> resultMessage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
