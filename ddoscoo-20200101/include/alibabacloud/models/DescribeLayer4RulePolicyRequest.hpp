// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELAYER4RULEPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELAYER4RULEPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeLayer4RulePolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLayer4RulePolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Listeners, listeners_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLayer4RulePolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Listeners, listeners_);
    };
    DescribeLayer4RulePolicyRequest() = default ;
    DescribeLayer4RulePolicyRequest(const DescribeLayer4RulePolicyRequest &) = default ;
    DescribeLayer4RulePolicyRequest(DescribeLayer4RulePolicyRequest &&) = default ;
    DescribeLayer4RulePolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLayer4RulePolicyRequest() = default ;
    DescribeLayer4RulePolicyRequest& operator=(const DescribeLayer4RulePolicyRequest &) = default ;
    DescribeLayer4RulePolicyRequest& operator=(DescribeLayer4RulePolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->listeners_ == nullptr; };
    // listeners Field Functions 
    bool hasListeners() const { return this->listeners_ != nullptr;};
    void deleteListeners() { this->listeners_ = nullptr;};
    inline string listeners() const { DARABONBA_PTR_GET_DEFAULT(listeners_, "") };
    inline DescribeLayer4RulePolicyRequest& setListeners(string listeners) { DARABONBA_PTR_SET_VALUE(listeners_, listeners) };


  protected:
    // The port forwarding rule that you want to query.
    // 
    // This parameter is a string that consists of JSON arrays. Each element in a JSON array indicates a port forwarding rule. You can query only one port forwarding rule at a time.
    // 
    // > You can call the [DescribeNetworkRules](https://help.aliyun.com/document_detail/157484.html) to query existing port forwarding rules.
    // 
    // Each port forwarding rule contains the following fields:
    // 
    // *   **InstanceId**: the ID of the instance. This field is required and must be of the string type.
    // *   **Protocol**: the forwarding protocol. This field is required and must be of the string type. Valid values: **tcp** and **udp**.
    // *   **FrontendPort**: the forwarding port. This field is required and must be of the integer type.
    // 
    // This parameter is required.
    std::shared_ptr<string> listeners_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
