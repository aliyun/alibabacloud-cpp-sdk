// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDISASTERRECOVERYPLANREQUESTINSTANCESMESSAGEPROPERTY_HPP_
#define ALIBABACLOUD_MODELS_CREATEDISASTERRECOVERYPLANREQUESTINSTANCESMESSAGEPROPERTY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class CreateDisasterRecoveryPlanRequestInstancesMessageProperty : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDisasterRecoveryPlanRequestInstancesMessageProperty& obj) { 
      DARABONBA_PTR_TO_JSON(propertyKey, propertyKey_);
      DARABONBA_PTR_TO_JSON(propertyValue, propertyValue_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDisasterRecoveryPlanRequestInstancesMessageProperty& obj) { 
      DARABONBA_PTR_FROM_JSON(propertyKey, propertyKey_);
      DARABONBA_PTR_FROM_JSON(propertyValue, propertyValue_);
    };
    CreateDisasterRecoveryPlanRequestInstancesMessageProperty() = default ;
    CreateDisasterRecoveryPlanRequestInstancesMessageProperty(const CreateDisasterRecoveryPlanRequestInstancesMessageProperty &) = default ;
    CreateDisasterRecoveryPlanRequestInstancesMessageProperty(CreateDisasterRecoveryPlanRequestInstancesMessageProperty &&) = default ;
    CreateDisasterRecoveryPlanRequestInstancesMessageProperty(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDisasterRecoveryPlanRequestInstancesMessageProperty() = default ;
    CreateDisasterRecoveryPlanRequestInstancesMessageProperty& operator=(const CreateDisasterRecoveryPlanRequestInstancesMessageProperty &) = default ;
    CreateDisasterRecoveryPlanRequestInstancesMessageProperty& operator=(CreateDisasterRecoveryPlanRequestInstancesMessageProperty &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->propertyKey_ != nullptr
        && this->propertyValue_ != nullptr; };
    // propertyKey Field Functions 
    bool hasPropertyKey() const { return this->propertyKey_ != nullptr;};
    void deletePropertyKey() { this->propertyKey_ = nullptr;};
    inline string propertyKey() const { DARABONBA_PTR_GET_DEFAULT(propertyKey_, "") };
    inline CreateDisasterRecoveryPlanRequestInstancesMessageProperty& setPropertyKey(string propertyKey) { DARABONBA_PTR_SET_VALUE(propertyKey_, propertyKey) };


    // propertyValue Field Functions 
    bool hasPropertyValue() const { return this->propertyValue_ != nullptr;};
    void deletePropertyValue() { this->propertyValue_ = nullptr;};
    inline string propertyValue() const { DARABONBA_PTR_GET_DEFAULT(propertyValue_, "") };
    inline CreateDisasterRecoveryPlanRequestInstancesMessageProperty& setPropertyValue(string propertyValue) { DARABONBA_PTR_SET_VALUE(propertyValue_, propertyValue) };


  protected:
    // The attribute key.
    std::shared_ptr<string> propertyKey_ = nullptr;
    // The attribute value.
    std::shared_ptr<string> propertyValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
