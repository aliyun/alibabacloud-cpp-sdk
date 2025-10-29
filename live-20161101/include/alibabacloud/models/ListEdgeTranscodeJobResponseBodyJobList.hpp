// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEDGETRANSCODEJOBRESPONSEBODYJOBLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTEDGETRANSCODEJOBRESPONSEBODYJOBLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListEdgeTranscodeJobResponseBodyJobListJob.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ListEdgeTranscodeJobResponseBodyJobList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEdgeTranscodeJobResponseBodyJobList& obj) { 
      DARABONBA_PTR_TO_JSON(Job, job_);
    };
    friend void from_json(const Darabonba::Json& j, ListEdgeTranscodeJobResponseBodyJobList& obj) { 
      DARABONBA_PTR_FROM_JSON(Job, job_);
    };
    ListEdgeTranscodeJobResponseBodyJobList() = default ;
    ListEdgeTranscodeJobResponseBodyJobList(const ListEdgeTranscodeJobResponseBodyJobList &) = default ;
    ListEdgeTranscodeJobResponseBodyJobList(ListEdgeTranscodeJobResponseBodyJobList &&) = default ;
    ListEdgeTranscodeJobResponseBodyJobList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEdgeTranscodeJobResponseBodyJobList() = default ;
    ListEdgeTranscodeJobResponseBodyJobList& operator=(const ListEdgeTranscodeJobResponseBodyJobList &) = default ;
    ListEdgeTranscodeJobResponseBodyJobList& operator=(ListEdgeTranscodeJobResponseBodyJobList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->job_ == nullptr; };
    // job Field Functions 
    bool hasJob() const { return this->job_ != nullptr;};
    void deleteJob() { this->job_ = nullptr;};
    inline const vector<Models::ListEdgeTranscodeJobResponseBodyJobListJob> & job() const { DARABONBA_PTR_GET_CONST(job_, vector<Models::ListEdgeTranscodeJobResponseBodyJobListJob>) };
    inline vector<Models::ListEdgeTranscodeJobResponseBodyJobListJob> job() { DARABONBA_PTR_GET(job_, vector<Models::ListEdgeTranscodeJobResponseBodyJobListJob>) };
    inline ListEdgeTranscodeJobResponseBodyJobList& setJob(const vector<Models::ListEdgeTranscodeJobResponseBodyJobListJob> & job) { DARABONBA_PTR_SET_VALUE(job_, job) };
    inline ListEdgeTranscodeJobResponseBodyJobList& setJob(vector<Models::ListEdgeTranscodeJobResponseBodyJobListJob> && job) { DARABONBA_PTR_SET_RVALUE(job_, job) };


  protected:
    std::shared_ptr<vector<Models::ListEdgeTranscodeJobResponseBodyJobListJob>> job_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
