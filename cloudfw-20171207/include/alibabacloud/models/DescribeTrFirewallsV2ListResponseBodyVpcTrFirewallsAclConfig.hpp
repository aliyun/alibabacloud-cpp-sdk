// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRFIREWALLSV2LISTRESPONSEBODYVPCTRFIREWALLSACLCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRFIREWALLSV2LISTRESPONSEBODYVPCTRFIREWALLSACLCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsAclConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsAclConfig& obj) { 
      DARABONBA_PTR_TO_JSON(StrictMode, strictMode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsAclConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(StrictMode, strictMode_);
    };
    DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsAclConfig() = default ;
    DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsAclConfig(const DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsAclConfig &) = default ;
    DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsAclConfig(DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsAclConfig &&) = default ;
    DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsAclConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsAclConfig() = default ;
    DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsAclConfig& operator=(const DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsAclConfig &) = default ;
    DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsAclConfig& operator=(DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsAclConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->strictMode_ == nullptr; };
    // strictMode Field Functions 
    bool hasStrictMode() const { return this->strictMode_ != nullptr;};
    void deleteStrictMode() { this->strictMode_ = nullptr;};
    inline int32_t strictMode() const { DARABONBA_PTR_GET_DEFAULT(strictMode_, 0) };
    inline DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsAclConfig& setStrictMode(int32_t strictMode) { DARABONBA_PTR_SET_VALUE(strictMode_, strictMode) };


  protected:
    // Whether to enable strict mode
    // - 1: Enable strict mode
    // - 0: Disable strict mode
    std::shared_ptr<int32_t> strictMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
