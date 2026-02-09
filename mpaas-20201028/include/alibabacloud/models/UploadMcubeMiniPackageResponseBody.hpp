// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADMCUBEMINIPACKAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPLOADMCUBEMINIPACKAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class UploadMcubeMiniPackageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadMcubeMiniPackageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
      DARABONBA_PTR_TO_JSON(UploadMiniPackageResult, uploadMiniPackageResult_);
    };
    friend void from_json(const Darabonba::Json& j, UploadMcubeMiniPackageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
      DARABONBA_PTR_FROM_JSON(UploadMiniPackageResult, uploadMiniPackageResult_);
    };
    UploadMcubeMiniPackageResponseBody() = default ;
    UploadMcubeMiniPackageResponseBody(const UploadMcubeMiniPackageResponseBody &) = default ;
    UploadMcubeMiniPackageResponseBody(UploadMcubeMiniPackageResponseBody &&) = default ;
    UploadMcubeMiniPackageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadMcubeMiniPackageResponseBody() = default ;
    UploadMcubeMiniPackageResponseBody& operator=(const UploadMcubeMiniPackageResponseBody &) = default ;
    UploadMcubeMiniPackageResponseBody& operator=(UploadMcubeMiniPackageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UploadMiniPackageResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UploadMiniPackageResult& obj) { 
        DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_TO_JSON(ReturnPackageResult, returnPackageResult_);
        DARABONBA_PTR_TO_JSON(Success, success_);
      };
      friend void from_json(const Darabonba::Json& j, UploadMiniPackageResult& obj) { 
        DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_FROM_JSON(ReturnPackageResult, returnPackageResult_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
      };
      UploadMiniPackageResult() = default ;
      UploadMiniPackageResult(const UploadMiniPackageResult &) = default ;
      UploadMiniPackageResult(UploadMiniPackageResult &&) = default ;
      UploadMiniPackageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UploadMiniPackageResult() = default ;
      UploadMiniPackageResult& operator=(const UploadMiniPackageResult &) = default ;
      UploadMiniPackageResult& operator=(UploadMiniPackageResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ReturnPackageResult : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ReturnPackageResult& obj) { 
          DARABONBA_PTR_TO_JSON(DebugUrl, debugUrl_);
          DARABONBA_PTR_TO_JSON(PackageId, packageId_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, ReturnPackageResult& obj) { 
          DARABONBA_PTR_FROM_JSON(DebugUrl, debugUrl_);
          DARABONBA_PTR_FROM_JSON(PackageId, packageId_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
        };
        ReturnPackageResult() = default ;
        ReturnPackageResult(const ReturnPackageResult &) = default ;
        ReturnPackageResult(ReturnPackageResult &&) = default ;
        ReturnPackageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ReturnPackageResult() = default ;
        ReturnPackageResult& operator=(const ReturnPackageResult &) = default ;
        ReturnPackageResult& operator=(ReturnPackageResult &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->debugUrl_ == nullptr
        && this->packageId_ == nullptr && this->userId_ == nullptr; };
        // debugUrl Field Functions 
        bool hasDebugUrl() const { return this->debugUrl_ != nullptr;};
        void deleteDebugUrl() { this->debugUrl_ = nullptr;};
        inline string getDebugUrl() const { DARABONBA_PTR_GET_DEFAULT(debugUrl_, "") };
        inline ReturnPackageResult& setDebugUrl(string debugUrl) { DARABONBA_PTR_SET_VALUE(debugUrl_, debugUrl) };


        // packageId Field Functions 
        bool hasPackageId() const { return this->packageId_ != nullptr;};
        void deletePackageId() { this->packageId_ = nullptr;};
        inline string getPackageId() const { DARABONBA_PTR_GET_DEFAULT(packageId_, "") };
        inline ReturnPackageResult& setPackageId(string packageId) { DARABONBA_PTR_SET_VALUE(packageId_, packageId) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline ReturnPackageResult& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        shared_ptr<string> debugUrl_ {};
        shared_ptr<string> packageId_ {};
        shared_ptr<string> userId_ {};
      };

      virtual bool empty() const override { return this->resultMsg_ == nullptr
        && this->returnPackageResult_ == nullptr && this->success_ == nullptr; };
      // resultMsg Field Functions 
      bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
      void deleteResultMsg() { this->resultMsg_ = nullptr;};
      inline string getResultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
      inline UploadMiniPackageResult& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


      // returnPackageResult Field Functions 
      bool hasReturnPackageResult() const { return this->returnPackageResult_ != nullptr;};
      void deleteReturnPackageResult() { this->returnPackageResult_ = nullptr;};
      inline const UploadMiniPackageResult::ReturnPackageResult & getReturnPackageResult() const { DARABONBA_PTR_GET_CONST(returnPackageResult_, UploadMiniPackageResult::ReturnPackageResult) };
      inline UploadMiniPackageResult::ReturnPackageResult getReturnPackageResult() { DARABONBA_PTR_GET(returnPackageResult_, UploadMiniPackageResult::ReturnPackageResult) };
      inline UploadMiniPackageResult& setReturnPackageResult(const UploadMiniPackageResult::ReturnPackageResult & returnPackageResult) { DARABONBA_PTR_SET_VALUE(returnPackageResult_, returnPackageResult) };
      inline UploadMiniPackageResult& setReturnPackageResult(UploadMiniPackageResult::ReturnPackageResult && returnPackageResult) { DARABONBA_PTR_SET_RVALUE(returnPackageResult_, returnPackageResult) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline UploadMiniPackageResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    protected:
      shared_ptr<string> resultMsg_ {};
      shared_ptr<UploadMiniPackageResult::ReturnPackageResult> returnPackageResult_ {};
      shared_ptr<bool> success_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resultCode_ == nullptr && this->resultMessage_ == nullptr && this->uploadMiniPackageResult_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UploadMcubeMiniPackageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline UploadMcubeMiniPackageResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string getResultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline UploadMcubeMiniPackageResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


    // uploadMiniPackageResult Field Functions 
    bool hasUploadMiniPackageResult() const { return this->uploadMiniPackageResult_ != nullptr;};
    void deleteUploadMiniPackageResult() { this->uploadMiniPackageResult_ = nullptr;};
    inline const UploadMcubeMiniPackageResponseBody::UploadMiniPackageResult & getUploadMiniPackageResult() const { DARABONBA_PTR_GET_CONST(uploadMiniPackageResult_, UploadMcubeMiniPackageResponseBody::UploadMiniPackageResult) };
    inline UploadMcubeMiniPackageResponseBody::UploadMiniPackageResult getUploadMiniPackageResult() { DARABONBA_PTR_GET(uploadMiniPackageResult_, UploadMcubeMiniPackageResponseBody::UploadMiniPackageResult) };
    inline UploadMcubeMiniPackageResponseBody& setUploadMiniPackageResult(const UploadMcubeMiniPackageResponseBody::UploadMiniPackageResult & uploadMiniPackageResult) { DARABONBA_PTR_SET_VALUE(uploadMiniPackageResult_, uploadMiniPackageResult) };
    inline UploadMcubeMiniPackageResponseBody& setUploadMiniPackageResult(UploadMcubeMiniPackageResponseBody::UploadMiniPackageResult && uploadMiniPackageResult) { DARABONBA_PTR_SET_RVALUE(uploadMiniPackageResult_, uploadMiniPackageResult) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resultCode_ {};
    shared_ptr<string> resultMessage_ {};
    shared_ptr<UploadMcubeMiniPackageResponseBody::UploadMiniPackageResult> uploadMiniPackageResult_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
