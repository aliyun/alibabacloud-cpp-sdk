// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPSERVICESPAGERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPSERVICESPAGERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAppServicesPageResponseBodyDataResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListAppServicesPageResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppServicesPageResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppServicesPageResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
    };
    ListAppServicesPageResponseBodyData() = default ;
    ListAppServicesPageResponseBodyData(const ListAppServicesPageResponseBodyData &) = default ;
    ListAppServicesPageResponseBodyData(ListAppServicesPageResponseBodyData &&) = default ;
    ListAppServicesPageResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppServicesPageResponseBodyData() = default ;
    ListAppServicesPageResponseBodyData& operator=(const ListAppServicesPageResponseBodyData &) = default ;
    ListAppServicesPageResponseBodyData& operator=(ListAppServicesPageResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currentPage_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->result_ != nullptr && this->totalSize_ != nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline string currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, "") };
    inline ListAppServicesPageResponseBodyData& setCurrentPage(string currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline ListAppServicesPageResponseBodyData& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListAppServicesPageResponseBodyData& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<Models::ListAppServicesPageResponseBodyDataResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<Models::ListAppServicesPageResponseBodyDataResult>) };
    inline vector<Models::ListAppServicesPageResponseBodyDataResult> result() { DARABONBA_PTR_GET(result_, vector<Models::ListAppServicesPageResponseBodyDataResult>) };
    inline ListAppServicesPageResponseBodyData& setResult(const vector<Models::ListAppServicesPageResponseBodyDataResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListAppServicesPageResponseBodyData& setResult(vector<Models::ListAppServicesPageResponseBodyDataResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // totalSize Field Functions 
    bool hasTotalSize() const { return this->totalSize_ != nullptr;};
    void deleteTotalSize() { this->totalSize_ = nullptr;};
    inline string totalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, "") };
    inline ListAppServicesPageResponseBodyData& setTotalSize(string totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


  protected:
    // The page number of the current page.
    std::shared_ptr<string> currentPage_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<string> pageNumber_ = nullptr;
    // The number of entries returned on each page. Valid values: 0 to 9999.
    std::shared_ptr<string> pageSize_ = nullptr;
    // The result returned.
    std::shared_ptr<vector<Models::ListAppServicesPageResponseBodyDataResult>> result_ = nullptr;
    // The total number of returned pages.
    std::shared_ptr<string> totalSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
