// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADMCUBERSAKEYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPLOADMCUBERSAKEYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class UploadMcubeRsaKeyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadMcubeRsaKeyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
      DARABONBA_PTR_TO_JSON(UploadRsaResult, uploadRsaResult_);
    };
    friend void from_json(const Darabonba::Json& j, UploadMcubeRsaKeyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
      DARABONBA_PTR_FROM_JSON(UploadRsaResult, uploadRsaResult_);
    };
    UploadMcubeRsaKeyResponseBody() = default ;
    UploadMcubeRsaKeyResponseBody(const UploadMcubeRsaKeyResponseBody &) = default ;
    UploadMcubeRsaKeyResponseBody(UploadMcubeRsaKeyResponseBody &&) = default ;
    UploadMcubeRsaKeyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadMcubeRsaKeyResponseBody() = default ;
    UploadMcubeRsaKeyResponseBody& operator=(const UploadMcubeRsaKeyResponseBody &) = default ;
    UploadMcubeRsaKeyResponseBody& operator=(UploadMcubeRsaKeyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UploadRsaResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UploadRsaResult& obj) { 
        DARABONBA_PTR_TO_JSON(Data, data_);
        DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_TO_JSON(Success, success_);
      };
      friend void from_json(const Darabonba::Json& j, UploadRsaResult& obj) { 
        DARABONBA_PTR_FROM_JSON(Data, data_);
        DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
      };
      UploadRsaResult() = default ;
      UploadRsaResult(const UploadRsaResult &) = default ;
      UploadRsaResult(UploadRsaResult &&) = default ;
      UploadRsaResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UploadRsaResult() = default ;
      UploadRsaResult& operator=(const UploadRsaResult &) = default ;
      UploadRsaResult& operator=(UploadRsaResult &&) = default ;
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
      inline UploadRsaResult& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


      // resultMsg Field Functions 
      bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
      void deleteResultMsg() { this->resultMsg_ = nullptr;};
      inline string getResultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
      inline UploadRsaResult& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline UploadRsaResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    protected:
      shared_ptr<string> data_ {};
      shared_ptr<string> resultMsg_ {};
      shared_ptr<bool> success_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resultCode_ == nullptr && this->resultMessage_ == nullptr && this->uploadRsaResult_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UploadMcubeRsaKeyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline UploadMcubeRsaKeyResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string getResultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline UploadMcubeRsaKeyResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


    // uploadRsaResult Field Functions 
    bool hasUploadRsaResult() const { return this->uploadRsaResult_ != nullptr;};
    void deleteUploadRsaResult() { this->uploadRsaResult_ = nullptr;};
    inline const UploadMcubeRsaKeyResponseBody::UploadRsaResult & getUploadRsaResult() const { DARABONBA_PTR_GET_CONST(uploadRsaResult_, UploadMcubeRsaKeyResponseBody::UploadRsaResult) };
    inline UploadMcubeRsaKeyResponseBody::UploadRsaResult getUploadRsaResult() { DARABONBA_PTR_GET(uploadRsaResult_, UploadMcubeRsaKeyResponseBody::UploadRsaResult) };
    inline UploadMcubeRsaKeyResponseBody& setUploadRsaResult(const UploadMcubeRsaKeyResponseBody::UploadRsaResult & uploadRsaResult) { DARABONBA_PTR_SET_VALUE(uploadRsaResult_, uploadRsaResult) };
    inline UploadMcubeRsaKeyResponseBody& setUploadRsaResult(UploadMcubeRsaKeyResponseBody::UploadRsaResult && uploadRsaResult) { DARABONBA_PTR_SET_RVALUE(uploadRsaResult_, uploadRsaResult) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resultCode_ {};
    shared_ptr<string> resultMessage_ {};
    shared_ptr<UploadMcubeRsaKeyResponseBody::UploadRsaResult> uploadRsaResult_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
