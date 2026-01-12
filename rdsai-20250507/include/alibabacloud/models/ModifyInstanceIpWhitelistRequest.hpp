// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINSTANCEIPWHITELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINSTANCEIPWHITELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class ModifyInstanceIpWhitelistRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInstanceIpWhitelistRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(IpWhitelist, ipWhitelist_);
      DARABONBA_PTR_TO_JSON(ModifyMode, modifyMode_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInstanceIpWhitelistRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(IpWhitelist, ipWhitelist_);
      DARABONBA_PTR_FROM_JSON(ModifyMode, modifyMode_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyInstanceIpWhitelistRequest() = default ;
    ModifyInstanceIpWhitelistRequest(const ModifyInstanceIpWhitelistRequest &) = default ;
    ModifyInstanceIpWhitelistRequest(ModifyInstanceIpWhitelistRequest &&) = default ;
    ModifyInstanceIpWhitelistRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInstanceIpWhitelistRequest() = default ;
    ModifyInstanceIpWhitelistRequest& operator=(const ModifyInstanceIpWhitelistRequest &) = default ;
    ModifyInstanceIpWhitelistRequest& operator=(ModifyInstanceIpWhitelistRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->groupName_ == nullptr && this->instanceName_ == nullptr && this->ipWhitelist_ == nullptr && this->modifyMode_ == nullptr && this->regionId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyInstanceIpWhitelistRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline ModifyInstanceIpWhitelistRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ModifyInstanceIpWhitelistRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // ipWhitelist Field Functions 
    bool hasIpWhitelist() const { return this->ipWhitelist_ != nullptr;};
    void deleteIpWhitelist() { this->ipWhitelist_ = nullptr;};
    inline string getIpWhitelist() const { DARABONBA_PTR_GET_DEFAULT(ipWhitelist_, "") };
    inline ModifyInstanceIpWhitelistRequest& setIpWhitelist(string ipWhitelist) { DARABONBA_PTR_SET_VALUE(ipWhitelist_, ipWhitelist) };


    // modifyMode Field Functions 
    bool hasModifyMode() const { return this->modifyMode_ != nullptr;};
    void deleteModifyMode() { this->modifyMode_ = nullptr;};
    inline string getModifyMode() const { DARABONBA_PTR_GET_DEFAULT(modifyMode_, "") };
    inline ModifyInstanceIpWhitelistRequest& setModifyMode(string modifyMode) { DARABONBA_PTR_SET_VALUE(modifyMode_, modifyMode) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyInstanceIpWhitelistRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The method that is used to modify the IP address whitelist. Valid values:
    // 
    // *   **Cover** (default): Uses the IP addresses and CIDR blocks that are specified in the **IpWhitelist** parameter to **overwrite** the existing ones in the current whitelist.
    // *   **Append**: **Appends** the IP addresses and CIDR blocks that are specified in the **IpWhitelist** parameter to the current whitelist.
    // *   **Delete**: **Deletes** the IP addresses and CIDR blocks that are specified in the **IpWhitelist** parameter from the current whitelist. You must retain at least one IP address or CIDR block.
    shared_ptr<string> clientToken_ {};
    // The idempotency token. The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests.
    shared_ptr<string> groupName_ {};
    // The region ID.
    shared_ptr<string> instanceName_ {};
    // The ID of the RDS Supabase instance.
    shared_ptr<string> ipWhitelist_ {};
    // The IP address whitelist. Before you modify the IP address whitelist, call the DescribeInstanceIpWhitelist operation to query the existing IP address whitelist of the instance.
    // 
    // **Configuration rules**
    // 
    // *   You can configure IP addresses (such as 10.23.XXX.XXX) or CIDR blocks (such as 10.23.XXX.XXX/24).
    // *   Separate multiple IP addresses or CIDR blocks with commas (,) and do not add spaces preceding or following the commas.
    // *   You can configure up to 1,000 IP addresses and CIDR blocks in total for each instance. If you want to add a large number of IP addresses, we recommend that you merge the IP addresses into CIDR blocks, such as 10.23.XXX.XXX/24.
    shared_ptr<string> modifyMode_ {};
    // The operation that you want to perform. Set the value to **ModifyInstanceIpWhitelist**.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
