// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYUSERHONORSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYUSERHONORSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryUserHonorsResponseBodyHonors.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryUserHonorsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryUserHonorsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(honors, honors_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryUserHonorsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(honors, honors_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    QueryUserHonorsResponseBody() = default ;
    QueryUserHonorsResponseBody(const QueryUserHonorsResponseBody &) = default ;
    QueryUserHonorsResponseBody(QueryUserHonorsResponseBody &&) = default ;
    QueryUserHonorsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryUserHonorsResponseBody() = default ;
    QueryUserHonorsResponseBody& operator=(const QueryUserHonorsResponseBody &) = default ;
    QueryUserHonorsResponseBody& operator=(QueryUserHonorsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->honors_ == nullptr
        && return this->nextToken_ == nullptr && return this->requestId_ == nullptr; };
    // honors Field Functions 
    bool hasHonors() const { return this->honors_ != nullptr;};
    void deleteHonors() { this->honors_ = nullptr;};
    inline const vector<QueryUserHonorsResponseBodyHonors> & honors() const { DARABONBA_PTR_GET_CONST(honors_, vector<QueryUserHonorsResponseBodyHonors>) };
    inline vector<QueryUserHonorsResponseBodyHonors> honors() { DARABONBA_PTR_GET(honors_, vector<QueryUserHonorsResponseBodyHonors>) };
    inline QueryUserHonorsResponseBody& setHonors(const vector<QueryUserHonorsResponseBodyHonors> & honors) { DARABONBA_PTR_SET_VALUE(honors_, honors) };
    inline QueryUserHonorsResponseBody& setHonors(vector<QueryUserHonorsResponseBodyHonors> && honors) { DARABONBA_PTR_SET_RVALUE(honors_, honors) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline QueryUserHonorsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryUserHonorsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<QueryUserHonorsResponseBodyHonors>> honors_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    // requestId
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
