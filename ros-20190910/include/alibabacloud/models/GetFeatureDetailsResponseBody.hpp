// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFEATUREDETAILSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETFEATUREDETAILSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GetFeatureDetailsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFeatureDetailsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DriftDetection, driftDetection_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceCleaner, resourceCleaner_);
      DARABONBA_PTR_TO_JSON(ResourceImport, resourceImport_);
      DARABONBA_PTR_TO_JSON(TemplateParameterConstraints, templateParameterConstraints_);
      DARABONBA_PTR_TO_JSON(TemplateScratch, templateScratch_);
      DARABONBA_PTR_TO_JSON(Terraform, terraform_);
    };
    friend void from_json(const Darabonba::Json& j, GetFeatureDetailsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DriftDetection, driftDetection_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceCleaner, resourceCleaner_);
      DARABONBA_PTR_FROM_JSON(ResourceImport, resourceImport_);
      DARABONBA_PTR_FROM_JSON(TemplateParameterConstraints, templateParameterConstraints_);
      DARABONBA_PTR_FROM_JSON(TemplateScratch, templateScratch_);
      DARABONBA_PTR_FROM_JSON(Terraform, terraform_);
    };
    GetFeatureDetailsResponseBody() = default ;
    GetFeatureDetailsResponseBody(const GetFeatureDetailsResponseBody &) = default ;
    GetFeatureDetailsResponseBody(GetFeatureDetailsResponseBody &&) = default ;
    GetFeatureDetailsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFeatureDetailsResponseBody() = default ;
    GetFeatureDetailsResponseBody& operator=(const GetFeatureDetailsResponseBody &) = default ;
    GetFeatureDetailsResponseBody& operator=(GetFeatureDetailsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Terraform : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Terraform& obj) { 
        DARABONBA_PTR_TO_JSON(SupportedResourceTypes, supportedResourceTypes_);
        DARABONBA_PTR_TO_JSON(SupportedVersions, supportedVersions_);
      };
      friend void from_json(const Darabonba::Json& j, Terraform& obj) { 
        DARABONBA_PTR_FROM_JSON(SupportedResourceTypes, supportedResourceTypes_);
        DARABONBA_PTR_FROM_JSON(SupportedVersions, supportedVersions_);
      };
      Terraform() = default ;
      Terraform(const Terraform &) = default ;
      Terraform(Terraform &&) = default ;
      Terraform(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Terraform() = default ;
      Terraform& operator=(const Terraform &) = default ;
      Terraform& operator=(Terraform &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SupportedVersions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SupportedVersions& obj) { 
          DARABONBA_PTR_TO_JSON(ProviderVersions, providerVersions_);
          DARABONBA_PTR_TO_JSON(TerraformVersion, terraformVersion_);
          DARABONBA_PTR_TO_JSON(Transform, transform_);
          DARABONBA_PTR_TO_JSON(UpdateAllowedTransforms, updateAllowedTransforms_);
        };
        friend void from_json(const Darabonba::Json& j, SupportedVersions& obj) { 
          DARABONBA_PTR_FROM_JSON(ProviderVersions, providerVersions_);
          DARABONBA_PTR_FROM_JSON(TerraformVersion, terraformVersion_);
          DARABONBA_PTR_FROM_JSON(Transform, transform_);
          DARABONBA_PTR_FROM_JSON(UpdateAllowedTransforms, updateAllowedTransforms_);
        };
        SupportedVersions() = default ;
        SupportedVersions(const SupportedVersions &) = default ;
        SupportedVersions(SupportedVersions &&) = default ;
        SupportedVersions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SupportedVersions() = default ;
        SupportedVersions& operator=(const SupportedVersions &) = default ;
        SupportedVersions& operator=(SupportedVersions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ProviderVersions : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ProviderVersions& obj) { 
            DARABONBA_PTR_TO_JSON(ProviderName, providerName_);
            DARABONBA_PTR_TO_JSON(SupportedVersions, supportedVersions_);
          };
          friend void from_json(const Darabonba::Json& j, ProviderVersions& obj) { 
            DARABONBA_PTR_FROM_JSON(ProviderName, providerName_);
            DARABONBA_PTR_FROM_JSON(SupportedVersions, supportedVersions_);
          };
          ProviderVersions() = default ;
          ProviderVersions(const ProviderVersions &) = default ;
          ProviderVersions(ProviderVersions &&) = default ;
          ProviderVersions(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ProviderVersions() = default ;
          ProviderVersions& operator=(const ProviderVersions &) = default ;
          ProviderVersions& operator=(ProviderVersions &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->providerName_ == nullptr
        && this->supportedVersions_ == nullptr; };
          // providerName Field Functions 
          bool hasProviderName() const { return this->providerName_ != nullptr;};
          void deleteProviderName() { this->providerName_ = nullptr;};
          inline string getProviderName() const { DARABONBA_PTR_GET_DEFAULT(providerName_, "") };
          inline ProviderVersions& setProviderName(string providerName) { DARABONBA_PTR_SET_VALUE(providerName_, providerName) };


          // supportedVersions Field Functions 
          bool hasSupportedVersions() const { return this->supportedVersions_ != nullptr;};
          void deleteSupportedVersions() { this->supportedVersions_ = nullptr;};
          inline const vector<string> & getSupportedVersions() const { DARABONBA_PTR_GET_CONST(supportedVersions_, vector<string>) };
          inline vector<string> getSupportedVersions() { DARABONBA_PTR_GET(supportedVersions_, vector<string>) };
          inline ProviderVersions& setSupportedVersions(const vector<string> & supportedVersions) { DARABONBA_PTR_SET_VALUE(supportedVersions_, supportedVersions) };
          inline ProviderVersions& setSupportedVersions(vector<string> && supportedVersions) { DARABONBA_PTR_SET_RVALUE(supportedVersions_, supportedVersions) };


        protected:
          // The name of the provider.
          shared_ptr<string> providerName_ {};
          // The provider versions.
          shared_ptr<vector<string>> supportedVersions_ {};
        };

        virtual bool empty() const override { return this->providerVersions_ == nullptr
        && this->terraformVersion_ == nullptr && this->transform_ == nullptr && this->updateAllowedTransforms_ == nullptr; };
        // providerVersions Field Functions 
        bool hasProviderVersions() const { return this->providerVersions_ != nullptr;};
        void deleteProviderVersions() { this->providerVersions_ = nullptr;};
        inline const vector<SupportedVersions::ProviderVersions> & getProviderVersions() const { DARABONBA_PTR_GET_CONST(providerVersions_, vector<SupportedVersions::ProviderVersions>) };
        inline vector<SupportedVersions::ProviderVersions> getProviderVersions() { DARABONBA_PTR_GET(providerVersions_, vector<SupportedVersions::ProviderVersions>) };
        inline SupportedVersions& setProviderVersions(const vector<SupportedVersions::ProviderVersions> & providerVersions) { DARABONBA_PTR_SET_VALUE(providerVersions_, providerVersions) };
        inline SupportedVersions& setProviderVersions(vector<SupportedVersions::ProviderVersions> && providerVersions) { DARABONBA_PTR_SET_RVALUE(providerVersions_, providerVersions) };


        // terraformVersion Field Functions 
        bool hasTerraformVersion() const { return this->terraformVersion_ != nullptr;};
        void deleteTerraformVersion() { this->terraformVersion_ = nullptr;};
        inline string getTerraformVersion() const { DARABONBA_PTR_GET_DEFAULT(terraformVersion_, "") };
        inline SupportedVersions& setTerraformVersion(string terraformVersion) { DARABONBA_PTR_SET_VALUE(terraformVersion_, terraformVersion) };


        // transform Field Functions 
        bool hasTransform() const { return this->transform_ != nullptr;};
        void deleteTransform() { this->transform_ = nullptr;};
        inline string getTransform() const { DARABONBA_PTR_GET_DEFAULT(transform_, "") };
        inline SupportedVersions& setTransform(string transform) { DARABONBA_PTR_SET_VALUE(transform_, transform) };


        // updateAllowedTransforms Field Functions 
        bool hasUpdateAllowedTransforms() const { return this->updateAllowedTransforms_ != nullptr;};
        void deleteUpdateAllowedTransforms() { this->updateAllowedTransforms_ = nullptr;};
        inline const vector<string> & getUpdateAllowedTransforms() const { DARABONBA_PTR_GET_CONST(updateAllowedTransforms_, vector<string>) };
        inline vector<string> getUpdateAllowedTransforms() { DARABONBA_PTR_GET(updateAllowedTransforms_, vector<string>) };
        inline SupportedVersions& setUpdateAllowedTransforms(const vector<string> & updateAllowedTransforms) { DARABONBA_PTR_SET_VALUE(updateAllowedTransforms_, updateAllowedTransforms) };
        inline SupportedVersions& setUpdateAllowedTransforms(vector<string> && updateAllowedTransforms) { DARABONBA_PTR_SET_RVALUE(updateAllowedTransforms_, updateAllowedTransforms) };


      protected:
        // The names and versions of the providers that correspond to the Terraform versions.
        shared_ptr<vector<SupportedVersions::ProviderVersions>> providerVersions_ {};
        // The Terraform version.
        shared_ptr<string> terraformVersion_ {};
        // The Terraform version that is supported by ROS. The parameter value is the same as the value of the Transform parameter in a Terraform template.
        shared_ptr<string> transform_ {};
        // The Terraform versions that can be updated in ROS.
        shared_ptr<vector<string>> updateAllowedTransforms_ {};
      };

      class SupportedResourceTypes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SupportedResourceTypes& obj) { 
          DARABONBA_PTR_TO_JSON(CustomTag, customTag_);
          DARABONBA_PTR_TO_JSON(EstimateCost, estimateCost_);
          DARABONBA_PTR_TO_JSON(ResourceGroup, resourceGroup_);
          DARABONBA_PTR_TO_JSON(StackOperationRisk, stackOperationRisk_);
          DARABONBA_PTR_TO_JSON(SystemTag, systemTag_);
        };
        friend void from_json(const Darabonba::Json& j, SupportedResourceTypes& obj) { 
          DARABONBA_PTR_FROM_JSON(CustomTag, customTag_);
          DARABONBA_PTR_FROM_JSON(EstimateCost, estimateCost_);
          DARABONBA_PTR_FROM_JSON(ResourceGroup, resourceGroup_);
          DARABONBA_PTR_FROM_JSON(StackOperationRisk, stackOperationRisk_);
          DARABONBA_PTR_FROM_JSON(SystemTag, systemTag_);
        };
        SupportedResourceTypes() = default ;
        SupportedResourceTypes(const SupportedResourceTypes &) = default ;
        SupportedResourceTypes(SupportedResourceTypes &&) = default ;
        SupportedResourceTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SupportedResourceTypes() = default ;
        SupportedResourceTypes& operator=(const SupportedResourceTypes &) = default ;
        SupportedResourceTypes& operator=(SupportedResourceTypes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class StackOperationRisk : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const StackOperationRisk& obj) { 
            DARABONBA_PTR_TO_JSON(DeleteStack, deleteStack_);
          };
          friend void from_json(const Darabonba::Json& j, StackOperationRisk& obj) { 
            DARABONBA_PTR_FROM_JSON(DeleteStack, deleteStack_);
          };
          StackOperationRisk() = default ;
          StackOperationRisk(const StackOperationRisk &) = default ;
          StackOperationRisk(StackOperationRisk &&) = default ;
          StackOperationRisk(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~StackOperationRisk() = default ;
          StackOperationRisk& operator=(const StackOperationRisk &) = default ;
          StackOperationRisk& operator=(StackOperationRisk &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->deleteStack_ == nullptr; };
          // deleteStack Field Functions 
          bool hasDeleteStack() const { return this->deleteStack_ != nullptr;};
          void deleteDeleteStack() { this->deleteStack_ = nullptr;};
          inline const vector<string> & getDeleteStack() const { DARABONBA_PTR_GET_CONST(deleteStack_, vector<string>) };
          inline vector<string> getDeleteStack() { DARABONBA_PTR_GET(deleteStack_, vector<string>) };
          inline StackOperationRisk& setDeleteStack(const vector<string> & deleteStack) { DARABONBA_PTR_SET_VALUE(deleteStack_, deleteStack) };
          inline StackOperationRisk& setDeleteStack(vector<string> && deleteStack) { DARABONBA_PTR_SET_RVALUE(deleteStack_, deleteStack) };


        protected:
          // The resource types that support the risk check performed to detect risks caused by a stack deletion operation.
          shared_ptr<vector<string>> deleteStack_ {};
        };

        virtual bool empty() const override { return this->customTag_ == nullptr
        && this->estimateCost_ == nullptr && this->resourceGroup_ == nullptr && this->stackOperationRisk_ == nullptr && this->systemTag_ == nullptr; };
        // customTag Field Functions 
        bool hasCustomTag() const { return this->customTag_ != nullptr;};
        void deleteCustomTag() { this->customTag_ = nullptr;};
        inline const vector<string> & getCustomTag() const { DARABONBA_PTR_GET_CONST(customTag_, vector<string>) };
        inline vector<string> getCustomTag() { DARABONBA_PTR_GET(customTag_, vector<string>) };
        inline SupportedResourceTypes& setCustomTag(const vector<string> & customTag) { DARABONBA_PTR_SET_VALUE(customTag_, customTag) };
        inline SupportedResourceTypes& setCustomTag(vector<string> && customTag) { DARABONBA_PTR_SET_RVALUE(customTag_, customTag) };


        // estimateCost Field Functions 
        bool hasEstimateCost() const { return this->estimateCost_ != nullptr;};
        void deleteEstimateCost() { this->estimateCost_ = nullptr;};
        inline const vector<string> & getEstimateCost() const { DARABONBA_PTR_GET_CONST(estimateCost_, vector<string>) };
        inline vector<string> getEstimateCost() { DARABONBA_PTR_GET(estimateCost_, vector<string>) };
        inline SupportedResourceTypes& setEstimateCost(const vector<string> & estimateCost) { DARABONBA_PTR_SET_VALUE(estimateCost_, estimateCost) };
        inline SupportedResourceTypes& setEstimateCost(vector<string> && estimateCost) { DARABONBA_PTR_SET_RVALUE(estimateCost_, estimateCost) };


        // resourceGroup Field Functions 
        bool hasResourceGroup() const { return this->resourceGroup_ != nullptr;};
        void deleteResourceGroup() { this->resourceGroup_ = nullptr;};
        inline const vector<string> & getResourceGroup() const { DARABONBA_PTR_GET_CONST(resourceGroup_, vector<string>) };
        inline vector<string> getResourceGroup() { DARABONBA_PTR_GET(resourceGroup_, vector<string>) };
        inline SupportedResourceTypes& setResourceGroup(const vector<string> & resourceGroup) { DARABONBA_PTR_SET_VALUE(resourceGroup_, resourceGroup) };
        inline SupportedResourceTypes& setResourceGroup(vector<string> && resourceGroup) { DARABONBA_PTR_SET_RVALUE(resourceGroup_, resourceGroup) };


        // stackOperationRisk Field Functions 
        bool hasStackOperationRisk() const { return this->stackOperationRisk_ != nullptr;};
        void deleteStackOperationRisk() { this->stackOperationRisk_ = nullptr;};
        inline const SupportedResourceTypes::StackOperationRisk & getStackOperationRisk() const { DARABONBA_PTR_GET_CONST(stackOperationRisk_, SupportedResourceTypes::StackOperationRisk) };
        inline SupportedResourceTypes::StackOperationRisk getStackOperationRisk() { DARABONBA_PTR_GET(stackOperationRisk_, SupportedResourceTypes::StackOperationRisk) };
        inline SupportedResourceTypes& setStackOperationRisk(const SupportedResourceTypes::StackOperationRisk & stackOperationRisk) { DARABONBA_PTR_SET_VALUE(stackOperationRisk_, stackOperationRisk) };
        inline SupportedResourceTypes& setStackOperationRisk(SupportedResourceTypes::StackOperationRisk && stackOperationRisk) { DARABONBA_PTR_SET_RVALUE(stackOperationRisk_, stackOperationRisk) };


        // systemTag Field Functions 
        bool hasSystemTag() const { return this->systemTag_ != nullptr;};
        void deleteSystemTag() { this->systemTag_ = nullptr;};
        inline const vector<string> & getSystemTag() const { DARABONBA_PTR_GET_CONST(systemTag_, vector<string>) };
        inline vector<string> getSystemTag() { DARABONBA_PTR_GET(systemTag_, vector<string>) };
        inline SupportedResourceTypes& setSystemTag(const vector<string> & systemTag) { DARABONBA_PTR_SET_VALUE(systemTag_, systemTag) };
        inline SupportedResourceTypes& setSystemTag(vector<string> && systemTag) { DARABONBA_PTR_SET_RVALUE(systemTag_, systemTag) };


      protected:
        // The resource types that support the custom tag feature.
        shared_ptr<vector<string>> customTag_ {};
        // The resource types that support the price inquiry feature.
        shared_ptr<vector<string>> estimateCost_ {};
        // The resource types that support the resource group feature.
        shared_ptr<vector<string>> resourceGroup_ {};
        // The resource type that support the risk check feature.
        shared_ptr<SupportedResourceTypes::StackOperationRisk> stackOperationRisk_ {};
        // The resource types that support the system tag `acs:ros:stackId`.
        shared_ptr<vector<string>> systemTag_ {};
      };

      virtual bool empty() const override { return this->supportedResourceTypes_ == nullptr
        && this->supportedVersions_ == nullptr; };
      // supportedResourceTypes Field Functions 
      bool hasSupportedResourceTypes() const { return this->supportedResourceTypes_ != nullptr;};
      void deleteSupportedResourceTypes() { this->supportedResourceTypes_ = nullptr;};
      inline const Terraform::SupportedResourceTypes & getSupportedResourceTypes() const { DARABONBA_PTR_GET_CONST(supportedResourceTypes_, Terraform::SupportedResourceTypes) };
      inline Terraform::SupportedResourceTypes getSupportedResourceTypes() { DARABONBA_PTR_GET(supportedResourceTypes_, Terraform::SupportedResourceTypes) };
      inline Terraform& setSupportedResourceTypes(const Terraform::SupportedResourceTypes & supportedResourceTypes) { DARABONBA_PTR_SET_VALUE(supportedResourceTypes_, supportedResourceTypes) };
      inline Terraform& setSupportedResourceTypes(Terraform::SupportedResourceTypes && supportedResourceTypes) { DARABONBA_PTR_SET_RVALUE(supportedResourceTypes_, supportedResourceTypes) };


      // supportedVersions Field Functions 
      bool hasSupportedVersions() const { return this->supportedVersions_ != nullptr;};
      void deleteSupportedVersions() { this->supportedVersions_ = nullptr;};
      inline const vector<Terraform::SupportedVersions> & getSupportedVersions() const { DARABONBA_PTR_GET_CONST(supportedVersions_, vector<Terraform::SupportedVersions>) };
      inline vector<Terraform::SupportedVersions> getSupportedVersions() { DARABONBA_PTR_GET(supportedVersions_, vector<Terraform::SupportedVersions>) };
      inline Terraform& setSupportedVersions(const vector<Terraform::SupportedVersions> & supportedVersions) { DARABONBA_PTR_SET_VALUE(supportedVersions_, supportedVersions) };
      inline Terraform& setSupportedVersions(vector<Terraform::SupportedVersions> && supportedVersions) { DARABONBA_PTR_SET_RVALUE(supportedVersions_, supportedVersions) };


    protected:
      // The resource types that support the scenario feature.
      shared_ptr<Terraform::SupportedResourceTypes> supportedResourceTypes_ {};
      // The Terraform versions.
      shared_ptr<vector<Terraform::SupportedVersions>> supportedVersions_ {};
    };

    class TemplateScratch : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TemplateScratch& obj) { 
        DARABONBA_PTR_TO_JSON(SupportedResourceTypes, supportedResourceTypes_);
      };
      friend void from_json(const Darabonba::Json& j, TemplateScratch& obj) { 
        DARABONBA_PTR_FROM_JSON(SupportedResourceTypes, supportedResourceTypes_);
      };
      TemplateScratch() = default ;
      TemplateScratch(const TemplateScratch &) = default ;
      TemplateScratch(TemplateScratch &&) = default ;
      TemplateScratch(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TemplateScratch() = default ;
      TemplateScratch& operator=(const TemplateScratch &) = default ;
      TemplateScratch& operator=(TemplateScratch &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SupportedResourceTypes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SupportedResourceTypes& obj) { 
          DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
          DARABONBA_PTR_TO_JSON(SourceResourceGroupSupported, sourceResourceGroupSupported_);
          DARABONBA_PTR_TO_JSON(SourceResourcesSupported, sourceResourcesSupported_);
          DARABONBA_PTR_TO_JSON(SourceSupported, sourceSupported_);
          DARABONBA_PTR_TO_JSON(SourceTagSupported, sourceTagSupported_);
          DARABONBA_PTR_TO_JSON(SupportedTemplateScratchTypes, supportedTemplateScratchTypes_);
        };
        friend void from_json(const Darabonba::Json& j, SupportedResourceTypes& obj) { 
          DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
          DARABONBA_PTR_FROM_JSON(SourceResourceGroupSupported, sourceResourceGroupSupported_);
          DARABONBA_PTR_FROM_JSON(SourceResourcesSupported, sourceResourcesSupported_);
          DARABONBA_PTR_FROM_JSON(SourceSupported, sourceSupported_);
          DARABONBA_PTR_FROM_JSON(SourceTagSupported, sourceTagSupported_);
          DARABONBA_PTR_FROM_JSON(SupportedTemplateScratchTypes, supportedTemplateScratchTypes_);
        };
        SupportedResourceTypes() = default ;
        SupportedResourceTypes(const SupportedResourceTypes &) = default ;
        SupportedResourceTypes(SupportedResourceTypes &&) = default ;
        SupportedResourceTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SupportedResourceTypes() = default ;
        SupportedResourceTypes& operator=(const SupportedResourceTypes &) = default ;
        SupportedResourceTypes& operator=(SupportedResourceTypes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->resourceType_ == nullptr
        && this->sourceResourceGroupSupported_ == nullptr && this->sourceResourcesSupported_ == nullptr && this->sourceSupported_ == nullptr && this->sourceTagSupported_ == nullptr && this->supportedTemplateScratchTypes_ == nullptr; };
        // resourceType Field Functions 
        bool hasResourceType() const { return this->resourceType_ != nullptr;};
        void deleteResourceType() { this->resourceType_ = nullptr;};
        inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
        inline SupportedResourceTypes& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


        // sourceResourceGroupSupported Field Functions 
        bool hasSourceResourceGroupSupported() const { return this->sourceResourceGroupSupported_ != nullptr;};
        void deleteSourceResourceGroupSupported() { this->sourceResourceGroupSupported_ = nullptr;};
        inline bool getSourceResourceGroupSupported() const { DARABONBA_PTR_GET_DEFAULT(sourceResourceGroupSupported_, false) };
        inline SupportedResourceTypes& setSourceResourceGroupSupported(bool sourceResourceGroupSupported) { DARABONBA_PTR_SET_VALUE(sourceResourceGroupSupported_, sourceResourceGroupSupported) };


        // sourceResourcesSupported Field Functions 
        bool hasSourceResourcesSupported() const { return this->sourceResourcesSupported_ != nullptr;};
        void deleteSourceResourcesSupported() { this->sourceResourcesSupported_ = nullptr;};
        inline bool getSourceResourcesSupported() const { DARABONBA_PTR_GET_DEFAULT(sourceResourcesSupported_, false) };
        inline SupportedResourceTypes& setSourceResourcesSupported(bool sourceResourcesSupported) { DARABONBA_PTR_SET_VALUE(sourceResourcesSupported_, sourceResourcesSupported) };


        // sourceSupported Field Functions 
        bool hasSourceSupported() const { return this->sourceSupported_ != nullptr;};
        void deleteSourceSupported() { this->sourceSupported_ = nullptr;};
        inline bool getSourceSupported() const { DARABONBA_PTR_GET_DEFAULT(sourceSupported_, false) };
        inline SupportedResourceTypes& setSourceSupported(bool sourceSupported) { DARABONBA_PTR_SET_VALUE(sourceSupported_, sourceSupported) };


        // sourceTagSupported Field Functions 
        bool hasSourceTagSupported() const { return this->sourceTagSupported_ != nullptr;};
        void deleteSourceTagSupported() { this->sourceTagSupported_ = nullptr;};
        inline bool getSourceTagSupported() const { DARABONBA_PTR_GET_DEFAULT(sourceTagSupported_, false) };
        inline SupportedResourceTypes& setSourceTagSupported(bool sourceTagSupported) { DARABONBA_PTR_SET_VALUE(sourceTagSupported_, sourceTagSupported) };


        // supportedTemplateScratchTypes Field Functions 
        bool hasSupportedTemplateScratchTypes() const { return this->supportedTemplateScratchTypes_ != nullptr;};
        void deleteSupportedTemplateScratchTypes() { this->supportedTemplateScratchTypes_ = nullptr;};
        inline const vector<string> & getSupportedTemplateScratchTypes() const { DARABONBA_PTR_GET_CONST(supportedTemplateScratchTypes_, vector<string>) };
        inline vector<string> getSupportedTemplateScratchTypes() { DARABONBA_PTR_GET(supportedTemplateScratchTypes_, vector<string>) };
        inline SupportedResourceTypes& setSupportedTemplateScratchTypes(const vector<string> & supportedTemplateScratchTypes) { DARABONBA_PTR_SET_VALUE(supportedTemplateScratchTypes_, supportedTemplateScratchTypes) };
        inline SupportedResourceTypes& setSupportedTemplateScratchTypes(vector<string> && supportedTemplateScratchTypes) { DARABONBA_PTR_SET_RVALUE(supportedTemplateScratchTypes_, supportedTemplateScratchTypes) };


      protected:
        // The resource type.
        shared_ptr<string> resourceType_ {};
        // Indicates whether the resource scope can be specified by source resource group. Valid values:
        // 
        // *   true
        // *   false
        shared_ptr<bool> sourceResourceGroupSupported_ {};
        // Indicates whether the resource scope can be specified by source resource. Valid values:
        // 
        // *   true
        // *   false
        shared_ptr<bool> sourceResourcesSupported_ {};
        // Indicates whether the resource scope can be specified by source tag, resource group, or resource. Valid values:
        // 
        // *   true
        // *   false
        shared_ptr<bool> sourceSupported_ {};
        // Indicates whether the resource scope can be specified by source tag. Valid values:
        // 
        // *   true
        // *   false
        shared_ptr<bool> sourceTagSupported_ {};
        // The scenario types that are supported.
        shared_ptr<vector<string>> supportedTemplateScratchTypes_ {};
      };

      virtual bool empty() const override { return this->supportedResourceTypes_ == nullptr; };
      // supportedResourceTypes Field Functions 
      bool hasSupportedResourceTypes() const { return this->supportedResourceTypes_ != nullptr;};
      void deleteSupportedResourceTypes() { this->supportedResourceTypes_ = nullptr;};
      inline const vector<TemplateScratch::SupportedResourceTypes> & getSupportedResourceTypes() const { DARABONBA_PTR_GET_CONST(supportedResourceTypes_, vector<TemplateScratch::SupportedResourceTypes>) };
      inline vector<TemplateScratch::SupportedResourceTypes> getSupportedResourceTypes() { DARABONBA_PTR_GET(supportedResourceTypes_, vector<TemplateScratch::SupportedResourceTypes>) };
      inline TemplateScratch& setSupportedResourceTypes(const vector<TemplateScratch::SupportedResourceTypes> & supportedResourceTypes) { DARABONBA_PTR_SET_VALUE(supportedResourceTypes_, supportedResourceTypes) };
      inline TemplateScratch& setSupportedResourceTypes(vector<TemplateScratch::SupportedResourceTypes> && supportedResourceTypes) { DARABONBA_PTR_SET_RVALUE(supportedResourceTypes_, supportedResourceTypes) };


    protected:
      // The resource types that are supported by the scenario feature.
      shared_ptr<vector<TemplateScratch::SupportedResourceTypes>> supportedResourceTypes_ {};
    };

    class TemplateParameterConstraints : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TemplateParameterConstraints& obj) { 
        DARABONBA_PTR_TO_JSON(SupportedResourceTypes, supportedResourceTypes_);
      };
      friend void from_json(const Darabonba::Json& j, TemplateParameterConstraints& obj) { 
        DARABONBA_PTR_FROM_JSON(SupportedResourceTypes, supportedResourceTypes_);
      };
      TemplateParameterConstraints() = default ;
      TemplateParameterConstraints(const TemplateParameterConstraints &) = default ;
      TemplateParameterConstraints(TemplateParameterConstraints &&) = default ;
      TemplateParameterConstraints(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TemplateParameterConstraints() = default ;
      TemplateParameterConstraints& operator=(const TemplateParameterConstraints &) = default ;
      TemplateParameterConstraints& operator=(TemplateParameterConstraints &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SupportedResourceTypes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SupportedResourceTypes& obj) { 
          DARABONBA_PTR_TO_JSON(Properties, properties_);
          DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        };
        friend void from_json(const Darabonba::Json& j, SupportedResourceTypes& obj) { 
          DARABONBA_PTR_FROM_JSON(Properties, properties_);
          DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        };
        SupportedResourceTypes() = default ;
        SupportedResourceTypes(const SupportedResourceTypes &) = default ;
        SupportedResourceTypes(SupportedResourceTypes &&) = default ;
        SupportedResourceTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SupportedResourceTypes() = default ;
        SupportedResourceTypes& operator=(const SupportedResourceTypes &) = default ;
        SupportedResourceTypes& operator=(SupportedResourceTypes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->properties_ == nullptr
        && this->resourceType_ == nullptr; };
        // properties Field Functions 
        bool hasProperties() const { return this->properties_ != nullptr;};
        void deleteProperties() { this->properties_ = nullptr;};
        inline const vector<string> & getProperties() const { DARABONBA_PTR_GET_CONST(properties_, vector<string>) };
        inline vector<string> getProperties() { DARABONBA_PTR_GET(properties_, vector<string>) };
        inline SupportedResourceTypes& setProperties(const vector<string> & properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };
        inline SupportedResourceTypes& setProperties(vector<string> && properties) { DARABONBA_PTR_SET_RVALUE(properties_, properties) };


        // resourceType Field Functions 
        bool hasResourceType() const { return this->resourceType_ != nullptr;};
        void deleteResourceType() { this->resourceType_ = nullptr;};
        inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
        inline SupportedResourceTypes& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      protected:
        // The names of properties that are supported by the resource type.
        shared_ptr<vector<string>> properties_ {};
        // The resource type.
        shared_ptr<string> resourceType_ {};
      };

      virtual bool empty() const override { return this->supportedResourceTypes_ == nullptr; };
      // supportedResourceTypes Field Functions 
      bool hasSupportedResourceTypes() const { return this->supportedResourceTypes_ != nullptr;};
      void deleteSupportedResourceTypes() { this->supportedResourceTypes_ = nullptr;};
      inline const vector<TemplateParameterConstraints::SupportedResourceTypes> & getSupportedResourceTypes() const { DARABONBA_PTR_GET_CONST(supportedResourceTypes_, vector<TemplateParameterConstraints::SupportedResourceTypes>) };
      inline vector<TemplateParameterConstraints::SupportedResourceTypes> getSupportedResourceTypes() { DARABONBA_PTR_GET(supportedResourceTypes_, vector<TemplateParameterConstraints::SupportedResourceTypes>) };
      inline TemplateParameterConstraints& setSupportedResourceTypes(const vector<TemplateParameterConstraints::SupportedResourceTypes> & supportedResourceTypes) { DARABONBA_PTR_SET_VALUE(supportedResourceTypes_, supportedResourceTypes) };
      inline TemplateParameterConstraints& setSupportedResourceTypes(vector<TemplateParameterConstraints::SupportedResourceTypes> && supportedResourceTypes) { DARABONBA_PTR_SET_RVALUE(supportedResourceTypes_, supportedResourceTypes) };


    protected:
      // The resource types that support the template parameter constraint feature.
      shared_ptr<vector<TemplateParameterConstraints::SupportedResourceTypes>> supportedResourceTypes_ {};
    };

    class ResourceImport : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceImport& obj) { 
        DARABONBA_PTR_TO_JSON(SupportedResourceTypes, supportedResourceTypes_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceImport& obj) { 
        DARABONBA_PTR_FROM_JSON(SupportedResourceTypes, supportedResourceTypes_);
      };
      ResourceImport() = default ;
      ResourceImport(const ResourceImport &) = default ;
      ResourceImport(ResourceImport &&) = default ;
      ResourceImport(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceImport() = default ;
      ResourceImport& operator=(const ResourceImport &) = default ;
      ResourceImport& operator=(ResourceImport &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SupportedResourceTypes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SupportedResourceTypes& obj) { 
          DARABONBA_PTR_TO_JSON(ResourceIdentifiers, resourceIdentifiers_);
          DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        };
        friend void from_json(const Darabonba::Json& j, SupportedResourceTypes& obj) { 
          DARABONBA_PTR_FROM_JSON(ResourceIdentifiers, resourceIdentifiers_);
          DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        };
        SupportedResourceTypes() = default ;
        SupportedResourceTypes(const SupportedResourceTypes &) = default ;
        SupportedResourceTypes(SupportedResourceTypes &&) = default ;
        SupportedResourceTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SupportedResourceTypes() = default ;
        SupportedResourceTypes& operator=(const SupportedResourceTypes &) = default ;
        SupportedResourceTypes& operator=(SupportedResourceTypes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->resourceIdentifiers_ == nullptr
        && this->resourceType_ == nullptr; };
        // resourceIdentifiers Field Functions 
        bool hasResourceIdentifiers() const { return this->resourceIdentifiers_ != nullptr;};
        void deleteResourceIdentifiers() { this->resourceIdentifiers_ = nullptr;};
        inline const vector<string> & getResourceIdentifiers() const { DARABONBA_PTR_GET_CONST(resourceIdentifiers_, vector<string>) };
        inline vector<string> getResourceIdentifiers() { DARABONBA_PTR_GET(resourceIdentifiers_, vector<string>) };
        inline SupportedResourceTypes& setResourceIdentifiers(const vector<string> & resourceIdentifiers) { DARABONBA_PTR_SET_VALUE(resourceIdentifiers_, resourceIdentifiers) };
        inline SupportedResourceTypes& setResourceIdentifiers(vector<string> && resourceIdentifiers) { DARABONBA_PTR_SET_RVALUE(resourceIdentifiers_, resourceIdentifiers) };


        // resourceType Field Functions 
        bool hasResourceType() const { return this->resourceType_ != nullptr;};
        void deleteResourceType() { this->resourceType_ = nullptr;};
        inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
        inline SupportedResourceTypes& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      protected:
        // The resource identifiers.
        shared_ptr<vector<string>> resourceIdentifiers_ {};
        // The resource type.
        shared_ptr<string> resourceType_ {};
      };

      virtual bool empty() const override { return this->supportedResourceTypes_ == nullptr; };
      // supportedResourceTypes Field Functions 
      bool hasSupportedResourceTypes() const { return this->supportedResourceTypes_ != nullptr;};
      void deleteSupportedResourceTypes() { this->supportedResourceTypes_ = nullptr;};
      inline const vector<ResourceImport::SupportedResourceTypes> & getSupportedResourceTypes() const { DARABONBA_PTR_GET_CONST(supportedResourceTypes_, vector<ResourceImport::SupportedResourceTypes>) };
      inline vector<ResourceImport::SupportedResourceTypes> getSupportedResourceTypes() { DARABONBA_PTR_GET(supportedResourceTypes_, vector<ResourceImport::SupportedResourceTypes>) };
      inline ResourceImport& setSupportedResourceTypes(const vector<ResourceImport::SupportedResourceTypes> & supportedResourceTypes) { DARABONBA_PTR_SET_VALUE(supportedResourceTypes_, supportedResourceTypes) };
      inline ResourceImport& setSupportedResourceTypes(vector<ResourceImport::SupportedResourceTypes> && supportedResourceTypes) { DARABONBA_PTR_SET_RVALUE(supportedResourceTypes_, supportedResourceTypes) };


    protected:
      // The resource types that are supported by the resource import feature.
      shared_ptr<vector<ResourceImport::SupportedResourceTypes>> supportedResourceTypes_ {};
    };

    class ResourceCleaner : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceCleaner& obj) { 
        DARABONBA_PTR_TO_JSON(SupportedResourceTypes, supportedResourceTypes_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceCleaner& obj) { 
        DARABONBA_PTR_FROM_JSON(SupportedResourceTypes, supportedResourceTypes_);
      };
      ResourceCleaner() = default ;
      ResourceCleaner(const ResourceCleaner &) = default ;
      ResourceCleaner(ResourceCleaner &&) = default ;
      ResourceCleaner(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceCleaner() = default ;
      ResourceCleaner& operator=(const ResourceCleaner &) = default ;
      ResourceCleaner& operator=(ResourceCleaner &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SupportedResourceTypes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SupportedResourceTypes& obj) { 
          DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
          DARABONBA_PTR_TO_JSON(SideEffects, sideEffects_);
          DARABONBA_PTR_TO_JSON(SupportedFilters, supportedFilters_);
        };
        friend void from_json(const Darabonba::Json& j, SupportedResourceTypes& obj) { 
          DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
          DARABONBA_PTR_FROM_JSON(SideEffects, sideEffects_);
          DARABONBA_PTR_FROM_JSON(SupportedFilters, supportedFilters_);
        };
        SupportedResourceTypes() = default ;
        SupportedResourceTypes(const SupportedResourceTypes &) = default ;
        SupportedResourceTypes(SupportedResourceTypes &&) = default ;
        SupportedResourceTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SupportedResourceTypes() = default ;
        SupportedResourceTypes& operator=(const SupportedResourceTypes &) = default ;
        SupportedResourceTypes& operator=(SupportedResourceTypes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->resourceType_ == nullptr
        && this->sideEffects_ == nullptr && this->supportedFilters_ == nullptr; };
        // resourceType Field Functions 
        bool hasResourceType() const { return this->resourceType_ != nullptr;};
        void deleteResourceType() { this->resourceType_ = nullptr;};
        inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
        inline SupportedResourceTypes& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


        // sideEffects Field Functions 
        bool hasSideEffects() const { return this->sideEffects_ != nullptr;};
        void deleteSideEffects() { this->sideEffects_ = nullptr;};
        inline const vector<string> & getSideEffects() const { DARABONBA_PTR_GET_CONST(sideEffects_, vector<string>) };
        inline vector<string> getSideEffects() { DARABONBA_PTR_GET(sideEffects_, vector<string>) };
        inline SupportedResourceTypes& setSideEffects(const vector<string> & sideEffects) { DARABONBA_PTR_SET_VALUE(sideEffects_, sideEffects) };
        inline SupportedResourceTypes& setSideEffects(vector<string> && sideEffects) { DARABONBA_PTR_SET_RVALUE(sideEffects_, sideEffects) };


        // supportedFilters Field Functions 
        bool hasSupportedFilters() const { return this->supportedFilters_ != nullptr;};
        void deleteSupportedFilters() { this->supportedFilters_ = nullptr;};
        inline const vector<string> & getSupportedFilters() const { DARABONBA_PTR_GET_CONST(supportedFilters_, vector<string>) };
        inline vector<string> getSupportedFilters() { DARABONBA_PTR_GET(supportedFilters_, vector<string>) };
        inline SupportedResourceTypes& setSupportedFilters(const vector<string> & supportedFilters) { DARABONBA_PTR_SET_VALUE(supportedFilters_, supportedFilters) };
        inline SupportedResourceTypes& setSupportedFilters(vector<string> && supportedFilters) { DARABONBA_PTR_SET_RVALUE(supportedFilters_, supportedFilters) };


      protected:
        // The resource type that supports the resource cleaner feature.
        shared_ptr<string> resourceType_ {};
        // The names of the side effects that may be caused by the cleanup operation performed on the resources of the specified type.
        shared_ptr<vector<string>> sideEffects_ {};
        // The names of the filters that are supported by the resource type.
        shared_ptr<vector<string>> supportedFilters_ {};
      };

      virtual bool empty() const override { return this->supportedResourceTypes_ == nullptr; };
      // supportedResourceTypes Field Functions 
      bool hasSupportedResourceTypes() const { return this->supportedResourceTypes_ != nullptr;};
      void deleteSupportedResourceTypes() { this->supportedResourceTypes_ = nullptr;};
      inline const vector<ResourceCleaner::SupportedResourceTypes> & getSupportedResourceTypes() const { DARABONBA_PTR_GET_CONST(supportedResourceTypes_, vector<ResourceCleaner::SupportedResourceTypes>) };
      inline vector<ResourceCleaner::SupportedResourceTypes> getSupportedResourceTypes() { DARABONBA_PTR_GET(supportedResourceTypes_, vector<ResourceCleaner::SupportedResourceTypes>) };
      inline ResourceCleaner& setSupportedResourceTypes(const vector<ResourceCleaner::SupportedResourceTypes> & supportedResourceTypes) { DARABONBA_PTR_SET_VALUE(supportedResourceTypes_, supportedResourceTypes) };
      inline ResourceCleaner& setSupportedResourceTypes(vector<ResourceCleaner::SupportedResourceTypes> && supportedResourceTypes) { DARABONBA_PTR_SET_RVALUE(supportedResourceTypes_, supportedResourceTypes) };


    protected:
      // The resource types that can be cleaned up.
      shared_ptr<vector<ResourceCleaner::SupportedResourceTypes>> supportedResourceTypes_ {};
    };

    class DriftDetection : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DriftDetection& obj) { 
        DARABONBA_PTR_TO_JSON(SupportedResourceTypes, supportedResourceTypes_);
      };
      friend void from_json(const Darabonba::Json& j, DriftDetection& obj) { 
        DARABONBA_PTR_FROM_JSON(SupportedResourceTypes, supportedResourceTypes_);
      };
      DriftDetection() = default ;
      DriftDetection(const DriftDetection &) = default ;
      DriftDetection(DriftDetection &&) = default ;
      DriftDetection(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DriftDetection() = default ;
      DriftDetection& operator=(const DriftDetection &) = default ;
      DriftDetection& operator=(DriftDetection &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->supportedResourceTypes_ == nullptr; };
      // supportedResourceTypes Field Functions 
      bool hasSupportedResourceTypes() const { return this->supportedResourceTypes_ != nullptr;};
      void deleteSupportedResourceTypes() { this->supportedResourceTypes_ = nullptr;};
      inline const vector<string> & getSupportedResourceTypes() const { DARABONBA_PTR_GET_CONST(supportedResourceTypes_, vector<string>) };
      inline vector<string> getSupportedResourceTypes() { DARABONBA_PTR_GET(supportedResourceTypes_, vector<string>) };
      inline DriftDetection& setSupportedResourceTypes(const vector<string> & supportedResourceTypes) { DARABONBA_PTR_SET_VALUE(supportedResourceTypes_, supportedResourceTypes) };
      inline DriftDetection& setSupportedResourceTypes(vector<string> && supportedResourceTypes) { DARABONBA_PTR_SET_RVALUE(supportedResourceTypes_, supportedResourceTypes) };


    protected:
      // The resource types that are supported by the drift detection feature.
      shared_ptr<vector<string>> supportedResourceTypes_ {};
    };

    virtual bool empty() const override { return this->driftDetection_ == nullptr
        && this->requestId_ == nullptr && this->resourceCleaner_ == nullptr && this->resourceImport_ == nullptr && this->templateParameterConstraints_ == nullptr && this->templateScratch_ == nullptr
        && this->terraform_ == nullptr; };
    // driftDetection Field Functions 
    bool hasDriftDetection() const { return this->driftDetection_ != nullptr;};
    void deleteDriftDetection() { this->driftDetection_ = nullptr;};
    inline const GetFeatureDetailsResponseBody::DriftDetection & getDriftDetection() const { DARABONBA_PTR_GET_CONST(driftDetection_, GetFeatureDetailsResponseBody::DriftDetection) };
    inline GetFeatureDetailsResponseBody::DriftDetection getDriftDetection() { DARABONBA_PTR_GET(driftDetection_, GetFeatureDetailsResponseBody::DriftDetection) };
    inline GetFeatureDetailsResponseBody& setDriftDetection(const GetFeatureDetailsResponseBody::DriftDetection & driftDetection) { DARABONBA_PTR_SET_VALUE(driftDetection_, driftDetection) };
    inline GetFeatureDetailsResponseBody& setDriftDetection(GetFeatureDetailsResponseBody::DriftDetection && driftDetection) { DARABONBA_PTR_SET_RVALUE(driftDetection_, driftDetection) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetFeatureDetailsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceCleaner Field Functions 
    bool hasResourceCleaner() const { return this->resourceCleaner_ != nullptr;};
    void deleteResourceCleaner() { this->resourceCleaner_ = nullptr;};
    inline const GetFeatureDetailsResponseBody::ResourceCleaner & getResourceCleaner() const { DARABONBA_PTR_GET_CONST(resourceCleaner_, GetFeatureDetailsResponseBody::ResourceCleaner) };
    inline GetFeatureDetailsResponseBody::ResourceCleaner getResourceCleaner() { DARABONBA_PTR_GET(resourceCleaner_, GetFeatureDetailsResponseBody::ResourceCleaner) };
    inline GetFeatureDetailsResponseBody& setResourceCleaner(const GetFeatureDetailsResponseBody::ResourceCleaner & resourceCleaner) { DARABONBA_PTR_SET_VALUE(resourceCleaner_, resourceCleaner) };
    inline GetFeatureDetailsResponseBody& setResourceCleaner(GetFeatureDetailsResponseBody::ResourceCleaner && resourceCleaner) { DARABONBA_PTR_SET_RVALUE(resourceCleaner_, resourceCleaner) };


    // resourceImport Field Functions 
    bool hasResourceImport() const { return this->resourceImport_ != nullptr;};
    void deleteResourceImport() { this->resourceImport_ = nullptr;};
    inline const GetFeatureDetailsResponseBody::ResourceImport & getResourceImport() const { DARABONBA_PTR_GET_CONST(resourceImport_, GetFeatureDetailsResponseBody::ResourceImport) };
    inline GetFeatureDetailsResponseBody::ResourceImport getResourceImport() { DARABONBA_PTR_GET(resourceImport_, GetFeatureDetailsResponseBody::ResourceImport) };
    inline GetFeatureDetailsResponseBody& setResourceImport(const GetFeatureDetailsResponseBody::ResourceImport & resourceImport) { DARABONBA_PTR_SET_VALUE(resourceImport_, resourceImport) };
    inline GetFeatureDetailsResponseBody& setResourceImport(GetFeatureDetailsResponseBody::ResourceImport && resourceImport) { DARABONBA_PTR_SET_RVALUE(resourceImport_, resourceImport) };


    // templateParameterConstraints Field Functions 
    bool hasTemplateParameterConstraints() const { return this->templateParameterConstraints_ != nullptr;};
    void deleteTemplateParameterConstraints() { this->templateParameterConstraints_ = nullptr;};
    inline const GetFeatureDetailsResponseBody::TemplateParameterConstraints & getTemplateParameterConstraints() const { DARABONBA_PTR_GET_CONST(templateParameterConstraints_, GetFeatureDetailsResponseBody::TemplateParameterConstraints) };
    inline GetFeatureDetailsResponseBody::TemplateParameterConstraints getTemplateParameterConstraints() { DARABONBA_PTR_GET(templateParameterConstraints_, GetFeatureDetailsResponseBody::TemplateParameterConstraints) };
    inline GetFeatureDetailsResponseBody& setTemplateParameterConstraints(const GetFeatureDetailsResponseBody::TemplateParameterConstraints & templateParameterConstraints) { DARABONBA_PTR_SET_VALUE(templateParameterConstraints_, templateParameterConstraints) };
    inline GetFeatureDetailsResponseBody& setTemplateParameterConstraints(GetFeatureDetailsResponseBody::TemplateParameterConstraints && templateParameterConstraints) { DARABONBA_PTR_SET_RVALUE(templateParameterConstraints_, templateParameterConstraints) };


    // templateScratch Field Functions 
    bool hasTemplateScratch() const { return this->templateScratch_ != nullptr;};
    void deleteTemplateScratch() { this->templateScratch_ = nullptr;};
    inline const GetFeatureDetailsResponseBody::TemplateScratch & getTemplateScratch() const { DARABONBA_PTR_GET_CONST(templateScratch_, GetFeatureDetailsResponseBody::TemplateScratch) };
    inline GetFeatureDetailsResponseBody::TemplateScratch getTemplateScratch() { DARABONBA_PTR_GET(templateScratch_, GetFeatureDetailsResponseBody::TemplateScratch) };
    inline GetFeatureDetailsResponseBody& setTemplateScratch(const GetFeatureDetailsResponseBody::TemplateScratch & templateScratch) { DARABONBA_PTR_SET_VALUE(templateScratch_, templateScratch) };
    inline GetFeatureDetailsResponseBody& setTemplateScratch(GetFeatureDetailsResponseBody::TemplateScratch && templateScratch) { DARABONBA_PTR_SET_RVALUE(templateScratch_, templateScratch) };


    // terraform Field Functions 
    bool hasTerraform() const { return this->terraform_ != nullptr;};
    void deleteTerraform() { this->terraform_ = nullptr;};
    inline const GetFeatureDetailsResponseBody::Terraform & getTerraform() const { DARABONBA_PTR_GET_CONST(terraform_, GetFeatureDetailsResponseBody::Terraform) };
    inline GetFeatureDetailsResponseBody::Terraform getTerraform() { DARABONBA_PTR_GET(terraform_, GetFeatureDetailsResponseBody::Terraform) };
    inline GetFeatureDetailsResponseBody& setTerraform(const GetFeatureDetailsResponseBody::Terraform & terraform) { DARABONBA_PTR_SET_VALUE(terraform_, terraform) };
    inline GetFeatureDetailsResponseBody& setTerraform(GetFeatureDetailsResponseBody::Terraform && terraform) { DARABONBA_PTR_SET_RVALUE(terraform_, terraform) };


  protected:
    // Details of the drift detection feature.
    shared_ptr<GetFeatureDetailsResponseBody::DriftDetection> driftDetection_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Details of the resource cleaner feature.
    shared_ptr<GetFeatureDetailsResponseBody::ResourceCleaner> resourceCleaner_ {};
    // Details of the resource import feature.
    shared_ptr<GetFeatureDetailsResponseBody::ResourceImport> resourceImport_ {};
    // Details of the template parameter constraint feature.
    shared_ptr<GetFeatureDetailsResponseBody::TemplateParameterConstraints> templateParameterConstraints_ {};
    // Details of the scenario feature.
    shared_ptr<GetFeatureDetailsResponseBody::TemplateScratch> templateScratch_ {};
    // Details of the Terraform hosting feature.
    shared_ptr<GetFeatureDetailsResponseBody::Terraform> terraform_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
