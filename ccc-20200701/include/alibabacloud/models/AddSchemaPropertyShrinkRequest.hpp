// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDSCHEMAPROPERTYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDSCHEMAPROPERTYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class AddSchemaPropertyShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddSchemaPropertyShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Property, propertyShrink_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SchemaId, schemaId_);
    };
    friend void from_json(const Darabonba::Json& j, AddSchemaPropertyShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Property, propertyShrink_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SchemaId, schemaId_);
    };
    AddSchemaPropertyShrinkRequest() = default ;
    AddSchemaPropertyShrinkRequest(const AddSchemaPropertyShrinkRequest &) = default ;
    AddSchemaPropertyShrinkRequest(AddSchemaPropertyShrinkRequest &&) = default ;
    AddSchemaPropertyShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddSchemaPropertyShrinkRequest() = default ;
    AddSchemaPropertyShrinkRequest& operator=(const AddSchemaPropertyShrinkRequest &) = default ;
    AddSchemaPropertyShrinkRequest& operator=(AddSchemaPropertyShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->propertyShrink_ != nullptr && this->requestId_ != nullptr && this->schemaId_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AddSchemaPropertyShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // propertyShrink Field Functions 
    bool hasPropertyShrink() const { return this->propertyShrink_ != nullptr;};
    void deletePropertyShrink() { this->propertyShrink_ = nullptr;};
    inline string propertyShrink() const { DARABONBA_PTR_GET_DEFAULT(propertyShrink_, "") };
    inline AddSchemaPropertyShrinkRequest& setPropertyShrink(string propertyShrink) { DARABONBA_PTR_SET_VALUE(propertyShrink_, propertyShrink) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddSchemaPropertyShrinkRequest& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // schemaId Field Functions 
    bool hasSchemaId() const { return this->schemaId_ != nullptr;};
    void deleteSchemaId() { this->schemaId_ = nullptr;};
    inline string schemaId() const { DARABONBA_PTR_GET_DEFAULT(schemaId_, "") };
    inline AddSchemaPropertyShrinkRequest& setSchemaId(string schemaId) { DARABONBA_PTR_SET_VALUE(schemaId_, schemaId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> propertyShrink_ = nullptr;
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
