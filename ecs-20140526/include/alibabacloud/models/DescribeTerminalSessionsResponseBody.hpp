// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETERMINALSESSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETERMINALSESSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeTerminalSessionsResponseBodySessions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeTerminalSessionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTerminalSessionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Sessions, sessions_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTerminalSessionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Sessions, sessions_);
    };
    DescribeTerminalSessionsResponseBody() = default ;
    DescribeTerminalSessionsResponseBody(const DescribeTerminalSessionsResponseBody &) = default ;
    DescribeTerminalSessionsResponseBody(DescribeTerminalSessionsResponseBody &&) = default ;
    DescribeTerminalSessionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTerminalSessionsResponseBody() = default ;
    DescribeTerminalSessionsResponseBody& operator=(const DescribeTerminalSessionsResponseBody &) = default ;
    DescribeTerminalSessionsResponseBody& operator=(DescribeTerminalSessionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nextToken_ != nullptr
        && this->requestId_ != nullptr && this->sessions_ != nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeTerminalSessionsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTerminalSessionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sessions Field Functions 
    bool hasSessions() const { return this->sessions_ != nullptr;};
    void deleteSessions() { this->sessions_ = nullptr;};
    inline const DescribeTerminalSessionsResponseBodySessions & sessions() const { DARABONBA_PTR_GET_CONST(sessions_, DescribeTerminalSessionsResponseBodySessions) };
    inline DescribeTerminalSessionsResponseBodySessions sessions() { DARABONBA_PTR_GET(sessions_, DescribeTerminalSessionsResponseBodySessions) };
    inline DescribeTerminalSessionsResponseBody& setSessions(const DescribeTerminalSessionsResponseBodySessions & sessions) { DARABONBA_PTR_SET_VALUE(sessions_, sessions) };
    inline DescribeTerminalSessionsResponseBody& setSessions(DescribeTerminalSessionsResponseBodySessions && sessions) { DARABONBA_PTR_SET_RVALUE(sessions_, sessions) };


  protected:
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information of the sessions.
    std::shared_ptr<DescribeTerminalSessionsResponseBodySessions> sessions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
