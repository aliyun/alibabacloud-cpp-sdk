// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESCHEMAPROPERTYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESCHEMAPROPERTYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateSchemaPropertyRequestProperty.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class UpdateSchemaPropertyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSchemaPropertyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Property, property_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SchemaId, schemaId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSchemaPropertyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Property, property_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SchemaId, schemaId_);
    };
    UpdateSchemaPropertyRequest() = default ;
    UpdateSchemaPropertyRequest(const UpdateSchemaPropertyRequest &) = default ;
    UpdateSchemaPropertyRequest(UpdateSchemaPropertyRequest &&) = default ;
    UpdateSchemaPropertyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSchemaPropertyRequest() = default ;
    UpdateSchemaPropertyRequest& operator=(const UpdateSchemaPropertyRequest &) = default ;
    UpdateSchemaPropertyRequest& operator=(UpdateSchemaPropertyRequest &&) = default ;
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
    inline UpdateSchemaPropertyRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // property Field Functions 
    bool hasProperty() const { return this->property_ != nullptr;};
    void deleteProperty() { this->property_ = nullptr;};
    inline const UpdateSchemaPropertyRequestProperty & property() const { DARABONBA_PTR_GET_CONST(property_, UpdateSchemaPropertyRequestProperty) };
    inline UpdateSchemaPropertyRequestProperty property() { DARABONBA_PTR_GET(property_, UpdateSchemaPropertyRequestProperty) };
    inline UpdateSchemaPropertyRequest& setProperty(const UpdateSchemaPropertyRequestProperty & property) { DARABONBA_PTR_SET_VALUE(property_, property) };
    inline UpdateSchemaPropertyRequest& setProperty(UpdateSchemaPropertyRequestProperty && property) { DARABONBA_PTR_SET_RVALUE(property_, property) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateSchemaPropertyRequest& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // schemaId Field Functions 
    bool hasSchemaId() const { return this->schemaId_ != nullptr;};
    void deleteSchemaId() { this->schemaId_ = nullptr;};
    inline string schemaId() const { DARABONBA_PTR_GET_DEFAULT(schemaId_, "") };
    inline UpdateSchemaPropertyRequest& setSchemaId(string schemaId) { DARABONBA_PTR_SET_VALUE(schemaId_, schemaId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<UpdateSchemaPropertyRequestProperty> property_ = nullptr;
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
