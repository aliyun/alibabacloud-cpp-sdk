// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIPV6EGRESSONLYRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEIPV6EGRESSONLYRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateIpv6EgressOnlyRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIpv6EgressOnlyRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Ipv6EgressRuleId, ipv6EgressRuleId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIpv6EgressOnlyRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Ipv6EgressRuleId, ipv6EgressRuleId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateIpv6EgressOnlyRuleResponseBody() = default ;
    CreateIpv6EgressOnlyRuleResponseBody(const CreateIpv6EgressOnlyRuleResponseBody &) = default ;
    CreateIpv6EgressOnlyRuleResponseBody(CreateIpv6EgressOnlyRuleResponseBody &&) = default ;
    CreateIpv6EgressOnlyRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIpv6EgressOnlyRuleResponseBody() = default ;
    CreateIpv6EgressOnlyRuleResponseBody& operator=(const CreateIpv6EgressOnlyRuleResponseBody &) = default ;
    CreateIpv6EgressOnlyRuleResponseBody& operator=(CreateIpv6EgressOnlyRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ipv6EgressRuleId_ == nullptr
        && return this->requestId_ == nullptr; };
    // ipv6EgressRuleId Field Functions 
    bool hasIpv6EgressRuleId() const { return this->ipv6EgressRuleId_ != nullptr;};
    void deleteIpv6EgressRuleId() { this->ipv6EgressRuleId_ = nullptr;};
    inline string ipv6EgressRuleId() const { DARABONBA_PTR_GET_DEFAULT(ipv6EgressRuleId_, "") };
    inline CreateIpv6EgressOnlyRuleResponseBody& setIpv6EgressRuleId(string ipv6EgressRuleId) { DARABONBA_PTR_SET_VALUE(ipv6EgressRuleId_, ipv6EgressRuleId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateIpv6EgressOnlyRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the egress-only rule.
    std::shared_ptr<string> ipv6EgressRuleId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
