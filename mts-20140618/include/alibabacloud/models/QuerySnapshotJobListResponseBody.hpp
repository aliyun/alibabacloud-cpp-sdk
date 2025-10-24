// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSNAPSHOTJOBLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSNAPSHOTJOBLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QuerySnapshotJobListResponseBodyNonExistSnapshotJobIds.hpp>
#include <alibabacloud/models/QuerySnapshotJobListResponseBodySnapshotJobList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QuerySnapshotJobListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySnapshotJobListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_TO_JSON(NonExistSnapshotJobIds, nonExistSnapshotJobIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SnapshotJobList, snapshotJobList_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySnapshotJobListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_FROM_JSON(NonExistSnapshotJobIds, nonExistSnapshotJobIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SnapshotJobList, snapshotJobList_);
    };
    QuerySnapshotJobListResponseBody() = default ;
    QuerySnapshotJobListResponseBody(const QuerySnapshotJobListResponseBody &) = default ;
    QuerySnapshotJobListResponseBody(QuerySnapshotJobListResponseBody &&) = default ;
    QuerySnapshotJobListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySnapshotJobListResponseBody() = default ;
    QuerySnapshotJobListResponseBody& operator=(const QuerySnapshotJobListResponseBody &) = default ;
    QuerySnapshotJobListResponseBody& operator=(QuerySnapshotJobListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nextPageToken_ == nullptr
        && return this->nonExistSnapshotJobIds_ == nullptr && return this->requestId_ == nullptr && return this->snapshotJobList_ == nullptr; };
    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline string nextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
    inline QuerySnapshotJobListResponseBody& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // nonExistSnapshotJobIds Field Functions 
    bool hasNonExistSnapshotJobIds() const { return this->nonExistSnapshotJobIds_ != nullptr;};
    void deleteNonExistSnapshotJobIds() { this->nonExistSnapshotJobIds_ = nullptr;};
    inline const QuerySnapshotJobListResponseBodyNonExistSnapshotJobIds & nonExistSnapshotJobIds() const { DARABONBA_PTR_GET_CONST(nonExistSnapshotJobIds_, QuerySnapshotJobListResponseBodyNonExistSnapshotJobIds) };
    inline QuerySnapshotJobListResponseBodyNonExistSnapshotJobIds nonExistSnapshotJobIds() { DARABONBA_PTR_GET(nonExistSnapshotJobIds_, QuerySnapshotJobListResponseBodyNonExistSnapshotJobIds) };
    inline QuerySnapshotJobListResponseBody& setNonExistSnapshotJobIds(const QuerySnapshotJobListResponseBodyNonExistSnapshotJobIds & nonExistSnapshotJobIds) { DARABONBA_PTR_SET_VALUE(nonExistSnapshotJobIds_, nonExistSnapshotJobIds) };
    inline QuerySnapshotJobListResponseBody& setNonExistSnapshotJobIds(QuerySnapshotJobListResponseBodyNonExistSnapshotJobIds && nonExistSnapshotJobIds) { DARABONBA_PTR_SET_RVALUE(nonExistSnapshotJobIds_, nonExistSnapshotJobIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QuerySnapshotJobListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // snapshotJobList Field Functions 
    bool hasSnapshotJobList() const { return this->snapshotJobList_ != nullptr;};
    void deleteSnapshotJobList() { this->snapshotJobList_ = nullptr;};
    inline const QuerySnapshotJobListResponseBodySnapshotJobList & snapshotJobList() const { DARABONBA_PTR_GET_CONST(snapshotJobList_, QuerySnapshotJobListResponseBodySnapshotJobList) };
    inline QuerySnapshotJobListResponseBodySnapshotJobList snapshotJobList() { DARABONBA_PTR_GET(snapshotJobList_, QuerySnapshotJobListResponseBodySnapshotJobList) };
    inline QuerySnapshotJobListResponseBody& setSnapshotJobList(const QuerySnapshotJobListResponseBodySnapshotJobList & snapshotJobList) { DARABONBA_PTR_SET_VALUE(snapshotJobList_, snapshotJobList) };
    inline QuerySnapshotJobListResponseBody& setSnapshotJobList(QuerySnapshotJobListResponseBodySnapshotJobList && snapshotJobList) { DARABONBA_PTR_SET_RVALUE(snapshotJobList_, snapshotJobList) };


  protected:
    // The OSS object that is used as the input file.
    std::shared_ptr<string> nextPageToken_ = nullptr;
    // The OSS object that is generated as the output file of the tiling job.
    std::shared_ptr<QuerySnapshotJobListResponseBodyNonExistSnapshotJobIds> nonExistSnapshotJobIds_ = nullptr;
    // The ID of the snapshot job.
    std::shared_ptr<string> requestId_ = nullptr;
    // The distance between images.
    // 
    // *   Default value: **0**.
    // *   Unit: pixel.
    std::shared_ptr<QuerySnapshotJobListResponseBodySnapshotJobList> snapshotJobList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
