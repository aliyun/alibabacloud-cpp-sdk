// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHANGEORDERSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTCHANGEORDERSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListChangeOrdersResponseBodyDataChangeOrderList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListChangeOrdersResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListChangeOrdersResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ChangeOrderList, changeOrderList_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListChangeOrdersResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ChangeOrderList, changeOrderList_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
    };
    ListChangeOrdersResponseBodyData() = default ;
    ListChangeOrdersResponseBodyData(const ListChangeOrdersResponseBodyData &) = default ;
    ListChangeOrdersResponseBodyData(ListChangeOrdersResponseBodyData &&) = default ;
    ListChangeOrdersResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListChangeOrdersResponseBodyData() = default ;
    ListChangeOrdersResponseBodyData& operator=(const ListChangeOrdersResponseBodyData &) = default ;
    ListChangeOrdersResponseBodyData& operator=(ListChangeOrdersResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->changeOrderList_ != nullptr
        && this->currentPage_ != nullptr && this->pageSize_ != nullptr && this->totalSize_ != nullptr; };
    // changeOrderList Field Functions 
    bool hasChangeOrderList() const { return this->changeOrderList_ != nullptr;};
    void deleteChangeOrderList() { this->changeOrderList_ = nullptr;};
    inline const vector<Models::ListChangeOrdersResponseBodyDataChangeOrderList> & changeOrderList() const { DARABONBA_PTR_GET_CONST(changeOrderList_, vector<Models::ListChangeOrdersResponseBodyDataChangeOrderList>) };
    inline vector<Models::ListChangeOrdersResponseBodyDataChangeOrderList> changeOrderList() { DARABONBA_PTR_GET(changeOrderList_, vector<Models::ListChangeOrdersResponseBodyDataChangeOrderList>) };
    inline ListChangeOrdersResponseBodyData& setChangeOrderList(const vector<Models::ListChangeOrdersResponseBodyDataChangeOrderList> & changeOrderList) { DARABONBA_PTR_SET_VALUE(changeOrderList_, changeOrderList) };
    inline ListChangeOrdersResponseBodyData& setChangeOrderList(vector<Models::ListChangeOrdersResponseBodyDataChangeOrderList> && changeOrderList) { DARABONBA_PTR_SET_RVALUE(changeOrderList_, changeOrderList) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListChangeOrdersResponseBodyData& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListChangeOrdersResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalSize Field Functions 
    bool hasTotalSize() const { return this->totalSize_ != nullptr;};
    void deleteTotalSize() { this->totalSize_ = nullptr;};
    inline int32_t totalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0) };
    inline ListChangeOrdersResponseBodyData& setTotalSize(int32_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


  protected:
    // The change orders.
    std::shared_ptr<vector<Models::ListChangeOrdersResponseBodyDataChangeOrderList>> changeOrderList_ = nullptr;
    // The total number of change orders.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The error code.
    // 
    // *   The **ErrorCode** parameter is not returned when the request succeeds.
    // *   The **ErrorCode** parameter is returned when the request fails. For more information, see **Error codes** in this topic.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The list of change orders.
    std::shared_ptr<int32_t> totalSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
