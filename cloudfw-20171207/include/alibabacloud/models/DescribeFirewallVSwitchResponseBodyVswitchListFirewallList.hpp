// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFIREWALLVSWITCHRESPONSEBODYVSWITCHLISTFIREWALLLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFIREWALLVSWITCHRESPONSEBODYVSWITCHLISTFIREWALLLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeFirewallVSwitchResponseBodyVswitchListFirewallList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFirewallVSwitchResponseBodyVswitchListFirewallList& obj) { 
      DARABONBA_PTR_TO_JSON(FirewallId, firewallId_);
      DARABONBA_PTR_TO_JSON(FirewallName, firewallName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFirewallVSwitchResponseBodyVswitchListFirewallList& obj) { 
      DARABONBA_PTR_FROM_JSON(FirewallId, firewallId_);
      DARABONBA_PTR_FROM_JSON(FirewallName, firewallName_);
    };
    DescribeFirewallVSwitchResponseBodyVswitchListFirewallList() = default ;
    DescribeFirewallVSwitchResponseBodyVswitchListFirewallList(const DescribeFirewallVSwitchResponseBodyVswitchListFirewallList &) = default ;
    DescribeFirewallVSwitchResponseBodyVswitchListFirewallList(DescribeFirewallVSwitchResponseBodyVswitchListFirewallList &&) = default ;
    DescribeFirewallVSwitchResponseBodyVswitchListFirewallList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFirewallVSwitchResponseBodyVswitchListFirewallList() = default ;
    DescribeFirewallVSwitchResponseBodyVswitchListFirewallList& operator=(const DescribeFirewallVSwitchResponseBodyVswitchListFirewallList &) = default ;
    DescribeFirewallVSwitchResponseBodyVswitchListFirewallList& operator=(DescribeFirewallVSwitchResponseBodyVswitchListFirewallList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->firewallId_ == nullptr
        && return this->firewallName_ == nullptr; };
    // firewallId Field Functions 
    bool hasFirewallId() const { return this->firewallId_ != nullptr;};
    void deleteFirewallId() { this->firewallId_ = nullptr;};
    inline string firewallId() const { DARABONBA_PTR_GET_DEFAULT(firewallId_, "") };
    inline DescribeFirewallVSwitchResponseBodyVswitchListFirewallList& setFirewallId(string firewallId) { DARABONBA_PTR_SET_VALUE(firewallId_, firewallId) };


    // firewallName Field Functions 
    bool hasFirewallName() const { return this->firewallName_ != nullptr;};
    void deleteFirewallName() { this->firewallName_ = nullptr;};
    inline string firewallName() const { DARABONBA_PTR_GET_DEFAULT(firewallName_, "") };
    inline DescribeFirewallVSwitchResponseBodyVswitchListFirewallList& setFirewallName(string firewallName) { DARABONBA_PTR_SET_VALUE(firewallName_, firewallName) };


  protected:
    std::shared_ptr<string> firewallId_ = nullptr;
    std::shared_ptr<string> firewallName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
