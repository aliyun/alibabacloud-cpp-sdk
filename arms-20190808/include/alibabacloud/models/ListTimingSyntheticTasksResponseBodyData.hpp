// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTIMINGSYNTHETICTASKSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTTIMINGSYNTHETICTASKSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTimingSyntheticTasksResponseBodyDataItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListTimingSyntheticTasksResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTimingSyntheticTasksResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListTimingSyntheticTasksResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListTimingSyntheticTasksResponseBodyData() = default ;
    ListTimingSyntheticTasksResponseBodyData(const ListTimingSyntheticTasksResponseBodyData &) = default ;
    ListTimingSyntheticTasksResponseBodyData(ListTimingSyntheticTasksResponseBodyData &&) = default ;
    ListTimingSyntheticTasksResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTimingSyntheticTasksResponseBodyData() = default ;
    ListTimingSyntheticTasksResponseBodyData& operator=(const ListTimingSyntheticTasksResponseBodyData &) = default ;
    ListTimingSyntheticTasksResponseBodyData& operator=(ListTimingSyntheticTasksResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->items_ != nullptr
        && this->page_ != nullptr && this->pageSize_ != nullptr && this->total_ != nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<Models::ListTimingSyntheticTasksResponseBodyDataItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<Models::ListTimingSyntheticTasksResponseBodyDataItems>) };
    inline vector<Models::ListTimingSyntheticTasksResponseBodyDataItems> items() { DARABONBA_PTR_GET(items_, vector<Models::ListTimingSyntheticTasksResponseBodyDataItems>) };
    inline ListTimingSyntheticTasksResponseBodyData& setItems(const vector<Models::ListTimingSyntheticTasksResponseBodyDataItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListTimingSyntheticTasksResponseBodyData& setItems(vector<Models::ListTimingSyntheticTasksResponseBodyDataItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t page() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline ListTimingSyntheticTasksResponseBodyData& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListTimingSyntheticTasksResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListTimingSyntheticTasksResponseBodyData& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The queried tasks.
    std::shared_ptr<vector<Models::ListTimingSyntheticTasksResponseBodyDataItems>> items_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> page_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of tasks.
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
