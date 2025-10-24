// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITJOBSRESPONSEBODYJOBRESULTLISTJOBRESULTJOBOUTPUTMERGELIST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITJOBSRESPONSEBODYJOBRESULTLISTJOBRESULTJOBOUTPUTMERGELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SubmitJobsResponseBodyJobResultListJobResultJobOutputMergeListMerge.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class SubmitJobsResponseBodyJobResultListJobResultJobOutputMergeList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitJobsResponseBodyJobResultListJobResultJobOutputMergeList& obj) { 
      DARABONBA_PTR_TO_JSON(Merge, merge_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitJobsResponseBodyJobResultListJobResultJobOutputMergeList& obj) { 
      DARABONBA_PTR_FROM_JSON(Merge, merge_);
    };
    SubmitJobsResponseBodyJobResultListJobResultJobOutputMergeList() = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputMergeList(const SubmitJobsResponseBodyJobResultListJobResultJobOutputMergeList &) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputMergeList(SubmitJobsResponseBodyJobResultListJobResultJobOutputMergeList &&) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputMergeList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitJobsResponseBodyJobResultListJobResultJobOutputMergeList() = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputMergeList& operator=(const SubmitJobsResponseBodyJobResultListJobResultJobOutputMergeList &) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputMergeList& operator=(SubmitJobsResponseBodyJobResultListJobResultJobOutputMergeList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->merge_ == nullptr; };
    // merge Field Functions 
    bool hasMerge() const { return this->merge_ != nullptr;};
    void deleteMerge() { this->merge_ = nullptr;};
    inline const vector<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputMergeListMerge> & merge() const { DARABONBA_PTR_GET_CONST(merge_, vector<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputMergeListMerge>) };
    inline vector<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputMergeListMerge> merge() { DARABONBA_PTR_GET(merge_, vector<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputMergeListMerge>) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputMergeList& setMerge(const vector<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputMergeListMerge> & merge) { DARABONBA_PTR_SET_VALUE(merge_, merge) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputMergeList& setMerge(vector<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputMergeListMerge> && merge) { DARABONBA_PTR_SET_RVALUE(merge_, merge) };


  protected:
    std::shared_ptr<vector<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputMergeListMerge>> merge_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
