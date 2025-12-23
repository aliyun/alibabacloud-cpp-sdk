// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCETYPESRESPONSEBODYRESOURCETYPES_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCETYPESRESPONSEBODYRESOURCETYPES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListResourceTypesResponseBodyResourceTypesCodeMapping.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class ListResourceTypesResponseBodyResourceTypes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceTypesResponseBodyResourceTypes& obj) { 
      DARABONBA_PTR_TO_JSON(CodeMapping, codeMapping_);
      DARABONBA_PTR_TO_JSON(FilterKeys, filterKeys_);
      DARABONBA_PTR_TO_JSON(ProductName, productName_);
      DARABONBA_PTR_TO_JSON(RelatedResourceTypes, relatedResourceTypes_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(ResourceTypeName, resourceTypeName_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceTypesResponseBodyResourceTypes& obj) { 
      DARABONBA_PTR_FROM_JSON(CodeMapping, codeMapping_);
      DARABONBA_PTR_FROM_JSON(FilterKeys, filterKeys_);
      DARABONBA_PTR_FROM_JSON(ProductName, productName_);
      DARABONBA_PTR_FROM_JSON(RelatedResourceTypes, relatedResourceTypes_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(ResourceTypeName, resourceTypeName_);
    };
    ListResourceTypesResponseBodyResourceTypes() = default ;
    ListResourceTypesResponseBodyResourceTypes(const ListResourceTypesResponseBodyResourceTypes &) = default ;
    ListResourceTypesResponseBodyResourceTypes(ListResourceTypesResponseBodyResourceTypes &&) = default ;
    ListResourceTypesResponseBodyResourceTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceTypesResponseBodyResourceTypes() = default ;
    ListResourceTypesResponseBodyResourceTypes& operator=(const ListResourceTypesResponseBodyResourceTypes &) = default ;
    ListResourceTypesResponseBodyResourceTypes& operator=(ListResourceTypesResponseBodyResourceTypes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->codeMapping_ == nullptr
        && return this->filterKeys_ == nullptr && return this->productName_ == nullptr && return this->relatedResourceTypes_ == nullptr && return this->resourceType_ == nullptr && return this->resourceTypeName_ == nullptr; };
    // codeMapping Field Functions 
    bool hasCodeMapping() const { return this->codeMapping_ != nullptr;};
    void deleteCodeMapping() { this->codeMapping_ = nullptr;};
    inline const Models::ListResourceTypesResponseBodyResourceTypesCodeMapping & codeMapping() const { DARABONBA_PTR_GET_CONST(codeMapping_, Models::ListResourceTypesResponseBodyResourceTypesCodeMapping) };
    inline Models::ListResourceTypesResponseBodyResourceTypesCodeMapping codeMapping() { DARABONBA_PTR_GET(codeMapping_, Models::ListResourceTypesResponseBodyResourceTypesCodeMapping) };
    inline ListResourceTypesResponseBodyResourceTypes& setCodeMapping(const Models::ListResourceTypesResponseBodyResourceTypesCodeMapping & codeMapping) { DARABONBA_PTR_SET_VALUE(codeMapping_, codeMapping) };
    inline ListResourceTypesResponseBodyResourceTypes& setCodeMapping(Models::ListResourceTypesResponseBodyResourceTypesCodeMapping && codeMapping) { DARABONBA_PTR_SET_RVALUE(codeMapping_, codeMapping) };


    // filterKeys Field Functions 
    bool hasFilterKeys() const { return this->filterKeys_ != nullptr;};
    void deleteFilterKeys() { this->filterKeys_ = nullptr;};
    inline const vector<string> & filterKeys() const { DARABONBA_PTR_GET_CONST(filterKeys_, vector<string>) };
    inline vector<string> filterKeys() { DARABONBA_PTR_GET(filterKeys_, vector<string>) };
    inline ListResourceTypesResponseBodyResourceTypes& setFilterKeys(const vector<string> & filterKeys) { DARABONBA_PTR_SET_VALUE(filterKeys_, filterKeys) };
    inline ListResourceTypesResponseBodyResourceTypes& setFilterKeys(vector<string> && filterKeys) { DARABONBA_PTR_SET_RVALUE(filterKeys_, filterKeys) };


    // productName Field Functions 
    bool hasProductName() const { return this->productName_ != nullptr;};
    void deleteProductName() { this->productName_ = nullptr;};
    inline string productName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
    inline ListResourceTypesResponseBodyResourceTypes& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


    // relatedResourceTypes Field Functions 
    bool hasRelatedResourceTypes() const { return this->relatedResourceTypes_ != nullptr;};
    void deleteRelatedResourceTypes() { this->relatedResourceTypes_ = nullptr;};
    inline const vector<string> & relatedResourceTypes() const { DARABONBA_PTR_GET_CONST(relatedResourceTypes_, vector<string>) };
    inline vector<string> relatedResourceTypes() { DARABONBA_PTR_GET(relatedResourceTypes_, vector<string>) };
    inline ListResourceTypesResponseBodyResourceTypes& setRelatedResourceTypes(const vector<string> & relatedResourceTypes) { DARABONBA_PTR_SET_VALUE(relatedResourceTypes_, relatedResourceTypes) };
    inline ListResourceTypesResponseBodyResourceTypes& setRelatedResourceTypes(vector<string> && relatedResourceTypes) { DARABONBA_PTR_SET_RVALUE(relatedResourceTypes_, relatedResourceTypes) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListResourceTypesResponseBodyResourceTypes& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // resourceTypeName Field Functions 
    bool hasResourceTypeName() const { return this->resourceTypeName_ != nullptr;};
    void deleteResourceTypeName() { this->resourceTypeName_ = nullptr;};
    inline string resourceTypeName() const { DARABONBA_PTR_GET_DEFAULT(resourceTypeName_, "") };
    inline ListResourceTypesResponseBodyResourceTypes& setResourceTypeName(string resourceTypeName) { DARABONBA_PTR_SET_VALUE(resourceTypeName_, resourceTypeName) };


  protected:
    // The code mapping of the resource type.
    std::shared_ptr<Models::ListResourceTypesResponseBodyResourceTypesCodeMapping> codeMapping_ = nullptr;
    // The supported filter conditions.
    std::shared_ptr<vector<string>> filterKeys_ = nullptr;
    // The name of the Alibaba Cloud service.
    std::shared_ptr<string> productName_ = nullptr;
    // The name of supported related resource types.
    std::shared_ptr<vector<string>> relatedResourceTypes_ = nullptr;
    // The resource type.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The name of the resource type.
    std::shared_ptr<string> resourceTypeName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
