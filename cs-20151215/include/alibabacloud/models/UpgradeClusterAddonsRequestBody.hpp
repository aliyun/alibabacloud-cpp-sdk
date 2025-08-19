// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADECLUSTERADDONSREQUESTBODY_HPP_
#define ALIBABACLOUD_MODELS_UPGRADECLUSTERADDONSREQUESTBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class UpgradeClusterAddonsRequestBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeClusterAddonsRequestBody& obj) { 
      DARABONBA_PTR_TO_JSON(component_name, componentName_);
      DARABONBA_PTR_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(next_version, nextVersion_);
      DARABONBA_PTR_TO_JSON(policy, policy_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeClusterAddonsRequestBody& obj) { 
      DARABONBA_PTR_FROM_JSON(component_name, componentName_);
      DARABONBA_PTR_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(next_version, nextVersion_);
      DARABONBA_PTR_FROM_JSON(policy, policy_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    UpgradeClusterAddonsRequestBody() = default ;
    UpgradeClusterAddonsRequestBody(const UpgradeClusterAddonsRequestBody &) = default ;
    UpgradeClusterAddonsRequestBody(UpgradeClusterAddonsRequestBody &&) = default ;
    UpgradeClusterAddonsRequestBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeClusterAddonsRequestBody() = default ;
    UpgradeClusterAddonsRequestBody& operator=(const UpgradeClusterAddonsRequestBody &) = default ;
    UpgradeClusterAddonsRequestBody& operator=(UpgradeClusterAddonsRequestBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->componentName_ != nullptr
        && this->config_ != nullptr && this->nextVersion_ != nullptr && this->policy_ != nullptr && this->version_ != nullptr; };
    // componentName Field Functions 
    bool hasComponentName() const { return this->componentName_ != nullptr;};
    void deleteComponentName() { this->componentName_ = nullptr;};
    inline string componentName() const { DARABONBA_PTR_GET_DEFAULT(componentName_, "") };
    inline UpgradeClusterAddonsRequestBody& setComponentName(string componentName) { DARABONBA_PTR_SET_VALUE(componentName_, componentName) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline UpgradeClusterAddonsRequestBody& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // nextVersion Field Functions 
    bool hasNextVersion() const { return this->nextVersion_ != nullptr;};
    void deleteNextVersion() { this->nextVersion_ = nullptr;};
    inline string nextVersion() const { DARABONBA_PTR_GET_DEFAULT(nextVersion_, "") };
    inline UpgradeClusterAddonsRequestBody& setNextVersion(string nextVersion) { DARABONBA_PTR_SET_VALUE(nextVersion_, nextVersion) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string policy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline UpgradeClusterAddonsRequestBody& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline UpgradeClusterAddonsRequestBody& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The name of the component.
    // 
    // This parameter is required.
    std::shared_ptr<string> componentName_ = nullptr;
    // The custom component settings that you want to use. The value is a JSON string.
    std::shared_ptr<string> config_ = nullptr;
    // The version to which the component can be updated. You can call the `DescribeClusterAddonsVersion` operation to query the version to which the component can be updated.
    // 
    // This parameter is required.
    std::shared_ptr<string> nextVersion_ = nullptr;
    // The update policy. Valid values:
    // 
    // *   overwrite
    // *   canary
    std::shared_ptr<string> policy_ = nullptr;
    // The current version of the component.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
