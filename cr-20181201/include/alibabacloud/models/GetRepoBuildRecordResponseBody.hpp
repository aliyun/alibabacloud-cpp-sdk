// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREPOBUILDRECORDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETREPOBUILDRECORDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class GetRepoBuildRecordResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRepoBuildRecordResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BuildRecordId, buildRecordId_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Image, image_);
      DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetRepoBuildRecordResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BuildRecordId, buildRecordId_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Image, image_);
      DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetRepoBuildRecordResponseBody() = default ;
    GetRepoBuildRecordResponseBody(const GetRepoBuildRecordResponseBody &) = default ;
    GetRepoBuildRecordResponseBody(GetRepoBuildRecordResponseBody &&) = default ;
    GetRepoBuildRecordResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRepoBuildRecordResponseBody() = default ;
    GetRepoBuildRecordResponseBody& operator=(const GetRepoBuildRecordResponseBody &) = default ;
    GetRepoBuildRecordResponseBody& operator=(GetRepoBuildRecordResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Image : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Image& obj) { 
        DARABONBA_PTR_TO_JSON(ImageTag, imageTag_);
        DARABONBA_PTR_TO_JSON(RepoName, repoName_);
        DARABONBA_PTR_TO_JSON(RepoNamespaceName, repoNamespaceName_);
      };
      friend void from_json(const Darabonba::Json& j, Image& obj) { 
        DARABONBA_PTR_FROM_JSON(ImageTag, imageTag_);
        DARABONBA_PTR_FROM_JSON(RepoName, repoName_);
        DARABONBA_PTR_FROM_JSON(RepoNamespaceName, repoNamespaceName_);
      };
      Image() = default ;
      Image(const Image &) = default ;
      Image(Image &&) = default ;
      Image(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Image() = default ;
      Image& operator=(const Image &) = default ;
      Image& operator=(Image &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->imageTag_ == nullptr
        && this->repoName_ == nullptr && this->repoNamespaceName_ == nullptr; };
      // imageTag Field Functions 
      bool hasImageTag() const { return this->imageTag_ != nullptr;};
      void deleteImageTag() { this->imageTag_ = nullptr;};
      inline string getImageTag() const { DARABONBA_PTR_GET_DEFAULT(imageTag_, "") };
      inline Image& setImageTag(string imageTag) { DARABONBA_PTR_SET_VALUE(imageTag_, imageTag) };


      // repoName Field Functions 
      bool hasRepoName() const { return this->repoName_ != nullptr;};
      void deleteRepoName() { this->repoName_ = nullptr;};
      inline string getRepoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
      inline Image& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


      // repoNamespaceName Field Functions 
      bool hasRepoNamespaceName() const { return this->repoNamespaceName_ != nullptr;};
      void deleteRepoNamespaceName() { this->repoNamespaceName_ = nullptr;};
      inline string getRepoNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(repoNamespaceName_, "") };
      inline Image& setRepoNamespaceName(string repoNamespaceName) { DARABONBA_PTR_SET_VALUE(repoNamespaceName_, repoNamespaceName) };


    protected:
      // The tag of the image.
      shared_ptr<string> imageTag_ {};
      // The name of the image repository.
      shared_ptr<string> repoName_ {};
      // The name of the namespace to which the image repository belongs.
      shared_ptr<string> repoNamespaceName_ {};
    };

    virtual bool empty() const override { return this->buildRecordId_ == nullptr
        && this->code_ == nullptr && this->endTime_ == nullptr && this->image_ == nullptr && this->isSuccess_ == nullptr && this->requestId_ == nullptr
        && this->startTime_ == nullptr && this->status_ == nullptr; };
    // buildRecordId Field Functions 
    bool hasBuildRecordId() const { return this->buildRecordId_ != nullptr;};
    void deleteBuildRecordId() { this->buildRecordId_ = nullptr;};
    inline string getBuildRecordId() const { DARABONBA_PTR_GET_DEFAULT(buildRecordId_, "") };
    inline GetRepoBuildRecordResponseBody& setBuildRecordId(string buildRecordId) { DARABONBA_PTR_SET_VALUE(buildRecordId_, buildRecordId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetRepoBuildRecordResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline GetRepoBuildRecordResponseBody& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline const GetRepoBuildRecordResponseBody::Image & getImage() const { DARABONBA_PTR_GET_CONST(image_, GetRepoBuildRecordResponseBody::Image) };
    inline GetRepoBuildRecordResponseBody::Image getImage() { DARABONBA_PTR_GET(image_, GetRepoBuildRecordResponseBody::Image) };
    inline GetRepoBuildRecordResponseBody& setImage(const GetRepoBuildRecordResponseBody::Image & image) { DARABONBA_PTR_SET_VALUE(image_, image) };
    inline GetRepoBuildRecordResponseBody& setImage(GetRepoBuildRecordResponseBody::Image && image) { DARABONBA_PTR_SET_RVALUE(image_, image) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool getIsSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline GetRepoBuildRecordResponseBody& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRepoBuildRecordResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline GetRepoBuildRecordResponseBody& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetRepoBuildRecordResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the image building record.
    shared_ptr<string> buildRecordId_ {};
    // The return value.
    shared_ptr<string> code_ {};
    // The time when the image building was completed.
    shared_ptr<int64_t> endTime_ {};
    // The information about the image.
    shared_ptr<GetRepoBuildRecordResponseBody::Image> image_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> isSuccess_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The time when the image building started.
    shared_ptr<int64_t> startTime_ {};
    // The status of the instance.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
