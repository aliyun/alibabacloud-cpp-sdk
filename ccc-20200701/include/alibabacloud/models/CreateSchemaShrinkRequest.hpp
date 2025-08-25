// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCHEMASHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESCHEMASHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class CreateSchemaShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSchemaShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Properties, propertiesShrink_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSchemaShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Properties, propertiesShrink_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateSchemaShrinkRequest() = default ;
    CreateSchemaShrinkRequest(const CreateSchemaShrinkRequest &) = default ;
    CreateSchemaShrinkRequest(CreateSchemaShrinkRequest &&) = default ;
    CreateSchemaShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSchemaShrinkRequest() = default ;
    CreateSchemaShrinkRequest& operator=(const CreateSchemaShrinkRequest &) = default ;
    CreateSchemaShrinkRequest& operator=(CreateSchemaShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->id_ != nullptr && this->instanceId_ != nullptr && this->propertiesShrink_ != nullptr && this->requestId_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateSchemaShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline CreateSchemaShrinkRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateSchemaShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // propertiesShrink Field Functions 
    bool hasPropertiesShrink() const { return this->propertiesShrink_ != nullptr;};
    void deletePropertiesShrink() { this->propertiesShrink_ = nullptr;};
    inline string propertiesShrink() const { DARABONBA_PTR_GET_DEFAULT(propertiesShrink_, "") };
    inline CreateSchemaShrinkRequest& setPropertiesShrink(string propertiesShrink) { DARABONBA_PTR_SET_VALUE(propertiesShrink_, propertiesShrink) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateSchemaShrinkRequest& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    // schema id
    std::shared_ptr<string> id_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> propertiesShrink_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
