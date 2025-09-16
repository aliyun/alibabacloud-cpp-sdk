// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYNAMESPACESPECV2SHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYNAMESPACESPECV2SHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20211028
{
namespace Models
{
  class ModifyNamespaceSpecV2ShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyNamespaceSpecV2ShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ElasticResourceSpec, elasticResourceSpecShrink_);
      DARABONBA_PTR_TO_JSON(GuaranteedResourceSpec, guaranteedResourceSpecShrink_);
      DARABONBA_PTR_TO_JSON(Ha, ha_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(Region, region_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyNamespaceSpecV2ShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ElasticResourceSpec, elasticResourceSpecShrink_);
      DARABONBA_PTR_FROM_JSON(GuaranteedResourceSpec, guaranteedResourceSpecShrink_);
      DARABONBA_PTR_FROM_JSON(Ha, ha_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
    };
    ModifyNamespaceSpecV2ShrinkRequest() = default ;
    ModifyNamespaceSpecV2ShrinkRequest(const ModifyNamespaceSpecV2ShrinkRequest &) = default ;
    ModifyNamespaceSpecV2ShrinkRequest(ModifyNamespaceSpecV2ShrinkRequest &&) = default ;
    ModifyNamespaceSpecV2ShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyNamespaceSpecV2ShrinkRequest() = default ;
    ModifyNamespaceSpecV2ShrinkRequest& operator=(const ModifyNamespaceSpecV2ShrinkRequest &) = default ;
    ModifyNamespaceSpecV2ShrinkRequest& operator=(ModifyNamespaceSpecV2ShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->elasticResourceSpecShrink_ != nullptr
        && this->guaranteedResourceSpecShrink_ != nullptr && this->ha_ != nullptr && this->instanceId_ != nullptr && this->namespace_ != nullptr && this->region_ != nullptr; };
    // elasticResourceSpecShrink Field Functions 
    bool hasElasticResourceSpecShrink() const { return this->elasticResourceSpecShrink_ != nullptr;};
    void deleteElasticResourceSpecShrink() { this->elasticResourceSpecShrink_ = nullptr;};
    inline string elasticResourceSpecShrink() const { DARABONBA_PTR_GET_DEFAULT(elasticResourceSpecShrink_, "") };
    inline ModifyNamespaceSpecV2ShrinkRequest& setElasticResourceSpecShrink(string elasticResourceSpecShrink) { DARABONBA_PTR_SET_VALUE(elasticResourceSpecShrink_, elasticResourceSpecShrink) };


    // guaranteedResourceSpecShrink Field Functions 
    bool hasGuaranteedResourceSpecShrink() const { return this->guaranteedResourceSpecShrink_ != nullptr;};
    void deleteGuaranteedResourceSpecShrink() { this->guaranteedResourceSpecShrink_ = nullptr;};
    inline string guaranteedResourceSpecShrink() const { DARABONBA_PTR_GET_DEFAULT(guaranteedResourceSpecShrink_, "") };
    inline ModifyNamespaceSpecV2ShrinkRequest& setGuaranteedResourceSpecShrink(string guaranteedResourceSpecShrink) { DARABONBA_PTR_SET_VALUE(guaranteedResourceSpecShrink_, guaranteedResourceSpecShrink) };


    // ha Field Functions 
    bool hasHa() const { return this->ha_ != nullptr;};
    void deleteHa() { this->ha_ = nullptr;};
    inline bool ha() const { DARABONBA_PTR_GET_DEFAULT(ha_, false) };
    inline ModifyNamespaceSpecV2ShrinkRequest& setHa(bool ha) { DARABONBA_PTR_SET_VALUE(ha_, ha) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyNamespaceSpecV2ShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ModifyNamespaceSpecV2ShrinkRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ModifyNamespaceSpecV2ShrinkRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


  protected:
    std::shared_ptr<string> elasticResourceSpecShrink_ = nullptr;
    std::shared_ptr<string> guaranteedResourceSpecShrink_ = nullptr;
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
