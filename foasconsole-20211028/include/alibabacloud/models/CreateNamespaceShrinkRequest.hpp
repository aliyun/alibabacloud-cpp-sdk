// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENAMESPACESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATENAMESPACESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20211028
{
namespace Models
{
  class CreateNamespaceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNamespaceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Ha, ha_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(ResourceSpec, resourceSpecShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNamespaceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Ha, ha_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(ResourceSpec, resourceSpecShrink_);
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
    virtual bool empty() const override { return this->ha_ == nullptr
        && return this->instanceId_ == nullptr && return this->namespace_ == nullptr && return this->region_ == nullptr && return this->resourceSpecShrink_ == nullptr; };
    // ha Field Functions 
    bool hasHa() const { return this->ha_ != nullptr;};
    void deleteHa() { this->ha_ = nullptr;};
    inline bool ha() const { DARABONBA_PTR_GET_DEFAULT(ha_, false) };
    inline CreateNamespaceShrinkRequest& setHa(bool ha) { DARABONBA_PTR_SET_VALUE(ha_, ha) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateNamespaceShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline CreateNamespaceShrinkRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline CreateNamespaceShrinkRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // resourceSpecShrink Field Functions 
    bool hasResourceSpecShrink() const { return this->resourceSpecShrink_ != nullptr;};
    void deleteResourceSpecShrink() { this->resourceSpecShrink_ = nullptr;};
    inline string resourceSpecShrink() const { DARABONBA_PTR_GET_DEFAULT(resourceSpecShrink_, "") };
    inline CreateNamespaceShrinkRequest& setResourceSpecShrink(string resourceSpecShrink) { DARABONBA_PTR_SET_VALUE(resourceSpecShrink_, resourceSpecShrink) };


  protected:
    std::shared_ptr<bool> ha_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> namespace_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<string> resourceSpecShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20211028
#endif
