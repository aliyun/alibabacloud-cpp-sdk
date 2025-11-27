// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDTCSECURITYIPHOSTSFORSQLSERVERRESPONSEBODYITEMSWHITELISTGROUPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDTCSECURITYIPHOSTSFORSQLSERVERRESPONSEBODYITEMSWHITELISTGROUPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDTCSecurityIpHostsForSQLServerResponseBodyItemsWhiteListGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDTCSecurityIpHostsForSQLServerResponseBodyItemsWhiteListGroups& obj) { 
      DARABONBA_PTR_TO_JSON(SecurityIpHosts, securityIpHosts_);
      DARABONBA_PTR_TO_JSON(WhitelistGroupName, whitelistGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDTCSecurityIpHostsForSQLServerResponseBodyItemsWhiteListGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(SecurityIpHosts, securityIpHosts_);
      DARABONBA_PTR_FROM_JSON(WhitelistGroupName, whitelistGroupName_);
    };
    DescribeDTCSecurityIpHostsForSQLServerResponseBodyItemsWhiteListGroups() = default ;
    DescribeDTCSecurityIpHostsForSQLServerResponseBodyItemsWhiteListGroups(const DescribeDTCSecurityIpHostsForSQLServerResponseBodyItemsWhiteListGroups &) = default ;
    DescribeDTCSecurityIpHostsForSQLServerResponseBodyItemsWhiteListGroups(DescribeDTCSecurityIpHostsForSQLServerResponseBodyItemsWhiteListGroups &&) = default ;
    DescribeDTCSecurityIpHostsForSQLServerResponseBodyItemsWhiteListGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDTCSecurityIpHostsForSQLServerResponseBodyItemsWhiteListGroups() = default ;
    DescribeDTCSecurityIpHostsForSQLServerResponseBodyItemsWhiteListGroups& operator=(const DescribeDTCSecurityIpHostsForSQLServerResponseBodyItemsWhiteListGroups &) = default ;
    DescribeDTCSecurityIpHostsForSQLServerResponseBodyItemsWhiteListGroups& operator=(DescribeDTCSecurityIpHostsForSQLServerResponseBodyItemsWhiteListGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->securityIpHosts_ == nullptr
        && return this->whitelistGroupName_ == nullptr; };
    // securityIpHosts Field Functions 
    bool hasSecurityIpHosts() const { return this->securityIpHosts_ != nullptr;};
    void deleteSecurityIpHosts() { this->securityIpHosts_ = nullptr;};
    inline string securityIpHosts() const { DARABONBA_PTR_GET_DEFAULT(securityIpHosts_, "") };
    inline DescribeDTCSecurityIpHostsForSQLServerResponseBodyItemsWhiteListGroups& setSecurityIpHosts(string securityIpHosts) { DARABONBA_PTR_SET_VALUE(securityIpHosts_, securityIpHosts) };


    // whitelistGroupName Field Functions 
    bool hasWhitelistGroupName() const { return this->whitelistGroupName_ != nullptr;};
    void deleteWhitelistGroupName() { this->whitelistGroupName_ = nullptr;};
    inline string whitelistGroupName() const { DARABONBA_PTR_GET_DEFAULT(whitelistGroupName_, "") };
    inline DescribeDTCSecurityIpHostsForSQLServerResponseBodyItemsWhiteListGroups& setWhitelistGroupName(string whitelistGroupName) { DARABONBA_PTR_SET_VALUE(whitelistGroupName_, whitelistGroupName) };


  protected:
    // The IP address of the ECS instance and the hostname of the Windows computer. Format: `IP address,Hostname`. Multiple values are separated with semicolons (;).
    std::shared_ptr<string> securityIpHosts_ = nullptr;
    // The name of the distributed transaction whitelist.
    std::shared_ptr<string> whitelistGroupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
