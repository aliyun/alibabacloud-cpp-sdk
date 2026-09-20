// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYIPWHITELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYIPWHITELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20190101
{
namespace Models
{
  class ModifyIpWhitelistRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyIpWhitelistRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(IpList, ipList_);
      DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyIpWhitelistRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(IpList, ipList_);
      DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
    };
    ModifyIpWhitelistRequest() = default ;
    ModifyIpWhitelistRequest(const ModifyIpWhitelistRequest &) = default ;
    ModifyIpWhitelistRequest(ModifyIpWhitelistRequest &&) = default ;
    ModifyIpWhitelistRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyIpWhitelistRequest() = default ;
    ModifyIpWhitelistRequest& operator=(const ModifyIpWhitelistRequest &) = default ;
    ModifyIpWhitelistRequest& operator=(ModifyIpWhitelistRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->groupName_ == nullptr && this->ipList_ == nullptr && this->ipVersion_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ModifyIpWhitelistRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline ModifyIpWhitelistRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // ipList Field Functions 
    bool hasIpList() const { return this->ipList_ != nullptr;};
    void deleteIpList() { this->ipList_ = nullptr;};
    inline string getIpList() const { DARABONBA_PTR_GET_DEFAULT(ipList_, "") };
    inline ModifyIpWhitelistRequest& setIpList(string ipList) { DARABONBA_PTR_SET_VALUE(ipList_, ipList) };


    // ipVersion Field Functions 
    bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
    void deleteIpVersion() { this->ipVersion_ = nullptr;};
    inline string getIpVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
    inline ModifyIpWhitelistRequest& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


  protected:
    // The ID of target instance. You can call [DescribeInstances](https://help.aliyun.com/document_detail/144595.html) to obtain target instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // The name of the whitelist group for the target instance. You can invoke [DescribeIpWhitelist](https://help.aliyun.com/document_detail/144606.html) to obtain the whitelist group name.
    // 
    // This parameter is required.
    shared_ptr<string> groupName_ {};
    // The IP addresses in the whitelist group after modification. Separate multiple IP addresses with commas (,).
    shared_ptr<string> ipList_ {};
    // The version of the IP address. Valid values:
    // 
    // - **4**: IPv4.
    // - **6**: IPv6.
    // 
    // This parameter is required.
    shared_ptr<string> ipVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif
