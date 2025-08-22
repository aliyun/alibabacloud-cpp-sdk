// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPAPIBYPAGERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETAPPAPIBYPAGERESPONSEBODYDATA_HPP_
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
  class GetAppApiByPageResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAppApiByPageResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Completed, completed_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, GetAppApiByPageResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Completed, completed_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    GetAppApiByPageResponseBodyData() = default ;
    GetAppApiByPageResponseBodyData(const GetAppApiByPageResponseBodyData &) = default ;
    GetAppApiByPageResponseBodyData(GetAppApiByPageResponseBodyData &&) = default ;
    GetAppApiByPageResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAppApiByPageResponseBodyData() = default ;
    GetAppApiByPageResponseBodyData& operator=(const GetAppApiByPageResponseBodyData &) = default ;
    GetAppApiByPageResponseBodyData& operator=(GetAppApiByPageResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->completed_ != nullptr
        && this->items_ != nullptr && this->page_ != nullptr && this->pageSize_ != nullptr && this->total_ != nullptr; };
    // completed Field Functions 
    bool hasCompleted() const { return this->completed_ != nullptr;};
    void deleteCompleted() { this->completed_ = nullptr;};
    inline bool completed() const { DARABONBA_PTR_GET_DEFAULT(completed_, false) };
    inline GetAppApiByPageResponseBodyData& setCompleted(bool completed) { DARABONBA_PTR_SET_VALUE(completed_, completed) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<Darabonba::Json> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> items() { DARABONBA_PTR_GET(items_, vector<Darabonba::Json>) };
    inline GetAppApiByPageResponseBodyData& setItems(const vector<Darabonba::Json> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline GetAppApiByPageResponseBodyData& setItems(vector<Darabonba::Json> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t page() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline GetAppApiByPageResponseBodyData& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetAppApiByPageResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline string total() const { DARABONBA_PTR_GET_DEFAULT(total_, "") };
    inline GetAppApiByPageResponseBodyData& setTotal(string total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // Is completed.
    std::shared_ptr<bool> completed_ = nullptr;
    // The data entries.
    std::shared_ptr<vector<Darabonba::Json>> items_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int32_t> page_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of returned entries.
    std::shared_ptr<string> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
