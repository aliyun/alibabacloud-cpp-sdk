// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTARTIFACTBUILDLOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTARTIFACTBUILDLOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class BuildLogs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BuildLogs& obj) { 
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
      };
      friend void from_json(const Darabonba::Json& j, BuildLogs& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
      };
      BuildLogs() = default ;
      BuildLogs(const BuildLogs &) = default ;
      BuildLogs(BuildLogs &&) = default ;
      BuildLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BuildLogs() = default ;
      BuildLogs& operator=(const BuildLogs &) = default ;
      BuildLogs& operator=(BuildLogs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->content_ == nullptr
        && this->timestamp_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline BuildLogs& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // timestamp Field Functions 
      bool hasTimestamp() const { return this->timestamp_ != nullptr;};
      void deleteTimestamp() { this->timestamp_ = nullptr;};
      inline string getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
      inline BuildLogs& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    protected:
      shared_ptr<string> content_ {};
      // Use the UTC time format: yyyy-MM-ddTHH:mmZ
      shared_ptr<string> timestamp_ {};
    };

    virtual bool empty() const override { return this->buildLogs_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // buildLogs Field Functions 
    bool hasBuildLogs() const { return this->buildLogs_ != nullptr;};
    void deleteBuildLogs() { this->buildLogs_ = nullptr;};
    inline const vector<ListArtifactBuildLogsResponseBody::BuildLogs> & getBuildLogs() const { DARABONBA_PTR_GET_CONST(buildLogs_, vector<ListArtifactBuildLogsResponseBody::BuildLogs>) };
    inline vector<ListArtifactBuildLogsResponseBody::BuildLogs> getBuildLogs() { DARABONBA_PTR_GET(buildLogs_, vector<ListArtifactBuildLogsResponseBody::BuildLogs>) };
    inline ListArtifactBuildLogsResponseBody& setBuildLogs(const vector<ListArtifactBuildLogsResponseBody::BuildLogs> & buildLogs) { DARABONBA_PTR_SET_VALUE(buildLogs_, buildLogs) };
    inline ListArtifactBuildLogsResponseBody& setBuildLogs(vector<ListArtifactBuildLogsResponseBody::BuildLogs> && buildLogs) { DARABONBA_PTR_SET_RVALUE(buildLogs_, buildLogs) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListArtifactBuildLogsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListArtifactBuildLogsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListArtifactBuildLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ListArtifactBuildLogsResponseBody::BuildLogs>> buildLogs_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
