// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYFPSHOTJOBLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYFPSHOTJOBLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryFpShotJobListResponseBodyFpShotJobList.hpp>
#include <alibabacloud/models/QueryFpShotJobListResponseBodyNonExistIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryFpShotJobListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryFpShotJobListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FpShotJobList, fpShotJobList_);
      DARABONBA_PTR_TO_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_TO_JSON(NonExistIds, nonExistIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryFpShotJobListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FpShotJobList, fpShotJobList_);
      DARABONBA_PTR_FROM_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_FROM_JSON(NonExistIds, nonExistIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryFpShotJobListResponseBody() = default ;
    QueryFpShotJobListResponseBody(const QueryFpShotJobListResponseBody &) = default ;
    QueryFpShotJobListResponseBody(QueryFpShotJobListResponseBody &&) = default ;
    QueryFpShotJobListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryFpShotJobListResponseBody() = default ;
    QueryFpShotJobListResponseBody& operator=(const QueryFpShotJobListResponseBody &) = default ;
    QueryFpShotJobListResponseBody& operator=(QueryFpShotJobListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fpShotJobList_ == nullptr
        && return this->nextPageToken_ == nullptr && return this->nonExistIds_ == nullptr && return this->requestId_ == nullptr; };
    // fpShotJobList Field Functions 
    bool hasFpShotJobList() const { return this->fpShotJobList_ != nullptr;};
    void deleteFpShotJobList() { this->fpShotJobList_ = nullptr;};
    inline const QueryFpShotJobListResponseBodyFpShotJobList & fpShotJobList() const { DARABONBA_PTR_GET_CONST(fpShotJobList_, QueryFpShotJobListResponseBodyFpShotJobList) };
    inline QueryFpShotJobListResponseBodyFpShotJobList fpShotJobList() { DARABONBA_PTR_GET(fpShotJobList_, QueryFpShotJobListResponseBodyFpShotJobList) };
    inline QueryFpShotJobListResponseBody& setFpShotJobList(const QueryFpShotJobListResponseBodyFpShotJobList & fpShotJobList) { DARABONBA_PTR_SET_VALUE(fpShotJobList_, fpShotJobList) };
    inline QueryFpShotJobListResponseBody& setFpShotJobList(QueryFpShotJobListResponseBodyFpShotJobList && fpShotJobList) { DARABONBA_PTR_SET_RVALUE(fpShotJobList_, fpShotJobList) };


    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline string nextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
    inline QueryFpShotJobListResponseBody& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // nonExistIds Field Functions 
    bool hasNonExistIds() const { return this->nonExistIds_ != nullptr;};
    void deleteNonExistIds() { this->nonExistIds_ = nullptr;};
    inline const QueryFpShotJobListResponseBodyNonExistIds & nonExistIds() const { DARABONBA_PTR_GET_CONST(nonExistIds_, QueryFpShotJobListResponseBodyNonExistIds) };
    inline QueryFpShotJobListResponseBodyNonExistIds nonExistIds() { DARABONBA_PTR_GET(nonExistIds_, QueryFpShotJobListResponseBodyNonExistIds) };
    inline QueryFpShotJobListResponseBody& setNonExistIds(const QueryFpShotJobListResponseBodyNonExistIds & nonExistIds) { DARABONBA_PTR_SET_VALUE(nonExistIds_, nonExistIds) };
    inline QueryFpShotJobListResponseBody& setNonExistIds(QueryFpShotJobListResponseBodyNonExistIds && nonExistIds) { DARABONBA_PTR_SET_RVALUE(nonExistIds_, nonExistIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryFpShotJobListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about media fingerprint analysis jobs.
    std::shared_ptr<QueryFpShotJobListResponseBodyFpShotJobList> fpShotJobList_ = nullptr;
    // The token that is used to retrieve the next page of the query results. The value is a 32-bit UUID. If the returned query results cannot be displayed within one page, this parameter is returned. The value of this parameter is updated for each query.
    std::shared_ptr<string> nextPageToken_ = nullptr;
    // The IDs of the jobs that do not exist.
    std::shared_ptr<QueryFpShotJobListResponseBodyNonExistIds> nonExistIds_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
