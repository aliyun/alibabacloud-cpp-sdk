// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMPSSCHEDULERLISTRESPONSEBODYRESULTCONTENTDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYMPSSCHEDULERLISTRESPONSEBODYRESULTCONTENTDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryMpsSchedulerListResponseBodyResultContentDataList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class QueryMpsSchedulerListResponseBodyResultContentData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMpsSchedulerListResponseBodyResultContentData& obj) { 
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMpsSchedulerListResponseBodyResultContentData& obj) { 
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    QueryMpsSchedulerListResponseBodyResultContentData() = default ;
    QueryMpsSchedulerListResponseBodyResultContentData(const QueryMpsSchedulerListResponseBodyResultContentData &) = default ;
    QueryMpsSchedulerListResponseBodyResultContentData(QueryMpsSchedulerListResponseBodyResultContentData &&) = default ;
    QueryMpsSchedulerListResponseBodyResultContentData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMpsSchedulerListResponseBodyResultContentData() = default ;
    QueryMpsSchedulerListResponseBodyResultContentData& operator=(const QueryMpsSchedulerListResponseBodyResultContentData &) = default ;
    QueryMpsSchedulerListResponseBodyResultContentData& operator=(QueryMpsSchedulerListResponseBodyResultContentData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->list_ == nullptr
        && return this->totalCount_ == nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<Models::QueryMpsSchedulerListResponseBodyResultContentDataList> & list() const { DARABONBA_PTR_GET_CONST(list_, vector<Models::QueryMpsSchedulerListResponseBodyResultContentDataList>) };
    inline vector<Models::QueryMpsSchedulerListResponseBodyResultContentDataList> list() { DARABONBA_PTR_GET(list_, vector<Models::QueryMpsSchedulerListResponseBodyResultContentDataList>) };
    inline QueryMpsSchedulerListResponseBodyResultContentData& setList(const vector<Models::QueryMpsSchedulerListResponseBodyResultContentDataList> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline QueryMpsSchedulerListResponseBodyResultContentData& setList(vector<Models::QueryMpsSchedulerListResponseBodyResultContentDataList> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline QueryMpsSchedulerListResponseBodyResultContentData& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<Models::QueryMpsSchedulerListResponseBodyResultContentDataList>> list_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
