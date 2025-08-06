// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEETINGROOMLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEETINGROOMLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryMeetingRoomListResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryMeetingRoomListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMeetingRoomListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(hasMore, hasMore_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMeetingRoomListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(hasMore, hasMore_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    QueryMeetingRoomListResponseBody() = default ;
    QueryMeetingRoomListResponseBody(const QueryMeetingRoomListResponseBody &) = default ;
    QueryMeetingRoomListResponseBody(QueryMeetingRoomListResponseBody &&) = default ;
    QueryMeetingRoomListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMeetingRoomListResponseBody() = default ;
    QueryMeetingRoomListResponseBody& operator=(const QueryMeetingRoomListResponseBody &) = default ;
    QueryMeetingRoomListResponseBody& operator=(QueryMeetingRoomListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hasMore_ != nullptr
        && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->result_ != nullptr; };
    // hasMore Field Functions 
    bool hasHasMore() const { return this->hasMore_ != nullptr;};
    void deleteHasMore() { this->hasMore_ = nullptr;};
    inline bool hasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
    inline QueryMeetingRoomListResponseBody& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline int64_t nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, 0L) };
    inline QueryMeetingRoomListResponseBody& setNextToken(int64_t nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryMeetingRoomListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<QueryMeetingRoomListResponseBodyResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<QueryMeetingRoomListResponseBodyResult>) };
    inline vector<QueryMeetingRoomListResponseBodyResult> result() { DARABONBA_PTR_GET(result_, vector<QueryMeetingRoomListResponseBodyResult>) };
    inline QueryMeetingRoomListResponseBody& setResult(const vector<QueryMeetingRoomListResponseBodyResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline QueryMeetingRoomListResponseBody& setResult(vector<QueryMeetingRoomListResponseBodyResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    std::shared_ptr<bool> hasMore_ = nullptr;
    std::shared_ptr<int64_t> nextToken_ = nullptr;
    // requestId
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<QueryMeetingRoomListResponseBodyResult>> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
