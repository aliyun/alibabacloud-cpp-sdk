// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREPOBUILDRECORDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTREPOBUILDRECORDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class ListRepoBuildRecordResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRepoBuildRecordResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BuildRecords, buildRecords_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListRepoBuildRecordResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BuildRecords, buildRecords_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListRepoBuildRecordResponseBody() = default ;
    ListRepoBuildRecordResponseBody(const ListRepoBuildRecordResponseBody &) = default ;
    ListRepoBuildRecordResponseBody(ListRepoBuildRecordResponseBody &&) = default ;
    ListRepoBuildRecordResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRepoBuildRecordResponseBody() = default ;
    ListRepoBuildRecordResponseBody& operator=(const ListRepoBuildRecordResponseBody &) = default ;
    ListRepoBuildRecordResponseBody& operator=(ListRepoBuildRecordResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BuildRecords : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BuildRecords& obj) { 
        DARABONBA_PTR_TO_JSON(BuildRecordId, buildRecordId_);
        DARABONBA_PTR_TO_JSON(BuildStatus, buildStatus_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(Image, image_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      };
      friend void from_json(const Darabonba::Json& j, BuildRecords& obj) { 
        DARABONBA_PTR_FROM_JSON(BuildRecordId, buildRecordId_);
        DARABONBA_PTR_FROM_JSON(BuildStatus, buildStatus_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(Image, image_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      };
      BuildRecords() = default ;
      BuildRecords(const BuildRecords &) = default ;
      BuildRecords(BuildRecords &&) = default ;
      BuildRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BuildRecords() = default ;
      BuildRecords& operator=(const BuildRecords &) = default ;
      BuildRecords& operator=(BuildRecords &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Image : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Image& obj) { 
          DARABONBA_PTR_TO_JSON(ImageTag, imageTag_);
          DARABONBA_PTR_TO_JSON(RepoId, repoId_);
          DARABONBA_PTR_TO_JSON(RepoName, repoName_);
          DARABONBA_PTR_TO_JSON(RepoNamespaceName, repoNamespaceName_);
        };
        friend void from_json(const Darabonba::Json& j, Image& obj) { 
          DARABONBA_PTR_FROM_JSON(ImageTag, imageTag_);
          DARABONBA_PTR_FROM_JSON(RepoId, repoId_);
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
        && this->repoId_ == nullptr && this->repoName_ == nullptr && this->repoNamespaceName_ == nullptr; };
        // imageTag Field Functions 
        bool hasImageTag() const { return this->imageTag_ != nullptr;};
        void deleteImageTag() { this->imageTag_ = nullptr;};
        inline string getImageTag() const { DARABONBA_PTR_GET_DEFAULT(imageTag_, "") };
        inline Image& setImageTag(string imageTag) { DARABONBA_PTR_SET_VALUE(imageTag_, imageTag) };


        // repoId Field Functions 
        bool hasRepoId() const { return this->repoId_ != nullptr;};
        void deleteRepoId() { this->repoId_ = nullptr;};
        inline string getRepoId() const { DARABONBA_PTR_GET_DEFAULT(repoId_, "") };
        inline Image& setRepoId(string repoId) { DARABONBA_PTR_SET_VALUE(repoId_, repoId) };


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
        // The ID of the repository.
        shared_ptr<string> repoId_ {};
        // The name of the repository.
        shared_ptr<string> repoName_ {};
        // The name of the namespace to which the repository belongs.
        shared_ptr<string> repoNamespaceName_ {};
      };

      virtual bool empty() const override { return this->buildRecordId_ == nullptr
        && this->buildStatus_ == nullptr && this->endTime_ == nullptr && this->image_ == nullptr && this->startTime_ == nullptr; };
      // buildRecordId Field Functions 
      bool hasBuildRecordId() const { return this->buildRecordId_ != nullptr;};
      void deleteBuildRecordId() { this->buildRecordId_ = nullptr;};
      inline string getBuildRecordId() const { DARABONBA_PTR_GET_DEFAULT(buildRecordId_, "") };
      inline BuildRecords& setBuildRecordId(string buildRecordId) { DARABONBA_PTR_SET_VALUE(buildRecordId_, buildRecordId) };


      // buildStatus Field Functions 
      bool hasBuildStatus() const { return this->buildStatus_ != nullptr;};
      void deleteBuildStatus() { this->buildStatus_ = nullptr;};
      inline string getBuildStatus() const { DARABONBA_PTR_GET_DEFAULT(buildStatus_, "") };
      inline BuildRecords& setBuildStatus(string buildStatus) { DARABONBA_PTR_SET_VALUE(buildStatus_, buildStatus) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline BuildRecords& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // image Field Functions 
      bool hasImage() const { return this->image_ != nullptr;};
      void deleteImage() { this->image_ = nullptr;};
      inline const BuildRecords::Image & getImage() const { DARABONBA_PTR_GET_CONST(image_, BuildRecords::Image) };
      inline BuildRecords::Image getImage() { DARABONBA_PTR_GET(image_, BuildRecords::Image) };
      inline BuildRecords& setImage(const BuildRecords::Image & image) { DARABONBA_PTR_SET_VALUE(image_, image) };
      inline BuildRecords& setImage(BuildRecords::Image && image) { DARABONBA_PTR_SET_RVALUE(image_, image) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline BuildRecords& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      // The ID of the image building record.
      shared_ptr<string> buildRecordId_ {};
      // The status of the image building.
      shared_ptr<string> buildStatus_ {};
      // The time when the image building ended.
      shared_ptr<string> endTime_ {};
      // The information about the image.
      shared_ptr<BuildRecords::Image> image_ {};
      // The time when the image building started.
      shared_ptr<string> startTime_ {};
    };

    virtual bool empty() const override { return this->buildRecords_ == nullptr
        && this->code_ == nullptr && this->isSuccess_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->totalCount_ == nullptr; };
    // buildRecords Field Functions 
    bool hasBuildRecords() const { return this->buildRecords_ != nullptr;};
    void deleteBuildRecords() { this->buildRecords_ = nullptr;};
    inline const vector<ListRepoBuildRecordResponseBody::BuildRecords> & getBuildRecords() const { DARABONBA_PTR_GET_CONST(buildRecords_, vector<ListRepoBuildRecordResponseBody::BuildRecords>) };
    inline vector<ListRepoBuildRecordResponseBody::BuildRecords> getBuildRecords() { DARABONBA_PTR_GET(buildRecords_, vector<ListRepoBuildRecordResponseBody::BuildRecords>) };
    inline ListRepoBuildRecordResponseBody& setBuildRecords(const vector<ListRepoBuildRecordResponseBody::BuildRecords> & buildRecords) { DARABONBA_PTR_SET_VALUE(buildRecords_, buildRecords) };
    inline ListRepoBuildRecordResponseBody& setBuildRecords(vector<ListRepoBuildRecordResponseBody::BuildRecords> && buildRecords) { DARABONBA_PTR_SET_RVALUE(buildRecords_, buildRecords) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListRepoBuildRecordResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool getIsSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline ListRepoBuildRecordResponseBody& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListRepoBuildRecordResponseBody& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListRepoBuildRecordResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRepoBuildRecordResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListRepoBuildRecordResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of image building records.
    shared_ptr<vector<ListRepoBuildRecordResponseBody::BuildRecords>> buildRecords_ {};
    // The return value.
    shared_ptr<string> code_ {};
    // Indicates whether the request is successful. Valid values:
    // 
    // *   `true`: The request is successful.
    // *   `false`: The request fails.
    shared_ptr<bool> isSuccess_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNo_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of returned entries.
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
