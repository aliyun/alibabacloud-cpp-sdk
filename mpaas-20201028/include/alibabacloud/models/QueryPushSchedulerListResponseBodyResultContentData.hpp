// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPUSHSCHEDULERLISTRESPONSEBODYRESULTCONTENTDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYPUSHSCHEDULERLISTRESPONSEBODYRESULTCONTENTDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryPushSchedulerListResponseBodyResultContentDataList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class QueryPushSchedulerListResponseBodyResultContentData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPushSchedulerListResponseBodyResultContentData& obj) { 
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPushSchedulerListResponseBodyResultContentData& obj) { 
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    QueryPushSchedulerListResponseBodyResultContentData() = default ;
    QueryPushSchedulerListResponseBodyResultContentData(const QueryPushSchedulerListResponseBodyResultContentData &) = default ;
    QueryPushSchedulerListResponseBodyResultContentData(QueryPushSchedulerListResponseBodyResultContentData &&) = default ;
    QueryPushSchedulerListResponseBodyResultContentData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPushSchedulerListResponseBodyResultContentData() = default ;
    QueryPushSchedulerListResponseBodyResultContentData& operator=(const QueryPushSchedulerListResponseBodyResultContentData &) = default ;
    QueryPushSchedulerListResponseBodyResultContentData& operator=(QueryPushSchedulerListResponseBodyResultContentData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->list_ == nullptr
        && return this->totalCount_ == nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<Models::QueryPushSchedulerListResponseBodyResultContentDataList> & list() const { DARABONBA_PTR_GET_CONST(list_, vector<Models::QueryPushSchedulerListResponseBodyResultContentDataList>) };
    inline vector<Models::QueryPushSchedulerListResponseBodyResultContentDataList> list() { DARABONBA_PTR_GET(list_, vector<Models::QueryPushSchedulerListResponseBodyResultContentDataList>) };
    inline QueryPushSchedulerListResponseBodyResultContentData& setList(const vector<Models::QueryPushSchedulerListResponseBodyResultContentDataList> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline QueryPushSchedulerListResponseBodyResultContentData& setList(vector<Models::QueryPushSchedulerListResponseBodyResultContentDataList> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline QueryPushSchedulerListResponseBodyResultContentData& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<Models::QueryPushSchedulerListResponseBodyResultContentDataList>> list_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
