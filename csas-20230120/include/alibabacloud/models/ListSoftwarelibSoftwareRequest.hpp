// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSOFTWARELIBSOFTWAREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSOFTWARELIBSOFTWAREREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListSoftwarelibSoftwareRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSoftwarelibSoftwareRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClassifyId, classifyId_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Os, os_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SoftwareName, softwareName_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
    };
    friend void from_json(const Darabonba::Json& j, ListSoftwarelibSoftwareRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClassifyId, classifyId_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Os, os_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SoftwareName, softwareName_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
    };
    ListSoftwarelibSoftwareRequest() = default ;
    ListSoftwarelibSoftwareRequest(const ListSoftwarelibSoftwareRequest &) = default ;
    ListSoftwarelibSoftwareRequest(ListSoftwarelibSoftwareRequest &&) = default ;
    ListSoftwarelibSoftwareRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSoftwarelibSoftwareRequest() = default ;
    ListSoftwarelibSoftwareRequest& operator=(const ListSoftwarelibSoftwareRequest &) = default ;
    ListSoftwarelibSoftwareRequest& operator=(ListSoftwarelibSoftwareRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->classifyId_ == nullptr
        && this->currentPage_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->os_ == nullptr && this->pageSize_ == nullptr
        && this->softwareName_ == nullptr && this->sourceType_ == nullptr; };
    // classifyId Field Functions 
    bool hasClassifyId() const { return this->classifyId_ != nullptr;};
    void deleteClassifyId() { this->classifyId_ = nullptr;};
    inline string getClassifyId() const { DARABONBA_PTR_GET_DEFAULT(classifyId_, "") };
    inline ListSoftwarelibSoftwareRequest& setClassifyId(string classifyId) { DARABONBA_PTR_SET_VALUE(classifyId_, classifyId) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int64_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
    inline ListSoftwarelibSoftwareRequest& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListSoftwarelibSoftwareRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListSoftwarelibSoftwareRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // os Field Functions 
    bool hasOs() const { return this->os_ != nullptr;};
    void deleteOs() { this->os_ = nullptr;};
    inline string getOs() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
    inline ListSoftwarelibSoftwareRequest& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListSoftwarelibSoftwareRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // softwareName Field Functions 
    bool hasSoftwareName() const { return this->softwareName_ != nullptr;};
    void deleteSoftwareName() { this->softwareName_ = nullptr;};
    inline string getSoftwareName() const { DARABONBA_PTR_GET_DEFAULT(softwareName_, "") };
    inline ListSoftwarelibSoftwareRequest& setSoftwareName(string softwareName) { DARABONBA_PTR_SET_VALUE(softwareName_, softwareName) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline ListSoftwarelibSoftwareRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


  protected:
    // The software classification ID. You can call [ListSoftwarelibClassify](~~ListSoftwarelibClassify~~) to obtain the value.
    shared_ptr<string> classifyId_ {};
    // The page number of the current page in a paging query. Valid values: 1 to 10000.
    // 
    // This parameter is required.
    shared_ptr<int64_t> currentPage_ {};
    // The maximum number of entries per page. This parameter is not supported by this operation. Use CurrentPage and PageSize for pagination.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token. This parameter is not supported by this operation. Use CurrentPage and PageSize for pagination.
    shared_ptr<string> nextToken_ {};
    // The operating system to which the software package applies. Valid values:
    // - **Windows**: Windows.
    // - **Mac(Apple)**: macOS with Apple silicon.
    // - **Mac(Intel)**: macOS with Intel processors.
    shared_ptr<string> os_ {};
    // The number of entries per page in a paging query. Valid values: 1 to 500.
    // 
    // This parameter is required.
    shared_ptr<int64_t> pageSize_ {};
    // The software name. Fuzzy match is supported.
    shared_ptr<string> softwareName_ {};
    // The software source. Valid values:
    // - **custom**: custom software.
    // - **builtin**: built-in software library.
    shared_ptr<string> sourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
