// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITJOBSRESPONSEBODYJOBRESULTLISTJOBRESULTJOBOUTPUTAMIXLIST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITJOBSRESPONSEBODYJOBRESULTLISTJOBRESULTJOBOUTPUTAMIXLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SubmitJobsResponseBodyJobResultListJobResultJobOutputAmixListAmix.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class SubmitJobsResponseBodyJobResultListJobResultJobOutputAmixList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitJobsResponseBodyJobResultListJobResultJobOutputAmixList& obj) { 
      DARABONBA_PTR_TO_JSON(Amix, amix_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitJobsResponseBodyJobResultListJobResultJobOutputAmixList& obj) { 
      DARABONBA_PTR_FROM_JSON(Amix, amix_);
    };
    SubmitJobsResponseBodyJobResultListJobResultJobOutputAmixList() = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputAmixList(const SubmitJobsResponseBodyJobResultListJobResultJobOutputAmixList &) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputAmixList(SubmitJobsResponseBodyJobResultListJobResultJobOutputAmixList &&) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputAmixList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitJobsResponseBodyJobResultListJobResultJobOutputAmixList() = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputAmixList& operator=(const SubmitJobsResponseBodyJobResultListJobResultJobOutputAmixList &) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputAmixList& operator=(SubmitJobsResponseBodyJobResultListJobResultJobOutputAmixList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->amix_ == nullptr; };
    // amix Field Functions 
    bool hasAmix() const { return this->amix_ != nullptr;};
    void deleteAmix() { this->amix_ = nullptr;};
    inline const vector<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputAmixListAmix> & amix() const { DARABONBA_PTR_GET_CONST(amix_, vector<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputAmixListAmix>) };
    inline vector<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputAmixListAmix> amix() { DARABONBA_PTR_GET(amix_, vector<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputAmixListAmix>) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputAmixList& setAmix(const vector<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputAmixListAmix> & amix) { DARABONBA_PTR_SET_VALUE(amix_, amix) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputAmixList& setAmix(vector<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputAmixListAmix> && amix) { DARABONBA_PTR_SET_RVALUE(amix_, amix) };


  protected:
    std::shared_ptr<vector<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputAmixListAmix>> amix_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
