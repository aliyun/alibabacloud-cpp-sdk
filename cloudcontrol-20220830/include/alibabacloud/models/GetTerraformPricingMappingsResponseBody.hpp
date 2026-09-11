// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTERRAFORMPRICINGMAPPINGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTERRAFORMPRICINGMAPPINGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudcontrol20220830
{
namespace Models
{
  class GetTerraformPricingMappingsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTerraformPricingMappingsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(mappingVersion, mappingVersion_);
      DARABONBA_PTR_TO_JSON(mappings, mappings_);
      DARABONBA_PTR_TO_JSON(missingResourceTypes, missingResourceTypes_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(schemaVersion, schemaVersion_);
      DARABONBA_PTR_TO_JSON(unsupportedResourceTypes, unsupportedResourceTypes_);
    };
    friend void from_json(const Darabonba::Json& j, GetTerraformPricingMappingsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(mappingVersion, mappingVersion_);
      DARABONBA_PTR_FROM_JSON(mappings, mappings_);
      DARABONBA_PTR_FROM_JSON(missingResourceTypes, missingResourceTypes_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(schemaVersion, schemaVersion_);
      DARABONBA_PTR_FROM_JSON(unsupportedResourceTypes, unsupportedResourceTypes_);
    };
    GetTerraformPricingMappingsResponseBody() = default ;
    GetTerraformPricingMappingsResponseBody(const GetTerraformPricingMappingsResponseBody &) = default ;
    GetTerraformPricingMappingsResponseBody(GetTerraformPricingMappingsResponseBody &&) = default ;
    GetTerraformPricingMappingsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTerraformPricingMappingsResponseBody() = default ;
    GetTerraformPricingMappingsResponseBody& operator=(const GetTerraformPricingMappingsResponseBody &) = default ;
    GetTerraformPricingMappingsResponseBody& operator=(GetTerraformPricingMappingsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Mappings : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Mappings& obj) { 
        DARABONBA_PTR_TO_JSON(pricingTargets, pricingTargets_);
        DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
      };
      friend void from_json(const Darabonba::Json& j, Mappings& obj) { 
        DARABONBA_PTR_FROM_JSON(pricingTargets, pricingTargets_);
        DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
      };
      Mappings() = default ;
      Mappings(const Mappings &) = default ;
      Mappings(Mappings &&) = default ;
      Mappings(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Mappings() = default ;
      Mappings& operator=(const Mappings &) = default ;
      Mappings& operator=(Mappings &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->pricingTargets_ == nullptr
        && this->resourceType_ == nullptr; };
      // pricingTargets Field Functions 
      bool hasPricingTargets() const { return this->pricingTargets_ != nullptr;};
      void deletePricingTargets() { this->pricingTargets_ = nullptr;};
      inline const vector<Darabonba::Json> & getPricingTargets() const { DARABONBA_PTR_GET_CONST(pricingTargets_, vector<Darabonba::Json>) };
      inline vector<Darabonba::Json> getPricingTargets() { DARABONBA_PTR_GET(pricingTargets_, vector<Darabonba::Json>) };
      inline Mappings& setPricingTargets(const vector<Darabonba::Json> & pricingTargets) { DARABONBA_PTR_SET_VALUE(pricingTargets_, pricingTargets) };
      inline Mappings& setPricingTargets(vector<Darabonba::Json> && pricingTargets) { DARABONBA_PTR_SET_RVALUE(pricingTargets_, pricingTargets) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline Mappings& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    protected:
      // The list of pricing targets. Each item contains actions (create/update), popCode/popVersion/apiName, pricingUnit, params (parameter extraction rules: from=$after.xxx / const / default / expand), and when/whenChanged conditions.
      shared_ptr<vector<Darabonba::Json>> pricingTargets_ {};
      // The Terraform resource type, such as alicloud_instance.
      shared_ptr<string> resourceType_ {};
    };

    virtual bool empty() const override { return this->mappingVersion_ == nullptr
        && this->mappings_ == nullptr && this->missingResourceTypes_ == nullptr && this->requestId_ == nullptr && this->schemaVersion_ == nullptr && this->unsupportedResourceTypes_ == nullptr; };
    // mappingVersion Field Functions 
    bool hasMappingVersion() const { return this->mappingVersion_ != nullptr;};
    void deleteMappingVersion() { this->mappingVersion_ = nullptr;};
    inline string getMappingVersion() const { DARABONBA_PTR_GET_DEFAULT(mappingVersion_, "") };
    inline GetTerraformPricingMappingsResponseBody& setMappingVersion(string mappingVersion) { DARABONBA_PTR_SET_VALUE(mappingVersion_, mappingVersion) };


    // mappings Field Functions 
    bool hasMappings() const { return this->mappings_ != nullptr;};
    void deleteMappings() { this->mappings_ = nullptr;};
    inline const vector<GetTerraformPricingMappingsResponseBody::Mappings> & getMappings() const { DARABONBA_PTR_GET_CONST(mappings_, vector<GetTerraformPricingMappingsResponseBody::Mappings>) };
    inline vector<GetTerraformPricingMappingsResponseBody::Mappings> getMappings() { DARABONBA_PTR_GET(mappings_, vector<GetTerraformPricingMappingsResponseBody::Mappings>) };
    inline GetTerraformPricingMappingsResponseBody& setMappings(const vector<GetTerraformPricingMappingsResponseBody::Mappings> & mappings) { DARABONBA_PTR_SET_VALUE(mappings_, mappings) };
    inline GetTerraformPricingMappingsResponseBody& setMappings(vector<GetTerraformPricingMappingsResponseBody::Mappings> && mappings) { DARABONBA_PTR_SET_RVALUE(mappings_, mappings) };


    // missingResourceTypes Field Functions 
    bool hasMissingResourceTypes() const { return this->missingResourceTypes_ != nullptr;};
    void deleteMissingResourceTypes() { this->missingResourceTypes_ = nullptr;};
    inline const vector<string> & getMissingResourceTypes() const { DARABONBA_PTR_GET_CONST(missingResourceTypes_, vector<string>) };
    inline vector<string> getMissingResourceTypes() { DARABONBA_PTR_GET(missingResourceTypes_, vector<string>) };
    inline GetTerraformPricingMappingsResponseBody& setMissingResourceTypes(const vector<string> & missingResourceTypes) { DARABONBA_PTR_SET_VALUE(missingResourceTypes_, missingResourceTypes) };
    inline GetTerraformPricingMappingsResponseBody& setMissingResourceTypes(vector<string> && missingResourceTypes) { DARABONBA_PTR_SET_RVALUE(missingResourceTypes_, missingResourceTypes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTerraformPricingMappingsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // schemaVersion Field Functions 
    bool hasSchemaVersion() const { return this->schemaVersion_ != nullptr;};
    void deleteSchemaVersion() { this->schemaVersion_ = nullptr;};
    inline string getSchemaVersion() const { DARABONBA_PTR_GET_DEFAULT(schemaVersion_, "") };
    inline GetTerraformPricingMappingsResponseBody& setSchemaVersion(string schemaVersion) { DARABONBA_PTR_SET_VALUE(schemaVersion_, schemaVersion) };


    // unsupportedResourceTypes Field Functions 
    bool hasUnsupportedResourceTypes() const { return this->unsupportedResourceTypes_ != nullptr;};
    void deleteUnsupportedResourceTypes() { this->unsupportedResourceTypes_ = nullptr;};
    inline const vector<string> & getUnsupportedResourceTypes() const { DARABONBA_PTR_GET_CONST(unsupportedResourceTypes_, vector<string>) };
    inline vector<string> getUnsupportedResourceTypes() { DARABONBA_PTR_GET(unsupportedResourceTypes_, vector<string>) };
    inline GetTerraformPricingMappingsResponseBody& setUnsupportedResourceTypes(const vector<string> & unsupportedResourceTypes) { DARABONBA_PTR_SET_VALUE(unsupportedResourceTypes_, unsupportedResourceTypes) };
    inline GetTerraformPricingMappingsResponseBody& setUnsupportedResourceTypes(vector<string> && unsupportedResourceTypes) { DARABONBA_PTR_SET_RVALUE(unsupportedResourceTypes_, unsupportedResourceTypes) };


  protected:
    // The mapping content version, which is the timestamp of the most recent data change. Consumers can use this value for caching and auditing.
    shared_ptr<string> mappingVersion_ {};
    // The list of matched mappings. Each item contains a resourceType and pricingTargets, which include pricing targets and parameter extraction rules. The rules reference Terraform plan resource properties by using $after/$before.
    shared_ptr<vector<GetTerraformPricingMappingsResponseBody::Mappings>> mappings_ {};
    // The resource types in the request that do not have registered mappings. Consumers must treat these as unknown cost. Do not assume they are free.
    shared_ptr<vector<string>> missingResourceTypes_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The schema version of the mapping catalog. The current version is 1.0. Consumers use this value to determine compatibility.
    shared_ptr<string> schemaVersion_ {};
    // The resource types that are confirmed to not support pricing, such as free resources or resources without a pricing interface. These are different from missing resource types.
    shared_ptr<vector<string>> unsupportedResourceTypes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudcontrol20220830
#endif
