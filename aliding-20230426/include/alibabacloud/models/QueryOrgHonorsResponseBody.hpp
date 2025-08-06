// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYORGHONORSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYORGHONORSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryOrgHonorsResponseBodyOpenHonors.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryOrgHonorsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryOrgHonorsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(openHonors, openHonors_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryOrgHonorsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(openHonors, openHonors_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    QueryOrgHonorsResponseBody() = default ;
    QueryOrgHonorsResponseBody(const QueryOrgHonorsResponseBody &) = default ;
    QueryOrgHonorsResponseBody(QueryOrgHonorsResponseBody &&) = default ;
    QueryOrgHonorsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryOrgHonorsResponseBody() = default ;
    QueryOrgHonorsResponseBody& operator=(const QueryOrgHonorsResponseBody &) = default ;
    QueryOrgHonorsResponseBody& operator=(QueryOrgHonorsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nextToken_ != nullptr
        && this->openHonors_ != nullptr && this->requestId_ != nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline QueryOrgHonorsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // openHonors Field Functions 
    bool hasOpenHonors() const { return this->openHonors_ != nullptr;};
    void deleteOpenHonors() { this->openHonors_ = nullptr;};
    inline const vector<QueryOrgHonorsResponseBodyOpenHonors> & openHonors() const { DARABONBA_PTR_GET_CONST(openHonors_, vector<QueryOrgHonorsResponseBodyOpenHonors>) };
    inline vector<QueryOrgHonorsResponseBodyOpenHonors> openHonors() { DARABONBA_PTR_GET(openHonors_, vector<QueryOrgHonorsResponseBodyOpenHonors>) };
    inline QueryOrgHonorsResponseBody& setOpenHonors(const vector<QueryOrgHonorsResponseBodyOpenHonors> & openHonors) { DARABONBA_PTR_SET_VALUE(openHonors_, openHonors) };
    inline QueryOrgHonorsResponseBody& setOpenHonors(vector<QueryOrgHonorsResponseBodyOpenHonors> && openHonors) { DARABONBA_PTR_SET_RVALUE(openHonors_, openHonors) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryOrgHonorsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<vector<QueryOrgHonorsResponseBodyOpenHonors>> openHonors_ = nullptr;
    // requestId
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
