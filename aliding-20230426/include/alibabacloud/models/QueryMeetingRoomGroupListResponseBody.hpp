// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEETINGROOMGROUPLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEETINGROOMGROUPLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryMeetingRoomGroupListResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryMeetingRoomGroupListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMeetingRoomGroupListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMeetingRoomGroupListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    QueryMeetingRoomGroupListResponseBody() = default ;
    QueryMeetingRoomGroupListResponseBody(const QueryMeetingRoomGroupListResponseBody &) = default ;
    QueryMeetingRoomGroupListResponseBody(QueryMeetingRoomGroupListResponseBody &&) = default ;
    QueryMeetingRoomGroupListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMeetingRoomGroupListResponseBody() = default ;
    QueryMeetingRoomGroupListResponseBody& operator=(const QueryMeetingRoomGroupListResponseBody &) = default ;
    QueryMeetingRoomGroupListResponseBody& operator=(QueryMeetingRoomGroupListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->result_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryMeetingRoomGroupListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<QueryMeetingRoomGroupListResponseBodyResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<QueryMeetingRoomGroupListResponseBodyResult>) };
    inline vector<QueryMeetingRoomGroupListResponseBodyResult> result() { DARABONBA_PTR_GET(result_, vector<QueryMeetingRoomGroupListResponseBodyResult>) };
    inline QueryMeetingRoomGroupListResponseBody& setResult(const vector<QueryMeetingRoomGroupListResponseBodyResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline QueryMeetingRoomGroupListResponseBody& setResult(vector<QueryMeetingRoomGroupListResponseBodyResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // requestId
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<QueryMeetingRoomGroupListResponseBodyResult>> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
