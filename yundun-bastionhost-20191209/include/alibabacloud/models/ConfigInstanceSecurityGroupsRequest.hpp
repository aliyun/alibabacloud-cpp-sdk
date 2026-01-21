// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGINSTANCESECURITYGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIGINSTANCESECURITYGROUPSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ConfigInstanceSecurityGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigInstanceSecurityGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizedSecurityGroups, authorizedSecurityGroups_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigInstanceSecurityGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizedSecurityGroups, authorizedSecurityGroups_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ConfigInstanceSecurityGroupsRequest() = default ;
    ConfigInstanceSecurityGroupsRequest(const ConfigInstanceSecurityGroupsRequest &) = default ;
    ConfigInstanceSecurityGroupsRequest(ConfigInstanceSecurityGroupsRequest &&) = default ;
    ConfigInstanceSecurityGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigInstanceSecurityGroupsRequest() = default ;
    ConfigInstanceSecurityGroupsRequest& operator=(const ConfigInstanceSecurityGroupsRequest &) = default ;
    ConfigInstanceSecurityGroupsRequest& operator=(ConfigInstanceSecurityGroupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorizedSecurityGroups_ == nullptr
        && this->instanceId_ == nullptr && this->lang_ == nullptr && this->regionId_ == nullptr; };
    // authorizedSecurityGroups Field Functions 
    bool hasAuthorizedSecurityGroups() const { return this->authorizedSecurityGroups_ != nullptr;};
    void deleteAuthorizedSecurityGroups() { this->authorizedSecurityGroups_ = nullptr;};
    inline const vector<string> & getAuthorizedSecurityGroups() const { DARABONBA_PTR_GET_CONST(authorizedSecurityGroups_, vector<string>) };
    inline vector<string> getAuthorizedSecurityGroups() { DARABONBA_PTR_GET(authorizedSecurityGroups_, vector<string>) };
    inline ConfigInstanceSecurityGroupsRequest& setAuthorizedSecurityGroups(const vector<string> & authorizedSecurityGroups) { DARABONBA_PTR_SET_VALUE(authorizedSecurityGroups_, authorizedSecurityGroups) };
    inline ConfigInstanceSecurityGroupsRequest& setAuthorizedSecurityGroups(vector<string> && authorizedSecurityGroups) { DARABONBA_PTR_SET_RVALUE(authorizedSecurityGroups_, authorizedSecurityGroups) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ConfigInstanceSecurityGroupsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ConfigInstanceSecurityGroupsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ConfigInstanceSecurityGroupsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // An array that consists of the IDs of authorized security groups.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> authorizedSecurityGroups_ {};
    // The ID of the bastion host.
    // 
    // > You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query the ID of the bastion host.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The region ID of the bastion host.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
