// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMCUBEUPGRADERESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEMCUBEUPGRADERESOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class DeleteMcubeUpgradeResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMcubeUpgradeResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DeleteResult, deleteResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMcubeUpgradeResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DeleteResult, deleteResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    DeleteMcubeUpgradeResourceResponseBody() = default ;
    DeleteMcubeUpgradeResourceResponseBody(const DeleteMcubeUpgradeResourceResponseBody &) = default ;
    DeleteMcubeUpgradeResourceResponseBody(DeleteMcubeUpgradeResourceResponseBody &&) = default ;
    DeleteMcubeUpgradeResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMcubeUpgradeResourceResponseBody() = default ;
    DeleteMcubeUpgradeResourceResponseBody& operator=(const DeleteMcubeUpgradeResourceResponseBody &) = default ;
    DeleteMcubeUpgradeResourceResponseBody& operator=(DeleteMcubeUpgradeResourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DeleteResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeleteResult& obj) { 
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(RequestId, requestId_);
        DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_TO_JSON(Success, success_);
      };
      friend void from_json(const Darabonba::Json& j, DeleteResult& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
        DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
      };
      DeleteResult() = default ;
      DeleteResult(const DeleteResult &) = default ;
      DeleteResult(DeleteResult &&) = default ;
      DeleteResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DeleteResult() = default ;
      DeleteResult& operator=(const DeleteResult &) = default ;
      DeleteResult& operator=(DeleteResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->requestId_ == nullptr && this->resultMsg_ == nullptr && this->success_ == nullptr; };
      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline DeleteResult& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline DeleteResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


      // resultMsg Field Functions 
      bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
      void deleteResultMsg() { this->resultMsg_ = nullptr;};
      inline string getResultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
      inline DeleteResult& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline DeleteResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    protected:
      shared_ptr<string> errorCode_ {};
      shared_ptr<string> requestId_ {};
      shared_ptr<string> resultMsg_ {};
      shared_ptr<bool> success_ {};
    };

    virtual bool empty() const override { return this->deleteResult_ == nullptr
        && this->requestId_ == nullptr && this->resultCode_ == nullptr && this->resultMessage_ == nullptr; };
    // deleteResult Field Functions 
    bool hasDeleteResult() const { return this->deleteResult_ != nullptr;};
    void deleteDeleteResult() { this->deleteResult_ = nullptr;};
    inline const DeleteMcubeUpgradeResourceResponseBody::DeleteResult & getDeleteResult() const { DARABONBA_PTR_GET_CONST(deleteResult_, DeleteMcubeUpgradeResourceResponseBody::DeleteResult) };
    inline DeleteMcubeUpgradeResourceResponseBody::DeleteResult getDeleteResult() { DARABONBA_PTR_GET(deleteResult_, DeleteMcubeUpgradeResourceResponseBody::DeleteResult) };
    inline DeleteMcubeUpgradeResourceResponseBody& setDeleteResult(const DeleteMcubeUpgradeResourceResponseBody::DeleteResult & deleteResult) { DARABONBA_PTR_SET_VALUE(deleteResult_, deleteResult) };
    inline DeleteMcubeUpgradeResourceResponseBody& setDeleteResult(DeleteMcubeUpgradeResourceResponseBody::DeleteResult && deleteResult) { DARABONBA_PTR_SET_RVALUE(deleteResult_, deleteResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteMcubeUpgradeResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline DeleteMcubeUpgradeResourceResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string getResultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline DeleteMcubeUpgradeResourceResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    shared_ptr<DeleteMcubeUpgradeResourceResponseBody::DeleteResult> deleteResult_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resultCode_ {};
    shared_ptr<string> resultMessage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
