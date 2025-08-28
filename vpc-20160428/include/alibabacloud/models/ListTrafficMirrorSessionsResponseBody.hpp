// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRAFFICMIRRORSESSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTRAFFICMIRRORSESSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTrafficMirrorSessionsResponseBodyTrafficMirrorSessions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ListTrafficMirrorSessionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTrafficMirrorSessionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TrafficMirrorSessions, trafficMirrorSessions_);
    };
    friend void from_json(const Darabonba::Json& j, ListTrafficMirrorSessionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TrafficMirrorSessions, trafficMirrorSessions_);
    };
    ListTrafficMirrorSessionsResponseBody() = default ;
    ListTrafficMirrorSessionsResponseBody(const ListTrafficMirrorSessionsResponseBody &) = default ;
    ListTrafficMirrorSessionsResponseBody(ListTrafficMirrorSessionsResponseBody &&) = default ;
    ListTrafficMirrorSessionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTrafficMirrorSessionsResponseBody() = default ;
    ListTrafficMirrorSessionsResponseBody& operator=(const ListTrafficMirrorSessionsResponseBody &) = default ;
    ListTrafficMirrorSessionsResponseBody& operator=(ListTrafficMirrorSessionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nextToken_ != nullptr
        && this->requestId_ != nullptr && this->totalCount_ != nullptr && this->trafficMirrorSessions_ != nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTrafficMirrorSessionsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTrafficMirrorSessionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListTrafficMirrorSessionsResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // trafficMirrorSessions Field Functions 
    bool hasTrafficMirrorSessions() const { return this->trafficMirrorSessions_ != nullptr;};
    void deleteTrafficMirrorSessions() { this->trafficMirrorSessions_ = nullptr;};
    inline const vector<ListTrafficMirrorSessionsResponseBodyTrafficMirrorSessions> & trafficMirrorSessions() const { DARABONBA_PTR_GET_CONST(trafficMirrorSessions_, vector<ListTrafficMirrorSessionsResponseBodyTrafficMirrorSessions>) };
    inline vector<ListTrafficMirrorSessionsResponseBodyTrafficMirrorSessions> trafficMirrorSessions() { DARABONBA_PTR_GET(trafficMirrorSessions_, vector<ListTrafficMirrorSessionsResponseBodyTrafficMirrorSessions>) };
    inline ListTrafficMirrorSessionsResponseBody& setTrafficMirrorSessions(const vector<ListTrafficMirrorSessionsResponseBodyTrafficMirrorSessions> & trafficMirrorSessions) { DARABONBA_PTR_SET_VALUE(trafficMirrorSessions_, trafficMirrorSessions) };
    inline ListTrafficMirrorSessionsResponseBody& setTrafficMirrorSessions(vector<ListTrafficMirrorSessionsResponseBodyTrafficMirrorSessions> && trafficMirrorSessions) { DARABONBA_PTR_SET_RVALUE(trafficMirrorSessions_, trafficMirrorSessions) };


  protected:
    // The token that is used for the next query. Valid values:
    // 
    // *   If no value is returned for **NextToken**, no next queries are sent.
    // *   If a value of **NextToken** is returned, the value is the token that is used for the subsequent query.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<string> totalCount_ = nullptr;
    // The details about the traffic mirror session.
    std::shared_ptr<vector<ListTrafficMirrorSessionsResponseBodyTrafficMirrorSessions>> trafficMirrorSessions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
