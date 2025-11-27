// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCENETINFOFORCHANNELRESPONSEBODYDBINSTANCENETINFOSDBINSTANCENETINFOSECURITYIPGROUPSSECURITYIPGROUP_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCENETINFOFORCHANNELRESPONSEBODYDBINSTANCENETINFOSDBINSTANCENETINFOSECURITYIPGROUPSSECURITYIPGROUP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfosDBInstanceNetInfoSecurityIPGroupsSecurityIPGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfosDBInstanceNetInfoSecurityIPGroupsSecurityIPGroup& obj) { 
      DARABONBA_PTR_TO_JSON(SecurityIPGroupName, securityIPGroupName_);
      DARABONBA_PTR_TO_JSON(SecurityIPs, securityIPs_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfosDBInstanceNetInfoSecurityIPGroupsSecurityIPGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(SecurityIPGroupName, securityIPGroupName_);
      DARABONBA_PTR_FROM_JSON(SecurityIPs, securityIPs_);
    };
    DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfosDBInstanceNetInfoSecurityIPGroupsSecurityIPGroup() = default ;
    DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfosDBInstanceNetInfoSecurityIPGroupsSecurityIPGroup(const DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfosDBInstanceNetInfoSecurityIPGroupsSecurityIPGroup &) = default ;
    DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfosDBInstanceNetInfoSecurityIPGroupsSecurityIPGroup(DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfosDBInstanceNetInfoSecurityIPGroupsSecurityIPGroup &&) = default ;
    DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfosDBInstanceNetInfoSecurityIPGroupsSecurityIPGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfosDBInstanceNetInfoSecurityIPGroupsSecurityIPGroup() = default ;
    DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfosDBInstanceNetInfoSecurityIPGroupsSecurityIPGroup& operator=(const DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfosDBInstanceNetInfoSecurityIPGroupsSecurityIPGroup &) = default ;
    DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfosDBInstanceNetInfoSecurityIPGroupsSecurityIPGroup& operator=(DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfosDBInstanceNetInfoSecurityIPGroupsSecurityIPGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->securityIPGroupName_ == nullptr
        && return this->securityIPs_ == nullptr; };
    // securityIPGroupName Field Functions 
    bool hasSecurityIPGroupName() const { return this->securityIPGroupName_ != nullptr;};
    void deleteSecurityIPGroupName() { this->securityIPGroupName_ = nullptr;};
    inline string securityIPGroupName() const { DARABONBA_PTR_GET_DEFAULT(securityIPGroupName_, "") };
    inline DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfosDBInstanceNetInfoSecurityIPGroupsSecurityIPGroup& setSecurityIPGroupName(string securityIPGroupName) { DARABONBA_PTR_SET_VALUE(securityIPGroupName_, securityIPGroupName) };


    // securityIPs Field Functions 
    bool hasSecurityIPs() const { return this->securityIPs_ != nullptr;};
    void deleteSecurityIPs() { this->securityIPs_ = nullptr;};
    inline string securityIPs() const { DARABONBA_PTR_GET_DEFAULT(securityIPs_, "") };
    inline DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfosDBInstanceNetInfoSecurityIPGroupsSecurityIPGroup& setSecurityIPs(string securityIPs) { DARABONBA_PTR_SET_VALUE(securityIPs_, securityIPs) };


  protected:
    // The name of the IP address whitelist.
    std::shared_ptr<string> securityIPGroupName_ = nullptr;
    // The IP addresses that is contained in the IP address whitelist.
    std::shared_ptr<string> securityIPs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
