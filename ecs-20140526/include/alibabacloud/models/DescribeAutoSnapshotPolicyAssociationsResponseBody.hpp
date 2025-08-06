// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTOSNAPSHOTPOLICYASSOCIATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTOSNAPSHOTPOLICYASSOCIATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAutoSnapshotPolicyAssociationsResponseBodyAutoSnapshotPolicyAssociations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeAutoSnapshotPolicyAssociationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAutoSnapshotPolicyAssociationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AutoSnapshotPolicyAssociations, autoSnapshotPolicyAssociations_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAutoSnapshotPolicyAssociationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoSnapshotPolicyAssociations, autoSnapshotPolicyAssociations_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAutoSnapshotPolicyAssociationsResponseBody() = default ;
    DescribeAutoSnapshotPolicyAssociationsResponseBody(const DescribeAutoSnapshotPolicyAssociationsResponseBody &) = default ;
    DescribeAutoSnapshotPolicyAssociationsResponseBody(DescribeAutoSnapshotPolicyAssociationsResponseBody &&) = default ;
    DescribeAutoSnapshotPolicyAssociationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAutoSnapshotPolicyAssociationsResponseBody() = default ;
    DescribeAutoSnapshotPolicyAssociationsResponseBody& operator=(const DescribeAutoSnapshotPolicyAssociationsResponseBody &) = default ;
    DescribeAutoSnapshotPolicyAssociationsResponseBody& operator=(DescribeAutoSnapshotPolicyAssociationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoSnapshotPolicyAssociations_ != nullptr
        && this->nextToken_ != nullptr && this->requestId_ != nullptr; };
    // autoSnapshotPolicyAssociations Field Functions 
    bool hasAutoSnapshotPolicyAssociations() const { return this->autoSnapshotPolicyAssociations_ != nullptr;};
    void deleteAutoSnapshotPolicyAssociations() { this->autoSnapshotPolicyAssociations_ = nullptr;};
    inline const DescribeAutoSnapshotPolicyAssociationsResponseBodyAutoSnapshotPolicyAssociations & autoSnapshotPolicyAssociations() const { DARABONBA_PTR_GET_CONST(autoSnapshotPolicyAssociations_, DescribeAutoSnapshotPolicyAssociationsResponseBodyAutoSnapshotPolicyAssociations) };
    inline DescribeAutoSnapshotPolicyAssociationsResponseBodyAutoSnapshotPolicyAssociations autoSnapshotPolicyAssociations() { DARABONBA_PTR_GET(autoSnapshotPolicyAssociations_, DescribeAutoSnapshotPolicyAssociationsResponseBodyAutoSnapshotPolicyAssociations) };
    inline DescribeAutoSnapshotPolicyAssociationsResponseBody& setAutoSnapshotPolicyAssociations(const DescribeAutoSnapshotPolicyAssociationsResponseBodyAutoSnapshotPolicyAssociations & autoSnapshotPolicyAssociations) { DARABONBA_PTR_SET_VALUE(autoSnapshotPolicyAssociations_, autoSnapshotPolicyAssociations) };
    inline DescribeAutoSnapshotPolicyAssociationsResponseBody& setAutoSnapshotPolicyAssociations(DescribeAutoSnapshotPolicyAssociationsResponseBodyAutoSnapshotPolicyAssociations && autoSnapshotPolicyAssociations) { DARABONBA_PTR_SET_RVALUE(autoSnapshotPolicyAssociations_, autoSnapshotPolicyAssociations) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeAutoSnapshotPolicyAssociationsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAutoSnapshotPolicyAssociationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<DescribeAutoSnapshotPolicyAssociationsResponseBodyAutoSnapshotPolicyAssociations> autoSnapshotPolicyAssociations_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
