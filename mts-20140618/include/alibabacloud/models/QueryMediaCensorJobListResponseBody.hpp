// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEDIACENSORJOBLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEDIACENSORJOBLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryMediaCensorJobListResponseBodyMediaCensorJobList.hpp>
#include <alibabacloud/models/QueryMediaCensorJobListResponseBodyNonExistIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryMediaCensorJobListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMediaCensorJobListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MediaCensorJobList, mediaCensorJobList_);
      DARABONBA_PTR_TO_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_TO_JSON(NonExistIds, nonExistIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMediaCensorJobListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaCensorJobList, mediaCensorJobList_);
      DARABONBA_PTR_FROM_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_FROM_JSON(NonExistIds, nonExistIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryMediaCensorJobListResponseBody() = default ;
    QueryMediaCensorJobListResponseBody(const QueryMediaCensorJobListResponseBody &) = default ;
    QueryMediaCensorJobListResponseBody(QueryMediaCensorJobListResponseBody &&) = default ;
    QueryMediaCensorJobListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMediaCensorJobListResponseBody() = default ;
    QueryMediaCensorJobListResponseBody& operator=(const QueryMediaCensorJobListResponseBody &) = default ;
    QueryMediaCensorJobListResponseBody& operator=(QueryMediaCensorJobListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mediaCensorJobList_ == nullptr
        && return this->nextPageToken_ == nullptr && return this->nonExistIds_ == nullptr && return this->requestId_ == nullptr; };
    // mediaCensorJobList Field Functions 
    bool hasMediaCensorJobList() const { return this->mediaCensorJobList_ != nullptr;};
    void deleteMediaCensorJobList() { this->mediaCensorJobList_ = nullptr;};
    inline const QueryMediaCensorJobListResponseBodyMediaCensorJobList & mediaCensorJobList() const { DARABONBA_PTR_GET_CONST(mediaCensorJobList_, QueryMediaCensorJobListResponseBodyMediaCensorJobList) };
    inline QueryMediaCensorJobListResponseBodyMediaCensorJobList mediaCensorJobList() { DARABONBA_PTR_GET(mediaCensorJobList_, QueryMediaCensorJobListResponseBodyMediaCensorJobList) };
    inline QueryMediaCensorJobListResponseBody& setMediaCensorJobList(const QueryMediaCensorJobListResponseBodyMediaCensorJobList & mediaCensorJobList) { DARABONBA_PTR_SET_VALUE(mediaCensorJobList_, mediaCensorJobList) };
    inline QueryMediaCensorJobListResponseBody& setMediaCensorJobList(QueryMediaCensorJobListResponseBodyMediaCensorJobList && mediaCensorJobList) { DARABONBA_PTR_SET_RVALUE(mediaCensorJobList_, mediaCensorJobList) };


    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline string nextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
    inline QueryMediaCensorJobListResponseBody& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // nonExistIds Field Functions 
    bool hasNonExistIds() const { return this->nonExistIds_ != nullptr;};
    void deleteNonExistIds() { this->nonExistIds_ = nullptr;};
    inline const QueryMediaCensorJobListResponseBodyNonExistIds & nonExistIds() const { DARABONBA_PTR_GET_CONST(nonExistIds_, QueryMediaCensorJobListResponseBodyNonExistIds) };
    inline QueryMediaCensorJobListResponseBodyNonExistIds nonExistIds() { DARABONBA_PTR_GET(nonExistIds_, QueryMediaCensorJobListResponseBodyNonExistIds) };
    inline QueryMediaCensorJobListResponseBody& setNonExistIds(const QueryMediaCensorJobListResponseBodyNonExistIds & nonExistIds) { DARABONBA_PTR_SET_VALUE(nonExistIds_, nonExistIds) };
    inline QueryMediaCensorJobListResponseBody& setNonExistIds(QueryMediaCensorJobListResponseBodyNonExistIds && nonExistIds) { DARABONBA_PTR_SET_RVALUE(nonExistIds_, nonExistIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryMediaCensorJobListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The content moderation jobs.
    std::shared_ptr<QueryMediaCensorJobListResponseBodyMediaCensorJobList> mediaCensorJobList_ = nullptr;
    // The token that is used to retrieve the next page of the query results. The value is a UUID that contains 32 characters. If the returned query results cannot be displayed within one page, this parameter is returned. The value of this parameter is updated for each query.
    std::shared_ptr<string> nextPageToken_ = nullptr;
    // The IDs of the jobs that do not exist. This parameter is not returned if all specified jobs are found.
    std::shared_ptr<QueryMediaCensorJobListResponseBodyNonExistIds> nonExistIds_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
