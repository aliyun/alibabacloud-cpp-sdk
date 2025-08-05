// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLLISTRESPONSEBODYVPCFIREWALLSACLCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLLISTRESPONSEBODYVPCFIREWALLSACLCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeVpcFirewallListResponseBodyVpcFirewallsAclConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcFirewallListResponseBodyVpcFirewallsAclConfig& obj) { 
      DARABONBA_PTR_TO_JSON(StrictMode, strictMode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcFirewallListResponseBodyVpcFirewallsAclConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(StrictMode, strictMode_);
    };
    DescribeVpcFirewallListResponseBodyVpcFirewallsAclConfig() = default ;
    DescribeVpcFirewallListResponseBodyVpcFirewallsAclConfig(const DescribeVpcFirewallListResponseBodyVpcFirewallsAclConfig &) = default ;
    DescribeVpcFirewallListResponseBodyVpcFirewallsAclConfig(DescribeVpcFirewallListResponseBodyVpcFirewallsAclConfig &&) = default ;
    DescribeVpcFirewallListResponseBodyVpcFirewallsAclConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcFirewallListResponseBodyVpcFirewallsAclConfig() = default ;
    DescribeVpcFirewallListResponseBodyVpcFirewallsAclConfig& operator=(const DescribeVpcFirewallListResponseBodyVpcFirewallsAclConfig &) = default ;
    DescribeVpcFirewallListResponseBodyVpcFirewallsAclConfig& operator=(DescribeVpcFirewallListResponseBodyVpcFirewallsAclConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->strictMode_ != nullptr; };
    // strictMode Field Functions 
    bool hasStrictMode() const { return this->strictMode_ != nullptr;};
    void deleteStrictMode() { this->strictMode_ = nullptr;};
    inline int32_t strictMode() const { DARABONBA_PTR_GET_DEFAULT(strictMode_, 0) };
    inline DescribeVpcFirewallListResponseBodyVpcFirewallsAclConfig& setStrictMode(int32_t strictMode) { DARABONBA_PTR_SET_VALUE(strictMode_, strictMode) };


  protected:
    // Specifies whether to enable the strict mode. Valid values:
    // 
    // *   1: yes
    // *   0: no
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> strictMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
