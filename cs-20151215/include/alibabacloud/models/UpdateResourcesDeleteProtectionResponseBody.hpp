// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERESOURCESDELETEPROTECTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATERESOURCESDELETEPROTECTIONRESPONSEBODY_HPP_
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
  class UpdateResourcesDeleteProtectionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateResourcesDeleteProtectionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
      DARABONBA_PTR_TO_JSON(protection, protection_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(resource_type, resourceType_);
      DARABONBA_PTR_TO_JSON(resources, resources_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateResourcesDeleteProtectionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(protection, protection_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resource_type, resourceType_);
      DARABONBA_PTR_FROM_JSON(resources, resources_);
    };
    UpdateResourcesDeleteProtectionResponseBody() = default ;
    UpdateResourcesDeleteProtectionResponseBody(const UpdateResourcesDeleteProtectionResponseBody &) = default ;
    UpdateResourcesDeleteProtectionResponseBody(UpdateResourcesDeleteProtectionResponseBody &&) = default ;
    UpdateResourcesDeleteProtectionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateResourcesDeleteProtectionResponseBody() = default ;
    UpdateResourcesDeleteProtectionResponseBody& operator=(const UpdateResourcesDeleteProtectionResponseBody &) = default ;
    UpdateResourcesDeleteProtectionResponseBody& operator=(UpdateResourcesDeleteProtectionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->namespace_ == nullptr
        && return this->protection_ == nullptr && return this->requestId_ == nullptr && return this->resourceType_ == nullptr && return this->resources_ == nullptr; };
    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline UpdateResourcesDeleteProtectionResponseBody& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // protection Field Functions 
    bool hasProtection() const { return this->protection_ != nullptr;};
    void deleteProtection() { this->protection_ = nullptr;};
    inline string protection() const { DARABONBA_PTR_GET_DEFAULT(protection_, "") };
    inline UpdateResourcesDeleteProtectionResponseBody& setProtection(string protection) { DARABONBA_PTR_SET_VALUE(protection_, protection) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateResourcesDeleteProtectionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline UpdateResourcesDeleteProtectionResponseBody& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const vector<string> & resources() const { DARABONBA_PTR_GET_CONST(resources_, vector<string>) };
    inline vector<string> resources() { DARABONBA_PTR_GET(resources_, vector<string>) };
    inline UpdateResourcesDeleteProtectionResponseBody& setResources(const vector<string> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline UpdateResourcesDeleteProtectionResponseBody& setResources(vector<string> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


  protected:
    // The namespace to which the resource belongs.
    std::shared_ptr<string> namespace_ = nullptr;
    // Indicates the status of deletion protection. A value of true indicates that deletion protection is enabled and a value of false indicates that deletion protection is disabled.
    std::shared_ptr<string> protection_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    // The type of resource for which deletion protection is enabled or disabled.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The list of resources whose deletion protection status is updated.
    std::shared_ptr<vector<string>> resources_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
