// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALLPRODSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTALLPRODSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAllProdsResponseBodyDataProdList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class ListAllProdsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAllProdsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProdList, prodList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAllProdsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProdList, prodList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAllProdsResponseBodyData() = default ;
    ListAllProdsResponseBodyData(const ListAllProdsResponseBodyData &) = default ;
    ListAllProdsResponseBodyData(ListAllProdsResponseBodyData &&) = default ;
    ListAllProdsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAllProdsResponseBodyData() = default ;
    ListAllProdsResponseBodyData& operator=(const ListAllProdsResponseBodyData &) = default ;
    ListAllProdsResponseBodyData& operator=(ListAllProdsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currentPage_ != nullptr
        && this->pageSize_ != nullptr && this->prodList_ != nullptr && this->totalCount_ != nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListAllProdsResponseBodyData& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAllProdsResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // prodList Field Functions 
    bool hasProdList() const { return this->prodList_ != nullptr;};
    void deleteProdList() { this->prodList_ = nullptr;};
    inline const vector<Models::ListAllProdsResponseBodyDataProdList> & prodList() const { DARABONBA_PTR_GET_CONST(prodList_, vector<Models::ListAllProdsResponseBodyDataProdList>) };
    inline vector<Models::ListAllProdsResponseBodyDataProdList> prodList() { DARABONBA_PTR_GET(prodList_, vector<Models::ListAllProdsResponseBodyDataProdList>) };
    inline ListAllProdsResponseBodyData& setProdList(const vector<Models::ListAllProdsResponseBodyDataProdList> & prodList) { DARABONBA_PTR_SET_VALUE(prodList_, prodList) };
    inline ListAllProdsResponseBodyData& setProdList(vector<Models::ListAllProdsResponseBodyDataProdList> && prodList) { DARABONBA_PTR_SET_RVALUE(prodList_, prodList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListAllProdsResponseBodyData& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The cloud services.
    std::shared_ptr<vector<Models::ListAllProdsResponseBodyDataProdList>> prodList_ = nullptr;
    // The total number of logs.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
