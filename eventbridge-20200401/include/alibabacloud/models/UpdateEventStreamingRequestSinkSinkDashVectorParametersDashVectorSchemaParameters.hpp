// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEVENTSTREAMINGREQUESTSINKSINKDASHVECTORPARAMETERSDASHVECTORSCHEMAPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEVENTSTREAMINGREQUESTSINKSINKDASHVECTORPARAMETERSDASHVECTORSCHEMAPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParametersName.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParametersType.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParametersValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class UpdateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParameters& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    UpdateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParameters() = default ;
    UpdateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParameters(const UpdateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParameters &) = default ;
    UpdateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParameters(UpdateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParameters &&) = default ;
    UpdateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParameters() = default ;
    UpdateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParameters& operator=(const UpdateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParameters &) = default ;
    UpdateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParameters& operator=(UpdateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->type_ == nullptr && return this->value_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParametersName & name() const { DARABONBA_PTR_GET_CONST(name_, Models::UpdateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParametersName) };
    inline Models::UpdateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParametersName name() { DARABONBA_PTR_GET(name_, Models::UpdateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParametersName) };
    inline UpdateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParameters& setName(const Models::UpdateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParametersName & name) { DARABONBA_PTR_SET_VALUE(name_, name) };
    inline UpdateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParameters& setName(Models::UpdateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParametersName && name) { DARABONBA_PTR_SET_RVALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParametersType & type() const { DARABONBA_PTR_GET_CONST(type_, Models::UpdateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParametersType) };
    inline Models::UpdateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParametersType type() { DARABONBA_PTR_GET(type_, Models::UpdateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParametersType) };
    inline UpdateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParameters& setType(const Models::UpdateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParametersType & type) { DARABONBA_PTR_SET_VALUE(type_, type) };
    inline UpdateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParameters& setType(Models::UpdateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParametersType && type) { DARABONBA_PTR_SET_RVALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParametersValue & value() const { DARABONBA_PTR_GET_CONST(value_, Models::UpdateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParametersValue) };
    inline Models::UpdateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParametersValue value() { DARABONBA_PTR_GET(value_, Models::UpdateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParametersValue) };
    inline UpdateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParameters& setValue(const Models::UpdateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParametersValue & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
    inline UpdateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParameters& setValue(Models::UpdateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParametersValue && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


  protected:
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParametersName> name_ = nullptr;
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParametersType> type_ = nullptr;
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParametersValue> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
