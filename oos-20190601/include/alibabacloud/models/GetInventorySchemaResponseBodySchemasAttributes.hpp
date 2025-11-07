// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINVENTORYSCHEMARESPONSEBODYSCHEMASATTRIBUTES_HPP_
#define ALIBABACLOUD_MODELS_GETINVENTORYSCHEMARESPONSEBODYSCHEMASATTRIBUTES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class GetInventorySchemaResponseBodySchemasAttributes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInventorySchemaResponseBodySchemasAttributes& obj) { 
      DARABONBA_PTR_TO_JSON(DataType, dataType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, GetInventorySchemaResponseBodySchemasAttributes& obj) { 
      DARABONBA_PTR_FROM_JSON(DataType, dataType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    GetInventorySchemaResponseBodySchemasAttributes() = default ;
    GetInventorySchemaResponseBodySchemasAttributes(const GetInventorySchemaResponseBodySchemasAttributes &) = default ;
    GetInventorySchemaResponseBodySchemasAttributes(GetInventorySchemaResponseBodySchemasAttributes &&) = default ;
    GetInventorySchemaResponseBodySchemasAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInventorySchemaResponseBodySchemasAttributes() = default ;
    GetInventorySchemaResponseBodySchemasAttributes& operator=(const GetInventorySchemaResponseBodySchemasAttributes &) = default ;
    GetInventorySchemaResponseBodySchemasAttributes& operator=(GetInventorySchemaResponseBodySchemasAttributes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataType_ == nullptr
        && return this->name_ == nullptr; };
    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string dataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline GetInventorySchemaResponseBodySchemasAttributes& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetInventorySchemaResponseBodySchemasAttributes& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The data type of the property.
    std::shared_ptr<string> dataType_ = nullptr;
    // The name of the property.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
