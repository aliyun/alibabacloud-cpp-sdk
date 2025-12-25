// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENAMESPACEREQUESTCREATENAMESPACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATENAMESPACEREQUESTCREATENAMESPACEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateNamespaceRequestCreateNamespaceRequestResourceSpec.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20190601
{
namespace Models
{
  class CreateNamespaceRequestCreateNamespaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNamespaceRequestCreateNamespaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Ha, ha_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(ResourceSpec, resourceSpec_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNamespaceRequestCreateNamespaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Ha, ha_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(ResourceSpec, resourceSpec_);
    };
    CreateNamespaceRequestCreateNamespaceRequest() = default ;
    CreateNamespaceRequestCreateNamespaceRequest(const CreateNamespaceRequestCreateNamespaceRequest &) = default ;
    CreateNamespaceRequestCreateNamespaceRequest(CreateNamespaceRequestCreateNamespaceRequest &&) = default ;
    CreateNamespaceRequestCreateNamespaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNamespaceRequestCreateNamespaceRequest() = default ;
    CreateNamespaceRequestCreateNamespaceRequest& operator=(const CreateNamespaceRequestCreateNamespaceRequest &) = default ;
    CreateNamespaceRequestCreateNamespaceRequest& operator=(CreateNamespaceRequestCreateNamespaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ha_ == nullptr
        && return this->instanceId_ == nullptr && return this->namespace_ == nullptr && return this->region_ == nullptr && return this->resourceSpec_ == nullptr; };
    // ha Field Functions 
    bool hasHa() const { return this->ha_ != nullptr;};
    void deleteHa() { this->ha_ = nullptr;};
    inline bool ha() const { DARABONBA_PTR_GET_DEFAULT(ha_, false) };
    inline CreateNamespaceRequestCreateNamespaceRequest& setHa(bool ha) { DARABONBA_PTR_SET_VALUE(ha_, ha) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateNamespaceRequestCreateNamespaceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline CreateNamespaceRequestCreateNamespaceRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline CreateNamespaceRequestCreateNamespaceRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // resourceSpec Field Functions 
    bool hasResourceSpec() const { return this->resourceSpec_ != nullptr;};
    void deleteResourceSpec() { this->resourceSpec_ = nullptr;};
    inline const Models::CreateNamespaceRequestCreateNamespaceRequestResourceSpec & resourceSpec() const { DARABONBA_PTR_GET_CONST(resourceSpec_, Models::CreateNamespaceRequestCreateNamespaceRequestResourceSpec) };
    inline Models::CreateNamespaceRequestCreateNamespaceRequestResourceSpec resourceSpec() { DARABONBA_PTR_GET(resourceSpec_, Models::CreateNamespaceRequestCreateNamespaceRequestResourceSpec) };
    inline CreateNamespaceRequestCreateNamespaceRequest& setResourceSpec(const Models::CreateNamespaceRequestCreateNamespaceRequestResourceSpec & resourceSpec) { DARABONBA_PTR_SET_VALUE(resourceSpec_, resourceSpec) };
    inline CreateNamespaceRequestCreateNamespaceRequest& setResourceSpec(Models::CreateNamespaceRequestCreateNamespaceRequestResourceSpec && resourceSpec) { DARABONBA_PTR_SET_RVALUE(resourceSpec_, resourceSpec) };


  protected:
    std::shared_ptr<bool> ha_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> namespace_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<Models::CreateNamespaceRequestCreateNamespaceRequestResourceSpec> resourceSpec_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20190601
#endif
