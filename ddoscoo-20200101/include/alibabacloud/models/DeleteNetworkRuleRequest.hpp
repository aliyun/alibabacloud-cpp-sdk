// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETENETWORKRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETENETWORKRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DeleteNetworkRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteNetworkRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkRule, networkRule_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteNetworkRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkRule, networkRule_);
    };
    DeleteNetworkRuleRequest() = default ;
    DeleteNetworkRuleRequest(const DeleteNetworkRuleRequest &) = default ;
    DeleteNetworkRuleRequest(DeleteNetworkRuleRequest &&) = default ;
    DeleteNetworkRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteNetworkRuleRequest() = default ;
    DeleteNetworkRuleRequest& operator=(const DeleteNetworkRuleRequest &) = default ;
    DeleteNetworkRuleRequest& operator=(DeleteNetworkRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->networkRule_ != nullptr; };
    // networkRule Field Functions 
    bool hasNetworkRule() const { return this->networkRule_ != nullptr;};
    void deleteNetworkRule() { this->networkRule_ = nullptr;};
    inline string networkRule() const { DARABONBA_PTR_GET_DEFAULT(networkRule_, "") };
    inline DeleteNetworkRuleRequest& setNetworkRule(string networkRule) { DARABONBA_PTR_SET_VALUE(networkRule_, networkRule) };


  protected:
    // An array that consists of the information about the port forwarding rule. This parameter is a JSON string. The string contains the following fields:
    // 
    // *   **InstanceId**: the ID of the instance. This field is required and must be of the STRING type.
    // *   **Protocol**: the forwarding protocol. This field is required and must be of the STRING type. Valid values: **tcp** and **udp**.
    // *   **FrontendPort**: the forwarding port. This field is required and must be of the INTEGER type.
    // 
    // This parameter is required.
    std::shared_ptr<string> networkRule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
