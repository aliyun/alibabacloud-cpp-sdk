// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYFPFILEDELETEJOBLISTRESPONSEBODYFPFILEDELETEJOBLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYFPFILEDELETEJOBLISTRESPONSEBODYFPFILEDELETEJOBLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryFpFileDeleteJobListResponseBodyFpFileDeleteJobListFpFileDeleteJob.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryFpFileDeleteJobListResponseBodyFpFileDeleteJobList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryFpFileDeleteJobListResponseBodyFpFileDeleteJobList& obj) { 
      DARABONBA_PTR_TO_JSON(FpFileDeleteJob, fpFileDeleteJob_);
    };
    friend void from_json(const Darabonba::Json& j, QueryFpFileDeleteJobListResponseBodyFpFileDeleteJobList& obj) { 
      DARABONBA_PTR_FROM_JSON(FpFileDeleteJob, fpFileDeleteJob_);
    };
    QueryFpFileDeleteJobListResponseBodyFpFileDeleteJobList() = default ;
    QueryFpFileDeleteJobListResponseBodyFpFileDeleteJobList(const QueryFpFileDeleteJobListResponseBodyFpFileDeleteJobList &) = default ;
    QueryFpFileDeleteJobListResponseBodyFpFileDeleteJobList(QueryFpFileDeleteJobListResponseBodyFpFileDeleteJobList &&) = default ;
    QueryFpFileDeleteJobListResponseBodyFpFileDeleteJobList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryFpFileDeleteJobListResponseBodyFpFileDeleteJobList() = default ;
    QueryFpFileDeleteJobListResponseBodyFpFileDeleteJobList& operator=(const QueryFpFileDeleteJobListResponseBodyFpFileDeleteJobList &) = default ;
    QueryFpFileDeleteJobListResponseBodyFpFileDeleteJobList& operator=(QueryFpFileDeleteJobListResponseBodyFpFileDeleteJobList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fpFileDeleteJob_ == nullptr; };
    // fpFileDeleteJob Field Functions 
    bool hasFpFileDeleteJob() const { return this->fpFileDeleteJob_ != nullptr;};
    void deleteFpFileDeleteJob() { this->fpFileDeleteJob_ = nullptr;};
    inline const vector<Models::QueryFpFileDeleteJobListResponseBodyFpFileDeleteJobListFpFileDeleteJob> & fpFileDeleteJob() const { DARABONBA_PTR_GET_CONST(fpFileDeleteJob_, vector<Models::QueryFpFileDeleteJobListResponseBodyFpFileDeleteJobListFpFileDeleteJob>) };
    inline vector<Models::QueryFpFileDeleteJobListResponseBodyFpFileDeleteJobListFpFileDeleteJob> fpFileDeleteJob() { DARABONBA_PTR_GET(fpFileDeleteJob_, vector<Models::QueryFpFileDeleteJobListResponseBodyFpFileDeleteJobListFpFileDeleteJob>) };
    inline QueryFpFileDeleteJobListResponseBodyFpFileDeleteJobList& setFpFileDeleteJob(const vector<Models::QueryFpFileDeleteJobListResponseBodyFpFileDeleteJobListFpFileDeleteJob> & fpFileDeleteJob) { DARABONBA_PTR_SET_VALUE(fpFileDeleteJob_, fpFileDeleteJob) };
    inline QueryFpFileDeleteJobListResponseBodyFpFileDeleteJobList& setFpFileDeleteJob(vector<Models::QueryFpFileDeleteJobListResponseBodyFpFileDeleteJobListFpFileDeleteJob> && fpFileDeleteJob) { DARABONBA_PTR_SET_RVALUE(fpFileDeleteJob_, fpFileDeleteJob) };


  protected:
    std::shared_ptr<vector<Models::QueryFpFileDeleteJobListResponseBodyFpFileDeleteJobListFpFileDeleteJob>> fpFileDeleteJob_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
