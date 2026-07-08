// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHCAPTURERENDERINGINSTANCESCREENSHOTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHCAPTURERENDERINGINSTANCESCREENSHOTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class BatchCaptureRenderingInstanceScreenshotResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchCaptureRenderingInstanceScreenshotResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Datatest, datatest_);
      DARABONBA_PTR_TO_JSON(FailedCount, failedCount_);
      DARABONBA_PTR_TO_JSON(FailedItems, failedItems_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SuccessCount, successCount_);
      DARABONBA_PTR_TO_JSON(SuccessItems, successItems_);
    };
    friend void from_json(const Darabonba::Json& j, BatchCaptureRenderingInstanceScreenshotResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Datatest, datatest_);
      DARABONBA_PTR_FROM_JSON(FailedCount, failedCount_);
      DARABONBA_PTR_FROM_JSON(FailedItems, failedItems_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SuccessCount, successCount_);
      DARABONBA_PTR_FROM_JSON(SuccessItems, successItems_);
    };
    BatchCaptureRenderingInstanceScreenshotResponseBody() = default ;
    BatchCaptureRenderingInstanceScreenshotResponseBody(const BatchCaptureRenderingInstanceScreenshotResponseBody &) = default ;
    BatchCaptureRenderingInstanceScreenshotResponseBody(BatchCaptureRenderingInstanceScreenshotResponseBody &&) = default ;
    BatchCaptureRenderingInstanceScreenshotResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchCaptureRenderingInstanceScreenshotResponseBody() = default ;
    BatchCaptureRenderingInstanceScreenshotResponseBody& operator=(const BatchCaptureRenderingInstanceScreenshotResponseBody &) = default ;
    BatchCaptureRenderingInstanceScreenshotResponseBody& operator=(BatchCaptureRenderingInstanceScreenshotResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SuccessItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SuccessItems& obj) { 
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
        DARABONBA_PTR_TO_JSON(RenderingInstanceId, renderingInstanceId_);
      };
      friend void from_json(const Darabonba::Json& j, SuccessItems& obj) { 
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
        DARABONBA_PTR_FROM_JSON(RenderingInstanceId, renderingInstanceId_);
      };
      SuccessItems() = default ;
      SuccessItems(const SuccessItems &) = default ;
      SuccessItems(SuccessItems &&) = default ;
      SuccessItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SuccessItems() = default ;
      SuccessItems& operator=(const SuccessItems &) = default ;
      SuccessItems& operator=(SuccessItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->creationTime_ == nullptr
        && this->downloadUrl_ == nullptr && this->renderingInstanceId_ == nullptr; };
      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline SuccessItems& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // downloadUrl Field Functions 
      bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
      void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
      inline string getDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
      inline SuccessItems& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


      // renderingInstanceId Field Functions 
      bool hasRenderingInstanceId() const { return this->renderingInstanceId_ != nullptr;};
      void deleteRenderingInstanceId() { this->renderingInstanceId_ = nullptr;};
      inline string getRenderingInstanceId() const { DARABONBA_PTR_GET_DEFAULT(renderingInstanceId_, "") };
      inline SuccessItems& setRenderingInstanceId(string renderingInstanceId) { DARABONBA_PTR_SET_VALUE(renderingInstanceId_, renderingInstanceId) };


    protected:
      // The time when the screenshot was created.
      shared_ptr<string> creationTime_ {};
      // The download URL of the screenshot.
      shared_ptr<string> downloadUrl_ {};
      // The instance ID of the cloud application service instance.
      shared_ptr<string> renderingInstanceId_ {};
    };

    class FailedItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FailedItems& obj) { 
        DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
        DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
        DARABONBA_PTR_TO_JSON(RenderingInstanceId, renderingInstanceId_);
      };
      friend void from_json(const Darabonba::Json& j, FailedItems& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
        DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
        DARABONBA_PTR_FROM_JSON(RenderingInstanceId, renderingInstanceId_);
      };
      FailedItems() = default ;
      FailedItems(const FailedItems &) = default ;
      FailedItems(FailedItems &&) = default ;
      FailedItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FailedItems() = default ;
      FailedItems& operator=(const FailedItems &) = default ;
      FailedItems& operator=(FailedItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->errCode_ == nullptr
        && this->errMessage_ == nullptr && this->renderingInstanceId_ == nullptr; };
      // errCode Field Functions 
      bool hasErrCode() const { return this->errCode_ != nullptr;};
      void deleteErrCode() { this->errCode_ = nullptr;};
      inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
      inline FailedItems& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


      // errMessage Field Functions 
      bool hasErrMessage() const { return this->errMessage_ != nullptr;};
      void deleteErrMessage() { this->errMessage_ = nullptr;};
      inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
      inline FailedItems& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


      // renderingInstanceId Field Functions 
      bool hasRenderingInstanceId() const { return this->renderingInstanceId_ != nullptr;};
      void deleteRenderingInstanceId() { this->renderingInstanceId_ = nullptr;};
      inline string getRenderingInstanceId() const { DARABONBA_PTR_GET_DEFAULT(renderingInstanceId_, "") };
      inline FailedItems& setRenderingInstanceId(string renderingInstanceId) { DARABONBA_PTR_SET_VALUE(renderingInstanceId_, renderingInstanceId) };


    protected:
      // The error code of the failure.
      shared_ptr<string> errCode_ {};
      // The error message of the failure.
      shared_ptr<string> errMessage_ {};
      // The instance ID of the cloud application service instance.
      shared_ptr<string> renderingInstanceId_ {};
    };

    class Datatest : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Datatest& obj) { 
        DARABONBA_PTR_TO_JSON(Result, result_);
      };
      friend void from_json(const Darabonba::Json& j, Datatest& obj) { 
        DARABONBA_PTR_FROM_JSON(Result, result_);
      };
      Datatest() = default ;
      Datatest(const Datatest &) = default ;
      Datatest(Datatest &&) = default ;
      Datatest(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Datatest() = default ;
      Datatest& operator=(const Datatest &) = default ;
      Datatest& operator=(Datatest &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Result : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Result& obj) { 
          DARABONBA_PTR_TO_JSON(SuccessCount, successCount_);
        };
        friend void from_json(const Darabonba::Json& j, Result& obj) { 
          DARABONBA_PTR_FROM_JSON(SuccessCount, successCount_);
        };
        Result() = default ;
        Result(const Result &) = default ;
        Result(Result &&) = default ;
        Result(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Result() = default ;
        Result& operator=(const Result &) = default ;
        Result& operator=(Result &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->successCount_ == nullptr; };
        // successCount Field Functions 
        bool hasSuccessCount() const { return this->successCount_ != nullptr;};
        void deleteSuccessCount() { this->successCount_ = nullptr;};
        inline int64_t getSuccessCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0L) };
        inline Result& setSuccessCount(int64_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


      protected:
        // The number of successful instances.
        shared_ptr<int64_t> successCount_ {};
      };

      virtual bool empty() const override { return this->result_ == nullptr; };
      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline const Datatest::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, Datatest::Result) };
      inline Datatest::Result getResult() { DARABONBA_PTR_GET(result_, Datatest::Result) };
      inline Datatest& setResult(const Datatest::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
      inline Datatest& setResult(Datatest::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    protected:
      // The dry run result.
      shared_ptr<Datatest::Result> result_ {};
    };

    virtual bool empty() const override { return this->datatest_ == nullptr
        && this->failedCount_ == nullptr && this->failedItems_ == nullptr && this->requestId_ == nullptr && this->successCount_ == nullptr && this->successItems_ == nullptr; };
    // datatest Field Functions 
    bool hasDatatest() const { return this->datatest_ != nullptr;};
    void deleteDatatest() { this->datatest_ = nullptr;};
    inline const BatchCaptureRenderingInstanceScreenshotResponseBody::Datatest & getDatatest() const { DARABONBA_PTR_GET_CONST(datatest_, BatchCaptureRenderingInstanceScreenshotResponseBody::Datatest) };
    inline BatchCaptureRenderingInstanceScreenshotResponseBody::Datatest getDatatest() { DARABONBA_PTR_GET(datatest_, BatchCaptureRenderingInstanceScreenshotResponseBody::Datatest) };
    inline BatchCaptureRenderingInstanceScreenshotResponseBody& setDatatest(const BatchCaptureRenderingInstanceScreenshotResponseBody::Datatest & datatest) { DARABONBA_PTR_SET_VALUE(datatest_, datatest) };
    inline BatchCaptureRenderingInstanceScreenshotResponseBody& setDatatest(BatchCaptureRenderingInstanceScreenshotResponseBody::Datatest && datatest) { DARABONBA_PTR_SET_RVALUE(datatest_, datatest) };


    // failedCount Field Functions 
    bool hasFailedCount() const { return this->failedCount_ != nullptr;};
    void deleteFailedCount() { this->failedCount_ = nullptr;};
    inline int64_t getFailedCount() const { DARABONBA_PTR_GET_DEFAULT(failedCount_, 0L) };
    inline BatchCaptureRenderingInstanceScreenshotResponseBody& setFailedCount(int64_t failedCount) { DARABONBA_PTR_SET_VALUE(failedCount_, failedCount) };


    // failedItems Field Functions 
    bool hasFailedItems() const { return this->failedItems_ != nullptr;};
    void deleteFailedItems() { this->failedItems_ = nullptr;};
    inline const vector<BatchCaptureRenderingInstanceScreenshotResponseBody::FailedItems> & getFailedItems() const { DARABONBA_PTR_GET_CONST(failedItems_, vector<BatchCaptureRenderingInstanceScreenshotResponseBody::FailedItems>) };
    inline vector<BatchCaptureRenderingInstanceScreenshotResponseBody::FailedItems> getFailedItems() { DARABONBA_PTR_GET(failedItems_, vector<BatchCaptureRenderingInstanceScreenshotResponseBody::FailedItems>) };
    inline BatchCaptureRenderingInstanceScreenshotResponseBody& setFailedItems(const vector<BatchCaptureRenderingInstanceScreenshotResponseBody::FailedItems> & failedItems) { DARABONBA_PTR_SET_VALUE(failedItems_, failedItems) };
    inline BatchCaptureRenderingInstanceScreenshotResponseBody& setFailedItems(vector<BatchCaptureRenderingInstanceScreenshotResponseBody::FailedItems> && failedItems) { DARABONBA_PTR_SET_RVALUE(failedItems_, failedItems) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchCaptureRenderingInstanceScreenshotResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // successCount Field Functions 
    bool hasSuccessCount() const { return this->successCount_ != nullptr;};
    void deleteSuccessCount() { this->successCount_ = nullptr;};
    inline int64_t getSuccessCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0L) };
    inline BatchCaptureRenderingInstanceScreenshotResponseBody& setSuccessCount(int64_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


    // successItems Field Functions 
    bool hasSuccessItems() const { return this->successItems_ != nullptr;};
    void deleteSuccessItems() { this->successItems_ = nullptr;};
    inline const vector<BatchCaptureRenderingInstanceScreenshotResponseBody::SuccessItems> & getSuccessItems() const { DARABONBA_PTR_GET_CONST(successItems_, vector<BatchCaptureRenderingInstanceScreenshotResponseBody::SuccessItems>) };
    inline vector<BatchCaptureRenderingInstanceScreenshotResponseBody::SuccessItems> getSuccessItems() { DARABONBA_PTR_GET(successItems_, vector<BatchCaptureRenderingInstanceScreenshotResponseBody::SuccessItems>) };
    inline BatchCaptureRenderingInstanceScreenshotResponseBody& setSuccessItems(const vector<BatchCaptureRenderingInstanceScreenshotResponseBody::SuccessItems> & successItems) { DARABONBA_PTR_SET_VALUE(successItems_, successItems) };
    inline BatchCaptureRenderingInstanceScreenshotResponseBody& setSuccessItems(vector<BatchCaptureRenderingInstanceScreenshotResponseBody::SuccessItems> && successItems) { DARABONBA_PTR_SET_RVALUE(successItems_, successItems) };


  protected:
    // The dry run result.
    shared_ptr<BatchCaptureRenderingInstanceScreenshotResponseBody::Datatest> datatest_ {};
    // The number of failed instances.
    shared_ptr<int64_t> failedCount_ {};
    // The list of instances for which screenshots failed.
    shared_ptr<vector<BatchCaptureRenderingInstanceScreenshotResponseBody::FailedItems>> failedItems_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The number of successful instances.
    shared_ptr<int64_t> successCount_ {};
    // The list of successful instances.
    shared_ptr<vector<BatchCaptureRenderingInstanceScreenshotResponseBody::SuccessItems>> successItems_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
