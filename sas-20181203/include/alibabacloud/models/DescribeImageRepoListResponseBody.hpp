// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEREPOLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEREPOLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageRepoListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageRepoListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AddTargetCount, addTargetCount_);
      DARABONBA_PTR_TO_JSON(AllTargetCount, allTargetCount_);
      DARABONBA_PTR_TO_JSON(DelTargetCount, delTargetCount_);
      DARABONBA_PTR_TO_JSON(ImageRepoList, imageRepoList_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageRepoListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AddTargetCount, addTargetCount_);
      DARABONBA_PTR_FROM_JSON(AllTargetCount, allTargetCount_);
      DARABONBA_PTR_FROM_JSON(DelTargetCount, delTargetCount_);
      DARABONBA_PTR_FROM_JSON(ImageRepoList, imageRepoList_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeImageRepoListResponseBody() = default ;
    DescribeImageRepoListResponseBody(const DescribeImageRepoListResponseBody &) = default ;
    DescribeImageRepoListResponseBody(DescribeImageRepoListResponseBody &&) = default ;
    DescribeImageRepoListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageRepoListResponseBody() = default ;
    DescribeImageRepoListResponseBody& operator=(const DescribeImageRepoListResponseBody &) = default ;
    DescribeImageRepoListResponseBody& operator=(DescribeImageRepoListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline PageInfo& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The number of entries returned on the current page.
      shared_ptr<int32_t> count_ {};
      // The page number of the returned page.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries returned per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of image repositories.
      shared_ptr<int32_t> totalCount_ {};
    };

    class ImageRepoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ImageRepoList& obj) { 
        DARABONBA_PTR_TO_JSON(Flag, flag_);
        DARABONBA_PTR_TO_JSON(ImageCount, imageCount_);
        DARABONBA_PTR_TO_JSON(RepoName, repoName_);
        DARABONBA_PTR_TO_JSON(RepoNamespace, repoNamespace_);
      };
      friend void from_json(const Darabonba::Json& j, ImageRepoList& obj) { 
        DARABONBA_PTR_FROM_JSON(Flag, flag_);
        DARABONBA_PTR_FROM_JSON(ImageCount, imageCount_);
        DARABONBA_PTR_FROM_JSON(RepoName, repoName_);
        DARABONBA_PTR_FROM_JSON(RepoNamespace, repoNamespace_);
      };
      ImageRepoList() = default ;
      ImageRepoList(const ImageRepoList &) = default ;
      ImageRepoList(ImageRepoList &&) = default ;
      ImageRepoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ImageRepoList() = default ;
      ImageRepoList& operator=(const ImageRepoList &) = default ;
      ImageRepoList& operator=(ImageRepoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->flag_ == nullptr
        && this->imageCount_ == nullptr && this->repoName_ == nullptr && this->repoNamespace_ == nullptr; };
      // flag Field Functions 
      bool hasFlag() const { return this->flag_ != nullptr;};
      void deleteFlag() { this->flag_ = nullptr;};
      inline string getFlag() const { DARABONBA_PTR_GET_DEFAULT(flag_, "") };
      inline ImageRepoList& setFlag(string flag) { DARABONBA_PTR_SET_VALUE(flag_, flag) };


      // imageCount Field Functions 
      bool hasImageCount() const { return this->imageCount_ != nullptr;};
      void deleteImageCount() { this->imageCount_ = nullptr;};
      inline int32_t getImageCount() const { DARABONBA_PTR_GET_DEFAULT(imageCount_, 0) };
      inline ImageRepoList& setImageCount(int32_t imageCount) { DARABONBA_PTR_SET_VALUE(imageCount_, imageCount) };


      // repoName Field Functions 
      bool hasRepoName() const { return this->repoName_ != nullptr;};
      void deleteRepoName() { this->repoName_ = nullptr;};
      inline string getRepoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
      inline ImageRepoList& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


      // repoNamespace Field Functions 
      bool hasRepoNamespace() const { return this->repoNamespace_ != nullptr;};
      void deleteRepoNamespace() { this->repoNamespace_ = nullptr;};
      inline string getRepoNamespace() const { DARABONBA_PTR_GET_DEFAULT(repoNamespace_, "") };
      inline ImageRepoList& setRepoNamespace(string repoNamespace) { DARABONBA_PTR_SET_VALUE(repoNamespace_, repoNamespace) };


    protected:
      // Indicates whether the feature takes effect on the image repository. Valid values:
      // 
      // *   **add**: yes
      // *   **del**: no
      shared_ptr<string> flag_ {};
      // Number of images.
      shared_ptr<int32_t> imageCount_ {};
      // The name of the image repository.
      shared_ptr<string> repoName_ {};
      // The namespace to which the image repository belongs.
      shared_ptr<string> repoNamespace_ {};
    };

    virtual bool empty() const override { return this->addTargetCount_ == nullptr
        && this->allTargetCount_ == nullptr && this->delTargetCount_ == nullptr && this->imageRepoList_ == nullptr && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // addTargetCount Field Functions 
    bool hasAddTargetCount() const { return this->addTargetCount_ != nullptr;};
    void deleteAddTargetCount() { this->addTargetCount_ = nullptr;};
    inline int32_t getAddTargetCount() const { DARABONBA_PTR_GET_DEFAULT(addTargetCount_, 0) };
    inline DescribeImageRepoListResponseBody& setAddTargetCount(int32_t addTargetCount) { DARABONBA_PTR_SET_VALUE(addTargetCount_, addTargetCount) };


    // allTargetCount Field Functions 
    bool hasAllTargetCount() const { return this->allTargetCount_ != nullptr;};
    void deleteAllTargetCount() { this->allTargetCount_ = nullptr;};
    inline int32_t getAllTargetCount() const { DARABONBA_PTR_GET_DEFAULT(allTargetCount_, 0) };
    inline DescribeImageRepoListResponseBody& setAllTargetCount(int32_t allTargetCount) { DARABONBA_PTR_SET_VALUE(allTargetCount_, allTargetCount) };


    // delTargetCount Field Functions 
    bool hasDelTargetCount() const { return this->delTargetCount_ != nullptr;};
    void deleteDelTargetCount() { this->delTargetCount_ = nullptr;};
    inline int32_t getDelTargetCount() const { DARABONBA_PTR_GET_DEFAULT(delTargetCount_, 0) };
    inline DescribeImageRepoListResponseBody& setDelTargetCount(int32_t delTargetCount) { DARABONBA_PTR_SET_VALUE(delTargetCount_, delTargetCount) };


    // imageRepoList Field Functions 
    bool hasImageRepoList() const { return this->imageRepoList_ != nullptr;};
    void deleteImageRepoList() { this->imageRepoList_ = nullptr;};
    inline const vector<DescribeImageRepoListResponseBody::ImageRepoList> & getImageRepoList() const { DARABONBA_PTR_GET_CONST(imageRepoList_, vector<DescribeImageRepoListResponseBody::ImageRepoList>) };
    inline vector<DescribeImageRepoListResponseBody::ImageRepoList> getImageRepoList() { DARABONBA_PTR_GET(imageRepoList_, vector<DescribeImageRepoListResponseBody::ImageRepoList>) };
    inline DescribeImageRepoListResponseBody& setImageRepoList(const vector<DescribeImageRepoListResponseBody::ImageRepoList> & imageRepoList) { DARABONBA_PTR_SET_VALUE(imageRepoList_, imageRepoList) };
    inline DescribeImageRepoListResponseBody& setImageRepoList(vector<DescribeImageRepoListResponseBody::ImageRepoList> && imageRepoList) { DARABONBA_PTR_SET_RVALUE(imageRepoList_, imageRepoList) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeImageRepoListResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeImageRepoListResponseBody::PageInfo) };
    inline DescribeImageRepoListResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeImageRepoListResponseBody::PageInfo) };
    inline DescribeImageRepoListResponseBody& setPageInfo(const DescribeImageRepoListResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeImageRepoListResponseBody& setPageInfo(DescribeImageRepoListResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeImageRepoListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The number of image repositories that are added to Security Center.
    shared_ptr<int32_t> addTargetCount_ {};
    // The total number of image repositories.
    shared_ptr<int32_t> allTargetCount_ {};
    // The number of excluded image repositories.
    shared_ptr<int32_t> delTargetCount_ {};
    // An array that consists of the information about image repositories.
    shared_ptr<vector<DescribeImageRepoListResponseBody::ImageRepoList>> imageRepoList_ {};
    // The pagination information.
    shared_ptr<DescribeImageRepoListResponseBody::PageInfo> pageInfo_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
