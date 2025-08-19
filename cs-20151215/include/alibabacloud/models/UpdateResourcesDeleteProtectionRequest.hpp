// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERESOURCESDELETEPROTECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATERESOURCESDELETEPROTECTIONREQUEST_HPP_
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
  class UpdateResourcesDeleteProtectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateResourcesDeleteProtectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(enable, enable_);
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
      DARABONBA_PTR_TO_JSON(resource_type, resourceType_);
      DARABONBA_PTR_TO_JSON(resources, resources_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateResourcesDeleteProtectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(enable, enable_);
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(resource_type, resourceType_);
      DARABONBA_PTR_FROM_JSON(resources, resources_);
    };
    UpdateResourcesDeleteProtectionRequest() = default ;
    UpdateResourcesDeleteProtectionRequest(const UpdateResourcesDeleteProtectionRequest &) = default ;
    UpdateResourcesDeleteProtectionRequest(UpdateResourcesDeleteProtectionRequest &&) = default ;
    UpdateResourcesDeleteProtectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateResourcesDeleteProtectionRequest() = default ;
    UpdateResourcesDeleteProtectionRequest& operator=(const UpdateResourcesDeleteProtectionRequest &) = default ;
    UpdateResourcesDeleteProtectionRequest& operator=(UpdateResourcesDeleteProtectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enable_ != nullptr
        && this->namespace_ != nullptr && this->resourceType_ != nullptr && this->resources_ != nullptr; };
    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline UpdateResourcesDeleteProtectionRequest& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline UpdateResourcesDeleteProtectionRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline UpdateResourcesDeleteProtectionRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const vector<string> & resources() const { DARABONBA_PTR_GET_CONST(resources_, vector<string>) };
    inline vector<string> resources() { DARABONBA_PTR_GET(resources_, vector<string>) };
    inline UpdateResourcesDeleteProtectionRequest& setResources(const vector<string> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline UpdateResourcesDeleteProtectionRequest& setResources(vector<string> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


  protected:
    // Specifies whether to enable deletion protection. Set the value to true to enable deletion protection and set the value to false to disable deletion protection.
    std::shared_ptr<bool> enable_ = nullptr;
    // The namespace to which the resource belongs.
    std::shared_ptr<string> namespace_ = nullptr;
    // The type of resource for which deletion protection is enabled or disabled. You can specify namespaces or Services.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The resources list.
    std::shared_ptr<vector<string>> resources_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
