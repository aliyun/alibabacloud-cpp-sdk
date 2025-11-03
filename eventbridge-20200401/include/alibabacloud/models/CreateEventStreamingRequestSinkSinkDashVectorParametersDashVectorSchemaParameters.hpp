// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEVENTSTREAMINGREQUESTSINKSINKDASHVECTORPARAMETERSDASHVECTORSCHEMAPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_CREATEEVENTSTREAMINGREQUESTSINKSINKDASHVECTORPARAMETERSDASHVECTORSCHEMAPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParametersName.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParametersType.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParametersValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class CreateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParameters& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    CreateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParameters() = default ;
    CreateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParameters(const CreateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParameters &) = default ;
    CreateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParameters(CreateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParameters &&) = default ;
    CreateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParameters() = default ;
    CreateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParameters& operator=(const CreateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParameters &) = default ;
    CreateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParameters& operator=(CreateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->type_ == nullptr && return this->value_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParametersName & name() const { DARABONBA_PTR_GET_CONST(name_, Models::CreateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParametersName) };
    inline Models::CreateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParametersName name() { DARABONBA_PTR_GET(name_, Models::CreateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParametersName) };
    inline CreateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParameters& setName(const Models::CreateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParametersName & name) { DARABONBA_PTR_SET_VALUE(name_, name) };
    inline CreateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParameters& setName(Models::CreateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParametersName && name) { DARABONBA_PTR_SET_RVALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParametersType & type() const { DARABONBA_PTR_GET_CONST(type_, Models::CreateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParametersType) };
    inline Models::CreateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParametersType type() { DARABONBA_PTR_GET(type_, Models::CreateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParametersType) };
    inline CreateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParameters& setType(const Models::CreateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParametersType & type) { DARABONBA_PTR_SET_VALUE(type_, type) };
    inline CreateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParameters& setType(Models::CreateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParametersType && type) { DARABONBA_PTR_SET_RVALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParametersValue & value() const { DARABONBA_PTR_GET_CONST(value_, Models::CreateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParametersValue) };
    inline Models::CreateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParametersValue value() { DARABONBA_PTR_GET(value_, Models::CreateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParametersValue) };
    inline CreateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParameters& setValue(const Models::CreateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParametersValue & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
    inline CreateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParameters& setValue(Models::CreateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParametersValue && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


  protected:
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParametersName> name_ = nullptr;
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParametersType> type_ = nullptr;
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParametersValue> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
