// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAICALLTASKPAGERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYAICALLTASKPAGERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryAiCallTaskPageResponseBodyDataList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class QueryAiCallTaskPageResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAiCallTaskPageResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAiCallTaskPageResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    QueryAiCallTaskPageResponseBodyData() = default ;
    QueryAiCallTaskPageResponseBodyData(const QueryAiCallTaskPageResponseBodyData &) = default ;
    QueryAiCallTaskPageResponseBodyData(QueryAiCallTaskPageResponseBodyData &&) = default ;
    QueryAiCallTaskPageResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAiCallTaskPageResponseBodyData() = default ;
    QueryAiCallTaskPageResponseBodyData& operator=(const QueryAiCallTaskPageResponseBodyData &) = default ;
    QueryAiCallTaskPageResponseBodyData& operator=(QueryAiCallTaskPageResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->list_ == nullptr
        && return this->pageNo_ == nullptr && return this->pageSize_ == nullptr && return this->total_ == nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<Models::QueryAiCallTaskPageResponseBodyDataList> & list() const { DARABONBA_PTR_GET_CONST(list_, vector<Models::QueryAiCallTaskPageResponseBodyDataList>) };
    inline vector<Models::QueryAiCallTaskPageResponseBodyDataList> list() { DARABONBA_PTR_GET(list_, vector<Models::QueryAiCallTaskPageResponseBodyDataList>) };
    inline QueryAiCallTaskPageResponseBodyData& setList(const vector<Models::QueryAiCallTaskPageResponseBodyDataList> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline QueryAiCallTaskPageResponseBodyData& setList(vector<Models::QueryAiCallTaskPageResponseBodyDataList> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline QueryAiCallTaskPageResponseBodyData& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline QueryAiCallTaskPageResponseBodyData& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline QueryAiCallTaskPageResponseBodyData& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    std::shared_ptr<vector<Models::QueryAiCallTaskPageResponseBodyDataList>> list_ = nullptr;
    std::shared_ptr<int64_t> pageNo_ = nullptr;
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
