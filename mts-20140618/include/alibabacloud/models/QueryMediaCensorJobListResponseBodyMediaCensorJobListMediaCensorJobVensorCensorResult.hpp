// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEDIACENSORJOBLISTRESPONSEBODYMEDIACENSORJOBLISTMEDIACENSORJOBVENSORCENSORRESULT_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEDIACENSORJOBLISTRESPONSEBODYMEDIACENSORJOBLISTMEDIACENSORJOBVENSORCENSORRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVensorCensorResultCensorResults.hpp>
#include <alibabacloud/models/QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVensorCensorResultVideoTimelines.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVensorCensorResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVensorCensorResult& obj) { 
      DARABONBA_PTR_TO_JSON(CensorResults, censorResults_);
      DARABONBA_PTR_TO_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_TO_JSON(VideoTimelines, videoTimelines_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVensorCensorResult& obj) { 
      DARABONBA_PTR_FROM_JSON(CensorResults, censorResults_);
      DARABONBA_PTR_FROM_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_FROM_JSON(VideoTimelines, videoTimelines_);
    };
    QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVensorCensorResult() = default ;
    QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVensorCensorResult(const QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVensorCensorResult &) = default ;
    QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVensorCensorResult(QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVensorCensorResult &&) = default ;
    QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVensorCensorResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVensorCensorResult() = default ;
    QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVensorCensorResult& operator=(const QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVensorCensorResult &) = default ;
    QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVensorCensorResult& operator=(QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVensorCensorResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->censorResults_ == nullptr
        && return this->nextPageToken_ == nullptr && return this->videoTimelines_ == nullptr; };
    // censorResults Field Functions 
    bool hasCensorResults() const { return this->censorResults_ != nullptr;};
    void deleteCensorResults() { this->censorResults_ = nullptr;};
    inline const Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVensorCensorResultCensorResults & censorResults() const { DARABONBA_PTR_GET_CONST(censorResults_, Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVensorCensorResultCensorResults) };
    inline Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVensorCensorResultCensorResults censorResults() { DARABONBA_PTR_GET(censorResults_, Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVensorCensorResultCensorResults) };
    inline QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVensorCensorResult& setCensorResults(const Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVensorCensorResultCensorResults & censorResults) { DARABONBA_PTR_SET_VALUE(censorResults_, censorResults) };
    inline QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVensorCensorResult& setCensorResults(Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVensorCensorResultCensorResults && censorResults) { DARABONBA_PTR_SET_RVALUE(censorResults_, censorResults) };


    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline string nextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
    inline QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVensorCensorResult& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // videoTimelines Field Functions 
    bool hasVideoTimelines() const { return this->videoTimelines_ != nullptr;};
    void deleteVideoTimelines() { this->videoTimelines_ = nullptr;};
    inline const Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVensorCensorResultVideoTimelines & videoTimelines() const { DARABONBA_PTR_GET_CONST(videoTimelines_, Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVensorCensorResultVideoTimelines) };
    inline Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVensorCensorResultVideoTimelines videoTimelines() { DARABONBA_PTR_GET(videoTimelines_, Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVensorCensorResultVideoTimelines) };
    inline QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVensorCensorResult& setVideoTimelines(const Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVensorCensorResultVideoTimelines & videoTimelines) { DARABONBA_PTR_SET_VALUE(videoTimelines_, videoTimelines) };
    inline QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVensorCensorResult& setVideoTimelines(Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVensorCensorResultVideoTimelines && videoTimelines) { DARABONBA_PTR_SET_RVALUE(videoTimelines_, videoTimelines) };


  protected:
    // A collection of the moderation results. The information includes the summary about various scenarios such as pornographic content and terrorist content.
    std::shared_ptr<Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVensorCensorResultCensorResults> censorResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextPageToken_ = nullptr;
    // The moderation results that are sorted in ascending order by time.
    std::shared_ptr<Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVensorCensorResultVideoTimelines> videoTimelines_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
