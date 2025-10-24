// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYJOBLISTRESPONSEBODYJOBLISTJOBOUTPUTMERGELIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYJOBLISTRESPONSEBODYJOBLISTJOBOUTPUTMERGELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryJobListResponseBodyJobListJobOutputMergeListMerge.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryJobListResponseBodyJobListJobOutputMergeList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryJobListResponseBodyJobListJobOutputMergeList& obj) { 
      DARABONBA_PTR_TO_JSON(Merge, merge_);
    };
    friend void from_json(const Darabonba::Json& j, QueryJobListResponseBodyJobListJobOutputMergeList& obj) { 
      DARABONBA_PTR_FROM_JSON(Merge, merge_);
    };
    QueryJobListResponseBodyJobListJobOutputMergeList() = default ;
    QueryJobListResponseBodyJobListJobOutputMergeList(const QueryJobListResponseBodyJobListJobOutputMergeList &) = default ;
    QueryJobListResponseBodyJobListJobOutputMergeList(QueryJobListResponseBodyJobListJobOutputMergeList &&) = default ;
    QueryJobListResponseBodyJobListJobOutputMergeList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryJobListResponseBodyJobListJobOutputMergeList() = default ;
    QueryJobListResponseBodyJobListJobOutputMergeList& operator=(const QueryJobListResponseBodyJobListJobOutputMergeList &) = default ;
    QueryJobListResponseBodyJobListJobOutputMergeList& operator=(QueryJobListResponseBodyJobListJobOutputMergeList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->merge_ == nullptr; };
    // merge Field Functions 
    bool hasMerge() const { return this->merge_ != nullptr;};
    void deleteMerge() { this->merge_ = nullptr;};
    inline const vector<Models::QueryJobListResponseBodyJobListJobOutputMergeListMerge> & merge() const { DARABONBA_PTR_GET_CONST(merge_, vector<Models::QueryJobListResponseBodyJobListJobOutputMergeListMerge>) };
    inline vector<Models::QueryJobListResponseBodyJobListJobOutputMergeListMerge> merge() { DARABONBA_PTR_GET(merge_, vector<Models::QueryJobListResponseBodyJobListJobOutputMergeListMerge>) };
    inline QueryJobListResponseBodyJobListJobOutputMergeList& setMerge(const vector<Models::QueryJobListResponseBodyJobListJobOutputMergeListMerge> & merge) { DARABONBA_PTR_SET_VALUE(merge_, merge) };
    inline QueryJobListResponseBodyJobListJobOutputMergeList& setMerge(vector<Models::QueryJobListResponseBodyJobListJobOutputMergeListMerge> && merge) { DARABONBA_PTR_SET_RVALUE(merge_, merge) };


  protected:
    std::shared_ptr<vector<Models::QueryJobListResponseBodyJobListJobOutputMergeListMerge>> merge_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
