// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADECLUSTERADDONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPGRADECLUSTERADDONSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class UpgradeClusterAddonsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeClusterAddonsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeClusterAddonsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpgradeClusterAddonsRequest() = default ;
    UpgradeClusterAddonsRequest(const UpgradeClusterAddonsRequest &) = default ;
    UpgradeClusterAddonsRequest(UpgradeClusterAddonsRequest &&) = default ;
    UpgradeClusterAddonsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeClusterAddonsRequest() = default ;
    UpgradeClusterAddonsRequest& operator=(const UpgradeClusterAddonsRequest &) = default ;
    UpgradeClusterAddonsRequest& operator=(UpgradeClusterAddonsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(component_name, componentName_);
        DARABONBA_PTR_TO_JSON(config, config_);
        DARABONBA_PTR_TO_JSON(next_version, nextVersion_);
        DARABONBA_PTR_TO_JSON(policy, policy_);
        DARABONBA_PTR_TO_JSON(version, version_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(component_name, componentName_);
        DARABONBA_PTR_FROM_JSON(config, config_);
        DARABONBA_PTR_FROM_JSON(next_version, nextVersion_);
        DARABONBA_PTR_FROM_JSON(policy, policy_);
        DARABONBA_PTR_FROM_JSON(version, version_);
      };
      Body() = default ;
      Body(const Body &) = default ;
      Body(Body &&) = default ;
      Body(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Body() = default ;
      Body& operator=(const Body &) = default ;
      Body& operator=(Body &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->componentName_ == nullptr
        && this->config_ == nullptr && this->nextVersion_ == nullptr && this->policy_ == nullptr && this->version_ == nullptr; };
      // componentName Field Functions 
      bool hasComponentName() const { return this->componentName_ != nullptr;};
      void deleteComponentName() { this->componentName_ = nullptr;};
      inline string getComponentName() const { DARABONBA_PTR_GET_DEFAULT(componentName_, "") };
      inline Body& setComponentName(string componentName) { DARABONBA_PTR_SET_VALUE(componentName_, componentName) };


      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
      inline Body& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


      // nextVersion Field Functions 
      bool hasNextVersion() const { return this->nextVersion_ != nullptr;};
      void deleteNextVersion() { this->nextVersion_ = nullptr;};
      inline string getNextVersion() const { DARABONBA_PTR_GET_DEFAULT(nextVersion_, "") };
      inline Body& setNextVersion(string nextVersion) { DARABONBA_PTR_SET_VALUE(nextVersion_, nextVersion) };


      // policy Field Functions 
      bool hasPolicy() const { return this->policy_ != nullptr;};
      void deletePolicy() { this->policy_ = nullptr;};
      inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
      inline Body& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Body& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // The name of the component.
      // 
      // This parameter is required.
      shared_ptr<string> componentName_ {};
      // The custom component settings that you want to use. The value is a JSON string.
      shared_ptr<string> config_ {};
      // The version to which the component can be updated. You can call the `DescribeClusterAddonsVersion` operation to query the version to which the component can be updated.
      // 
      // This parameter is required.
      shared_ptr<string> nextVersion_ {};
      // The update policy. Valid values:
      // 
      // *   overwrite
      // *   canary
      shared_ptr<string> policy_ {};
      // The current version of the component.
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const vector<UpgradeClusterAddonsRequest::Body> & getBody() const { DARABONBA_PTR_GET_CONST(body_, vector<UpgradeClusterAddonsRequest::Body>) };
    inline vector<UpgradeClusterAddonsRequest::Body> getBody() { DARABONBA_PTR_GET(body_, vector<UpgradeClusterAddonsRequest::Body>) };
    inline UpgradeClusterAddonsRequest& setBody(const vector<UpgradeClusterAddonsRequest::Body> & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpgradeClusterAddonsRequest& setBody(vector<UpgradeClusterAddonsRequest::Body> && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The request parameters.
    shared_ptr<vector<UpgradeClusterAddonsRequest::Body>> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
