// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEORGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEORGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeOrgsResponseBodyOrgs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class DescribeOrgsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOrgsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Orgs, orgs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOrgsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Orgs, orgs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeOrgsResponseBody() = default ;
    DescribeOrgsResponseBody(const DescribeOrgsResponseBody &) = default ;
    DescribeOrgsResponseBody(DescribeOrgsResponseBody &&) = default ;
    DescribeOrgsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOrgsResponseBody() = default ;
    DescribeOrgsResponseBody& operator=(const DescribeOrgsResponseBody &) = default ;
    DescribeOrgsResponseBody& operator=(DescribeOrgsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nextToken_ == nullptr
        && return this->orgs_ == nullptr && return this->requestId_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeOrgsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // orgs Field Functions 
    bool hasOrgs() const { return this->orgs_ != nullptr;};
    void deleteOrgs() { this->orgs_ = nullptr;};
    inline const vector<DescribeOrgsResponseBodyOrgs> & orgs() const { DARABONBA_PTR_GET_CONST(orgs_, vector<DescribeOrgsResponseBodyOrgs>) };
    inline vector<DescribeOrgsResponseBodyOrgs> orgs() { DARABONBA_PTR_GET(orgs_, vector<DescribeOrgsResponseBodyOrgs>) };
    inline DescribeOrgsResponseBody& setOrgs(const vector<DescribeOrgsResponseBodyOrgs> & orgs) { DARABONBA_PTR_SET_VALUE(orgs_, orgs) };
    inline DescribeOrgsResponseBody& setOrgs(vector<DescribeOrgsResponseBodyOrgs> && orgs) { DARABONBA_PTR_SET_RVALUE(orgs_, orgs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeOrgsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The token that determines the start point of the query. The return value is the value of the NextToken response parameter that was returned last time the DescribeOrgs operation was called.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The organizations.
    std::shared_ptr<vector<DescribeOrgsResponseBodyOrgs>> orgs_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
