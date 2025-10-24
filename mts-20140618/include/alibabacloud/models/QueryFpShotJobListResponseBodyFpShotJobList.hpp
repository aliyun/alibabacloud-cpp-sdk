// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYFPSHOTJOBLISTRESPONSEBODYFPSHOTJOBLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYFPSHOTJOBLISTRESPONSEBODYFPSHOTJOBLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryFpShotJobListResponseBodyFpShotJobListFpShotJob.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryFpShotJobListResponseBodyFpShotJobList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryFpShotJobListResponseBodyFpShotJobList& obj) { 
      DARABONBA_PTR_TO_JSON(FpShotJob, fpShotJob_);
    };
    friend void from_json(const Darabonba::Json& j, QueryFpShotJobListResponseBodyFpShotJobList& obj) { 
      DARABONBA_PTR_FROM_JSON(FpShotJob, fpShotJob_);
    };
    QueryFpShotJobListResponseBodyFpShotJobList() = default ;
    QueryFpShotJobListResponseBodyFpShotJobList(const QueryFpShotJobListResponseBodyFpShotJobList &) = default ;
    QueryFpShotJobListResponseBodyFpShotJobList(QueryFpShotJobListResponseBodyFpShotJobList &&) = default ;
    QueryFpShotJobListResponseBodyFpShotJobList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryFpShotJobListResponseBodyFpShotJobList() = default ;
    QueryFpShotJobListResponseBodyFpShotJobList& operator=(const QueryFpShotJobListResponseBodyFpShotJobList &) = default ;
    QueryFpShotJobListResponseBodyFpShotJobList& operator=(QueryFpShotJobListResponseBodyFpShotJobList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fpShotJob_ == nullptr; };
    // fpShotJob Field Functions 
    bool hasFpShotJob() const { return this->fpShotJob_ != nullptr;};
    void deleteFpShotJob() { this->fpShotJob_ = nullptr;};
    inline const vector<Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJob> & fpShotJob() const { DARABONBA_PTR_GET_CONST(fpShotJob_, vector<Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJob>) };
    inline vector<Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJob> fpShotJob() { DARABONBA_PTR_GET(fpShotJob_, vector<Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJob>) };
    inline QueryFpShotJobListResponseBodyFpShotJobList& setFpShotJob(const vector<Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJob> & fpShotJob) { DARABONBA_PTR_SET_VALUE(fpShotJob_, fpShotJob) };
    inline QueryFpShotJobListResponseBodyFpShotJobList& setFpShotJob(vector<Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJob> && fpShotJob) { DARABONBA_PTR_SET_RVALUE(fpShotJob_, fpShotJob) };


  protected:
    std::shared_ptr<vector<Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJob>> fpShotJob_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
