// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEDIAINFOJOBLISTRESPONSEBODYMEDIAINFOJOBLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEDIAINFOJOBLISTRESPONSEBODYMEDIAINFOJOBLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJob.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryMediaInfoJobListResponseBodyMediaInfoJobList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMediaInfoJobListResponseBodyMediaInfoJobList& obj) { 
      DARABONBA_PTR_TO_JSON(MediaInfoJob, mediaInfoJob_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMediaInfoJobListResponseBodyMediaInfoJobList& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaInfoJob, mediaInfoJob_);
    };
    QueryMediaInfoJobListResponseBodyMediaInfoJobList() = default ;
    QueryMediaInfoJobListResponseBodyMediaInfoJobList(const QueryMediaInfoJobListResponseBodyMediaInfoJobList &) = default ;
    QueryMediaInfoJobListResponseBodyMediaInfoJobList(QueryMediaInfoJobListResponseBodyMediaInfoJobList &&) = default ;
    QueryMediaInfoJobListResponseBodyMediaInfoJobList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMediaInfoJobListResponseBodyMediaInfoJobList() = default ;
    QueryMediaInfoJobListResponseBodyMediaInfoJobList& operator=(const QueryMediaInfoJobListResponseBodyMediaInfoJobList &) = default ;
    QueryMediaInfoJobListResponseBodyMediaInfoJobList& operator=(QueryMediaInfoJobListResponseBodyMediaInfoJobList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mediaInfoJob_ == nullptr; };
    // mediaInfoJob Field Functions 
    bool hasMediaInfoJob() const { return this->mediaInfoJob_ != nullptr;};
    void deleteMediaInfoJob() { this->mediaInfoJob_ = nullptr;};
    inline const vector<Models::QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJob> & mediaInfoJob() const { DARABONBA_PTR_GET_CONST(mediaInfoJob_, vector<Models::QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJob>) };
    inline vector<Models::QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJob> mediaInfoJob() { DARABONBA_PTR_GET(mediaInfoJob_, vector<Models::QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJob>) };
    inline QueryMediaInfoJobListResponseBodyMediaInfoJobList& setMediaInfoJob(const vector<Models::QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJob> & mediaInfoJob) { DARABONBA_PTR_SET_VALUE(mediaInfoJob_, mediaInfoJob) };
    inline QueryMediaInfoJobListResponseBodyMediaInfoJobList& setMediaInfoJob(vector<Models::QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJob> && mediaInfoJob) { DARABONBA_PTR_SET_RVALUE(mediaInfoJob_, mediaInfoJob) };


  protected:
    std::shared_ptr<vector<Models::QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJob>> mediaInfoJob_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
