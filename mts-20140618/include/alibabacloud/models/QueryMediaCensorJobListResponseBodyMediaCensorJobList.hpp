// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEDIACENSORJOBLISTRESPONSEBODYMEDIACENSORJOBLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEDIACENSORJOBLISTRESPONSEBODYMEDIACENSORJOBLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJob.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryMediaCensorJobListResponseBodyMediaCensorJobList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMediaCensorJobListResponseBodyMediaCensorJobList& obj) { 
      DARABONBA_PTR_TO_JSON(MediaCensorJob, mediaCensorJob_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMediaCensorJobListResponseBodyMediaCensorJobList& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaCensorJob, mediaCensorJob_);
    };
    QueryMediaCensorJobListResponseBodyMediaCensorJobList() = default ;
    QueryMediaCensorJobListResponseBodyMediaCensorJobList(const QueryMediaCensorJobListResponseBodyMediaCensorJobList &) = default ;
    QueryMediaCensorJobListResponseBodyMediaCensorJobList(QueryMediaCensorJobListResponseBodyMediaCensorJobList &&) = default ;
    QueryMediaCensorJobListResponseBodyMediaCensorJobList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMediaCensorJobListResponseBodyMediaCensorJobList() = default ;
    QueryMediaCensorJobListResponseBodyMediaCensorJobList& operator=(const QueryMediaCensorJobListResponseBodyMediaCensorJobList &) = default ;
    QueryMediaCensorJobListResponseBodyMediaCensorJobList& operator=(QueryMediaCensorJobListResponseBodyMediaCensorJobList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mediaCensorJob_ == nullptr; };
    // mediaCensorJob Field Functions 
    bool hasMediaCensorJob() const { return this->mediaCensorJob_ != nullptr;};
    void deleteMediaCensorJob() { this->mediaCensorJob_ = nullptr;};
    inline const vector<Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJob> & mediaCensorJob() const { DARABONBA_PTR_GET_CONST(mediaCensorJob_, vector<Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJob>) };
    inline vector<Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJob> mediaCensorJob() { DARABONBA_PTR_GET(mediaCensorJob_, vector<Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJob>) };
    inline QueryMediaCensorJobListResponseBodyMediaCensorJobList& setMediaCensorJob(const vector<Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJob> & mediaCensorJob) { DARABONBA_PTR_SET_VALUE(mediaCensorJob_, mediaCensorJob) };
    inline QueryMediaCensorJobListResponseBodyMediaCensorJobList& setMediaCensorJob(vector<Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJob> && mediaCensorJob) { DARABONBA_PTR_SET_RVALUE(mediaCensorJob_, mediaCensorJob) };


  protected:
    std::shared_ptr<vector<Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJob>> mediaCensorJob_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
