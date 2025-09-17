// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCETYPERESPONSEBODYRESOURCETYPE_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCETYPERESPONSEBODYRESOURCETYPE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetResourceTypeResponseBodyResourceTypeHandlers.hpp>
#include <alibabacloud/models/GetResourceTypeResponseBodyResourceTypeInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudcontrol20220830
{
namespace Models
{
  class GetResourceTypeResponseBodyResourceType : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceTypeResponseBodyResourceType& obj) { 
      DARABONBA_PTR_TO_JSON(createOnlyProperties, createOnlyProperties_);
      DARABONBA_PTR_TO_JSON(deleteOnlyProperties, deleteOnlyProperties_);
      DARABONBA_PTR_TO_JSON(filterProperties, filterProperties_);
      DARABONBA_PTR_TO_JSON(getOnlyProperties, getOnlyProperties_);
      DARABONBA_PTR_TO_JSON(getResponseProperties, getResponseProperties_);
      DARABONBA_PTR_TO_JSON(handlers, handlers_);
      DARABONBA_PTR_TO_JSON(info, info_);
      DARABONBA_PTR_TO_JSON(listOnlyProperties, listOnlyProperties_);
      DARABONBA_PTR_TO_JSON(listResponseProperties, listResponseProperties_);
      DARABONBA_PTR_TO_JSON(primaryIdentifier, primaryIdentifier_);
      DARABONBA_PTR_TO_JSON(product, product_);
      DARABONBA_ANY_TO_JSON(properties, properties_);
      DARABONBA_PTR_TO_JSON(publicProperties, publicProperties_);
      DARABONBA_PTR_TO_JSON(readOnlyProperties, readOnlyProperties_);
      DARABONBA_PTR_TO_JSON(required, required_);
      DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(sensitiveInfoProperties, sensitiveInfoProperties_);
      DARABONBA_PTR_TO_JSON(updateOnlyProperties, updateOnlyProperties_);
      DARABONBA_PTR_TO_JSON(updateTypeProperties, updateTypeProperties_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceTypeResponseBodyResourceType& obj) { 
      DARABONBA_PTR_FROM_JSON(createOnlyProperties, createOnlyProperties_);
      DARABONBA_PTR_FROM_JSON(deleteOnlyProperties, deleteOnlyProperties_);
      DARABONBA_PTR_FROM_JSON(filterProperties, filterProperties_);
      DARABONBA_PTR_FROM_JSON(getOnlyProperties, getOnlyProperties_);
      DARABONBA_PTR_FROM_JSON(getResponseProperties, getResponseProperties_);
      DARABONBA_PTR_FROM_JSON(handlers, handlers_);
      DARABONBA_PTR_FROM_JSON(info, info_);
      DARABONBA_PTR_FROM_JSON(listOnlyProperties, listOnlyProperties_);
      DARABONBA_PTR_FROM_JSON(listResponseProperties, listResponseProperties_);
      DARABONBA_PTR_FROM_JSON(primaryIdentifier, primaryIdentifier_);
      DARABONBA_PTR_FROM_JSON(product, product_);
      DARABONBA_ANY_FROM_JSON(properties, properties_);
      DARABONBA_PTR_FROM_JSON(publicProperties, publicProperties_);
      DARABONBA_PTR_FROM_JSON(readOnlyProperties, readOnlyProperties_);
      DARABONBA_PTR_FROM_JSON(required, required_);
      DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(sensitiveInfoProperties, sensitiveInfoProperties_);
      DARABONBA_PTR_FROM_JSON(updateOnlyProperties, updateOnlyProperties_);
      DARABONBA_PTR_FROM_JSON(updateTypeProperties, updateTypeProperties_);
    };
    GetResourceTypeResponseBodyResourceType() = default ;
    GetResourceTypeResponseBodyResourceType(const GetResourceTypeResponseBodyResourceType &) = default ;
    GetResourceTypeResponseBodyResourceType(GetResourceTypeResponseBodyResourceType &&) = default ;
    GetResourceTypeResponseBodyResourceType(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceTypeResponseBodyResourceType() = default ;
    GetResourceTypeResponseBodyResourceType& operator=(const GetResourceTypeResponseBodyResourceType &) = default ;
    GetResourceTypeResponseBodyResourceType& operator=(GetResourceTypeResponseBodyResourceType &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createOnlyProperties_ != nullptr
        && this->deleteOnlyProperties_ != nullptr && this->filterProperties_ != nullptr && this->getOnlyProperties_ != nullptr && this->getResponseProperties_ != nullptr && this->handlers_ != nullptr
        && this->info_ != nullptr && this->listOnlyProperties_ != nullptr && this->listResponseProperties_ != nullptr && this->primaryIdentifier_ != nullptr && this->product_ != nullptr
        && this->properties_ != nullptr && this->publicProperties_ != nullptr && this->readOnlyProperties_ != nullptr && this->required_ != nullptr && this->resourceType_ != nullptr
        && this->sensitiveInfoProperties_ != nullptr && this->updateOnlyProperties_ != nullptr && this->updateTypeProperties_ != nullptr; };
    // createOnlyProperties Field Functions 
    bool hasCreateOnlyProperties() const { return this->createOnlyProperties_ != nullptr;};
    void deleteCreateOnlyProperties() { this->createOnlyProperties_ = nullptr;};
    inline const vector<string> & createOnlyProperties() const { DARABONBA_PTR_GET_CONST(createOnlyProperties_, vector<string>) };
    inline vector<string> createOnlyProperties() { DARABONBA_PTR_GET(createOnlyProperties_, vector<string>) };
    inline GetResourceTypeResponseBodyResourceType& setCreateOnlyProperties(const vector<string> & createOnlyProperties) { DARABONBA_PTR_SET_VALUE(createOnlyProperties_, createOnlyProperties) };
    inline GetResourceTypeResponseBodyResourceType& setCreateOnlyProperties(vector<string> && createOnlyProperties) { DARABONBA_PTR_SET_RVALUE(createOnlyProperties_, createOnlyProperties) };


    // deleteOnlyProperties Field Functions 
    bool hasDeleteOnlyProperties() const { return this->deleteOnlyProperties_ != nullptr;};
    void deleteDeleteOnlyProperties() { this->deleteOnlyProperties_ = nullptr;};
    inline const vector<string> & deleteOnlyProperties() const { DARABONBA_PTR_GET_CONST(deleteOnlyProperties_, vector<string>) };
    inline vector<string> deleteOnlyProperties() { DARABONBA_PTR_GET(deleteOnlyProperties_, vector<string>) };
    inline GetResourceTypeResponseBodyResourceType& setDeleteOnlyProperties(const vector<string> & deleteOnlyProperties) { DARABONBA_PTR_SET_VALUE(deleteOnlyProperties_, deleteOnlyProperties) };
    inline GetResourceTypeResponseBodyResourceType& setDeleteOnlyProperties(vector<string> && deleteOnlyProperties) { DARABONBA_PTR_SET_RVALUE(deleteOnlyProperties_, deleteOnlyProperties) };


    // filterProperties Field Functions 
    bool hasFilterProperties() const { return this->filterProperties_ != nullptr;};
    void deleteFilterProperties() { this->filterProperties_ = nullptr;};
    inline const vector<string> & filterProperties() const { DARABONBA_PTR_GET_CONST(filterProperties_, vector<string>) };
    inline vector<string> filterProperties() { DARABONBA_PTR_GET(filterProperties_, vector<string>) };
    inline GetResourceTypeResponseBodyResourceType& setFilterProperties(const vector<string> & filterProperties) { DARABONBA_PTR_SET_VALUE(filterProperties_, filterProperties) };
    inline GetResourceTypeResponseBodyResourceType& setFilterProperties(vector<string> && filterProperties) { DARABONBA_PTR_SET_RVALUE(filterProperties_, filterProperties) };


    // getOnlyProperties Field Functions 
    bool hasGetOnlyProperties() const { return this->getOnlyProperties_ != nullptr;};
    void deleteGetOnlyProperties() { this->getOnlyProperties_ = nullptr;};
    inline const vector<string> & getOnlyProperties() const { DARABONBA_PTR_GET_CONST(getOnlyProperties_, vector<string>) };
    inline vector<string> getOnlyProperties() { DARABONBA_PTR_GET(getOnlyProperties_, vector<string>) };
    inline GetResourceTypeResponseBodyResourceType& setGetOnlyProperties(const vector<string> & getOnlyProperties) { DARABONBA_PTR_SET_VALUE(getOnlyProperties_, getOnlyProperties) };
    inline GetResourceTypeResponseBodyResourceType& setGetOnlyProperties(vector<string> && getOnlyProperties) { DARABONBA_PTR_SET_RVALUE(getOnlyProperties_, getOnlyProperties) };


    // getResponseProperties Field Functions 
    bool hasGetResponseProperties() const { return this->getResponseProperties_ != nullptr;};
    void deleteGetResponseProperties() { this->getResponseProperties_ = nullptr;};
    inline const vector<string> & getResponseProperties() const { DARABONBA_PTR_GET_CONST(getResponseProperties_, vector<string>) };
    inline vector<string> getResponseProperties() { DARABONBA_PTR_GET(getResponseProperties_, vector<string>) };
    inline GetResourceTypeResponseBodyResourceType& setGetResponseProperties(const vector<string> & getResponseProperties) { DARABONBA_PTR_SET_VALUE(getResponseProperties_, getResponseProperties) };
    inline GetResourceTypeResponseBodyResourceType& setGetResponseProperties(vector<string> && getResponseProperties) { DARABONBA_PTR_SET_RVALUE(getResponseProperties_, getResponseProperties) };


    // handlers Field Functions 
    bool hasHandlers() const { return this->handlers_ != nullptr;};
    void deleteHandlers() { this->handlers_ = nullptr;};
    inline const Models::GetResourceTypeResponseBodyResourceTypeHandlers & handlers() const { DARABONBA_PTR_GET_CONST(handlers_, Models::GetResourceTypeResponseBodyResourceTypeHandlers) };
    inline Models::GetResourceTypeResponseBodyResourceTypeHandlers handlers() { DARABONBA_PTR_GET(handlers_, Models::GetResourceTypeResponseBodyResourceTypeHandlers) };
    inline GetResourceTypeResponseBodyResourceType& setHandlers(const Models::GetResourceTypeResponseBodyResourceTypeHandlers & handlers) { DARABONBA_PTR_SET_VALUE(handlers_, handlers) };
    inline GetResourceTypeResponseBodyResourceType& setHandlers(Models::GetResourceTypeResponseBodyResourceTypeHandlers && handlers) { DARABONBA_PTR_SET_RVALUE(handlers_, handlers) };


    // info Field Functions 
    bool hasInfo() const { return this->info_ != nullptr;};
    void deleteInfo() { this->info_ = nullptr;};
    inline const Models::GetResourceTypeResponseBodyResourceTypeInfo & info() const { DARABONBA_PTR_GET_CONST(info_, Models::GetResourceTypeResponseBodyResourceTypeInfo) };
    inline Models::GetResourceTypeResponseBodyResourceTypeInfo info() { DARABONBA_PTR_GET(info_, Models::GetResourceTypeResponseBodyResourceTypeInfo) };
    inline GetResourceTypeResponseBodyResourceType& setInfo(const Models::GetResourceTypeResponseBodyResourceTypeInfo & info) { DARABONBA_PTR_SET_VALUE(info_, info) };
    inline GetResourceTypeResponseBodyResourceType& setInfo(Models::GetResourceTypeResponseBodyResourceTypeInfo && info) { DARABONBA_PTR_SET_RVALUE(info_, info) };


    // listOnlyProperties Field Functions 
    bool hasListOnlyProperties() const { return this->listOnlyProperties_ != nullptr;};
    void deleteListOnlyProperties() { this->listOnlyProperties_ = nullptr;};
    inline const vector<string> & listOnlyProperties() const { DARABONBA_PTR_GET_CONST(listOnlyProperties_, vector<string>) };
    inline vector<string> listOnlyProperties() { DARABONBA_PTR_GET(listOnlyProperties_, vector<string>) };
    inline GetResourceTypeResponseBodyResourceType& setListOnlyProperties(const vector<string> & listOnlyProperties) { DARABONBA_PTR_SET_VALUE(listOnlyProperties_, listOnlyProperties) };
    inline GetResourceTypeResponseBodyResourceType& setListOnlyProperties(vector<string> && listOnlyProperties) { DARABONBA_PTR_SET_RVALUE(listOnlyProperties_, listOnlyProperties) };


    // listResponseProperties Field Functions 
    bool hasListResponseProperties() const { return this->listResponseProperties_ != nullptr;};
    void deleteListResponseProperties() { this->listResponseProperties_ = nullptr;};
    inline const vector<string> & listResponseProperties() const { DARABONBA_PTR_GET_CONST(listResponseProperties_, vector<string>) };
    inline vector<string> listResponseProperties() { DARABONBA_PTR_GET(listResponseProperties_, vector<string>) };
    inline GetResourceTypeResponseBodyResourceType& setListResponseProperties(const vector<string> & listResponseProperties) { DARABONBA_PTR_SET_VALUE(listResponseProperties_, listResponseProperties) };
    inline GetResourceTypeResponseBodyResourceType& setListResponseProperties(vector<string> && listResponseProperties) { DARABONBA_PTR_SET_RVALUE(listResponseProperties_, listResponseProperties) };


    // primaryIdentifier Field Functions 
    bool hasPrimaryIdentifier() const { return this->primaryIdentifier_ != nullptr;};
    void deletePrimaryIdentifier() { this->primaryIdentifier_ = nullptr;};
    inline string primaryIdentifier() const { DARABONBA_PTR_GET_DEFAULT(primaryIdentifier_, "") };
    inline GetResourceTypeResponseBodyResourceType& setPrimaryIdentifier(string primaryIdentifier) { DARABONBA_PTR_SET_VALUE(primaryIdentifier_, primaryIdentifier) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string product() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline GetResourceTypeResponseBodyResourceType& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline     const Darabonba::Json & properties() const { DARABONBA_GET(properties_) };
    Darabonba::Json & properties() { DARABONBA_GET(properties_) };
    inline GetResourceTypeResponseBodyResourceType& setProperties(const Darabonba::Json & properties) { DARABONBA_SET_VALUE(properties_, properties) };
    inline GetResourceTypeResponseBodyResourceType& setProperties(Darabonba::Json & properties) { DARABONBA_SET_RVALUE(properties_, properties) };


    // publicProperties Field Functions 
    bool hasPublicProperties() const { return this->publicProperties_ != nullptr;};
    void deletePublicProperties() { this->publicProperties_ = nullptr;};
    inline const vector<string> & publicProperties() const { DARABONBA_PTR_GET_CONST(publicProperties_, vector<string>) };
    inline vector<string> publicProperties() { DARABONBA_PTR_GET(publicProperties_, vector<string>) };
    inline GetResourceTypeResponseBodyResourceType& setPublicProperties(const vector<string> & publicProperties) { DARABONBA_PTR_SET_VALUE(publicProperties_, publicProperties) };
    inline GetResourceTypeResponseBodyResourceType& setPublicProperties(vector<string> && publicProperties) { DARABONBA_PTR_SET_RVALUE(publicProperties_, publicProperties) };


    // readOnlyProperties Field Functions 
    bool hasReadOnlyProperties() const { return this->readOnlyProperties_ != nullptr;};
    void deleteReadOnlyProperties() { this->readOnlyProperties_ = nullptr;};
    inline const vector<string> & readOnlyProperties() const { DARABONBA_PTR_GET_CONST(readOnlyProperties_, vector<string>) };
    inline vector<string> readOnlyProperties() { DARABONBA_PTR_GET(readOnlyProperties_, vector<string>) };
    inline GetResourceTypeResponseBodyResourceType& setReadOnlyProperties(const vector<string> & readOnlyProperties) { DARABONBA_PTR_SET_VALUE(readOnlyProperties_, readOnlyProperties) };
    inline GetResourceTypeResponseBodyResourceType& setReadOnlyProperties(vector<string> && readOnlyProperties) { DARABONBA_PTR_SET_RVALUE(readOnlyProperties_, readOnlyProperties) };


    // required Field Functions 
    bool hasRequired() const { return this->required_ != nullptr;};
    void deleteRequired() { this->required_ = nullptr;};
    inline const vector<string> & required() const { DARABONBA_PTR_GET_CONST(required_, vector<string>) };
    inline vector<string> required() { DARABONBA_PTR_GET(required_, vector<string>) };
    inline GetResourceTypeResponseBodyResourceType& setRequired(const vector<string> & required) { DARABONBA_PTR_SET_VALUE(required_, required) };
    inline GetResourceTypeResponseBodyResourceType& setRequired(vector<string> && required) { DARABONBA_PTR_SET_RVALUE(required_, required) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetResourceTypeResponseBodyResourceType& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // sensitiveInfoProperties Field Functions 
    bool hasSensitiveInfoProperties() const { return this->sensitiveInfoProperties_ != nullptr;};
    void deleteSensitiveInfoProperties() { this->sensitiveInfoProperties_ = nullptr;};
    inline const vector<string> & sensitiveInfoProperties() const { DARABONBA_PTR_GET_CONST(sensitiveInfoProperties_, vector<string>) };
    inline vector<string> sensitiveInfoProperties() { DARABONBA_PTR_GET(sensitiveInfoProperties_, vector<string>) };
    inline GetResourceTypeResponseBodyResourceType& setSensitiveInfoProperties(const vector<string> & sensitiveInfoProperties) { DARABONBA_PTR_SET_VALUE(sensitiveInfoProperties_, sensitiveInfoProperties) };
    inline GetResourceTypeResponseBodyResourceType& setSensitiveInfoProperties(vector<string> && sensitiveInfoProperties) { DARABONBA_PTR_SET_RVALUE(sensitiveInfoProperties_, sensitiveInfoProperties) };


    // updateOnlyProperties Field Functions 
    bool hasUpdateOnlyProperties() const { return this->updateOnlyProperties_ != nullptr;};
    void deleteUpdateOnlyProperties() { this->updateOnlyProperties_ = nullptr;};
    inline const vector<string> & updateOnlyProperties() const { DARABONBA_PTR_GET_CONST(updateOnlyProperties_, vector<string>) };
    inline vector<string> updateOnlyProperties() { DARABONBA_PTR_GET(updateOnlyProperties_, vector<string>) };
    inline GetResourceTypeResponseBodyResourceType& setUpdateOnlyProperties(const vector<string> & updateOnlyProperties) { DARABONBA_PTR_SET_VALUE(updateOnlyProperties_, updateOnlyProperties) };
    inline GetResourceTypeResponseBodyResourceType& setUpdateOnlyProperties(vector<string> && updateOnlyProperties) { DARABONBA_PTR_SET_RVALUE(updateOnlyProperties_, updateOnlyProperties) };


    // updateTypeProperties Field Functions 
    bool hasUpdateTypeProperties() const { return this->updateTypeProperties_ != nullptr;};
    void deleteUpdateTypeProperties() { this->updateTypeProperties_ = nullptr;};
    inline const vector<string> & updateTypeProperties() const { DARABONBA_PTR_GET_CONST(updateTypeProperties_, vector<string>) };
    inline vector<string> updateTypeProperties() { DARABONBA_PTR_GET(updateTypeProperties_, vector<string>) };
    inline GetResourceTypeResponseBodyResourceType& setUpdateTypeProperties(const vector<string> & updateTypeProperties) { DARABONBA_PTR_SET_VALUE(updateTypeProperties_, updateTypeProperties) };
    inline GetResourceTypeResponseBodyResourceType& setUpdateTypeProperties(vector<string> && updateTypeProperties) { DARABONBA_PTR_SET_RVALUE(updateTypeProperties_, updateTypeProperties) };


  protected:
    // The properties that are specific to the create operation. You need to specify these properties when you create the resource. These properties are not returned when you query the resource.
    std::shared_ptr<vector<string>> createOnlyProperties_ = nullptr;
    // The properties that are specific to the delete operation. You need to specify these properties when you delete the resource. These properties are not returned when you query the resource.
    std::shared_ptr<vector<string>> deleteOnlyProperties_ = nullptr;
    // The properties that can be used to filter the resource when you list the resource.
    std::shared_ptr<vector<string>> filterProperties_ = nullptr;
    // The properties that are specific to the query operation. You need to specify these properties when you query the resource. These properties are not returned in the query result.
    std::shared_ptr<vector<string>> getOnlyProperties_ = nullptr;
    // The properties that are returned when you query the resource.
    std::shared_ptr<vector<string>> getResponseProperties_ = nullptr;
    // The information about the operation, including the required Resource Access Management (RAM) permissions.
    std::shared_ptr<Models::GetResourceTypeResponseBodyResourceTypeHandlers> handlers_ = nullptr;
    // The basic information about the resource type.
    std::shared_ptr<Models::GetResourceTypeResponseBodyResourceTypeInfo> info_ = nullptr;
    // The properties that are specific to the list operation. You need to specify these properties when you list the resource. These properties are not returned when you query the resource.
    std::shared_ptr<vector<string>> listOnlyProperties_ = nullptr;
    // The properties that are returned when you list the resource.
    std::shared_ptr<vector<string>> listResponseProperties_ = nullptr;
    // The ID of the resource.
    std::shared_ptr<string> primaryIdentifier_ = nullptr;
    // The code of the service.
    std::shared_ptr<string> product_ = nullptr;
    // The resource properties. The key specifies the property name and the value specifies the details of the property.
    Darabonba::Json properties_ = nullptr;
    // The common properties of the resource. The common properties are not operation-specific.
    std::shared_ptr<vector<string>> publicProperties_ = nullptr;
    // The read-only properties. These properties are returned only when you perform the List or Get operation. You do not need to specify these properties when you create or update the resource.
    std::shared_ptr<vector<string>> readOnlyProperties_ = nullptr;
    // The properties that must be specified when you create the resource.
    std::shared_ptr<vector<string>> required_ = nullptr;
    // The type of the resource. If the resource belongs to a parent resource, the return format is {parent resource type code /resource type code}.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The sensitive properties, such as the password.
    std::shared_ptr<vector<string>> sensitiveInfoProperties_ = nullptr;
    // The properties that are specific to the update operation. You need to specify these properties when you update the resource. These properties are not returned when you query the resource.
    std::shared_ptr<vector<string>> updateOnlyProperties_ = nullptr;
    // The properties that can be modified.
    std::shared_ptr<vector<string>> updateTypeProperties_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudcontrol20220830
#endif
