// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYNOTIFYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYNOTIFYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryNotifyResponseBodyDataNotifyItemList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class QueryNotifyResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryNotifyResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(NotifyItemList, notifyItemList_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, QueryNotifyResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(NotifyItemList, notifyItemList_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    QueryNotifyResponseBodyData() = default ;
    QueryNotifyResponseBodyData(const QueryNotifyResponseBodyData &) = default ;
    QueryNotifyResponseBodyData(QueryNotifyResponseBodyData &&) = default ;
    QueryNotifyResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryNotifyResponseBodyData() = default ;
    QueryNotifyResponseBodyData& operator=(const QueryNotifyResponseBodyData &) = default ;
    QueryNotifyResponseBodyData& operator=(QueryNotifyResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->notifyItemList_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->totalRecordCount_ == nullptr; };
    // notifyItemList Field Functions 
    bool hasNotifyItemList() const { return this->notifyItemList_ != nullptr;};
    void deleteNotifyItemList() { this->notifyItemList_ = nullptr;};
    inline const vector<Models::QueryNotifyResponseBodyDataNotifyItemList> & notifyItemList() const { DARABONBA_PTR_GET_CONST(notifyItemList_, vector<Models::QueryNotifyResponseBodyDataNotifyItemList>) };
    inline vector<Models::QueryNotifyResponseBodyDataNotifyItemList> notifyItemList() { DARABONBA_PTR_GET(notifyItemList_, vector<Models::QueryNotifyResponseBodyDataNotifyItemList>) };
    inline QueryNotifyResponseBodyData& setNotifyItemList(const vector<Models::QueryNotifyResponseBodyDataNotifyItemList> & notifyItemList) { DARABONBA_PTR_SET_VALUE(notifyItemList_, notifyItemList) };
    inline QueryNotifyResponseBodyData& setNotifyItemList(vector<Models::QueryNotifyResponseBodyDataNotifyItemList> && notifyItemList) { DARABONBA_PTR_SET_RVALUE(notifyItemList_, notifyItemList) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline QueryNotifyResponseBodyData& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryNotifyResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t totalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline QueryNotifyResponseBodyData& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // The details of notifications.
    std::shared_ptr<vector<Models::QueryNotifyResponseBodyDataNotifyItemList>> notifyItemList_ = nullptr;
    // The page number of the page returned.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned on each page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalRecordCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
