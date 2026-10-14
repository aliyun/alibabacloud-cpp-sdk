// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKRULEATTRIBUTESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKRULEATTRIBUTESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeNetworkRuleAttributesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkRuleAttributesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkRules, networkRules_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkRuleAttributesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkRules, networkRules_);
    };
    DescribeNetworkRuleAttributesRequest() = default ;
    DescribeNetworkRuleAttributesRequest(const DescribeNetworkRuleAttributesRequest &) = default ;
    DescribeNetworkRuleAttributesRequest(DescribeNetworkRuleAttributesRequest &&) = default ;
    DescribeNetworkRuleAttributesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkRuleAttributesRequest() = default ;
    DescribeNetworkRuleAttributesRequest& operator=(const DescribeNetworkRuleAttributesRequest &) = default ;
    DescribeNetworkRuleAttributesRequest& operator=(DescribeNetworkRuleAttributesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->networkRules_ == nullptr; };
    // networkRules Field Functions 
    bool hasNetworkRules() const { return this->networkRules_ != nullptr;};
    void deleteNetworkRules() { this->networkRules_ = nullptr;};
    inline string getNetworkRules() const { DARABONBA_PTR_GET_DEFAULT(networkRules_, "") };
    inline DescribeNetworkRuleAttributesRequest& setNetworkRules(string networkRules) { DARABONBA_PTR_SET_VALUE(networkRules_, networkRules) };


  protected:
    // The port forwarding rules to query. This parameter is a JSON string with the following structure:
    // - **InstanceId**: String type. Required. The ID of the Anti-DDoS Pro or Anti-DDoS Premium instance.
    // - **Protocol**: String type. Required. The forwarding protocol type. Valid values: **tcp**, **udp**.
    // - **FrontendPort**: Integer type. Required. The forwarding port.
    // 
    // This parameter is required.
    shared_ptr<string> networkRules_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
