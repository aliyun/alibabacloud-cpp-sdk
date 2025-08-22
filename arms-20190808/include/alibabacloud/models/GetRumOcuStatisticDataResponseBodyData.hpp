// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRUMOCUSTATISTICDATARESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETRUMOCUSTATISTICDATARESPONSEBODYDATA_HPP_
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
  class GetRumOcuStatisticDataResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRumOcuStatisticDataResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Complete, complete_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, GetRumOcuStatisticDataResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Complete, complete_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    GetRumOcuStatisticDataResponseBodyData() = default ;
    GetRumOcuStatisticDataResponseBodyData(const GetRumOcuStatisticDataResponseBodyData &) = default ;
    GetRumOcuStatisticDataResponseBodyData(GetRumOcuStatisticDataResponseBodyData &&) = default ;
    GetRumOcuStatisticDataResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRumOcuStatisticDataResponseBodyData() = default ;
    GetRumOcuStatisticDataResponseBodyData& operator=(const GetRumOcuStatisticDataResponseBodyData &) = default ;
    GetRumOcuStatisticDataResponseBodyData& operator=(GetRumOcuStatisticDataResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->complete_ != nullptr
        && this->items_ != nullptr && this->page_ != nullptr && this->pageSize_ != nullptr && this->total_ != nullptr; };
    // complete Field Functions 
    bool hasComplete() const { return this->complete_ != nullptr;};
    void deleteComplete() { this->complete_ = nullptr;};
    inline bool complete() const { DARABONBA_PTR_GET_DEFAULT(complete_, false) };
    inline GetRumOcuStatisticDataResponseBodyData& setComplete(bool complete) { DARABONBA_PTR_SET_VALUE(complete_, complete) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<Darabonba::Json> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> items() { DARABONBA_PTR_GET(items_, vector<Darabonba::Json>) };
    inline GetRumOcuStatisticDataResponseBodyData& setItems(const vector<Darabonba::Json> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline GetRumOcuStatisticDataResponseBodyData& setItems(vector<Darabonba::Json> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t page() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline GetRumOcuStatisticDataResponseBodyData& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetRumOcuStatisticDataResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline GetRumOcuStatisticDataResponseBodyData& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // Indicates whether the next page exists.
    std::shared_ptr<bool> complete_ = nullptr;
    // The queried data.
    std::shared_ptr<vector<Darabonba::Json>> items_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> page_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
