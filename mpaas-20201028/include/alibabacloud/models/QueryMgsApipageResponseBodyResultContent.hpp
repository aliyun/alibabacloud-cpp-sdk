// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMGSAPIPAGERESPONSEBODYRESULTCONTENT_HPP_
#define ALIBABACLOUD_MODELS_QUERYMGSAPIPAGERESPONSEBODYRESULTCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryMgsApipageResponseBodyResultContentList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class QueryMgsApipageResponseBodyResultContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMgsApipageResponseBodyResultContent& obj) { 
      DARABONBA_PTR_TO_JSON(Current, current_);
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMgsApipageResponseBodyResultContent& obj) { 
      DARABONBA_PTR_FROM_JSON(Current, current_);
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    QueryMgsApipageResponseBodyResultContent() = default ;
    QueryMgsApipageResponseBodyResultContent(const QueryMgsApipageResponseBodyResultContent &) = default ;
    QueryMgsApipageResponseBodyResultContent(QueryMgsApipageResponseBodyResultContent &&) = default ;
    QueryMgsApipageResponseBodyResultContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMgsApipageResponseBodyResultContent() = default ;
    QueryMgsApipageResponseBodyResultContent& operator=(const QueryMgsApipageResponseBodyResultContent &) = default ;
    QueryMgsApipageResponseBodyResultContent& operator=(QueryMgsApipageResponseBodyResultContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->current_ == nullptr
        && return this->list_ == nullptr && return this->pageSize_ == nullptr && return this->total_ == nullptr; };
    // current Field Functions 
    bool hasCurrent() const { return this->current_ != nullptr;};
    void deleteCurrent() { this->current_ = nullptr;};
    inline int64_t current() const { DARABONBA_PTR_GET_DEFAULT(current_, 0L) };
    inline QueryMgsApipageResponseBodyResultContent& setCurrent(int64_t current) { DARABONBA_PTR_SET_VALUE(current_, current) };


    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<Models::QueryMgsApipageResponseBodyResultContentList> & list() const { DARABONBA_PTR_GET_CONST(list_, vector<Models::QueryMgsApipageResponseBodyResultContentList>) };
    inline vector<Models::QueryMgsApipageResponseBodyResultContentList> list() { DARABONBA_PTR_GET(list_, vector<Models::QueryMgsApipageResponseBodyResultContentList>) };
    inline QueryMgsApipageResponseBodyResultContent& setList(const vector<Models::QueryMgsApipageResponseBodyResultContentList> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline QueryMgsApipageResponseBodyResultContent& setList(vector<Models::QueryMgsApipageResponseBodyResultContentList> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline QueryMgsApipageResponseBodyResultContent& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline QueryMgsApipageResponseBodyResultContent& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    std::shared_ptr<int64_t> current_ = nullptr;
    std::shared_ptr<vector<Models::QueryMgsApipageResponseBodyResultContentList>> list_ = nullptr;
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
