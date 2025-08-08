// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYOUTBOUNDTASKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYOUTBOUNDTASKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryOutboundTaskResponseBodyDataList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class QueryOutboundTaskResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryOutboundTaskResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalResults, totalResults_);
    };
    friend void from_json(const Darabonba::Json& j, QueryOutboundTaskResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalResults, totalResults_);
    };
    QueryOutboundTaskResponseBodyData() = default ;
    QueryOutboundTaskResponseBodyData(const QueryOutboundTaskResponseBodyData &) = default ;
    QueryOutboundTaskResponseBodyData(QueryOutboundTaskResponseBodyData &&) = default ;
    QueryOutboundTaskResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryOutboundTaskResponseBodyData() = default ;
    QueryOutboundTaskResponseBodyData& operator=(const QueryOutboundTaskResponseBodyData &) = default ;
    QueryOutboundTaskResponseBodyData& operator=(QueryOutboundTaskResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currentPage_ != nullptr
        && this->list_ != nullptr && this->pageSize_ != nullptr && this->totalResults_ != nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline string currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, "") };
    inline QueryOutboundTaskResponseBodyData& setCurrentPage(string currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<Models::QueryOutboundTaskResponseBodyDataList> & list() const { DARABONBA_PTR_GET_CONST(list_, vector<Models::QueryOutboundTaskResponseBodyDataList>) };
    inline vector<Models::QueryOutboundTaskResponseBodyDataList> list() { DARABONBA_PTR_GET(list_, vector<Models::QueryOutboundTaskResponseBodyDataList>) };
    inline QueryOutboundTaskResponseBodyData& setList(const vector<Models::QueryOutboundTaskResponseBodyDataList> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline QueryOutboundTaskResponseBodyData& setList(vector<Models::QueryOutboundTaskResponseBodyDataList> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline QueryOutboundTaskResponseBodyData& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalResults Field Functions 
    bool hasTotalResults() const { return this->totalResults_ != nullptr;};
    void deleteTotalResults() { this->totalResults_ = nullptr;};
    inline string totalResults() const { DARABONBA_PTR_GET_DEFAULT(totalResults_, "") };
    inline QueryOutboundTaskResponseBodyData& setTotalResults(string totalResults) { DARABONBA_PTR_SET_VALUE(totalResults_, totalResults) };


  protected:
    std::shared_ptr<string> currentPage_ = nullptr;
    std::shared_ptr<vector<Models::QueryOutboundTaskResponseBodyDataList>> list_ = nullptr;
    std::shared_ptr<string> pageSize_ = nullptr;
    std::shared_ptr<string> totalResults_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
