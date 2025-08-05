// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENATFIREWALLPOLICYPRIORUSEDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENATFIREWALLPOLICYPRIORUSEDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeNatFirewallPolicyPriorUsedResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNatFirewallPolicyPriorUsedResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(End, end_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Start, start_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNatFirewallPolicyPriorUsedResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(End, end_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Start, start_);
    };
    DescribeNatFirewallPolicyPriorUsedResponseBody() = default ;
    DescribeNatFirewallPolicyPriorUsedResponseBody(const DescribeNatFirewallPolicyPriorUsedResponseBody &) = default ;
    DescribeNatFirewallPolicyPriorUsedResponseBody(DescribeNatFirewallPolicyPriorUsedResponseBody &&) = default ;
    DescribeNatFirewallPolicyPriorUsedResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNatFirewallPolicyPriorUsedResponseBody() = default ;
    DescribeNatFirewallPolicyPriorUsedResponseBody& operator=(const DescribeNatFirewallPolicyPriorUsedResponseBody &) = default ;
    DescribeNatFirewallPolicyPriorUsedResponseBody& operator=(DescribeNatFirewallPolicyPriorUsedResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->end_ != nullptr
        && this->requestId_ != nullptr && this->start_ != nullptr; };
    // end Field Functions 
    bool hasEnd() const { return this->end_ != nullptr;};
    void deleteEnd() { this->end_ = nullptr;};
    inline int32_t end() const { DARABONBA_PTR_GET_DEFAULT(end_, 0) };
    inline DescribeNatFirewallPolicyPriorUsedResponseBody& setEnd(int32_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNatFirewallPolicyPriorUsedResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline int32_t start() const { DARABONBA_PTR_GET_DEFAULT(start_, 0) };
    inline DescribeNatFirewallPolicyPriorUsedResponseBody& setStart(int32_t start) { DARABONBA_PTR_SET_VALUE(start_, start) };


  protected:
    // The lowest priority for the access control policy.
    std::shared_ptr<int32_t> end_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The highest priority for the access control policy.
    std::shared_ptr<int32_t> start_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
