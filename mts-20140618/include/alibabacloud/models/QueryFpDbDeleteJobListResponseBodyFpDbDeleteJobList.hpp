// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYFPDBDELETEJOBLISTRESPONSEBODYFPDBDELETEJOBLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYFPDBDELETEJOBLISTRESPONSEBODYFPDBDELETEJOBLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryFpDBDeleteJobListResponseBodyFpDBDeleteJobListFpDBDeleteJob.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryFpDBDeleteJobListResponseBodyFpDBDeleteJobList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryFpDBDeleteJobListResponseBodyFpDBDeleteJobList& obj) { 
      DARABONBA_PTR_TO_JSON(FpDBDeleteJob, fpDBDeleteJob_);
    };
    friend void from_json(const Darabonba::Json& j, QueryFpDBDeleteJobListResponseBodyFpDBDeleteJobList& obj) { 
      DARABONBA_PTR_FROM_JSON(FpDBDeleteJob, fpDBDeleteJob_);
    };
    QueryFpDBDeleteJobListResponseBodyFpDBDeleteJobList() = default ;
    QueryFpDBDeleteJobListResponseBodyFpDBDeleteJobList(const QueryFpDBDeleteJobListResponseBodyFpDBDeleteJobList &) = default ;
    QueryFpDBDeleteJobListResponseBodyFpDBDeleteJobList(QueryFpDBDeleteJobListResponseBodyFpDBDeleteJobList &&) = default ;
    QueryFpDBDeleteJobListResponseBodyFpDBDeleteJobList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryFpDBDeleteJobListResponseBodyFpDBDeleteJobList() = default ;
    QueryFpDBDeleteJobListResponseBodyFpDBDeleteJobList& operator=(const QueryFpDBDeleteJobListResponseBodyFpDBDeleteJobList &) = default ;
    QueryFpDBDeleteJobListResponseBodyFpDBDeleteJobList& operator=(QueryFpDBDeleteJobListResponseBodyFpDBDeleteJobList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fpDBDeleteJob_ == nullptr; };
    // fpDBDeleteJob Field Functions 
    bool hasFpDBDeleteJob() const { return this->fpDBDeleteJob_ != nullptr;};
    void deleteFpDBDeleteJob() { this->fpDBDeleteJob_ = nullptr;};
    inline const vector<Models::QueryFpDBDeleteJobListResponseBodyFpDBDeleteJobListFpDBDeleteJob> & fpDBDeleteJob() const { DARABONBA_PTR_GET_CONST(fpDBDeleteJob_, vector<Models::QueryFpDBDeleteJobListResponseBodyFpDBDeleteJobListFpDBDeleteJob>) };
    inline vector<Models::QueryFpDBDeleteJobListResponseBodyFpDBDeleteJobListFpDBDeleteJob> fpDBDeleteJob() { DARABONBA_PTR_GET(fpDBDeleteJob_, vector<Models::QueryFpDBDeleteJobListResponseBodyFpDBDeleteJobListFpDBDeleteJob>) };
    inline QueryFpDBDeleteJobListResponseBodyFpDBDeleteJobList& setFpDBDeleteJob(const vector<Models::QueryFpDBDeleteJobListResponseBodyFpDBDeleteJobListFpDBDeleteJob> & fpDBDeleteJob) { DARABONBA_PTR_SET_VALUE(fpDBDeleteJob_, fpDBDeleteJob) };
    inline QueryFpDBDeleteJobListResponseBodyFpDBDeleteJobList& setFpDBDeleteJob(vector<Models::QueryFpDBDeleteJobListResponseBodyFpDBDeleteJobListFpDBDeleteJob> && fpDBDeleteJob) { DARABONBA_PTR_SET_RVALUE(fpDBDeleteJob_, fpDBDeleteJob) };


  protected:
    std::shared_ptr<vector<Models::QueryFpDBDeleteJobListResponseBodyFpDBDeleteJobListFpDBDeleteJob>> fpDBDeleteJob_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
