// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPUBLICMEDIABASICINFOSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPUBLICMEDIABASICINFOSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPublicMediaBasicInfosResponseBodyMediaInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListPublicMediaBasicInfosResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPublicMediaBasicInfosResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(MediaInfos, mediaInfos_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListPublicMediaBasicInfosResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(MediaInfos, mediaInfos_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListPublicMediaBasicInfosResponseBody() = default ;
    ListPublicMediaBasicInfosResponseBody(const ListPublicMediaBasicInfosResponseBody &) = default ;
    ListPublicMediaBasicInfosResponseBody(ListPublicMediaBasicInfosResponseBody &&) = default ;
    ListPublicMediaBasicInfosResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPublicMediaBasicInfosResponseBody() = default ;
    ListPublicMediaBasicInfosResponseBody& operator=(const ListPublicMediaBasicInfosResponseBody &) = default ;
    ListPublicMediaBasicInfosResponseBody& operator=(ListPublicMediaBasicInfosResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxResults_ != nullptr
        && this->mediaInfos_ != nullptr && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListPublicMediaBasicInfosResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // mediaInfos Field Functions 
    bool hasMediaInfos() const { return this->mediaInfos_ != nullptr;};
    void deleteMediaInfos() { this->mediaInfos_ = nullptr;};
    inline const vector<ListPublicMediaBasicInfosResponseBodyMediaInfos> & mediaInfos() const { DARABONBA_PTR_GET_CONST(mediaInfos_, vector<ListPublicMediaBasicInfosResponseBodyMediaInfos>) };
    inline vector<ListPublicMediaBasicInfosResponseBodyMediaInfos> mediaInfos() { DARABONBA_PTR_GET(mediaInfos_, vector<ListPublicMediaBasicInfosResponseBodyMediaInfos>) };
    inline ListPublicMediaBasicInfosResponseBody& setMediaInfos(const vector<ListPublicMediaBasicInfosResponseBodyMediaInfos> & mediaInfos) { DARABONBA_PTR_SET_VALUE(mediaInfos_, mediaInfos) };
    inline ListPublicMediaBasicInfosResponseBody& setMediaInfos(vector<ListPublicMediaBasicInfosResponseBodyMediaInfos> && mediaInfos) { DARABONBA_PTR_SET_RVALUE(mediaInfos_, mediaInfos) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListPublicMediaBasicInfosResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPublicMediaBasicInfosResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListPublicMediaBasicInfosResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The maximum number of entries returned.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The media assets that meet the specified conditions.
    std::shared_ptr<vector<ListPublicMediaBasicInfosResponseBodyMediaInfos>> mediaInfos_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results. If NextToken is empty, no next page exists.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of media assets that meet the specified conditions.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
