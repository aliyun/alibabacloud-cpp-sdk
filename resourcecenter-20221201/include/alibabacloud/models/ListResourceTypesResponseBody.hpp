// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCETYPESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCETYPESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class ListResourceTypesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceTypesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceTypes, resourceTypes_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceTypesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceTypes, resourceTypes_);
    };
    ListResourceTypesResponseBody() = default ;
    ListResourceTypesResponseBody(const ListResourceTypesResponseBody &) = default ;
    ListResourceTypesResponseBody(ListResourceTypesResponseBody &&) = default ;
    ListResourceTypesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceTypesResponseBody() = default ;
    ListResourceTypesResponseBody& operator=(const ListResourceTypesResponseBody &) = default ;
    ListResourceTypesResponseBody& operator=(ListResourceTypesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceTypes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceTypes& obj) { 
        DARABONBA_PTR_TO_JSON(CodeMapping, codeMapping_);
        DARABONBA_PTR_TO_JSON(FilterKeys, filterKeys_);
        DARABONBA_PTR_TO_JSON(ProductName, productName_);
        DARABONBA_PTR_TO_JSON(RelatedResourceTypes, relatedResourceTypes_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(ResourceTypeName, resourceTypeName_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceTypes& obj) { 
        DARABONBA_PTR_FROM_JSON(CodeMapping, codeMapping_);
        DARABONBA_PTR_FROM_JSON(FilterKeys, filterKeys_);
        DARABONBA_PTR_FROM_JSON(ProductName, productName_);
        DARABONBA_PTR_FROM_JSON(RelatedResourceTypes, relatedResourceTypes_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(ResourceTypeName, resourceTypeName_);
      };
      ResourceTypes() = default ;
      ResourceTypes(const ResourceTypes &) = default ;
      ResourceTypes(ResourceTypes &&) = default ;
      ResourceTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceTypes() = default ;
      ResourceTypes& operator=(const ResourceTypes &) = default ;
      ResourceTypes& operator=(ResourceTypes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CodeMapping : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CodeMapping& obj) { 
          DARABONBA_PTR_TO_JSON(ResourceGroup, resourceGroup_);
          DARABONBA_PTR_TO_JSON(Tag, tag_);
        };
        friend void from_json(const Darabonba::Json& j, CodeMapping& obj) { 
          DARABONBA_PTR_FROM_JSON(ResourceGroup, resourceGroup_);
          DARABONBA_PTR_FROM_JSON(Tag, tag_);
        };
        CodeMapping() = default ;
        CodeMapping(const CodeMapping &) = default ;
        CodeMapping(CodeMapping &&) = default ;
        CodeMapping(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CodeMapping() = default ;
        CodeMapping& operator=(const CodeMapping &) = default ;
        CodeMapping& operator=(CodeMapping &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->resourceGroup_ == nullptr
        && this->tag_ == nullptr; };
        // resourceGroup Field Functions 
        bool hasResourceGroup() const { return this->resourceGroup_ != nullptr;};
        void deleteResourceGroup() { this->resourceGroup_ = nullptr;};
        inline string getResourceGroup() const { DARABONBA_PTR_GET_DEFAULT(resourceGroup_, "") };
        inline CodeMapping& setResourceGroup(string resourceGroup) { DARABONBA_PTR_SET_VALUE(resourceGroup_, resourceGroup) };


        // tag Field Functions 
        bool hasTag() const { return this->tag_ != nullptr;};
        void deleteTag() { this->tag_ = nullptr;};
        inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
        inline CodeMapping& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


      protected:
        // The resource group.
        shared_ptr<string> resourceGroup_ {};
        // The tag.
        shared_ptr<string> tag_ {};
      };

      virtual bool empty() const override { return this->codeMapping_ == nullptr
        && this->filterKeys_ == nullptr && this->productName_ == nullptr && this->relatedResourceTypes_ == nullptr && this->resourceType_ == nullptr && this->resourceTypeName_ == nullptr; };
      // codeMapping Field Functions 
      bool hasCodeMapping() const { return this->codeMapping_ != nullptr;};
      void deleteCodeMapping() { this->codeMapping_ = nullptr;};
      inline const ResourceTypes::CodeMapping & getCodeMapping() const { DARABONBA_PTR_GET_CONST(codeMapping_, ResourceTypes::CodeMapping) };
      inline ResourceTypes::CodeMapping getCodeMapping() { DARABONBA_PTR_GET(codeMapping_, ResourceTypes::CodeMapping) };
      inline ResourceTypes& setCodeMapping(const ResourceTypes::CodeMapping & codeMapping) { DARABONBA_PTR_SET_VALUE(codeMapping_, codeMapping) };
      inline ResourceTypes& setCodeMapping(ResourceTypes::CodeMapping && codeMapping) { DARABONBA_PTR_SET_RVALUE(codeMapping_, codeMapping) };


      // filterKeys Field Functions 
      bool hasFilterKeys() const { return this->filterKeys_ != nullptr;};
      void deleteFilterKeys() { this->filterKeys_ = nullptr;};
      inline const vector<string> & getFilterKeys() const { DARABONBA_PTR_GET_CONST(filterKeys_, vector<string>) };
      inline vector<string> getFilterKeys() { DARABONBA_PTR_GET(filterKeys_, vector<string>) };
      inline ResourceTypes& setFilterKeys(const vector<string> & filterKeys) { DARABONBA_PTR_SET_VALUE(filterKeys_, filterKeys) };
      inline ResourceTypes& setFilterKeys(vector<string> && filterKeys) { DARABONBA_PTR_SET_RVALUE(filterKeys_, filterKeys) };


      // productName Field Functions 
      bool hasProductName() const { return this->productName_ != nullptr;};
      void deleteProductName() { this->productName_ = nullptr;};
      inline string getProductName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
      inline ResourceTypes& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


      // relatedResourceTypes Field Functions 
      bool hasRelatedResourceTypes() const { return this->relatedResourceTypes_ != nullptr;};
      void deleteRelatedResourceTypes() { this->relatedResourceTypes_ = nullptr;};
      inline const vector<string> & getRelatedResourceTypes() const { DARABONBA_PTR_GET_CONST(relatedResourceTypes_, vector<string>) };
      inline vector<string> getRelatedResourceTypes() { DARABONBA_PTR_GET(relatedResourceTypes_, vector<string>) };
      inline ResourceTypes& setRelatedResourceTypes(const vector<string> & relatedResourceTypes) { DARABONBA_PTR_SET_VALUE(relatedResourceTypes_, relatedResourceTypes) };
      inline ResourceTypes& setRelatedResourceTypes(vector<string> && relatedResourceTypes) { DARABONBA_PTR_SET_RVALUE(relatedResourceTypes_, relatedResourceTypes) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline ResourceTypes& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // resourceTypeName Field Functions 
      bool hasResourceTypeName() const { return this->resourceTypeName_ != nullptr;};
      void deleteResourceTypeName() { this->resourceTypeName_ = nullptr;};
      inline string getResourceTypeName() const { DARABONBA_PTR_GET_DEFAULT(resourceTypeName_, "") };
      inline ResourceTypes& setResourceTypeName(string resourceTypeName) { DARABONBA_PTR_SET_VALUE(resourceTypeName_, resourceTypeName) };


    protected:
      // The code mapping of the resource type.
      shared_ptr<ResourceTypes::CodeMapping> codeMapping_ {};
      // The supported filter conditions.
      shared_ptr<vector<string>> filterKeys_ {};
      // The name of the Alibaba Cloud service.
      shared_ptr<string> productName_ {};
      // The name of supported related resource types.
      shared_ptr<vector<string>> relatedResourceTypes_ {};
      // The resource type.
      shared_ptr<string> resourceType_ {};
      // The name of the resource type.
      shared_ptr<string> resourceTypeName_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resourceTypes_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListResourceTypesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceTypes Field Functions 
    bool hasResourceTypes() const { return this->resourceTypes_ != nullptr;};
    void deleteResourceTypes() { this->resourceTypes_ = nullptr;};
    inline const vector<ListResourceTypesResponseBody::ResourceTypes> & getResourceTypes() const { DARABONBA_PTR_GET_CONST(resourceTypes_, vector<ListResourceTypesResponseBody::ResourceTypes>) };
    inline vector<ListResourceTypesResponseBody::ResourceTypes> getResourceTypes() { DARABONBA_PTR_GET(resourceTypes_, vector<ListResourceTypesResponseBody::ResourceTypes>) };
    inline ListResourceTypesResponseBody& setResourceTypes(const vector<ListResourceTypesResponseBody::ResourceTypes> & resourceTypes) { DARABONBA_PTR_SET_VALUE(resourceTypes_, resourceTypes) };
    inline ListResourceTypesResponseBody& setResourceTypes(vector<ListResourceTypesResponseBody::ResourceTypes> && resourceTypes) { DARABONBA_PTR_SET_RVALUE(resourceTypes_, resourceTypes) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The resource types.
    shared_ptr<vector<ListResourceTypesResponseBody::ResourceTypes>> resourceTypes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
