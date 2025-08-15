// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROCESSDEFINITIONWITHSCHEDULEREQUESTTASKDEFINITIONJSONTASKPARAMSLOCALPARAMS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROCESSDEFINITIONWITHSCHEDULEREQUESTTASKDEFINITIONJSONTASKPARAMSLOCALPARAMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParamsLocalParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParamsLocalParams& obj) { 
      DARABONBA_PTR_TO_JSON(direct, direct_);
      DARABONBA_PTR_TO_JSON(prop, prop_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParamsLocalParams& obj) { 
      DARABONBA_PTR_FROM_JSON(direct, direct_);
      DARABONBA_PTR_FROM_JSON(prop, prop_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParamsLocalParams() = default ;
    UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParamsLocalParams(const UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParamsLocalParams &) = default ;
    UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParamsLocalParams(UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParamsLocalParams &&) = default ;
    UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParamsLocalParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParamsLocalParams() = default ;
    UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParamsLocalParams& operator=(const UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParamsLocalParams &) = default ;
    UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParamsLocalParams& operator=(UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParamsLocalParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->direct_ != nullptr
        && this->prop_ != nullptr && this->type_ != nullptr && this->value_ != nullptr; };
    // direct Field Functions 
    bool hasDirect() const { return this->direct_ != nullptr;};
    void deleteDirect() { this->direct_ = nullptr;};
    inline string direct() const { DARABONBA_PTR_GET_DEFAULT(direct_, "") };
    inline UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParamsLocalParams& setDirect(string direct) { DARABONBA_PTR_SET_VALUE(direct_, direct) };


    // prop Field Functions 
    bool hasProp() const { return this->prop_ != nullptr;};
    void deleteProp() { this->prop_ = nullptr;};
    inline string prop() const { DARABONBA_PTR_GET_DEFAULT(prop_, "") };
    inline UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParamsLocalParams& setProp(string prop) { DARABONBA_PTR_SET_VALUE(prop_, prop) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParamsLocalParams& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParamsLocalParams& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> direct_ = nullptr;
    std::shared_ptr<string> prop_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
