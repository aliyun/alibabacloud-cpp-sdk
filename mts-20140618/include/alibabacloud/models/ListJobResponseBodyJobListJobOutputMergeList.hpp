// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBRESPONSEBODYJOBLISTJOBOUTPUTMERGELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBRESPONSEBODYJOBLISTJOBOUTPUTMERGELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListJobResponseBodyJobListJobOutputMergeListMerge.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ListJobResponseBodyJobListJobOutputMergeList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobResponseBodyJobListJobOutputMergeList& obj) { 
      DARABONBA_PTR_TO_JSON(Merge, merge_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobResponseBodyJobListJobOutputMergeList& obj) { 
      DARABONBA_PTR_FROM_JSON(Merge, merge_);
    };
    ListJobResponseBodyJobListJobOutputMergeList() = default ;
    ListJobResponseBodyJobListJobOutputMergeList(const ListJobResponseBodyJobListJobOutputMergeList &) = default ;
    ListJobResponseBodyJobListJobOutputMergeList(ListJobResponseBodyJobListJobOutputMergeList &&) = default ;
    ListJobResponseBodyJobListJobOutputMergeList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobResponseBodyJobListJobOutputMergeList() = default ;
    ListJobResponseBodyJobListJobOutputMergeList& operator=(const ListJobResponseBodyJobListJobOutputMergeList &) = default ;
    ListJobResponseBodyJobListJobOutputMergeList& operator=(ListJobResponseBodyJobListJobOutputMergeList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->merge_ == nullptr; };
    // merge Field Functions 
    bool hasMerge() const { return this->merge_ != nullptr;};
    void deleteMerge() { this->merge_ = nullptr;};
    inline const vector<Models::ListJobResponseBodyJobListJobOutputMergeListMerge> & merge() const { DARABONBA_PTR_GET_CONST(merge_, vector<Models::ListJobResponseBodyJobListJobOutputMergeListMerge>) };
    inline vector<Models::ListJobResponseBodyJobListJobOutputMergeListMerge> merge() { DARABONBA_PTR_GET(merge_, vector<Models::ListJobResponseBodyJobListJobOutputMergeListMerge>) };
    inline ListJobResponseBodyJobListJobOutputMergeList& setMerge(const vector<Models::ListJobResponseBodyJobListJobOutputMergeListMerge> & merge) { DARABONBA_PTR_SET_VALUE(merge_, merge) };
    inline ListJobResponseBodyJobListJobOutputMergeList& setMerge(vector<Models::ListJobResponseBodyJobListJobOutputMergeListMerge> && merge) { DARABONBA_PTR_SET_RVALUE(merge_, merge) };


  protected:
    std::shared_ptr<vector<Models::ListJobResponseBodyJobListJobOutputMergeListMerge>> merge_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
