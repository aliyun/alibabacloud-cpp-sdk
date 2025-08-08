// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYHOTLINENUMBERRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYHOTLINENUMBERRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryHotlineNumberResponseBodyDataHotlineNumList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class QueryHotlineNumberResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryHotlineNumberResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(HotlineNumList, hotlineNumList_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, QueryHotlineNumberResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(HotlineNumList, hotlineNumList_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    QueryHotlineNumberResponseBodyData() = default ;
    QueryHotlineNumberResponseBodyData(const QueryHotlineNumberResponseBodyData &) = default ;
    QueryHotlineNumberResponseBodyData(QueryHotlineNumberResponseBodyData &&) = default ;
    QueryHotlineNumberResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryHotlineNumberResponseBodyData() = default ;
    QueryHotlineNumberResponseBodyData& operator=(const QueryHotlineNumberResponseBodyData &) = default ;
    QueryHotlineNumberResponseBodyData& operator=(QueryHotlineNumberResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currentPage_ != nullptr
        && this->hotlineNumList_ != nullptr && this->pageSize_ != nullptr && this->totalCount_ != nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int64_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
    inline QueryHotlineNumberResponseBodyData& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // hotlineNumList Field Functions 
    bool hasHotlineNumList() const { return this->hotlineNumList_ != nullptr;};
    void deleteHotlineNumList() { this->hotlineNumList_ = nullptr;};
    inline const vector<Models::QueryHotlineNumberResponseBodyDataHotlineNumList> & hotlineNumList() const { DARABONBA_PTR_GET_CONST(hotlineNumList_, vector<Models::QueryHotlineNumberResponseBodyDataHotlineNumList>) };
    inline vector<Models::QueryHotlineNumberResponseBodyDataHotlineNumList> hotlineNumList() { DARABONBA_PTR_GET(hotlineNumList_, vector<Models::QueryHotlineNumberResponseBodyDataHotlineNumList>) };
    inline QueryHotlineNumberResponseBodyData& setHotlineNumList(const vector<Models::QueryHotlineNumberResponseBodyDataHotlineNumList> & hotlineNumList) { DARABONBA_PTR_SET_VALUE(hotlineNumList_, hotlineNumList) };
    inline QueryHotlineNumberResponseBodyData& setHotlineNumList(vector<Models::QueryHotlineNumberResponseBodyDataHotlineNumList> && hotlineNumList) { DARABONBA_PTR_SET_RVALUE(hotlineNumList_, hotlineNumList) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline QueryHotlineNumberResponseBodyData& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline QueryHotlineNumberResponseBodyData& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<int64_t> currentPage_ = nullptr;
    std::shared_ptr<vector<Models::QueryHotlineNumberResponseBodyDataHotlineNumList>> hotlineNumList_ = nullptr;
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
