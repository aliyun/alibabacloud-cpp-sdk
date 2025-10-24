// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSNAPSHOTJOBLISTRESPONSEBODYSNAPSHOTJOBLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYSNAPSHOTJOBLISTRESPONSEBODYSNAPSHOTJOBLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJob.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QuerySnapshotJobListResponseBodySnapshotJobList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySnapshotJobListResponseBodySnapshotJobList& obj) { 
      DARABONBA_PTR_TO_JSON(SnapshotJob, snapshotJob_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySnapshotJobListResponseBodySnapshotJobList& obj) { 
      DARABONBA_PTR_FROM_JSON(SnapshotJob, snapshotJob_);
    };
    QuerySnapshotJobListResponseBodySnapshotJobList() = default ;
    QuerySnapshotJobListResponseBodySnapshotJobList(const QuerySnapshotJobListResponseBodySnapshotJobList &) = default ;
    QuerySnapshotJobListResponseBodySnapshotJobList(QuerySnapshotJobListResponseBodySnapshotJobList &&) = default ;
    QuerySnapshotJobListResponseBodySnapshotJobList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySnapshotJobListResponseBodySnapshotJobList() = default ;
    QuerySnapshotJobListResponseBodySnapshotJobList& operator=(const QuerySnapshotJobListResponseBodySnapshotJobList &) = default ;
    QuerySnapshotJobListResponseBodySnapshotJobList& operator=(QuerySnapshotJobListResponseBodySnapshotJobList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->snapshotJob_ == nullptr; };
    // snapshotJob Field Functions 
    bool hasSnapshotJob() const { return this->snapshotJob_ != nullptr;};
    void deleteSnapshotJob() { this->snapshotJob_ = nullptr;};
    inline const vector<Models::QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJob> & snapshotJob() const { DARABONBA_PTR_GET_CONST(snapshotJob_, vector<Models::QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJob>) };
    inline vector<Models::QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJob> snapshotJob() { DARABONBA_PTR_GET(snapshotJob_, vector<Models::QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJob>) };
    inline QuerySnapshotJobListResponseBodySnapshotJobList& setSnapshotJob(const vector<Models::QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJob> & snapshotJob) { DARABONBA_PTR_SET_VALUE(snapshotJob_, snapshotJob) };
    inline QuerySnapshotJobListResponseBodySnapshotJobList& setSnapshotJob(vector<Models::QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJob> && snapshotJob) { DARABONBA_PTR_SET_RVALUE(snapshotJob_, snapshotJob) };


  protected:
    std::shared_ptr<vector<Models::QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJob>> snapshotJob_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
