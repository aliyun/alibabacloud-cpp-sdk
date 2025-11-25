// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECREATEDNATFIREWALLRESPONSEBODYCREATEDNATFIREWALLS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECREATEDNATFIREWALLRESPONSEBODYCREATEDNATFIREWALLS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeCreatedNatFirewallResponseBodyCreatedNatFirewalls : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCreatedNatFirewallResponseBodyCreatedNatFirewalls& obj) { 
      DARABONBA_PTR_TO_JSON(NatFirewallId, natFirewallId_);
      DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_TO_JSON(NatGatewayName, natGatewayName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCreatedNatFirewallResponseBodyCreatedNatFirewalls& obj) { 
      DARABONBA_PTR_FROM_JSON(NatFirewallId, natFirewallId_);
      DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_FROM_JSON(NatGatewayName, natGatewayName_);
    };
    DescribeCreatedNatFirewallResponseBodyCreatedNatFirewalls() = default ;
    DescribeCreatedNatFirewallResponseBodyCreatedNatFirewalls(const DescribeCreatedNatFirewallResponseBodyCreatedNatFirewalls &) = default ;
    DescribeCreatedNatFirewallResponseBodyCreatedNatFirewalls(DescribeCreatedNatFirewallResponseBodyCreatedNatFirewalls &&) = default ;
    DescribeCreatedNatFirewallResponseBodyCreatedNatFirewalls(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCreatedNatFirewallResponseBodyCreatedNatFirewalls() = default ;
    DescribeCreatedNatFirewallResponseBodyCreatedNatFirewalls& operator=(const DescribeCreatedNatFirewallResponseBodyCreatedNatFirewalls &) = default ;
    DescribeCreatedNatFirewallResponseBodyCreatedNatFirewalls& operator=(DescribeCreatedNatFirewallResponseBodyCreatedNatFirewalls &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->natFirewallId_ == nullptr
        && return this->natGatewayId_ == nullptr && return this->natGatewayName_ == nullptr; };
    // natFirewallId Field Functions 
    bool hasNatFirewallId() const { return this->natFirewallId_ != nullptr;};
    void deleteNatFirewallId() { this->natFirewallId_ = nullptr;};
    inline string natFirewallId() const { DARABONBA_PTR_GET_DEFAULT(natFirewallId_, "") };
    inline DescribeCreatedNatFirewallResponseBodyCreatedNatFirewalls& setNatFirewallId(string natFirewallId) { DARABONBA_PTR_SET_VALUE(natFirewallId_, natFirewallId) };


    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string natGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline DescribeCreatedNatFirewallResponseBodyCreatedNatFirewalls& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


    // natGatewayName Field Functions 
    bool hasNatGatewayName() const { return this->natGatewayName_ != nullptr;};
    void deleteNatGatewayName() { this->natGatewayName_ = nullptr;};
    inline string natGatewayName() const { DARABONBA_PTR_GET_DEFAULT(natGatewayName_, "") };
    inline DescribeCreatedNatFirewallResponseBodyCreatedNatFirewalls& setNatGatewayName(string natGatewayName) { DARABONBA_PTR_SET_VALUE(natGatewayName_, natGatewayName) };


  protected:
    std::shared_ptr<string> natFirewallId_ = nullptr;
    std::shared_ptr<string> natGatewayId_ = nullptr;
    std::shared_ptr<string> natGatewayName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
