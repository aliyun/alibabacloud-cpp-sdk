// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESUSPEVENTQUARAFILESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESUSPEVENTQUARAFILESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSuspEventQuaraFilesResponseBodyQuaraFiles.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSuspEventQuaraFilesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSuspEventQuaraFilesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(QuaraFiles, quaraFiles_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSuspEventQuaraFilesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(QuaraFiles, quaraFiles_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSuspEventQuaraFilesResponseBody() = default ;
    DescribeSuspEventQuaraFilesResponseBody(const DescribeSuspEventQuaraFilesResponseBody &) = default ;
    DescribeSuspEventQuaraFilesResponseBody(DescribeSuspEventQuaraFilesResponseBody &&) = default ;
    DescribeSuspEventQuaraFilesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSuspEventQuaraFilesResponseBody() = default ;
    DescribeSuspEventQuaraFilesResponseBody& operator=(const DescribeSuspEventQuaraFilesResponseBody &) = default ;
    DescribeSuspEventQuaraFilesResponseBody& operator=(DescribeSuspEventQuaraFilesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr
        && this->currentPage_ != nullptr && this->pageSize_ != nullptr && this->quaraFiles_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeSuspEventQuaraFilesResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeSuspEventQuaraFilesResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSuspEventQuaraFilesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // quaraFiles Field Functions 
    bool hasQuaraFiles() const { return this->quaraFiles_ != nullptr;};
    void deleteQuaraFiles() { this->quaraFiles_ = nullptr;};
    inline const vector<DescribeSuspEventQuaraFilesResponseBodyQuaraFiles> & quaraFiles() const { DARABONBA_PTR_GET_CONST(quaraFiles_, vector<DescribeSuspEventQuaraFilesResponseBodyQuaraFiles>) };
    inline vector<DescribeSuspEventQuaraFilesResponseBodyQuaraFiles> quaraFiles() { DARABONBA_PTR_GET(quaraFiles_, vector<DescribeSuspEventQuaraFilesResponseBodyQuaraFiles>) };
    inline DescribeSuspEventQuaraFilesResponseBody& setQuaraFiles(const vector<DescribeSuspEventQuaraFilesResponseBodyQuaraFiles> & quaraFiles) { DARABONBA_PTR_SET_VALUE(quaraFiles_, quaraFiles) };
    inline DescribeSuspEventQuaraFilesResponseBody& setQuaraFiles(vector<DescribeSuspEventQuaraFilesResponseBodyQuaraFiles> && quaraFiles) { DARABONBA_PTR_SET_RVALUE(quaraFiles_, quaraFiles) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSuspEventQuaraFilesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeSuspEventQuaraFilesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of entries returned on the current page.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // An array that consists of the quarantined files.
    std::shared_ptr<vector<DescribeSuspEventQuaraFilesResponseBodyQuaraFiles>> quaraFiles_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
