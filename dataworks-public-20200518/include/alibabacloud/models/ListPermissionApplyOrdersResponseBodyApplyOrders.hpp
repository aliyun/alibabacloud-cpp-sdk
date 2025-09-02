// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPERMISSIONAPPLYORDERSRESPONSEBODYAPPLYORDERS_HPP_
#define ALIBABACLOUD_MODELS_LISTPERMISSIONAPPLYORDERSRESPONSEBODYAPPLYORDERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrder.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListPermissionApplyOrdersResponseBodyApplyOrders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPermissionApplyOrdersResponseBodyApplyOrders& obj) { 
      DARABONBA_PTR_TO_JSON(ApplyOrder, applyOrder_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListPermissionApplyOrdersResponseBodyApplyOrders& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplyOrder, applyOrder_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListPermissionApplyOrdersResponseBodyApplyOrders() = default ;
    ListPermissionApplyOrdersResponseBodyApplyOrders(const ListPermissionApplyOrdersResponseBodyApplyOrders &) = default ;
    ListPermissionApplyOrdersResponseBodyApplyOrders(ListPermissionApplyOrdersResponseBodyApplyOrders &&) = default ;
    ListPermissionApplyOrdersResponseBodyApplyOrders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPermissionApplyOrdersResponseBodyApplyOrders() = default ;
    ListPermissionApplyOrdersResponseBodyApplyOrders& operator=(const ListPermissionApplyOrdersResponseBodyApplyOrders &) = default ;
    ListPermissionApplyOrdersResponseBodyApplyOrders& operator=(ListPermissionApplyOrdersResponseBodyApplyOrders &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applyOrder_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->totalCount_ != nullptr; };
    // applyOrder Field Functions 
    bool hasApplyOrder() const { return this->applyOrder_ != nullptr;};
    void deleteApplyOrder() { this->applyOrder_ = nullptr;};
    inline const vector<Models::ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrder> & applyOrder() const { DARABONBA_PTR_GET_CONST(applyOrder_, vector<Models::ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrder>) };
    inline vector<Models::ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrder> applyOrder() { DARABONBA_PTR_GET(applyOrder_, vector<Models::ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrder>) };
    inline ListPermissionApplyOrdersResponseBodyApplyOrders& setApplyOrder(const vector<Models::ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrder> & applyOrder) { DARABONBA_PTR_SET_VALUE(applyOrder_, applyOrder) };
    inline ListPermissionApplyOrdersResponseBodyApplyOrders& setApplyOrder(vector<Models::ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrder> && applyOrder) { DARABONBA_PTR_SET_RVALUE(applyOrder_, applyOrder) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListPermissionApplyOrdersResponseBodyApplyOrders& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListPermissionApplyOrdersResponseBodyApplyOrders& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListPermissionApplyOrdersResponseBodyApplyOrders& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of the permission request orders.
    std::shared_ptr<vector<Models::ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrder>> applyOrder_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
