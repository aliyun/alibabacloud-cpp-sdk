// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMCUBEWHITELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEMCUBEWHITELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class DeleteMcubeWhitelistResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMcubeWhitelistResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DeleteWhitelistResult, deleteWhitelistResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMcubeWhitelistResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DeleteWhitelistResult, deleteWhitelistResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    DeleteMcubeWhitelistResponseBody() = default ;
    DeleteMcubeWhitelistResponseBody(const DeleteMcubeWhitelistResponseBody &) = default ;
    DeleteMcubeWhitelistResponseBody(DeleteMcubeWhitelistResponseBody &&) = default ;
    DeleteMcubeWhitelistResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMcubeWhitelistResponseBody() = default ;
    DeleteMcubeWhitelistResponseBody& operator=(const DeleteMcubeWhitelistResponseBody &) = default ;
    DeleteMcubeWhitelistResponseBody& operator=(DeleteMcubeWhitelistResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DeleteWhitelistResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeleteWhitelistResult& obj) { 
        DARABONBA_PTR_TO_JSON(Data, data_);
        DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_TO_JSON(Success, success_);
      };
      friend void from_json(const Darabonba::Json& j, DeleteWhitelistResult& obj) { 
        DARABONBA_PTR_FROM_JSON(Data, data_);
        DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
      };
      DeleteWhitelistResult() = default ;
      DeleteWhitelistResult(const DeleteWhitelistResult &) = default ;
      DeleteWhitelistResult(DeleteWhitelistResult &&) = default ;
      DeleteWhitelistResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DeleteWhitelistResult() = default ;
      DeleteWhitelistResult& operator=(const DeleteWhitelistResult &) = default ;
      DeleteWhitelistResult& operator=(DeleteWhitelistResult &&) = default ;
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
      inline DeleteWhitelistResult& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


      // resultMsg Field Functions 
      bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
      void deleteResultMsg() { this->resultMsg_ = nullptr;};
      inline string getResultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
      inline DeleteWhitelistResult& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline DeleteWhitelistResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    protected:
      shared_ptr<string> data_ {};
      shared_ptr<string> resultMsg_ {};
      shared_ptr<bool> success_ {};
    };

    virtual bool empty() const override { return this->deleteWhitelistResult_ == nullptr
        && this->requestId_ == nullptr && this->resultCode_ == nullptr && this->resultMessage_ == nullptr; };
    // deleteWhitelistResult Field Functions 
    bool hasDeleteWhitelistResult() const { return this->deleteWhitelistResult_ != nullptr;};
    void deleteDeleteWhitelistResult() { this->deleteWhitelistResult_ = nullptr;};
    inline const DeleteMcubeWhitelistResponseBody::DeleteWhitelistResult & getDeleteWhitelistResult() const { DARABONBA_PTR_GET_CONST(deleteWhitelistResult_, DeleteMcubeWhitelistResponseBody::DeleteWhitelistResult) };
    inline DeleteMcubeWhitelistResponseBody::DeleteWhitelistResult getDeleteWhitelistResult() { DARABONBA_PTR_GET(deleteWhitelistResult_, DeleteMcubeWhitelistResponseBody::DeleteWhitelistResult) };
    inline DeleteMcubeWhitelistResponseBody& setDeleteWhitelistResult(const DeleteMcubeWhitelistResponseBody::DeleteWhitelistResult & deleteWhitelistResult) { DARABONBA_PTR_SET_VALUE(deleteWhitelistResult_, deleteWhitelistResult) };
    inline DeleteMcubeWhitelistResponseBody& setDeleteWhitelistResult(DeleteMcubeWhitelistResponseBody::DeleteWhitelistResult && deleteWhitelistResult) { DARABONBA_PTR_SET_RVALUE(deleteWhitelistResult_, deleteWhitelistResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteMcubeWhitelistResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline DeleteMcubeWhitelistResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string getResultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline DeleteMcubeWhitelistResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    shared_ptr<DeleteMcubeWhitelistResponseBody::DeleteWhitelistResult> deleteWhitelistResult_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resultCode_ {};
    shared_ptr<string> resultMessage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
