// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGINSTANCENETWORKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIGINSTANCENETWORKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunDbaudit20180320
{
namespace Models
{
  class ConfigInstanceNetworkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigInstanceNetworkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PrivateWhiteList, privateWhiteList_);
      DARABONBA_PTR_TO_JSON(PublicAccessControl, publicAccessControl_);
      DARABONBA_PTR_TO_JSON(PublicWhiteList, publicWhiteList_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupIds, securityGroupIds_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigInstanceNetworkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PrivateWhiteList, privateWhiteList_);
      DARABONBA_PTR_FROM_JSON(PublicAccessControl, publicAccessControl_);
      DARABONBA_PTR_FROM_JSON(PublicWhiteList, publicWhiteList_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupIds, securityGroupIds_);
    };
    ConfigInstanceNetworkRequest() = default ;
    ConfigInstanceNetworkRequest(const ConfigInstanceNetworkRequest &) = default ;
    ConfigInstanceNetworkRequest(ConfigInstanceNetworkRequest &&) = default ;
    ConfigInstanceNetworkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigInstanceNetworkRequest() = default ;
    ConfigInstanceNetworkRequest& operator=(const ConfigInstanceNetworkRequest &) = default ;
    ConfigInstanceNetworkRequest& operator=(ConfigInstanceNetworkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->privateWhiteList_ == nullptr && this->publicAccessControl_ == nullptr && this->publicWhiteList_ == nullptr && this->regionId_ == nullptr && this->securityGroupIds_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ConfigInstanceNetworkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // privateWhiteList Field Functions 
    bool hasPrivateWhiteList() const { return this->privateWhiteList_ != nullptr;};
    void deletePrivateWhiteList() { this->privateWhiteList_ = nullptr;};
    inline const vector<string> & getPrivateWhiteList() const { DARABONBA_PTR_GET_CONST(privateWhiteList_, vector<string>) };
    inline vector<string> getPrivateWhiteList() { DARABONBA_PTR_GET(privateWhiteList_, vector<string>) };
    inline ConfigInstanceNetworkRequest& setPrivateWhiteList(const vector<string> & privateWhiteList) { DARABONBA_PTR_SET_VALUE(privateWhiteList_, privateWhiteList) };
    inline ConfigInstanceNetworkRequest& setPrivateWhiteList(vector<string> && privateWhiteList) { DARABONBA_PTR_SET_RVALUE(privateWhiteList_, privateWhiteList) };


    // publicAccessControl Field Functions 
    bool hasPublicAccessControl() const { return this->publicAccessControl_ != nullptr;};
    void deletePublicAccessControl() { this->publicAccessControl_ = nullptr;};
    inline int32_t getPublicAccessControl() const { DARABONBA_PTR_GET_DEFAULT(publicAccessControl_, 0) };
    inline ConfigInstanceNetworkRequest& setPublicAccessControl(int32_t publicAccessControl) { DARABONBA_PTR_SET_VALUE(publicAccessControl_, publicAccessControl) };


    // publicWhiteList Field Functions 
    bool hasPublicWhiteList() const { return this->publicWhiteList_ != nullptr;};
    void deletePublicWhiteList() { this->publicWhiteList_ = nullptr;};
    inline const vector<string> & getPublicWhiteList() const { DARABONBA_PTR_GET_CONST(publicWhiteList_, vector<string>) };
    inline vector<string> getPublicWhiteList() { DARABONBA_PTR_GET(publicWhiteList_, vector<string>) };
    inline ConfigInstanceNetworkRequest& setPublicWhiteList(const vector<string> & publicWhiteList) { DARABONBA_PTR_SET_VALUE(publicWhiteList_, publicWhiteList) };
    inline ConfigInstanceNetworkRequest& setPublicWhiteList(vector<string> && publicWhiteList) { DARABONBA_PTR_SET_RVALUE(publicWhiteList_, publicWhiteList) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ConfigInstanceNetworkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // securityGroupIds Field Functions 
    bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
    void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
    inline const vector<string> & getSecurityGroupIds() const { DARABONBA_PTR_GET_CONST(securityGroupIds_, vector<string>) };
    inline vector<string> getSecurityGroupIds() { DARABONBA_PTR_GET(securityGroupIds_, vector<string>) };
    inline ConfigInstanceNetworkRequest& setSecurityGroupIds(const vector<string> & securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };
    inline ConfigInstanceNetworkRequest& setSecurityGroupIds(vector<string> && securityGroupIds) { DARABONBA_PTR_SET_RVALUE(securityGroupIds_, securityGroupIds) };


  protected:
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<vector<string>> privateWhiteList_ {};
    // This parameter is required.
    shared_ptr<int32_t> publicAccessControl_ {};
    shared_ptr<vector<string>> publicWhiteList_ {};
    shared_ptr<string> regionId_ {};
    // This parameter is required.
    shared_ptr<vector<string>> securityGroupIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunDbaudit20180320
#endif
