// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTOSNAPSHOTPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTOSNAPSHOTPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAutoSnapshotPolicyResponseBodyAutoSnapshotPolicies.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeAutoSnapshotPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAutoSnapshotPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AutoSnapshotPolicies, autoSnapshotPolicies_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAutoSnapshotPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoSnapshotPolicies, autoSnapshotPolicies_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAutoSnapshotPolicyResponseBody() = default ;
    DescribeAutoSnapshotPolicyResponseBody(const DescribeAutoSnapshotPolicyResponseBody &) = default ;
    DescribeAutoSnapshotPolicyResponseBody(DescribeAutoSnapshotPolicyResponseBody &&) = default ;
    DescribeAutoSnapshotPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAutoSnapshotPolicyResponseBody() = default ;
    DescribeAutoSnapshotPolicyResponseBody& operator=(const DescribeAutoSnapshotPolicyResponseBody &) = default ;
    DescribeAutoSnapshotPolicyResponseBody& operator=(DescribeAutoSnapshotPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoSnapshotPolicies_ != nullptr
        && this->nextToken_ != nullptr && this->requestId_ != nullptr; };
    // autoSnapshotPolicies Field Functions 
    bool hasAutoSnapshotPolicies() const { return this->autoSnapshotPolicies_ != nullptr;};
    void deleteAutoSnapshotPolicies() { this->autoSnapshotPolicies_ = nullptr;};
    inline const vector<DescribeAutoSnapshotPolicyResponseBodyAutoSnapshotPolicies> & autoSnapshotPolicies() const { DARABONBA_PTR_GET_CONST(autoSnapshotPolicies_, vector<DescribeAutoSnapshotPolicyResponseBodyAutoSnapshotPolicies>) };
    inline vector<DescribeAutoSnapshotPolicyResponseBodyAutoSnapshotPolicies> autoSnapshotPolicies() { DARABONBA_PTR_GET(autoSnapshotPolicies_, vector<DescribeAutoSnapshotPolicyResponseBodyAutoSnapshotPolicies>) };
    inline DescribeAutoSnapshotPolicyResponseBody& setAutoSnapshotPolicies(const vector<DescribeAutoSnapshotPolicyResponseBodyAutoSnapshotPolicies> & autoSnapshotPolicies) { DARABONBA_PTR_SET_VALUE(autoSnapshotPolicies_, autoSnapshotPolicies) };
    inline DescribeAutoSnapshotPolicyResponseBody& setAutoSnapshotPolicies(vector<DescribeAutoSnapshotPolicyResponseBodyAutoSnapshotPolicies> && autoSnapshotPolicies) { DARABONBA_PTR_SET_RVALUE(autoSnapshotPolicies_, autoSnapshotPolicies) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeAutoSnapshotPolicyResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAutoSnapshotPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the queried automatic snapshot policies.
    std::shared_ptr<vector<DescribeAutoSnapshotPolicyResponseBodyAutoSnapshotPolicies>> autoSnapshotPolicies_ = nullptr;
    // The token that is used to start the next query. If this parameter is empty, all results haven been returned.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
