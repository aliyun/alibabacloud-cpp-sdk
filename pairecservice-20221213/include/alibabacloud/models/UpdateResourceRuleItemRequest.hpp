// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERESOURCERULEITEMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATERESOURCERULEITEMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class UpdateResourceRuleItemRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateResourceRuleItemRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MaxValue, maxValue_);
      DARABONBA_PTR_TO_JSON(MinValue, minValue_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateResourceRuleItemRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MaxValue, maxValue_);
      DARABONBA_PTR_FROM_JSON(MinValue, minValue_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    UpdateResourceRuleItemRequest() = default ;
    UpdateResourceRuleItemRequest(const UpdateResourceRuleItemRequest &) = default ;
    UpdateResourceRuleItemRequest(UpdateResourceRuleItemRequest &&) = default ;
    UpdateResourceRuleItemRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateResourceRuleItemRequest() = default ;
    UpdateResourceRuleItemRequest& operator=(const UpdateResourceRuleItemRequest &) = default ;
    UpdateResourceRuleItemRequest& operator=(UpdateResourceRuleItemRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->instanceId_ == nullptr && this->maxValue_ == nullptr && this->minValue_ == nullptr && this->name_ == nullptr && this->value_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateResourceRuleItemRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateResourceRuleItemRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // maxValue Field Functions 
    bool hasMaxValue() const { return this->maxValue_ != nullptr;};
    void deleteMaxValue() { this->maxValue_ = nullptr;};
    inline double getMaxValue() const { DARABONBA_PTR_GET_DEFAULT(maxValue_, 0.0) };
    inline UpdateResourceRuleItemRequest& setMaxValue(double maxValue) { DARABONBA_PTR_SET_VALUE(maxValue_, maxValue) };


    // minValue Field Functions 
    bool hasMinValue() const { return this->minValue_ != nullptr;};
    void deleteMinValue() { this->minValue_ = nullptr;};
    inline double getMinValue() const { DARABONBA_PTR_GET_DEFAULT(minValue_, 0.0) };
    inline UpdateResourceRuleItemRequest& setMinValue(double minValue) { DARABONBA_PTR_SET_VALUE(minValue_, minValue) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateResourceRuleItemRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline double getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
    inline UpdateResourceRuleItemRequest& setValue(double value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    shared_ptr<string> description_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<double> maxValue_ {};
    shared_ptr<double> minValue_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    shared_ptr<double> value_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
