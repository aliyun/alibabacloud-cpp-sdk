// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMCUBEUPGRADEPACKAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEMCUBEUPGRADEPACKAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20200710
{
namespace Models
{
  class CreateMcubeUpgradePackageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMcubeUpgradePackageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateUpgradePackageResult, createUpgradePackageResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMcubeUpgradePackageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateUpgradePackageResult, createUpgradePackageResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    CreateMcubeUpgradePackageResponseBody() = default ;
    CreateMcubeUpgradePackageResponseBody(const CreateMcubeUpgradePackageResponseBody &) = default ;
    CreateMcubeUpgradePackageResponseBody(CreateMcubeUpgradePackageResponseBody &&) = default ;
    CreateMcubeUpgradePackageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMcubeUpgradePackageResponseBody() = default ;
    CreateMcubeUpgradePackageResponseBody& operator=(const CreateMcubeUpgradePackageResponseBody &) = default ;
    CreateMcubeUpgradePackageResponseBody& operator=(CreateMcubeUpgradePackageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CreateUpgradePackageResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CreateUpgradePackageResult& obj) { 
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(RequestId, requestId_);
        DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_TO_JSON(Success, success_);
        DARABONBA_PTR_TO_JSON(UpgradePackageId, upgradePackageId_);
      };
      friend void from_json(const Darabonba::Json& j, CreateUpgradePackageResult& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
        DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
        DARABONBA_PTR_FROM_JSON(UpgradePackageId, upgradePackageId_);
      };
      CreateUpgradePackageResult() = default ;
      CreateUpgradePackageResult(const CreateUpgradePackageResult &) = default ;
      CreateUpgradePackageResult(CreateUpgradePackageResult &&) = default ;
      CreateUpgradePackageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CreateUpgradePackageResult() = default ;
      CreateUpgradePackageResult& operator=(const CreateUpgradePackageResult &) = default ;
      CreateUpgradePackageResult& operator=(CreateUpgradePackageResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->requestId_ == nullptr && this->resultMsg_ == nullptr && this->success_ == nullptr && this->upgradePackageId_ == nullptr; };
      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline CreateUpgradePackageResult& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline CreateUpgradePackageResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


      // resultMsg Field Functions 
      bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
      void deleteResultMsg() { this->resultMsg_ = nullptr;};
      inline string getResultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
      inline CreateUpgradePackageResult& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline CreateUpgradePackageResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


      // upgradePackageId Field Functions 
      bool hasUpgradePackageId() const { return this->upgradePackageId_ != nullptr;};
      void deleteUpgradePackageId() { this->upgradePackageId_ = nullptr;};
      inline string getUpgradePackageId() const { DARABONBA_PTR_GET_DEFAULT(upgradePackageId_, "") };
      inline CreateUpgradePackageResult& setUpgradePackageId(string upgradePackageId) { DARABONBA_PTR_SET_VALUE(upgradePackageId_, upgradePackageId) };


    protected:
      shared_ptr<string> errorCode_ {};
      shared_ptr<string> requestId_ {};
      shared_ptr<string> resultMsg_ {};
      shared_ptr<bool> success_ {};
      shared_ptr<string> upgradePackageId_ {};
    };

    virtual bool empty() const override { return this->createUpgradePackageResult_ == nullptr
        && this->requestId_ == nullptr && this->resultCode_ == nullptr && this->resultMessage_ == nullptr; };
    // createUpgradePackageResult Field Functions 
    bool hasCreateUpgradePackageResult() const { return this->createUpgradePackageResult_ != nullptr;};
    void deleteCreateUpgradePackageResult() { this->createUpgradePackageResult_ = nullptr;};
    inline const CreateMcubeUpgradePackageResponseBody::CreateUpgradePackageResult & getCreateUpgradePackageResult() const { DARABONBA_PTR_GET_CONST(createUpgradePackageResult_, CreateMcubeUpgradePackageResponseBody::CreateUpgradePackageResult) };
    inline CreateMcubeUpgradePackageResponseBody::CreateUpgradePackageResult getCreateUpgradePackageResult() { DARABONBA_PTR_GET(createUpgradePackageResult_, CreateMcubeUpgradePackageResponseBody::CreateUpgradePackageResult) };
    inline CreateMcubeUpgradePackageResponseBody& setCreateUpgradePackageResult(const CreateMcubeUpgradePackageResponseBody::CreateUpgradePackageResult & createUpgradePackageResult) { DARABONBA_PTR_SET_VALUE(createUpgradePackageResult_, createUpgradePackageResult) };
    inline CreateMcubeUpgradePackageResponseBody& setCreateUpgradePackageResult(CreateMcubeUpgradePackageResponseBody::CreateUpgradePackageResult && createUpgradePackageResult) { DARABONBA_PTR_SET_RVALUE(createUpgradePackageResult_, createUpgradePackageResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateMcubeUpgradePackageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline CreateMcubeUpgradePackageResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string getResultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline CreateMcubeUpgradePackageResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    shared_ptr<CreateMcubeUpgradePackageResponseBody::CreateUpgradePackageResult> createUpgradePackageResult_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resultCode_ {};
    shared_ptr<string> resultMessage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20200710
#endif
