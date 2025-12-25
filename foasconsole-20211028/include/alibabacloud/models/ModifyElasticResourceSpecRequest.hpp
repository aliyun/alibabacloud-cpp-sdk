// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYELASTICRESOURCESPECREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYELASTICRESOURCESPECREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyElasticResourceSpecRequestResourceSpec.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20211028
{
namespace Models
{
  class ModifyElasticResourceSpecRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyElasticResourceSpecRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(ResourceSpec, resourceSpec_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyElasticResourceSpecRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(ResourceSpec, resourceSpec_);
    };
    ModifyElasticResourceSpecRequest() = default ;
    ModifyElasticResourceSpecRequest(const ModifyElasticResourceSpecRequest &) = default ;
    ModifyElasticResourceSpecRequest(ModifyElasticResourceSpecRequest &&) = default ;
    ModifyElasticResourceSpecRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyElasticResourceSpecRequest() = default ;
    ModifyElasticResourceSpecRequest& operator=(const ModifyElasticResourceSpecRequest &) = default ;
    ModifyElasticResourceSpecRequest& operator=(ModifyElasticResourceSpecRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->region_ == nullptr && return this->resourceSpec_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyElasticResourceSpecRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ModifyElasticResourceSpecRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // resourceSpec Field Functions 
    bool hasResourceSpec() const { return this->resourceSpec_ != nullptr;};
    void deleteResourceSpec() { this->resourceSpec_ = nullptr;};
    inline const ModifyElasticResourceSpecRequestResourceSpec & resourceSpec() const { DARABONBA_PTR_GET_CONST(resourceSpec_, ModifyElasticResourceSpecRequestResourceSpec) };
    inline ModifyElasticResourceSpecRequestResourceSpec resourceSpec() { DARABONBA_PTR_GET(resourceSpec_, ModifyElasticResourceSpecRequestResourceSpec) };
    inline ModifyElasticResourceSpecRequest& setResourceSpec(const ModifyElasticResourceSpecRequestResourceSpec & resourceSpec) { DARABONBA_PTR_SET_VALUE(resourceSpec_, resourceSpec) };
    inline ModifyElasticResourceSpecRequest& setResourceSpec(ModifyElasticResourceSpecRequestResourceSpec && resourceSpec) { DARABONBA_PTR_SET_RVALUE(resourceSpec_, resourceSpec) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> region_ = nullptr;
    // This parameter is required.
    std::shared_ptr<ModifyElasticResourceSpecRequestResourceSpec> resourceSpec_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20211028
#endif
