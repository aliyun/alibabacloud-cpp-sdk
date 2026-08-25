// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIMAGETESTRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETIMAGETESTRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetImageTestResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetImageTestResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TestResult, testResult_);
    };
    friend void from_json(const Darabonba::Json& j, GetImageTestResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TestResult, testResult_);
    };
    GetImageTestResultResponseBody() = default ;
    GetImageTestResultResponseBody(const GetImageTestResultResponseBody &) = default ;
    GetImageTestResultResponseBody(GetImageTestResultResponseBody &&) = default ;
    GetImageTestResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetImageTestResultResponseBody() = default ;
    GetImageTestResultResponseBody& operator=(const GetImageTestResultResponseBody &) = default ;
    GetImageTestResultResponseBody& operator=(GetImageTestResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TestResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TestResult& obj) { 
        DARABONBA_PTR_TO_JSON(ImageId, imageId_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(OperateTime, operateTime_);
        DARABONBA_PTR_TO_JSON(ProcessId, processId_);
        DARABONBA_PTR_TO_JSON(PublishStage, publishStage_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, TestResult& obj) { 
        DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(OperateTime, operateTime_);
        DARABONBA_PTR_FROM_JSON(ProcessId, processId_);
        DARABONBA_PTR_FROM_JSON(PublishStage, publishStage_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      TestResult() = default ;
      TestResult(const TestResult &) = default ;
      TestResult(TestResult &&) = default ;
      TestResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TestResult() = default ;
      TestResult& operator=(const TestResult &) = default ;
      TestResult& operator=(TestResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->imageId_ == nullptr
        && this->message_ == nullptr && this->operateTime_ == nullptr && this->processId_ == nullptr && this->publishStage_ == nullptr && this->resourceGroupId_ == nullptr
        && this->status_ == nullptr; };
      // imageId Field Functions 
      bool hasImageId() const { return this->imageId_ != nullptr;};
      void deleteImageId() { this->imageId_ = nullptr;};
      inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
      inline TestResult& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline TestResult& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // operateTime Field Functions 
      bool hasOperateTime() const { return this->operateTime_ != nullptr;};
      void deleteOperateTime() { this->operateTime_ = nullptr;};
      inline int64_t getOperateTime() const { DARABONBA_PTR_GET_DEFAULT(operateTime_, 0L) };
      inline TestResult& setOperateTime(int64_t operateTime) { DARABONBA_PTR_SET_VALUE(operateTime_, operateTime) };


      // processId Field Functions 
      bool hasProcessId() const { return this->processId_ != nullptr;};
      void deleteProcessId() { this->processId_ = nullptr;};
      inline string getProcessId() const { DARABONBA_PTR_GET_DEFAULT(processId_, "") };
      inline TestResult& setProcessId(string processId) { DARABONBA_PTR_SET_VALUE(processId_, processId) };


      // publishStage Field Functions 
      bool hasPublishStage() const { return this->publishStage_ != nullptr;};
      void deletePublishStage() { this->publishStage_ = nullptr;};
      inline string getPublishStage() const { DARABONBA_PTR_GET_DEFAULT(publishStage_, "") };
      inline TestResult& setPublishStage(string publishStage) { DARABONBA_PTR_SET_VALUE(publishStage_, publishStage) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline int64_t getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, 0L) };
      inline TestResult& setResourceGroupId(int64_t resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline TestResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The image ID.
      shared_ptr<string> imageId_ {};
      // The test result message.
      shared_ptr<string> message_ {};
      // The operation time, represented as a 64-bit timestamp.
      shared_ptr<int64_t> operateTime_ {};
      // The process ID.
      shared_ptr<string> processId_ {};
      // The image publish status. Valid values:
      // - Untest: Not tested.
      // - Testing: Testing in progress.
      // - TestFailed: Test failed.
      // - Unpublished: Not published.
      // - Publishing: Publishing in progress.
      // - Published: Published.
      // - PublishFailed: Publish failed.
      // - Building: Building in progress.
      // - BuildSuccess: Build succeeded.
      // - BuildFailed: Build failed.
      // - Accelerating: Acceleration in progress.
      // - AccelerateSuccess: Acceleration succeeded.
      // - AccelerateFailed: Acceleration failed.
      shared_ptr<string> publishStage_ {};
      // The resource group ID.
      shared_ptr<int64_t> resourceGroupId_ {};
      // The test process status. Valid values:
      // - running: Running.
      // - completed: Completed.
      // - failed: Failed.
      // - cancelled: Cancelled.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->success_ == nullptr && this->testResult_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetImageTestResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetImageTestResultResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // testResult Field Functions 
    bool hasTestResult() const { return this->testResult_ != nullptr;};
    void deleteTestResult() { this->testResult_ = nullptr;};
    inline const GetImageTestResultResponseBody::TestResult & getTestResult() const { DARABONBA_PTR_GET_CONST(testResult_, GetImageTestResultResponseBody::TestResult) };
    inline GetImageTestResultResponseBody::TestResult getTestResult() { DARABONBA_PTR_GET(testResult_, GetImageTestResultResponseBody::TestResult) };
    inline GetImageTestResultResponseBody& setTestResult(const GetImageTestResultResponseBody::TestResult & testResult) { DARABONBA_PTR_SET_VALUE(testResult_, testResult) };
    inline GetImageTestResultResponseBody& setTestResult(GetImageTestResultResponseBody::TestResult && testResult) { DARABONBA_PTR_SET_RVALUE(testResult_, testResult) };


  protected:
    // The request ID, which is used to locate logs and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
    // The details of the image test result.
    shared_ptr<GetImageTestResultResponseBody::TestResult> testResult_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
