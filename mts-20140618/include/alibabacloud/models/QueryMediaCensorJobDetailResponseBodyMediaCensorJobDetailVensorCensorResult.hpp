// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEDIACENSORJOBDETAILRESPONSEBODYMEDIACENSORJOBDETAILVENSORCENSORRESULT_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEDIACENSORJOBDETAILRESPONSEBODYMEDIACENSORJOBDETAILVENSORCENSORRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVensorCensorResultCensorResults.hpp>
#include <alibabacloud/models/QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVensorCensorResultVideoTimelines.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVensorCensorResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVensorCensorResult& obj) { 
      DARABONBA_PTR_TO_JSON(CensorResults, censorResults_);
      DARABONBA_PTR_TO_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_TO_JSON(VideoTimelines, videoTimelines_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVensorCensorResult& obj) { 
      DARABONBA_PTR_FROM_JSON(CensorResults, censorResults_);
      DARABONBA_PTR_FROM_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_FROM_JSON(VideoTimelines, videoTimelines_);
    };
    QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVensorCensorResult() = default ;
    QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVensorCensorResult(const QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVensorCensorResult &) = default ;
    QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVensorCensorResult(QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVensorCensorResult &&) = default ;
    QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVensorCensorResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVensorCensorResult() = default ;
    QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVensorCensorResult& operator=(const QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVensorCensorResult &) = default ;
    QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVensorCensorResult& operator=(QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVensorCensorResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->censorResults_ == nullptr
        && return this->nextPageToken_ == nullptr && return this->videoTimelines_ == nullptr; };
    // censorResults Field Functions 
    bool hasCensorResults() const { return this->censorResults_ != nullptr;};
    void deleteCensorResults() { this->censorResults_ = nullptr;};
    inline const Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVensorCensorResultCensorResults & censorResults() const { DARABONBA_PTR_GET_CONST(censorResults_, Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVensorCensorResultCensorResults) };
    inline Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVensorCensorResultCensorResults censorResults() { DARABONBA_PTR_GET(censorResults_, Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVensorCensorResultCensorResults) };
    inline QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVensorCensorResult& setCensorResults(const Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVensorCensorResultCensorResults & censorResults) { DARABONBA_PTR_SET_VALUE(censorResults_, censorResults) };
    inline QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVensorCensorResult& setCensorResults(Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVensorCensorResultCensorResults && censorResults) { DARABONBA_PTR_SET_RVALUE(censorResults_, censorResults) };


    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline string nextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
    inline QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVensorCensorResult& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // videoTimelines Field Functions 
    bool hasVideoTimelines() const { return this->videoTimelines_ != nullptr;};
    void deleteVideoTimelines() { this->videoTimelines_ = nullptr;};
    inline const Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVensorCensorResultVideoTimelines & videoTimelines() const { DARABONBA_PTR_GET_CONST(videoTimelines_, Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVensorCensorResultVideoTimelines) };
    inline Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVensorCensorResultVideoTimelines videoTimelines() { DARABONBA_PTR_GET(videoTimelines_, Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVensorCensorResultVideoTimelines) };
    inline QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVensorCensorResult& setVideoTimelines(const Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVensorCensorResultVideoTimelines & videoTimelines) { DARABONBA_PTR_SET_VALUE(videoTimelines_, videoTimelines) };
    inline QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVensorCensorResult& setVideoTimelines(Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVensorCensorResultVideoTimelines && videoTimelines) { DARABONBA_PTR_SET_RVALUE(videoTimelines_, videoTimelines) };


  protected:
    // A collection of the moderation results. The information includes the summary of various scenarios such as pornographic content and terrorist content.
    std::shared_ptr<Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVensorCensorResultCensorResults> censorResults_ = nullptr;
    // The returned value of NextToken is a pagination token, which can be used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextPageToken_ = nullptr;
    // The moderation results that are sorted in ascending order by time.
    std::shared_ptr<Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVensorCensorResultVideoTimelines> videoTimelines_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
