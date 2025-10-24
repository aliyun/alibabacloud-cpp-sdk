// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITJOBSRESPONSEBODYJOBRESULTLISTJOBRESULTJOBOUTPUTTAILSLATELIST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITJOBSRESPONSEBODYJOBRESULTLISTJOBRESULTJOBOUTPUTTAILSLATELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SubmitJobsResponseBodyJobResultListJobResultJobOutputTailSlateListTailSlate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class SubmitJobsResponseBodyJobResultListJobResultJobOutputTailSlateList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitJobsResponseBodyJobResultListJobResultJobOutputTailSlateList& obj) { 
      DARABONBA_PTR_TO_JSON(TailSlate, tailSlate_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitJobsResponseBodyJobResultListJobResultJobOutputTailSlateList& obj) { 
      DARABONBA_PTR_FROM_JSON(TailSlate, tailSlate_);
    };
    SubmitJobsResponseBodyJobResultListJobResultJobOutputTailSlateList() = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputTailSlateList(const SubmitJobsResponseBodyJobResultListJobResultJobOutputTailSlateList &) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputTailSlateList(SubmitJobsResponseBodyJobResultListJobResultJobOutputTailSlateList &&) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputTailSlateList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitJobsResponseBodyJobResultListJobResultJobOutputTailSlateList() = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputTailSlateList& operator=(const SubmitJobsResponseBodyJobResultListJobResultJobOutputTailSlateList &) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputTailSlateList& operator=(SubmitJobsResponseBodyJobResultListJobResultJobOutputTailSlateList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tailSlate_ == nullptr; };
    // tailSlate Field Functions 
    bool hasTailSlate() const { return this->tailSlate_ != nullptr;};
    void deleteTailSlate() { this->tailSlate_ = nullptr;};
    inline const vector<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputTailSlateListTailSlate> & tailSlate() const { DARABONBA_PTR_GET_CONST(tailSlate_, vector<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputTailSlateListTailSlate>) };
    inline vector<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputTailSlateListTailSlate> tailSlate() { DARABONBA_PTR_GET(tailSlate_, vector<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputTailSlateListTailSlate>) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputTailSlateList& setTailSlate(const vector<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputTailSlateListTailSlate> & tailSlate) { DARABONBA_PTR_SET_VALUE(tailSlate_, tailSlate) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputTailSlateList& setTailSlate(vector<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputTailSlateListTailSlate> && tailSlate) { DARABONBA_PTR_SET_RVALUE(tailSlate_, tailSlate) };


  protected:
    std::shared_ptr<vector<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputTailSlateListTailSlate>> tailSlate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
