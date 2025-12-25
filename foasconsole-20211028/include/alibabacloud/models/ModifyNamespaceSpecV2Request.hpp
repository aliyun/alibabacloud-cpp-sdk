// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYNAMESPACESPECV2REQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYNAMESPACESPECV2REQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyNamespaceSpecV2RequestElasticResourceSpec.hpp>
#include <alibabacloud/models/ModifyNamespaceSpecV2RequestGuaranteedResourceSpec.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20211028
{
namespace Models
{
  class ModifyNamespaceSpecV2Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyNamespaceSpecV2Request& obj) { 
      DARABONBA_PTR_TO_JSON(ElasticResourceSpec, elasticResourceSpec_);
      DARABONBA_PTR_TO_JSON(GuaranteedResourceSpec, guaranteedResourceSpec_);
      DARABONBA_PTR_TO_JSON(Ha, ha_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(Region, region_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyNamespaceSpecV2Request& obj) { 
      DARABONBA_PTR_FROM_JSON(ElasticResourceSpec, elasticResourceSpec_);
      DARABONBA_PTR_FROM_JSON(GuaranteedResourceSpec, guaranteedResourceSpec_);
      DARABONBA_PTR_FROM_JSON(Ha, ha_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
    };
    ModifyNamespaceSpecV2Request() = default ;
    ModifyNamespaceSpecV2Request(const ModifyNamespaceSpecV2Request &) = default ;
    ModifyNamespaceSpecV2Request(ModifyNamespaceSpecV2Request &&) = default ;
    ModifyNamespaceSpecV2Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyNamespaceSpecV2Request() = default ;
    ModifyNamespaceSpecV2Request& operator=(const ModifyNamespaceSpecV2Request &) = default ;
    ModifyNamespaceSpecV2Request& operator=(ModifyNamespaceSpecV2Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->elasticResourceSpec_ == nullptr
        && return this->guaranteedResourceSpec_ == nullptr && return this->ha_ == nullptr && return this->instanceId_ == nullptr && return this->namespace_ == nullptr && return this->region_ == nullptr; };
    // elasticResourceSpec Field Functions 
    bool hasElasticResourceSpec() const { return this->elasticResourceSpec_ != nullptr;};
    void deleteElasticResourceSpec() { this->elasticResourceSpec_ = nullptr;};
    inline const ModifyNamespaceSpecV2RequestElasticResourceSpec & elasticResourceSpec() const { DARABONBA_PTR_GET_CONST(elasticResourceSpec_, ModifyNamespaceSpecV2RequestElasticResourceSpec) };
    inline ModifyNamespaceSpecV2RequestElasticResourceSpec elasticResourceSpec() { DARABONBA_PTR_GET(elasticResourceSpec_, ModifyNamespaceSpecV2RequestElasticResourceSpec) };
    inline ModifyNamespaceSpecV2Request& setElasticResourceSpec(const ModifyNamespaceSpecV2RequestElasticResourceSpec & elasticResourceSpec) { DARABONBA_PTR_SET_VALUE(elasticResourceSpec_, elasticResourceSpec) };
    inline ModifyNamespaceSpecV2Request& setElasticResourceSpec(ModifyNamespaceSpecV2RequestElasticResourceSpec && elasticResourceSpec) { DARABONBA_PTR_SET_RVALUE(elasticResourceSpec_, elasticResourceSpec) };


    // guaranteedResourceSpec Field Functions 
    bool hasGuaranteedResourceSpec() const { return this->guaranteedResourceSpec_ != nullptr;};
    void deleteGuaranteedResourceSpec() { this->guaranteedResourceSpec_ = nullptr;};
    inline const ModifyNamespaceSpecV2RequestGuaranteedResourceSpec & guaranteedResourceSpec() const { DARABONBA_PTR_GET_CONST(guaranteedResourceSpec_, ModifyNamespaceSpecV2RequestGuaranteedResourceSpec) };
    inline ModifyNamespaceSpecV2RequestGuaranteedResourceSpec guaranteedResourceSpec() { DARABONBA_PTR_GET(guaranteedResourceSpec_, ModifyNamespaceSpecV2RequestGuaranteedResourceSpec) };
    inline ModifyNamespaceSpecV2Request& setGuaranteedResourceSpec(const ModifyNamespaceSpecV2RequestGuaranteedResourceSpec & guaranteedResourceSpec) { DARABONBA_PTR_SET_VALUE(guaranteedResourceSpec_, guaranteedResourceSpec) };
    inline ModifyNamespaceSpecV2Request& setGuaranteedResourceSpec(ModifyNamespaceSpecV2RequestGuaranteedResourceSpec && guaranteedResourceSpec) { DARABONBA_PTR_SET_RVALUE(guaranteedResourceSpec_, guaranteedResourceSpec) };


    // ha Field Functions 
    bool hasHa() const { return this->ha_ != nullptr;};
    void deleteHa() { this->ha_ = nullptr;};
    inline bool ha() const { DARABONBA_PTR_GET_DEFAULT(ha_, false) };
    inline ModifyNamespaceSpecV2Request& setHa(bool ha) { DARABONBA_PTR_SET_VALUE(ha_, ha) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyNamespaceSpecV2Request& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ModifyNamespaceSpecV2Request& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ModifyNamespaceSpecV2Request& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


  protected:
    std::shared_ptr<ModifyNamespaceSpecV2RequestElasticResourceSpec> elasticResourceSpec_ = nullptr;
    std::shared_ptr<ModifyNamespaceSpecV2RequestGuaranteedResourceSpec> guaranteedResourceSpec_ = nullptr;
    // This parameter is required.
    std::shared_ptr<bool> ha_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> namespace_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> region_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20211028
#endif
