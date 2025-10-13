// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNAMESPACECHANGEORDERSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTNAMESPACECHANGEORDERSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListNamespaceChangeOrdersResponseBodyDataChangeOrderList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListNamespaceChangeOrdersResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNamespaceChangeOrdersResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ChangeOrderList, changeOrderList_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListNamespaceChangeOrdersResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ChangeOrderList, changeOrderList_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
    };
    ListNamespaceChangeOrdersResponseBodyData() = default ;
    ListNamespaceChangeOrdersResponseBodyData(const ListNamespaceChangeOrdersResponseBodyData &) = default ;
    ListNamespaceChangeOrdersResponseBodyData(ListNamespaceChangeOrdersResponseBodyData &&) = default ;
    ListNamespaceChangeOrdersResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNamespaceChangeOrdersResponseBodyData() = default ;
    ListNamespaceChangeOrdersResponseBodyData& operator=(const ListNamespaceChangeOrdersResponseBodyData &) = default ;
    ListNamespaceChangeOrdersResponseBodyData& operator=(ListNamespaceChangeOrdersResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->changeOrderList_ == nullptr
        && return this->currentPage_ == nullptr && return this->pageSize_ == nullptr && return this->totalSize_ == nullptr; };
    // changeOrderList Field Functions 
    bool hasChangeOrderList() const { return this->changeOrderList_ != nullptr;};
    void deleteChangeOrderList() { this->changeOrderList_ = nullptr;};
    inline const vector<Models::ListNamespaceChangeOrdersResponseBodyDataChangeOrderList> & changeOrderList() const { DARABONBA_PTR_GET_CONST(changeOrderList_, vector<Models::ListNamespaceChangeOrdersResponseBodyDataChangeOrderList>) };
    inline vector<Models::ListNamespaceChangeOrdersResponseBodyDataChangeOrderList> changeOrderList() { DARABONBA_PTR_GET(changeOrderList_, vector<Models::ListNamespaceChangeOrdersResponseBodyDataChangeOrderList>) };
    inline ListNamespaceChangeOrdersResponseBodyData& setChangeOrderList(const vector<Models::ListNamespaceChangeOrdersResponseBodyDataChangeOrderList> & changeOrderList) { DARABONBA_PTR_SET_VALUE(changeOrderList_, changeOrderList) };
    inline ListNamespaceChangeOrdersResponseBodyData& setChangeOrderList(vector<Models::ListNamespaceChangeOrdersResponseBodyDataChangeOrderList> && changeOrderList) { DARABONBA_PTR_SET_RVALUE(changeOrderList_, changeOrderList) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListNamespaceChangeOrdersResponseBodyData& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListNamespaceChangeOrdersResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalSize Field Functions 
    bool hasTotalSize() const { return this->totalSize_ != nullptr;};
    void deleteTotalSize() { this->totalSize_ = nullptr;};
    inline int32_t totalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0) };
    inline ListNamespaceChangeOrdersResponseBodyData& setTotalSize(int32_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


  protected:
    // The list of change orders.
    std::shared_ptr<vector<Models::ListNamespaceChangeOrdersResponseBodyDataChangeOrderList>> changeOrderList_ = nullptr;
    // The number of the returned page.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The number of entries returned on each page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of change orders.
    std::shared_ptr<int32_t> totalSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
