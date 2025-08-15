// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRELEASEVERSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRELEASEVERSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListReleaseVersionsResponseBodyReleaseVersions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class ListReleaseVersionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListReleaseVersionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(releaseVersions, releaseVersions_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListReleaseVersionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(releaseVersions, releaseVersions_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
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
    virtual bool empty() const override { this->maxResults_ != nullptr
        && this->nextToken_ != nullptr && this->releaseVersions_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListReleaseVersionsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListReleaseVersionsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // releaseVersions Field Functions 
    bool hasReleaseVersions() const { return this->releaseVersions_ != nullptr;};
    void deleteReleaseVersions() { this->releaseVersions_ = nullptr;};
    inline const vector<ListReleaseVersionsResponseBodyReleaseVersions> & releaseVersions() const { DARABONBA_PTR_GET_CONST(releaseVersions_, vector<ListReleaseVersionsResponseBodyReleaseVersions>) };
    inline vector<ListReleaseVersionsResponseBodyReleaseVersions> releaseVersions() { DARABONBA_PTR_GET(releaseVersions_, vector<ListReleaseVersionsResponseBodyReleaseVersions>) };
    inline ListReleaseVersionsResponseBody& setReleaseVersions(const vector<ListReleaseVersionsResponseBodyReleaseVersions> & releaseVersions) { DARABONBA_PTR_SET_VALUE(releaseVersions_, releaseVersions) };
    inline ListReleaseVersionsResponseBody& setReleaseVersions(vector<ListReleaseVersionsResponseBodyReleaseVersions> && releaseVersions) { DARABONBA_PTR_SET_RVALUE(releaseVersions_, releaseVersions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListReleaseVersionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListReleaseVersionsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The maximum number of entries returned.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The versions.
    std::shared_ptr<vector<ListReleaseVersionsResponseBodyReleaseVersions>> releaseVersions_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
