// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINVENTORYSCHEMARESPONSEBODYSCHEMAS_HPP_
#define ALIBABACLOUD_MODELS_GETINVENTORYSCHEMARESPONSEBODYSCHEMAS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetInventorySchemaResponseBodySchemasAttributes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class GetInventorySchemaResponseBodySchemas : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInventorySchemaResponseBodySchemas& obj) { 
      DARABONBA_PTR_TO_JSON(Attributes, attributes_);
      DARABONBA_PTR_TO_JSON(TypeName, typeName_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, GetInventorySchemaResponseBodySchemas& obj) { 
      DARABONBA_PTR_FROM_JSON(Attributes, attributes_);
      DARABONBA_PTR_FROM_JSON(TypeName, typeName_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    GetInventorySchemaResponseBodySchemas() = default ;
    GetInventorySchemaResponseBodySchemas(const GetInventorySchemaResponseBodySchemas &) = default ;
    GetInventorySchemaResponseBodySchemas(GetInventorySchemaResponseBodySchemas &&) = default ;
    GetInventorySchemaResponseBodySchemas(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInventorySchemaResponseBodySchemas() = default ;
    GetInventorySchemaResponseBodySchemas& operator=(const GetInventorySchemaResponseBodySchemas &) = default ;
    GetInventorySchemaResponseBodySchemas& operator=(GetInventorySchemaResponseBodySchemas &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attributes_ == nullptr
        && return this->typeName_ == nullptr && return this->version_ == nullptr; };
    // attributes Field Functions 
    bool hasAttributes() const { return this->attributes_ != nullptr;};
    void deleteAttributes() { this->attributes_ = nullptr;};
    inline const vector<Models::GetInventorySchemaResponseBodySchemasAttributes> & attributes() const { DARABONBA_PTR_GET_CONST(attributes_, vector<Models::GetInventorySchemaResponseBodySchemasAttributes>) };
    inline vector<Models::GetInventorySchemaResponseBodySchemasAttributes> attributes() { DARABONBA_PTR_GET(attributes_, vector<Models::GetInventorySchemaResponseBodySchemasAttributes>) };
    inline GetInventorySchemaResponseBodySchemas& setAttributes(const vector<Models::GetInventorySchemaResponseBodySchemasAttributes> & attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };
    inline GetInventorySchemaResponseBodySchemas& setAttributes(vector<Models::GetInventorySchemaResponseBodySchemasAttributes> && attributes) { DARABONBA_PTR_SET_RVALUE(attributes_, attributes) };


    // typeName Field Functions 
    bool hasTypeName() const { return this->typeName_ != nullptr;};
    void deleteTypeName() { this->typeName_ = nullptr;};
    inline string typeName() const { DARABONBA_PTR_GET_DEFAULT(typeName_, "") };
    inline GetInventorySchemaResponseBodySchemas& setTypeName(string typeName) { DARABONBA_PTR_SET_VALUE(typeName_, typeName) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline GetInventorySchemaResponseBodySchemas& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The properties of the configuration list.
    std::shared_ptr<vector<Models::GetInventorySchemaResponseBodySchemasAttributes>> attributes_ = nullptr;
    // The name of the configuration list.
    std::shared_ptr<string> typeName_ = nullptr;
    // The version of the configuration list.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
