// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMEDIABASICINFOSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMEDIABASICINFOSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListMediaBasicInfosResponseBodyMediaInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListMediaBasicInfosResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMediaBasicInfosResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(MediaInfos, mediaInfos_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListMediaBasicInfosResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(MediaInfos, mediaInfos_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListMediaBasicInfosResponseBody() = default ;
    ListMediaBasicInfosResponseBody(const ListMediaBasicInfosResponseBody &) = default ;
    ListMediaBasicInfosResponseBody(ListMediaBasicInfosResponseBody &&) = default ;
    ListMediaBasicInfosResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMediaBasicInfosResponseBody() = default ;
    ListMediaBasicInfosResponseBody& operator=(const ListMediaBasicInfosResponseBody &) = default ;
    ListMediaBasicInfosResponseBody& operator=(ListMediaBasicInfosResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && return this->mediaInfos_ == nullptr && return this->nextToken_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListMediaBasicInfosResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // mediaInfos Field Functions 
    bool hasMediaInfos() const { return this->mediaInfos_ != nullptr;};
    void deleteMediaInfos() { this->mediaInfos_ = nullptr;};
    inline const vector<ListMediaBasicInfosResponseBodyMediaInfos> & mediaInfos() const { DARABONBA_PTR_GET_CONST(mediaInfos_, vector<ListMediaBasicInfosResponseBodyMediaInfos>) };
    inline vector<ListMediaBasicInfosResponseBodyMediaInfos> mediaInfos() { DARABONBA_PTR_GET(mediaInfos_, vector<ListMediaBasicInfosResponseBodyMediaInfos>) };
    inline ListMediaBasicInfosResponseBody& setMediaInfos(const vector<ListMediaBasicInfosResponseBodyMediaInfos> & mediaInfos) { DARABONBA_PTR_SET_VALUE(mediaInfos_, mediaInfos) };
    inline ListMediaBasicInfosResponseBody& setMediaInfos(vector<ListMediaBasicInfosResponseBodyMediaInfos> && mediaInfos) { DARABONBA_PTR_SET_RVALUE(mediaInfos_, mediaInfos) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListMediaBasicInfosResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMediaBasicInfosResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListMediaBasicInfosResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The maximum number of entries returned in the query.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The media assets that meet the specified conditions.
    std::shared_ptr<vector<ListMediaBasicInfosResponseBodyMediaInfos>> mediaInfos_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results. If NextToken is empty, no next page exists.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
