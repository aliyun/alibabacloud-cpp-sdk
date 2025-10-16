// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACLENTRIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACLENTRIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAclEntriesResponseBodyAclEntries.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeAclEntriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAclEntriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AclEntries, aclEntries_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAclEntriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AclEntries, aclEntries_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAclEntriesResponseBody() = default ;
    DescribeAclEntriesResponseBody(const DescribeAclEntriesResponseBody &) = default ;
    DescribeAclEntriesResponseBody(DescribeAclEntriesResponseBody &&) = default ;
    DescribeAclEntriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAclEntriesResponseBody() = default ;
    DescribeAclEntriesResponseBody& operator=(const DescribeAclEntriesResponseBody &) = default ;
    DescribeAclEntriesResponseBody& operator=(DescribeAclEntriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclEntries_ == nullptr
        && return this->nextToken_ == nullptr && return this->requestId_ == nullptr; };
    // aclEntries Field Functions 
    bool hasAclEntries() const { return this->aclEntries_ != nullptr;};
    void deleteAclEntries() { this->aclEntries_ = nullptr;};
    inline const vector<DescribeAclEntriesResponseBodyAclEntries> & aclEntries() const { DARABONBA_PTR_GET_CONST(aclEntries_, vector<DescribeAclEntriesResponseBodyAclEntries>) };
    inline vector<DescribeAclEntriesResponseBodyAclEntries> aclEntries() { DARABONBA_PTR_GET(aclEntries_, vector<DescribeAclEntriesResponseBodyAclEntries>) };
    inline DescribeAclEntriesResponseBody& setAclEntries(const vector<DescribeAclEntriesResponseBodyAclEntries> & aclEntries) { DARABONBA_PTR_SET_VALUE(aclEntries_, aclEntries) };
    inline DescribeAclEntriesResponseBody& setAclEntries(vector<DescribeAclEntriesResponseBodyAclEntries> && aclEntries) { DARABONBA_PTR_SET_RVALUE(aclEntries_, aclEntries) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeAclEntriesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAclEntriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ACL entries.
    std::shared_ptr<vector<DescribeAclEntriesResponseBodyAclEntries>> aclEntries_ = nullptr;
    // The token that is used to start the next query. If the value of this parameter is empty, all results are returned.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
