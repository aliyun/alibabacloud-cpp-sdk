// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVPCFIREWALLCENCONFIGURERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEVPCFIREWALLCENCONFIGURERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class CreateVpcFirewallCenConfigureResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVpcFirewallCenConfigureResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VpcFirewallId, vpcFirewallId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVpcFirewallCenConfigureResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VpcFirewallId, vpcFirewallId_);
    };
    CreateVpcFirewallCenConfigureResponseBody() = default ;
    CreateVpcFirewallCenConfigureResponseBody(const CreateVpcFirewallCenConfigureResponseBody &) = default ;
    CreateVpcFirewallCenConfigureResponseBody(CreateVpcFirewallCenConfigureResponseBody &&) = default ;
    CreateVpcFirewallCenConfigureResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVpcFirewallCenConfigureResponseBody() = default ;
    CreateVpcFirewallCenConfigureResponseBody& operator=(const CreateVpcFirewallCenConfigureResponseBody &) = default ;
    CreateVpcFirewallCenConfigureResponseBody& operator=(CreateVpcFirewallCenConfigureResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->vpcFirewallId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateVpcFirewallCenConfigureResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vpcFirewallId Field Functions 
    bool hasVpcFirewallId() const { return this->vpcFirewallId_ != nullptr;};
    void deleteVpcFirewallId() { this->vpcFirewallId_ = nullptr;};
    inline string getVpcFirewallId() const { DARABONBA_PTR_GET_DEFAULT(vpcFirewallId_, "") };
    inline CreateVpcFirewallCenConfigureResponseBody& setVpcFirewallId(string vpcFirewallId) { DARABONBA_PTR_SET_VALUE(vpcFirewallId_, vpcFirewallId) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The instance ID of the VPC firewall.
    shared_ptr<string> vpcFirewallId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
