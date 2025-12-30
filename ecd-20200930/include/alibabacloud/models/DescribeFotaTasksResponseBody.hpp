// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFOTATASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFOTATASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeFotaTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFotaTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(FotaTasks, fotaTasks_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFotaTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(FotaTasks, fotaTasks_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeFotaTasksResponseBody() = default ;
    DescribeFotaTasksResponseBody(const DescribeFotaTasksResponseBody &) = default ;
    DescribeFotaTasksResponseBody(DescribeFotaTasksResponseBody &&) = default ;
    DescribeFotaTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFotaTasksResponseBody() = default ;
    DescribeFotaTasksResponseBody& operator=(const DescribeFotaTasksResponseBody &) = default ;
    DescribeFotaTasksResponseBody& operator=(DescribeFotaTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FotaTasks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FotaTasks& obj) { 
        DARABONBA_PTR_TO_JSON(AppVersion, appVersion_);
        DARABONBA_PTR_TO_JSON(FotaProject, fotaProject_);
        DARABONBA_PTR_TO_JSON(PendingCustomImageCount, pendingCustomImageCount_);
        DARABONBA_PTR_TO_JSON(PendingDesktopCount, pendingDesktopCount_);
        DARABONBA_PTR_TO_JSON(PublishTime, publishTime_);
        DARABONBA_PTR_TO_JSON(ReleaseNote, releaseNote_);
        DARABONBA_PTR_TO_JSON(Size, size_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TaskUid, taskUid_);
      };
      friend void from_json(const Darabonba::Json& j, FotaTasks& obj) { 
        DARABONBA_PTR_FROM_JSON(AppVersion, appVersion_);
        DARABONBA_PTR_FROM_JSON(FotaProject, fotaProject_);
        DARABONBA_PTR_FROM_JSON(PendingCustomImageCount, pendingCustomImageCount_);
        DARABONBA_PTR_FROM_JSON(PendingDesktopCount, pendingDesktopCount_);
        DARABONBA_PTR_FROM_JSON(PublishTime, publishTime_);
        DARABONBA_PTR_FROM_JSON(ReleaseNote, releaseNote_);
        DARABONBA_PTR_FROM_JSON(Size, size_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TaskUid, taskUid_);
      };
      FotaTasks() = default ;
      FotaTasks(const FotaTasks &) = default ;
      FotaTasks(FotaTasks &&) = default ;
      FotaTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FotaTasks() = default ;
      FotaTasks& operator=(const FotaTasks &) = default ;
      FotaTasks& operator=(FotaTasks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appVersion_ == nullptr
        && this->fotaProject_ == nullptr && this->pendingCustomImageCount_ == nullptr && this->pendingDesktopCount_ == nullptr && this->publishTime_ == nullptr && this->releaseNote_ == nullptr
        && this->size_ == nullptr && this->status_ == nullptr && this->taskUid_ == nullptr; };
      // appVersion Field Functions 
      bool hasAppVersion() const { return this->appVersion_ != nullptr;};
      void deleteAppVersion() { this->appVersion_ = nullptr;};
      inline string getAppVersion() const { DARABONBA_PTR_GET_DEFAULT(appVersion_, "") };
      inline FotaTasks& setAppVersion(string appVersion) { DARABONBA_PTR_SET_VALUE(appVersion_, appVersion) };


      // fotaProject Field Functions 
      bool hasFotaProject() const { return this->fotaProject_ != nullptr;};
      void deleteFotaProject() { this->fotaProject_ = nullptr;};
      inline string getFotaProject() const { DARABONBA_PTR_GET_DEFAULT(fotaProject_, "") };
      inline FotaTasks& setFotaProject(string fotaProject) { DARABONBA_PTR_SET_VALUE(fotaProject_, fotaProject) };


      // pendingCustomImageCount Field Functions 
      bool hasPendingCustomImageCount() const { return this->pendingCustomImageCount_ != nullptr;};
      void deletePendingCustomImageCount() { this->pendingCustomImageCount_ = nullptr;};
      inline int32_t getPendingCustomImageCount() const { DARABONBA_PTR_GET_DEFAULT(pendingCustomImageCount_, 0) };
      inline FotaTasks& setPendingCustomImageCount(int32_t pendingCustomImageCount) { DARABONBA_PTR_SET_VALUE(pendingCustomImageCount_, pendingCustomImageCount) };


      // pendingDesktopCount Field Functions 
      bool hasPendingDesktopCount() const { return this->pendingDesktopCount_ != nullptr;};
      void deletePendingDesktopCount() { this->pendingDesktopCount_ = nullptr;};
      inline int32_t getPendingDesktopCount() const { DARABONBA_PTR_GET_DEFAULT(pendingDesktopCount_, 0) };
      inline FotaTasks& setPendingDesktopCount(int32_t pendingDesktopCount) { DARABONBA_PTR_SET_VALUE(pendingDesktopCount_, pendingDesktopCount) };


      // publishTime Field Functions 
      bool hasPublishTime() const { return this->publishTime_ != nullptr;};
      void deletePublishTime() { this->publishTime_ = nullptr;};
      inline string getPublishTime() const { DARABONBA_PTR_GET_DEFAULT(publishTime_, "") };
      inline FotaTasks& setPublishTime(string publishTime) { DARABONBA_PTR_SET_VALUE(publishTime_, publishTime) };


      // releaseNote Field Functions 
      bool hasReleaseNote() const { return this->releaseNote_ != nullptr;};
      void deleteReleaseNote() { this->releaseNote_ = nullptr;};
      inline string getReleaseNote() const { DARABONBA_PTR_GET_DEFAULT(releaseNote_, "") };
      inline FotaTasks& setReleaseNote(string releaseNote) { DARABONBA_PTR_SET_VALUE(releaseNote_, releaseNote) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
      inline FotaTasks& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline FotaTasks& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskUid Field Functions 
      bool hasTaskUid() const { return this->taskUid_ != nullptr;};
      void deleteTaskUid() { this->taskUid_ = nullptr;};
      inline string getTaskUid() const { DARABONBA_PTR_GET_DEFAULT(taskUid_, "") };
      inline FotaTasks& setTaskUid(string taskUid) { DARABONBA_PTR_SET_VALUE(taskUid_, taskUid) };


    protected:
      // The image version. You can call the [DescribeImages](https://help.aliyun.com/document_detail/188895.html) operation to obtain the value of this parameter.
      shared_ptr<string> appVersion_ {};
      // >  This parameter is not publicly available.
      shared_ptr<string> fotaProject_ {};
      // The number of custom images that can be updated to this version.
      shared_ptr<int32_t> pendingCustomImageCount_ {};
      // The number of cloud computers whose images can be updated to this version.
      shared_ptr<int32_t> pendingDesktopCount_ {};
      // The time when the image version available for update was published.
      shared_ptr<string> publishTime_ {};
      // The description of the image version available for update.
      shared_ptr<string> releaseNote_ {};
      // The size of the update package. Unit: KB.
      shared_ptr<int32_t> size_ {};
      // Indicates whether the image update task is automatically pushed.
      // 
      // Valid values:
      // 
      // *   Running: automatically pushes the image update task.
      // *   Pending: does not automatically push the image update task.
      shared_ptr<string> status_ {};
      // The ID of the image upgrade task.
      shared_ptr<string> taskUid_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->fotaTasks_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeFotaTasksResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // fotaTasks Field Functions 
    bool hasFotaTasks() const { return this->fotaTasks_ != nullptr;};
    void deleteFotaTasks() { this->fotaTasks_ = nullptr;};
    inline const vector<DescribeFotaTasksResponseBody::FotaTasks> & getFotaTasks() const { DARABONBA_PTR_GET_CONST(fotaTasks_, vector<DescribeFotaTasksResponseBody::FotaTasks>) };
    inline vector<DescribeFotaTasksResponseBody::FotaTasks> getFotaTasks() { DARABONBA_PTR_GET(fotaTasks_, vector<DescribeFotaTasksResponseBody::FotaTasks>) };
    inline DescribeFotaTasksResponseBody& setFotaTasks(const vector<DescribeFotaTasksResponseBody::FotaTasks> & fotaTasks) { DARABONBA_PTR_SET_VALUE(fotaTasks_, fotaTasks) };
    inline DescribeFotaTasksResponseBody& setFotaTasks(vector<DescribeFotaTasksResponseBody::FotaTasks> && fotaTasks) { DARABONBA_PTR_SET_RVALUE(fotaTasks_, fotaTasks) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeFotaTasksResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeFotaTasksResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFotaTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned message. If the request was successful, a `success` is returned. If the request failed, an error message is returned.
    shared_ptr<string> code_ {};
    // Details about the image update task.
    shared_ptr<vector<DescribeFotaTasksResponseBody::FotaTasks>> fotaTasks_ {};
    // The returned error message. This parameter is not returned if the Code value is a `success` message.
    shared_ptr<string> message_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results. If NextToken is empty, no next page exists.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
