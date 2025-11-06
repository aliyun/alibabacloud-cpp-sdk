// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYINTLFIXEDPRICEORDERLISTRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_QUERYINTLFIXEDPRICEORDERLISTRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryIntlFixedPriceOrderListResponseBodyModuleData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryIntlFixedPriceOrderListResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryIntlFixedPriceOrderListResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPageNum, currentPageNum_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalItemNum, totalItemNum_);
      DARABONBA_PTR_TO_JSON(TotalPageNum, totalPageNum_);
    };
    friend void from_json(const Darabonba::Json& j, QueryIntlFixedPriceOrderListResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPageNum, currentPageNum_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalItemNum, totalItemNum_);
      DARABONBA_PTR_FROM_JSON(TotalPageNum, totalPageNum_);
    };
    QueryIntlFixedPriceOrderListResponseBodyModule() = default ;
    QueryIntlFixedPriceOrderListResponseBodyModule(const QueryIntlFixedPriceOrderListResponseBodyModule &) = default ;
    QueryIntlFixedPriceOrderListResponseBodyModule(QueryIntlFixedPriceOrderListResponseBodyModule &&) = default ;
    QueryIntlFixedPriceOrderListResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryIntlFixedPriceOrderListResponseBodyModule() = default ;
    QueryIntlFixedPriceOrderListResponseBodyModule& operator=(const QueryIntlFixedPriceOrderListResponseBodyModule &) = default ;
    QueryIntlFixedPriceOrderListResponseBodyModule& operator=(QueryIntlFixedPriceOrderListResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPageNum_ == nullptr
        && return this->data_ == nullptr && return this->pageSize_ == nullptr && return this->totalItemNum_ == nullptr && return this->totalPageNum_ == nullptr; };
    // currentPageNum Field Functions 
    bool hasCurrentPageNum() const { return this->currentPageNum_ != nullptr;};
    void deleteCurrentPageNum() { this->currentPageNum_ = nullptr;};
    inline int32_t currentPageNum() const { DARABONBA_PTR_GET_DEFAULT(currentPageNum_, 0) };
    inline QueryIntlFixedPriceOrderListResponseBodyModule& setCurrentPageNum(int32_t currentPageNum) { DARABONBA_PTR_SET_VALUE(currentPageNum_, currentPageNum) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<Models::QueryIntlFixedPriceOrderListResponseBodyModuleData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<Models::QueryIntlFixedPriceOrderListResponseBodyModuleData>) };
    inline vector<Models::QueryIntlFixedPriceOrderListResponseBodyModuleData> data() { DARABONBA_PTR_GET(data_, vector<Models::QueryIntlFixedPriceOrderListResponseBodyModuleData>) };
    inline QueryIntlFixedPriceOrderListResponseBodyModule& setData(const vector<Models::QueryIntlFixedPriceOrderListResponseBodyModuleData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryIntlFixedPriceOrderListResponseBodyModule& setData(vector<Models::QueryIntlFixedPriceOrderListResponseBodyModuleData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryIntlFixedPriceOrderListResponseBodyModule& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalItemNum Field Functions 
    bool hasTotalItemNum() const { return this->totalItemNum_ != nullptr;};
    void deleteTotalItemNum() { this->totalItemNum_ = nullptr;};
    inline int32_t totalItemNum() const { DARABONBA_PTR_GET_DEFAULT(totalItemNum_, 0) };
    inline QueryIntlFixedPriceOrderListResponseBodyModule& setTotalItemNum(int32_t totalItemNum) { DARABONBA_PTR_SET_VALUE(totalItemNum_, totalItemNum) };


    // totalPageNum Field Functions 
    bool hasTotalPageNum() const { return this->totalPageNum_ != nullptr;};
    void deleteTotalPageNum() { this->totalPageNum_ = nullptr;};
    inline int32_t totalPageNum() const { DARABONBA_PTR_GET_DEFAULT(totalPageNum_, 0) };
    inline QueryIntlFixedPriceOrderListResponseBodyModule& setTotalPageNum(int32_t totalPageNum) { DARABONBA_PTR_SET_VALUE(totalPageNum_, totalPageNum) };


  protected:
    std::shared_ptr<int32_t> currentPageNum_ = nullptr;
    std::shared_ptr<vector<Models::QueryIntlFixedPriceOrderListResponseBodyModuleData>> data_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<int32_t> totalItemNum_ = nullptr;
    std::shared_ptr<int32_t> totalPageNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
