// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGINSTANCEWHITELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIGINSTANCEWHITELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ConfigInstanceWhiteListRequestWhiteListPolicies.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ConfigInstanceWhiteListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigInstanceWhiteListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(WhiteList, whiteList_);
      DARABONBA_PTR_TO_JSON(WhiteListPolicies, whiteListPolicies_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigInstanceWhiteListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(WhiteList, whiteList_);
      DARABONBA_PTR_FROM_JSON(WhiteListPolicies, whiteListPolicies_);
    };
    ConfigInstanceWhiteListRequest() = default ;
    ConfigInstanceWhiteListRequest(const ConfigInstanceWhiteListRequest &) = default ;
    ConfigInstanceWhiteListRequest(ConfigInstanceWhiteListRequest &&) = default ;
    ConfigInstanceWhiteListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigInstanceWhiteListRequest() = default ;
    ConfigInstanceWhiteListRequest& operator=(const ConfigInstanceWhiteListRequest &) = default ;
    ConfigInstanceWhiteListRequest& operator=(ConfigInstanceWhiteListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->regionId_ != nullptr && this->whiteList_ != nullptr && this->whiteListPolicies_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ConfigInstanceWhiteListRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ConfigInstanceWhiteListRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // whiteList Field Functions 
    bool hasWhiteList() const { return this->whiteList_ != nullptr;};
    void deleteWhiteList() { this->whiteList_ = nullptr;};
    inline const vector<string> & whiteList() const { DARABONBA_PTR_GET_CONST(whiteList_, vector<string>) };
    inline vector<string> whiteList() { DARABONBA_PTR_GET(whiteList_, vector<string>) };
    inline ConfigInstanceWhiteListRequest& setWhiteList(const vector<string> & whiteList) { DARABONBA_PTR_SET_VALUE(whiteList_, whiteList) };
    inline ConfigInstanceWhiteListRequest& setWhiteList(vector<string> && whiteList) { DARABONBA_PTR_SET_RVALUE(whiteList_, whiteList) };


    // whiteListPolicies Field Functions 
    bool hasWhiteListPolicies() const { return this->whiteListPolicies_ != nullptr;};
    void deleteWhiteListPolicies() { this->whiteListPolicies_ = nullptr;};
    inline const vector<ConfigInstanceWhiteListRequestWhiteListPolicies> & whiteListPolicies() const { DARABONBA_PTR_GET_CONST(whiteListPolicies_, vector<ConfigInstanceWhiteListRequestWhiteListPolicies>) };
    inline vector<ConfigInstanceWhiteListRequestWhiteListPolicies> whiteListPolicies() { DARABONBA_PTR_GET(whiteListPolicies_, vector<ConfigInstanceWhiteListRequestWhiteListPolicies>) };
    inline ConfigInstanceWhiteListRequest& setWhiteListPolicies(const vector<ConfigInstanceWhiteListRequestWhiteListPolicies> & whiteListPolicies) { DARABONBA_PTR_SET_VALUE(whiteListPolicies_, whiteListPolicies) };
    inline ConfigInstanceWhiteListRequest& setWhiteListPolicies(vector<ConfigInstanceWhiteListRequestWhiteListPolicies> && whiteListPolicies) { DARABONBA_PTR_SET_RVALUE(whiteListPolicies_, whiteListPolicies) };


  protected:
    // The ID of the bastion host for which you want to configure a whitelist of public IP addresses.
    // 
    // > You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query the bastion host ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The region ID of the bastion host.
    std::shared_ptr<string> regionId_ = nullptr;
    // The IP address whitelist that you want to configure.
    std::shared_ptr<vector<string>> whiteList_ = nullptr;
    std::shared_ptr<vector<ConfigInstanceWhiteListRequestWhiteListPolicies>> whiteListPolicies_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
