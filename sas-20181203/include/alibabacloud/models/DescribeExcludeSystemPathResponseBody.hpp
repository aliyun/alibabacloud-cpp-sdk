// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXCLUDESYSTEMPATHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXCLUDESYSTEMPATHRESPONSEBODY_HPP_
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
  class DescribeExcludeSystemPathResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExcludeSystemPathResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ExcludePaths, excludePaths_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExcludeSystemPathResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ExcludePaths, excludePaths_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeExcludeSystemPathResponseBody() = default ;
    DescribeExcludeSystemPathResponseBody(const DescribeExcludeSystemPathResponseBody &) = default ;
    DescribeExcludeSystemPathResponseBody(DescribeExcludeSystemPathResponseBody &&) = default ;
    DescribeExcludeSystemPathResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExcludeSystemPathResponseBody() = default ;
    DescribeExcludeSystemPathResponseBody& operator=(const DescribeExcludeSystemPathResponseBody &) = default ;
    DescribeExcludeSystemPathResponseBody& operator=(DescribeExcludeSystemPathResponseBody &&) = default ;
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
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    class ExcludePaths : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ExcludePaths& obj) { 
        DARABONBA_PTR_TO_JSON(Os, os_);
        DARABONBA_PTR_TO_JSON(Path, path_);
      };
      friend void from_json(const Darabonba::Json& j, ExcludePaths& obj) { 
        DARABONBA_PTR_FROM_JSON(Os, os_);
        DARABONBA_PTR_FROM_JSON(Path, path_);
      };
      ExcludePaths() = default ;
      ExcludePaths(const ExcludePaths &) = default ;
      ExcludePaths(ExcludePaths &&) = default ;
      ExcludePaths(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ExcludePaths() = default ;
      ExcludePaths& operator=(const ExcludePaths &) = default ;
      ExcludePaths& operator=(ExcludePaths &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->os_ == nullptr
        && this->path_ == nullptr; };
      // os Field Functions 
      bool hasOs() const { return this->os_ != nullptr;};
      void deleteOs() { this->os_ = nullptr;};
      inline string getOs() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
      inline ExcludePaths& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


      // path Field Functions 
      bool hasPath() const { return this->path_ != nullptr;};
      void deletePath() { this->path_ = nullptr;};
      inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
      inline ExcludePaths& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    protected:
      // The operating system of the server. Valid values:
      // 
      // *   **linux**: Linux
      // *   **windows**: Windows
      shared_ptr<string> os_ {};
      // The absolute path to the directory.
      shared_ptr<string> path_ {};
    };

    virtual bool empty() const override { return this->excludePaths_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // excludePaths Field Functions 
    bool hasExcludePaths() const { return this->excludePaths_ != nullptr;};
    void deleteExcludePaths() { this->excludePaths_ = nullptr;};
    inline const vector<DescribeExcludeSystemPathResponseBody::ExcludePaths> & getExcludePaths() const { DARABONBA_PTR_GET_CONST(excludePaths_, vector<DescribeExcludeSystemPathResponseBody::ExcludePaths>) };
    inline vector<DescribeExcludeSystemPathResponseBody::ExcludePaths> getExcludePaths() { DARABONBA_PTR_GET(excludePaths_, vector<DescribeExcludeSystemPathResponseBody::ExcludePaths>) };
    inline DescribeExcludeSystemPathResponseBody& setExcludePaths(const vector<DescribeExcludeSystemPathResponseBody::ExcludePaths> & excludePaths) { DARABONBA_PTR_SET_VALUE(excludePaths_, excludePaths) };
    inline DescribeExcludeSystemPathResponseBody& setExcludePaths(vector<DescribeExcludeSystemPathResponseBody::ExcludePaths> && excludePaths) { DARABONBA_PTR_SET_RVALUE(excludePaths_, excludePaths) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeExcludeSystemPathResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeExcludeSystemPathResponseBody::PageInfo) };
    inline DescribeExcludeSystemPathResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeExcludeSystemPathResponseBody::PageInfo) };
    inline DescribeExcludeSystemPathResponseBody& setPageInfo(const DescribeExcludeSystemPathResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeExcludeSystemPathResponseBody& setPageInfo(DescribeExcludeSystemPathResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeExcludeSystemPathResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array consisting of the directories that are excluded.
    shared_ptr<vector<DescribeExcludeSystemPathResponseBody::ExcludePaths>> excludePaths_ {};
    // The pagination information.
    shared_ptr<DescribeExcludeSystemPathResponseBody::PageInfo> pageInfo_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
