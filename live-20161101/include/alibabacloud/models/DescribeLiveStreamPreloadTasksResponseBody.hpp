// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMPRELOADTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMPRELOADTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLiveStreamPreloadTasksResponseBodyPreloadTasks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamPreloadTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamPreloadTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PreloadTasks, preloadTasks_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamPreloadTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PreloadTasks, preloadTasks_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    DescribeLiveStreamPreloadTasksResponseBody() = default ;
    DescribeLiveStreamPreloadTasksResponseBody(const DescribeLiveStreamPreloadTasksResponseBody &) = default ;
    DescribeLiveStreamPreloadTasksResponseBody(DescribeLiveStreamPreloadTasksResponseBody &&) = default ;
    DescribeLiveStreamPreloadTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamPreloadTasksResponseBody() = default ;
    DescribeLiveStreamPreloadTasksResponseBody& operator=(const DescribeLiveStreamPreloadTasksResponseBody &) = default ;
    DescribeLiveStreamPreloadTasksResponseBody& operator=(DescribeLiveStreamPreloadTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNum_ == nullptr
        && return this->pageSize_ == nullptr && return this->preloadTasks_ == nullptr && return this->requestId_ == nullptr && return this->totalNum_ == nullptr && return this->totalPage_ == nullptr; };
    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline DescribeLiveStreamPreloadTasksResponseBody& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeLiveStreamPreloadTasksResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // preloadTasks Field Functions 
    bool hasPreloadTasks() const { return this->preloadTasks_ != nullptr;};
    void deletePreloadTasks() { this->preloadTasks_ = nullptr;};
    inline const DescribeLiveStreamPreloadTasksResponseBodyPreloadTasks & preloadTasks() const { DARABONBA_PTR_GET_CONST(preloadTasks_, DescribeLiveStreamPreloadTasksResponseBodyPreloadTasks) };
    inline DescribeLiveStreamPreloadTasksResponseBodyPreloadTasks preloadTasks() { DARABONBA_PTR_GET(preloadTasks_, DescribeLiveStreamPreloadTasksResponseBodyPreloadTasks) };
    inline DescribeLiveStreamPreloadTasksResponseBody& setPreloadTasks(const DescribeLiveStreamPreloadTasksResponseBodyPreloadTasks & preloadTasks) { DARABONBA_PTR_SET_VALUE(preloadTasks_, preloadTasks) };
    inline DescribeLiveStreamPreloadTasksResponseBody& setPreloadTasks(DescribeLiveStreamPreloadTasksResponseBodyPreloadTasks && preloadTasks) { DARABONBA_PTR_SET_RVALUE(preloadTasks_, preloadTasks) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveStreamPreloadTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int32_t totalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0) };
    inline DescribeLiveStreamPreloadTasksResponseBody& setTotalNum(int32_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t totalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline DescribeLiveStreamPreloadTasksResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    // The page number.
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The details of the prefetch task.
    std::shared_ptr<DescribeLiveStreamPreloadTasksResponseBodyPreloadTasks> preloadTasks_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalNum_ = nullptr;
    // The total number of pages.
    std::shared_ptr<int32_t> totalPage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
