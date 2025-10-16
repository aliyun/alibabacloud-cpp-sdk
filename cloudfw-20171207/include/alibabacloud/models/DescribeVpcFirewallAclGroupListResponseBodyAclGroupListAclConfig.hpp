// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLACLGROUPLISTRESPONSEBODYACLGROUPLISTACLCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLACLGROUPLISTRESPONSEBODYACLGROUPLISTACLCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeVpcFirewallAclGroupListResponseBodyAclGroupListAclConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcFirewallAclGroupListResponseBodyAclGroupListAclConfig& obj) { 
      DARABONBA_PTR_TO_JSON(StrictMode, strictMode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcFirewallAclGroupListResponseBodyAclGroupListAclConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(StrictMode, strictMode_);
    };
    DescribeVpcFirewallAclGroupListResponseBodyAclGroupListAclConfig() = default ;
    DescribeVpcFirewallAclGroupListResponseBodyAclGroupListAclConfig(const DescribeVpcFirewallAclGroupListResponseBodyAclGroupListAclConfig &) = default ;
    DescribeVpcFirewallAclGroupListResponseBodyAclGroupListAclConfig(DescribeVpcFirewallAclGroupListResponseBodyAclGroupListAclConfig &&) = default ;
    DescribeVpcFirewallAclGroupListResponseBodyAclGroupListAclConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcFirewallAclGroupListResponseBodyAclGroupListAclConfig() = default ;
    DescribeVpcFirewallAclGroupListResponseBodyAclGroupListAclConfig& operator=(const DescribeVpcFirewallAclGroupListResponseBodyAclGroupListAclConfig &) = default ;
    DescribeVpcFirewallAclGroupListResponseBodyAclGroupListAclConfig& operator=(DescribeVpcFirewallAclGroupListResponseBodyAclGroupListAclConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->strictMode_ == nullptr; };
    // strictMode Field Functions 
    bool hasStrictMode() const { return this->strictMode_ != nullptr;};
    void deleteStrictMode() { this->strictMode_ = nullptr;};
    inline int32_t strictMode() const { DARABONBA_PTR_GET_DEFAULT(strictMode_, 0) };
    inline DescribeVpcFirewallAclGroupListResponseBodyAclGroupListAclConfig& setStrictMode(int32_t strictMode) { DARABONBA_PTR_SET_VALUE(strictMode_, strictMode) };


  protected:
    // Specifies Whether strict mode is enabled. Valid values:
    // *   1: yes
    // *   0: no
    std::shared_ptr<int32_t> strictMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
