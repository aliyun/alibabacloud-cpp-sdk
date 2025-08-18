// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEIPWHITELISTRESPONSEBODYIPWHITELISTGROUPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEIPWHITELISTRESPONSEBODYIPWHITELISTGROUPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class DescribeInstanceIpWhitelistResponseBodyIpWhiteListGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceIpWhitelistResponseBodyIpWhiteListGroups& obj) { 
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(IpWhitelist, ipWhitelist_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceIpWhitelistResponseBodyIpWhiteListGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(IpWhitelist, ipWhitelist_);
    };
    DescribeInstanceIpWhitelistResponseBodyIpWhiteListGroups() = default ;
    DescribeInstanceIpWhitelistResponseBodyIpWhiteListGroups(const DescribeInstanceIpWhitelistResponseBodyIpWhiteListGroups &) = default ;
    DescribeInstanceIpWhitelistResponseBodyIpWhiteListGroups(DescribeInstanceIpWhitelistResponseBodyIpWhiteListGroups &&) = default ;
    DescribeInstanceIpWhitelistResponseBodyIpWhiteListGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceIpWhitelistResponseBodyIpWhiteListGroups() = default ;
    DescribeInstanceIpWhitelistResponseBodyIpWhiteListGroups& operator=(const DescribeInstanceIpWhitelistResponseBodyIpWhiteListGroups &) = default ;
    DescribeInstanceIpWhitelistResponseBodyIpWhiteListGroups& operator=(DescribeInstanceIpWhitelistResponseBodyIpWhiteListGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->groupName_ != nullptr
        && this->ipWhitelist_ != nullptr; };
    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeInstanceIpWhitelistResponseBodyIpWhiteListGroups& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // ipWhitelist Field Functions 
    bool hasIpWhitelist() const { return this->ipWhitelist_ != nullptr;};
    void deleteIpWhitelist() { this->ipWhitelist_ = nullptr;};
    inline string ipWhitelist() const { DARABONBA_PTR_GET_DEFAULT(ipWhitelist_, "") };
    inline DescribeInstanceIpWhitelistResponseBodyIpWhiteListGroups& setIpWhitelist(string ipWhitelist) { DARABONBA_PTR_SET_VALUE(ipWhitelist_, ipWhitelist) };


  protected:
    std::shared_ptr<string> groupName_ = nullptr;
    std::shared_ptr<string> ipWhitelist_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
