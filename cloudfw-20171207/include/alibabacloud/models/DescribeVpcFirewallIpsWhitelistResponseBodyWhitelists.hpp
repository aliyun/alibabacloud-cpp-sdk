// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLIPSWHITELISTRESPONSEBODYWHITELISTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLIPSWHITELISTRESPONSEBODYWHITELISTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeVpcFirewallIPSWhitelistResponseBodyWhitelists : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcFirewallIPSWhitelistResponseBodyWhitelists& obj) { 
      DARABONBA_PTR_TO_JSON(ListType, listType_);
      DARABONBA_PTR_TO_JSON(ListValue, listValue_);
      DARABONBA_PTR_TO_JSON(VpcFirewallId, vpcFirewallId_);
      DARABONBA_PTR_TO_JSON(WhiteListValue, whiteListValue_);
      DARABONBA_PTR_TO_JSON(WhiteType, whiteType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcFirewallIPSWhitelistResponseBodyWhitelists& obj) { 
      DARABONBA_PTR_FROM_JSON(ListType, listType_);
      DARABONBA_PTR_FROM_JSON(ListValue, listValue_);
      DARABONBA_PTR_FROM_JSON(VpcFirewallId, vpcFirewallId_);
      DARABONBA_PTR_FROM_JSON(WhiteListValue, whiteListValue_);
      DARABONBA_PTR_FROM_JSON(WhiteType, whiteType_);
    };
    DescribeVpcFirewallIPSWhitelistResponseBodyWhitelists() = default ;
    DescribeVpcFirewallIPSWhitelistResponseBodyWhitelists(const DescribeVpcFirewallIPSWhitelistResponseBodyWhitelists &) = default ;
    DescribeVpcFirewallIPSWhitelistResponseBodyWhitelists(DescribeVpcFirewallIPSWhitelistResponseBodyWhitelists &&) = default ;
    DescribeVpcFirewallIPSWhitelistResponseBodyWhitelists(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcFirewallIPSWhitelistResponseBodyWhitelists() = default ;
    DescribeVpcFirewallIPSWhitelistResponseBodyWhitelists& operator=(const DescribeVpcFirewallIPSWhitelistResponseBodyWhitelists &) = default ;
    DescribeVpcFirewallIPSWhitelistResponseBodyWhitelists& operator=(DescribeVpcFirewallIPSWhitelistResponseBodyWhitelists &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->listType_ == nullptr
        && return this->listValue_ == nullptr && return this->vpcFirewallId_ == nullptr && return this->whiteListValue_ == nullptr && return this->whiteType_ == nullptr; };
    // listType Field Functions 
    bool hasListType() const { return this->listType_ != nullptr;};
    void deleteListType() { this->listType_ = nullptr;};
    inline int64_t listType() const { DARABONBA_PTR_GET_DEFAULT(listType_, 0L) };
    inline DescribeVpcFirewallIPSWhitelistResponseBodyWhitelists& setListType(int64_t listType) { DARABONBA_PTR_SET_VALUE(listType_, listType) };


    // listValue Field Functions 
    bool hasListValue() const { return this->listValue_ != nullptr;};
    void deleteListValue() { this->listValue_ = nullptr;};
    inline string listValue() const { DARABONBA_PTR_GET_DEFAULT(listValue_, "") };
    inline DescribeVpcFirewallIPSWhitelistResponseBodyWhitelists& setListValue(string listValue) { DARABONBA_PTR_SET_VALUE(listValue_, listValue) };


    // vpcFirewallId Field Functions 
    bool hasVpcFirewallId() const { return this->vpcFirewallId_ != nullptr;};
    void deleteVpcFirewallId() { this->vpcFirewallId_ = nullptr;};
    inline string vpcFirewallId() const { DARABONBA_PTR_GET_DEFAULT(vpcFirewallId_, "") };
    inline DescribeVpcFirewallIPSWhitelistResponseBodyWhitelists& setVpcFirewallId(string vpcFirewallId) { DARABONBA_PTR_SET_VALUE(vpcFirewallId_, vpcFirewallId) };


    // whiteListValue Field Functions 
    bool hasWhiteListValue() const { return this->whiteListValue_ != nullptr;};
    void deleteWhiteListValue() { this->whiteListValue_ = nullptr;};
    inline const vector<string> & whiteListValue() const { DARABONBA_PTR_GET_CONST(whiteListValue_, vector<string>) };
    inline vector<string> whiteListValue() { DARABONBA_PTR_GET(whiteListValue_, vector<string>) };
    inline DescribeVpcFirewallIPSWhitelistResponseBodyWhitelists& setWhiteListValue(const vector<string> & whiteListValue) { DARABONBA_PTR_SET_VALUE(whiteListValue_, whiteListValue) };
    inline DescribeVpcFirewallIPSWhitelistResponseBodyWhitelists& setWhiteListValue(vector<string> && whiteListValue) { DARABONBA_PTR_SET_RVALUE(whiteListValue_, whiteListValue) };


    // whiteType Field Functions 
    bool hasWhiteType() const { return this->whiteType_ != nullptr;};
    void deleteWhiteType() { this->whiteType_ = nullptr;};
    inline int64_t whiteType() const { DARABONBA_PTR_GET_DEFAULT(whiteType_, 0L) };
    inline DescribeVpcFirewallIPSWhitelistResponseBodyWhitelists& setWhiteType(int64_t whiteType) { DARABONBA_PTR_SET_VALUE(whiteType_, whiteType) };


  protected:
    // The type of the list. Valid values:
    // 
    // *   **1**: user-defined
    // *   **2**: address book
    std::shared_ptr<int64_t> listType_ = nullptr;
    // The entries in the list.
    std::shared_ptr<string> listValue_ = nullptr;
    // The instance ID of the VPC firewall.
    std::shared_ptr<string> vpcFirewallId_ = nullptr;
    // An array of entries in the list.
    std::shared_ptr<vector<string>> whiteListValue_ = nullptr;
    // The type of the whitelist. Valid values:
    // 
    // *   **1**: destination
    // *   **2**: source
    std::shared_ptr<int64_t> whiteType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
