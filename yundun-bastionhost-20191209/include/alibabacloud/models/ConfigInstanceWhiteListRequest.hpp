// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGINSTANCEWHITELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIGINSTANCEWHITELISTREQUEST_HPP_
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
    class WhiteListPolicies : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const WhiteListPolicies& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Entry, entry_);
      };
      friend void from_json(const Darabonba::Json& j, WhiteListPolicies& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Entry, entry_);
      };
      WhiteListPolicies() = default ;
      WhiteListPolicies(const WhiteListPolicies &) = default ;
      WhiteListPolicies(WhiteListPolicies &&) = default ;
      WhiteListPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~WhiteListPolicies() = default ;
      WhiteListPolicies& operator=(const WhiteListPolicies &) = default ;
      WhiteListPolicies& operator=(WhiteListPolicies &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->entry_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline WhiteListPolicies& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // entry Field Functions 
      bool hasEntry() const { return this->entry_ != nullptr;};
      void deleteEntry() { this->entry_ = nullptr;};
      inline string getEntry() const { DARABONBA_PTR_GET_DEFAULT(entry_, "") };
      inline WhiteListPolicies& setEntry(string entry) { DARABONBA_PTR_SET_VALUE(entry_, entry) };


    protected:
      shared_ptr<string> description_ {};
      shared_ptr<string> entry_ {};
    };

    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->regionId_ == nullptr && this->whiteList_ == nullptr && this->whiteListPolicies_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ConfigInstanceWhiteListRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ConfigInstanceWhiteListRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // whiteList Field Functions 
    bool hasWhiteList() const { return this->whiteList_ != nullptr;};
    void deleteWhiteList() { this->whiteList_ = nullptr;};
    inline const vector<string> & getWhiteList() const { DARABONBA_PTR_GET_CONST(whiteList_, vector<string>) };
    inline vector<string> getWhiteList() { DARABONBA_PTR_GET(whiteList_, vector<string>) };
    inline ConfigInstanceWhiteListRequest& setWhiteList(const vector<string> & whiteList) { DARABONBA_PTR_SET_VALUE(whiteList_, whiteList) };
    inline ConfigInstanceWhiteListRequest& setWhiteList(vector<string> && whiteList) { DARABONBA_PTR_SET_RVALUE(whiteList_, whiteList) };


    // whiteListPolicies Field Functions 
    bool hasWhiteListPolicies() const { return this->whiteListPolicies_ != nullptr;};
    void deleteWhiteListPolicies() { this->whiteListPolicies_ = nullptr;};
    inline const vector<ConfigInstanceWhiteListRequest::WhiteListPolicies> & getWhiteListPolicies() const { DARABONBA_PTR_GET_CONST(whiteListPolicies_, vector<ConfigInstanceWhiteListRequest::WhiteListPolicies>) };
    inline vector<ConfigInstanceWhiteListRequest::WhiteListPolicies> getWhiteListPolicies() { DARABONBA_PTR_GET(whiteListPolicies_, vector<ConfigInstanceWhiteListRequest::WhiteListPolicies>) };
    inline ConfigInstanceWhiteListRequest& setWhiteListPolicies(const vector<ConfigInstanceWhiteListRequest::WhiteListPolicies> & whiteListPolicies) { DARABONBA_PTR_SET_VALUE(whiteListPolicies_, whiteListPolicies) };
    inline ConfigInstanceWhiteListRequest& setWhiteListPolicies(vector<ConfigInstanceWhiteListRequest::WhiteListPolicies> && whiteListPolicies) { DARABONBA_PTR_SET_RVALUE(whiteListPolicies_, whiteListPolicies) };


  protected:
    // The ID of the bastion host for which you want to configure a whitelist of public IP addresses.
    // 
    // > You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query the bastion host ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The region ID of the bastion host.
    shared_ptr<string> regionId_ {};
    // The IP address whitelist that you want to configure.
    shared_ptr<vector<string>> whiteList_ {};
    shared_ptr<vector<ConfigInstanceWhiteListRequest::WhiteListPolicies>> whiteListPolicies_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
