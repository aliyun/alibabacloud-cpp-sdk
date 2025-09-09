// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTARTIFACTBUILDLOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTARTIFACTBUILDLOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListArtifactBuildLogsResponseBodyBuildLogs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class ListArtifactBuildLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListArtifactBuildLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BuildLogs, buildLogs_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListArtifactBuildLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BuildLogs, buildLogs_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListArtifactBuildLogsResponseBody() = default ;
    ListArtifactBuildLogsResponseBody(const ListArtifactBuildLogsResponseBody &) = default ;
    ListArtifactBuildLogsResponseBody(ListArtifactBuildLogsResponseBody &&) = default ;
    ListArtifactBuildLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListArtifactBuildLogsResponseBody() = default ;
    ListArtifactBuildLogsResponseBody& operator=(const ListArtifactBuildLogsResponseBody &) = default ;
    ListArtifactBuildLogsResponseBody& operator=(ListArtifactBuildLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->buildLogs_ != nullptr
        && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->requestId_ != nullptr; };
    // buildLogs Field Functions 
    bool hasBuildLogs() const { return this->buildLogs_ != nullptr;};
    void deleteBuildLogs() { this->buildLogs_ = nullptr;};
    inline const vector<ListArtifactBuildLogsResponseBodyBuildLogs> & buildLogs() const { DARABONBA_PTR_GET_CONST(buildLogs_, vector<ListArtifactBuildLogsResponseBodyBuildLogs>) };
    inline vector<ListArtifactBuildLogsResponseBodyBuildLogs> buildLogs() { DARABONBA_PTR_GET(buildLogs_, vector<ListArtifactBuildLogsResponseBodyBuildLogs>) };
    inline ListArtifactBuildLogsResponseBody& setBuildLogs(const vector<ListArtifactBuildLogsResponseBodyBuildLogs> & buildLogs) { DARABONBA_PTR_SET_VALUE(buildLogs_, buildLogs) };
    inline ListArtifactBuildLogsResponseBody& setBuildLogs(vector<ListArtifactBuildLogsResponseBodyBuildLogs> && buildLogs) { DARABONBA_PTR_SET_RVALUE(buildLogs_, buildLogs) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListArtifactBuildLogsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListArtifactBuildLogsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListArtifactBuildLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<ListArtifactBuildLogsResponseBodyBuildLogs>> buildLogs_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
