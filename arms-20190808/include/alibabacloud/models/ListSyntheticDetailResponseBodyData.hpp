// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSYNTHETICDETAILRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTSYNTHETICDETAILRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListSyntheticDetailResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSyntheticDetailResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TaskCreateTime, taskCreateTime_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListSyntheticDetailResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TaskCreateTime, taskCreateTime_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListSyntheticDetailResponseBodyData() = default ;
    ListSyntheticDetailResponseBodyData(const ListSyntheticDetailResponseBodyData &) = default ;
    ListSyntheticDetailResponseBodyData(ListSyntheticDetailResponseBodyData &&) = default ;
    ListSyntheticDetailResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSyntheticDetailResponseBodyData() = default ;
    ListSyntheticDetailResponseBodyData& operator=(const ListSyntheticDetailResponseBodyData &) = default ;
    ListSyntheticDetailResponseBodyData& operator=(ListSyntheticDetailResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->items_ != nullptr
        && this->page_ != nullptr && this->pageSize_ != nullptr && this->taskCreateTime_ != nullptr && this->total_ != nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<Darabonba::Json> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> items() { DARABONBA_PTR_GET(items_, vector<Darabonba::Json>) };
    inline ListSyntheticDetailResponseBodyData& setItems(const vector<Darabonba::Json> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListSyntheticDetailResponseBodyData& setItems(vector<Darabonba::Json> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t page() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline ListSyntheticDetailResponseBodyData& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListSyntheticDetailResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // taskCreateTime Field Functions 
    bool hasTaskCreateTime() const { return this->taskCreateTime_ != nullptr;};
    void deleteTaskCreateTime() { this->taskCreateTime_ = nullptr;};
    inline int64_t taskCreateTime() const { DARABONBA_PTR_GET_DEFAULT(taskCreateTime_, 0L) };
    inline ListSyntheticDetailResponseBodyData& setTaskCreateTime(int64_t taskCreateTime) { DARABONBA_PTR_SET_VALUE(taskCreateTime_, taskCreateTime) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListSyntheticDetailResponseBodyData& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The list of results.
    std::shared_ptr<vector<Darabonba::Json>> items_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> page_ = nullptr;
    // The number of entries returned on each page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // A reserved field.
    std::shared_ptr<int64_t> taskCreateTime_ = nullptr;
    // The total number of entries.
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
