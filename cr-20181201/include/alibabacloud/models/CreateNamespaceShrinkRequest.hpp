// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENAMESPACESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATENAMESPACESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class CreateNamespaceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNamespaceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoCreateRepo, autoCreateRepo_);
      DARABONBA_PTR_TO_JSON(DefaultRepoConfiguration, defaultRepoConfigurationShrink_);
      DARABONBA_PTR_TO_JSON(DefaultRepoType, defaultRepoType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NamespaceName, namespaceName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNamespaceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoCreateRepo, autoCreateRepo_);
      DARABONBA_PTR_FROM_JSON(DefaultRepoConfiguration, defaultRepoConfigurationShrink_);
      DARABONBA_PTR_FROM_JSON(DefaultRepoType, defaultRepoType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NamespaceName, namespaceName_);
    };
    CreateNamespaceShrinkRequest() = default ;
    CreateNamespaceShrinkRequest(const CreateNamespaceShrinkRequest &) = default ;
    CreateNamespaceShrinkRequest(CreateNamespaceShrinkRequest &&) = default ;
    CreateNamespaceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNamespaceShrinkRequest() = default ;
    CreateNamespaceShrinkRequest& operator=(const CreateNamespaceShrinkRequest &) = default ;
    CreateNamespaceShrinkRequest& operator=(CreateNamespaceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoCreateRepo_ != nullptr
        && this->defaultRepoConfigurationShrink_ != nullptr && this->defaultRepoType_ != nullptr && this->instanceId_ != nullptr && this->namespaceName_ != nullptr; };
    // autoCreateRepo Field Functions 
    bool hasAutoCreateRepo() const { return this->autoCreateRepo_ != nullptr;};
    void deleteAutoCreateRepo() { this->autoCreateRepo_ = nullptr;};
    inline bool autoCreateRepo() const { DARABONBA_PTR_GET_DEFAULT(autoCreateRepo_, false) };
    inline CreateNamespaceShrinkRequest& setAutoCreateRepo(bool autoCreateRepo) { DARABONBA_PTR_SET_VALUE(autoCreateRepo_, autoCreateRepo) };


    // defaultRepoConfigurationShrink Field Functions 
    bool hasDefaultRepoConfigurationShrink() const { return this->defaultRepoConfigurationShrink_ != nullptr;};
    void deleteDefaultRepoConfigurationShrink() { this->defaultRepoConfigurationShrink_ = nullptr;};
    inline string defaultRepoConfigurationShrink() const { DARABONBA_PTR_GET_DEFAULT(defaultRepoConfigurationShrink_, "") };
    inline CreateNamespaceShrinkRequest& setDefaultRepoConfigurationShrink(string defaultRepoConfigurationShrink) { DARABONBA_PTR_SET_VALUE(defaultRepoConfigurationShrink_, defaultRepoConfigurationShrink) };


    // defaultRepoType Field Functions 
    bool hasDefaultRepoType() const { return this->defaultRepoType_ != nullptr;};
    void deleteDefaultRepoType() { this->defaultRepoType_ = nullptr;};
    inline string defaultRepoType() const { DARABONBA_PTR_GET_DEFAULT(defaultRepoType_, "") };
    inline CreateNamespaceShrinkRequest& setDefaultRepoType(string defaultRepoType) { DARABONBA_PTR_SET_VALUE(defaultRepoType_, defaultRepoType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateNamespaceShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // namespaceName Field Functions 
    bool hasNamespaceName() const { return this->namespaceName_ != nullptr;};
    void deleteNamespaceName() { this->namespaceName_ = nullptr;};
    inline string namespaceName() const { DARABONBA_PTR_GET_DEFAULT(namespaceName_, "") };
    inline CreateNamespaceShrinkRequest& setNamespaceName(string namespaceName) { DARABONBA_PTR_SET_VALUE(namespaceName_, namespaceName) };


  protected:
    // Specifies whether to automatically create an image repository in the namespace.
    std::shared_ptr<bool> autoCreateRepo_ = nullptr;
    std::shared_ptr<string> defaultRepoConfigurationShrink_ = nullptr;
    // The default type of the repositories that are automatically created in the namespace. Valid values:
    // 
    // *   `PUBLIC`: public repositories
    // *   `PRIVATE`: private repositories.
    std::shared_ptr<string> defaultRepoType_ = nullptr;
    // The ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the namespace. The name must be 2 to 120 characters in length, and can contain lowercase letters, digits, and the following delimiters: underscores (_), hyphens (-), and periods (.). The name cannot start or end with a delimiter.
    // 
    // This parameter is required.
    std::shared_ptr<string> namespaceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
