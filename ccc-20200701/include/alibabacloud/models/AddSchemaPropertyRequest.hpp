// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDSCHEMAPROPERTYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDSCHEMAPROPERTYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AddSchemaPropertyRequestProperty.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class AddSchemaPropertyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddSchemaPropertyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Property, property_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SchemaId, schemaId_);
    };
    friend void from_json(const Darabonba::Json& j, AddSchemaPropertyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Property, property_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SchemaId, schemaId_);
    };
    AddSchemaPropertyRequest() = default ;
    AddSchemaPropertyRequest(const AddSchemaPropertyRequest &) = default ;
    AddSchemaPropertyRequest(AddSchemaPropertyRequest &&) = default ;
    AddSchemaPropertyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddSchemaPropertyRequest() = default ;
    AddSchemaPropertyRequest& operator=(const AddSchemaPropertyRequest &) = default ;
    AddSchemaPropertyRequest& operator=(AddSchemaPropertyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->property_ != nullptr && this->requestId_ != nullptr && this->schemaId_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AddSchemaPropertyRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // property Field Functions 
    bool hasProperty() const { return this->property_ != nullptr;};
    void deleteProperty() { this->property_ = nullptr;};
    inline const AddSchemaPropertyRequestProperty & property() const { DARABONBA_PTR_GET_CONST(property_, AddSchemaPropertyRequestProperty) };
    inline AddSchemaPropertyRequestProperty property() { DARABONBA_PTR_GET(property_, AddSchemaPropertyRequestProperty) };
    inline AddSchemaPropertyRequest& setProperty(const AddSchemaPropertyRequestProperty & property) { DARABONBA_PTR_SET_VALUE(property_, property) };
    inline AddSchemaPropertyRequest& setProperty(AddSchemaPropertyRequestProperty && property) { DARABONBA_PTR_SET_RVALUE(property_, property) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddSchemaPropertyRequest& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // schemaId Field Functions 
    bool hasSchemaId() const { return this->schemaId_ != nullptr;};
    void deleteSchemaId() { this->schemaId_ = nullptr;};
    inline string schemaId() const { DARABONBA_PTR_GET_DEFAULT(schemaId_, "") };
    inline AddSchemaPropertyRequest& setSchemaId(string schemaId) { DARABONBA_PTR_SET_VALUE(schemaId_, schemaId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<AddSchemaPropertyRequestProperty> property_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    // schema id
    // 
    // This parameter is required.
    std::shared_ptr<string> schemaId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
