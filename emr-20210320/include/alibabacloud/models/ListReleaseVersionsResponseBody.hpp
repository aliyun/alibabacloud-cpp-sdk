// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRELEASEVERSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRELEASEVERSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ListReleaseVersionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListReleaseVersionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ReleaseVersions, releaseVersions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListReleaseVersionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ReleaseVersions, releaseVersions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListReleaseVersionsResponseBody() = default ;
    ListReleaseVersionsResponseBody(const ListReleaseVersionsResponseBody &) = default ;
    ListReleaseVersionsResponseBody(ListReleaseVersionsResponseBody &&) = default ;
    ListReleaseVersionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListReleaseVersionsResponseBody() = default ;
    ListReleaseVersionsResponseBody& operator=(const ListReleaseVersionsResponseBody &) = default ;
    ListReleaseVersionsResponseBody& operator=(ListReleaseVersionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ReleaseVersions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ReleaseVersions& obj) { 
        DARABONBA_PTR_TO_JSON(IaasType, iaasType_);
        DARABONBA_PTR_TO_JSON(ReleaseVersion, releaseVersion_);
        DARABONBA_PTR_TO_JSON(Series, series_);
      };
      friend void from_json(const Darabonba::Json& j, ReleaseVersions& obj) { 
        DARABONBA_PTR_FROM_JSON(IaasType, iaasType_);
        DARABONBA_PTR_FROM_JSON(ReleaseVersion, releaseVersion_);
        DARABONBA_PTR_FROM_JSON(Series, series_);
      };
      ReleaseVersions() = default ;
      ReleaseVersions(const ReleaseVersions &) = default ;
      ReleaseVersions(ReleaseVersions &&) = default ;
      ReleaseVersions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ReleaseVersions() = default ;
      ReleaseVersions& operator=(const ReleaseVersions &) = default ;
      ReleaseVersions& operator=(ReleaseVersions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->iaasType_ == nullptr
        && this->releaseVersion_ == nullptr && this->series_ == nullptr; };
      // iaasType Field Functions 
      bool hasIaasType() const { return this->iaasType_ != nullptr;};
      void deleteIaasType() { this->iaasType_ = nullptr;};
      inline string getIaasType() const { DARABONBA_PTR_GET_DEFAULT(iaasType_, "") };
      inline ReleaseVersions& setIaasType(string iaasType) { DARABONBA_PTR_SET_VALUE(iaasType_, iaasType) };


      // releaseVersion Field Functions 
      bool hasReleaseVersion() const { return this->releaseVersion_ != nullptr;};
      void deleteReleaseVersion() { this->releaseVersion_ = nullptr;};
      inline string getReleaseVersion() const { DARABONBA_PTR_GET_DEFAULT(releaseVersion_, "") };
      inline ReleaseVersions& setReleaseVersion(string releaseVersion) { DARABONBA_PTR_SET_VALUE(releaseVersion_, releaseVersion) };


      // series Field Functions 
      bool hasSeries() const { return this->series_ != nullptr;};
      void deleteSeries() { this->series_ = nullptr;};
      inline string getSeries() const { DARABONBA_PTR_GET_DEFAULT(series_, "") };
      inline ReleaseVersions& setSeries(string series) { DARABONBA_PTR_SET_VALUE(series_, series) };


    protected:
      // The IaaS type.
      shared_ptr<string> iaasType_ {};
      // The EMR version.
      shared_ptr<string> releaseVersion_ {};
      // The version series.
      shared_ptr<string> series_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->releaseVersions_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListReleaseVersionsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListReleaseVersionsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // releaseVersions Field Functions 
    bool hasReleaseVersions() const { return this->releaseVersions_ != nullptr;};
    void deleteReleaseVersions() { this->releaseVersions_ = nullptr;};
    inline const vector<ListReleaseVersionsResponseBody::ReleaseVersions> & getReleaseVersions() const { DARABONBA_PTR_GET_CONST(releaseVersions_, vector<ListReleaseVersionsResponseBody::ReleaseVersions>) };
    inline vector<ListReleaseVersionsResponseBody::ReleaseVersions> getReleaseVersions() { DARABONBA_PTR_GET(releaseVersions_, vector<ListReleaseVersionsResponseBody::ReleaseVersions>) };
    inline ListReleaseVersionsResponseBody& setReleaseVersions(const vector<ListReleaseVersionsResponseBody::ReleaseVersions> & releaseVersions) { DARABONBA_PTR_SET_VALUE(releaseVersions_, releaseVersions) };
    inline ListReleaseVersionsResponseBody& setReleaseVersions(vector<ListReleaseVersionsResponseBody::ReleaseVersions> && releaseVersions) { DARABONBA_PTR_SET_RVALUE(releaseVersions_, releaseVersions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListReleaseVersionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListReleaseVersionsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The maximum number of entries returned.
    shared_ptr<int32_t> maxResults_ {};
    // Returns the location of the data that was read.
    shared_ptr<string> nextToken_ {};
    // The major EMR versions.
    shared_ptr<vector<ListReleaseVersionsResponseBody::ReleaseVersions>> releaseVersions_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
