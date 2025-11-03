// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEVENTSTREAMINGRESPONSEBODYDATASINKSINKDASHVECTORPARAMETERSDASHVECTORSCHEMAPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_GETEVENTSTREAMINGRESPONSEBODYDATASINKSINKDASHVECTORPARAMETERSDASHVECTORSCHEMAPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkDashVectorParametersDashVectorSchemaParametersName.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkDashVectorParametersDashVectorSchemaParametersType.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkDashVectorParametersDashVectorSchemaParametersValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class GetEventStreamingResponseBodyDataSinkSinkDashVectorParametersDashVectorSchemaParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEventStreamingResponseBodyDataSinkSinkDashVectorParametersDashVectorSchemaParameters& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, GetEventStreamingResponseBodyDataSinkSinkDashVectorParametersDashVectorSchemaParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    GetEventStreamingResponseBodyDataSinkSinkDashVectorParametersDashVectorSchemaParameters() = default ;
    GetEventStreamingResponseBodyDataSinkSinkDashVectorParametersDashVectorSchemaParameters(const GetEventStreamingResponseBodyDataSinkSinkDashVectorParametersDashVectorSchemaParameters &) = default ;
    GetEventStreamingResponseBodyDataSinkSinkDashVectorParametersDashVectorSchemaParameters(GetEventStreamingResponseBodyDataSinkSinkDashVectorParametersDashVectorSchemaParameters &&) = default ;
    GetEventStreamingResponseBodyDataSinkSinkDashVectorParametersDashVectorSchemaParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEventStreamingResponseBodyDataSinkSinkDashVectorParametersDashVectorSchemaParameters() = default ;
    GetEventStreamingResponseBodyDataSinkSinkDashVectorParametersDashVectorSchemaParameters& operator=(const GetEventStreamingResponseBodyDataSinkSinkDashVectorParametersDashVectorSchemaParameters &) = default ;
    GetEventStreamingResponseBodyDataSinkSinkDashVectorParametersDashVectorSchemaParameters& operator=(GetEventStreamingResponseBodyDataSinkSinkDashVectorParametersDashVectorSchemaParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->type_ == nullptr && return this->value_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkDashVectorParametersDashVectorSchemaParametersName & name() const { DARABONBA_PTR_GET_CONST(name_, Models::GetEventStreamingResponseBodyDataSinkSinkDashVectorParametersDashVectorSchemaParametersName) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkDashVectorParametersDashVectorSchemaParametersName name() { DARABONBA_PTR_GET(name_, Models::GetEventStreamingResponseBodyDataSinkSinkDashVectorParametersDashVectorSchemaParametersName) };
    inline GetEventStreamingResponseBodyDataSinkSinkDashVectorParametersDashVectorSchemaParameters& setName(const Models::GetEventStreamingResponseBodyDataSinkSinkDashVectorParametersDashVectorSchemaParametersName & name) { DARABONBA_PTR_SET_VALUE(name_, name) };
    inline GetEventStreamingResponseBodyDataSinkSinkDashVectorParametersDashVectorSchemaParameters& setName(Models::GetEventStreamingResponseBodyDataSinkSinkDashVectorParametersDashVectorSchemaParametersName && name) { DARABONBA_PTR_SET_RVALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkDashVectorParametersDashVectorSchemaParametersType & type() const { DARABONBA_PTR_GET_CONST(type_, Models::GetEventStreamingResponseBodyDataSinkSinkDashVectorParametersDashVectorSchemaParametersType) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkDashVectorParametersDashVectorSchemaParametersType type() { DARABONBA_PTR_GET(type_, Models::GetEventStreamingResponseBodyDataSinkSinkDashVectorParametersDashVectorSchemaParametersType) };
    inline GetEventStreamingResponseBodyDataSinkSinkDashVectorParametersDashVectorSchemaParameters& setType(const Models::GetEventStreamingResponseBodyDataSinkSinkDashVectorParametersDashVectorSchemaParametersType & type) { DARABONBA_PTR_SET_VALUE(type_, type) };
    inline GetEventStreamingResponseBodyDataSinkSinkDashVectorParametersDashVectorSchemaParameters& setType(Models::GetEventStreamingResponseBodyDataSinkSinkDashVectorParametersDashVectorSchemaParametersType && type) { DARABONBA_PTR_SET_RVALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkDashVectorParametersDashVectorSchemaParametersValue & value() const { DARABONBA_PTR_GET_CONST(value_, Models::GetEventStreamingResponseBodyDataSinkSinkDashVectorParametersDashVectorSchemaParametersValue) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkDashVectorParametersDashVectorSchemaParametersValue value() { DARABONBA_PTR_GET(value_, Models::GetEventStreamingResponseBodyDataSinkSinkDashVectorParametersDashVectorSchemaParametersValue) };
    inline GetEventStreamingResponseBodyDataSinkSinkDashVectorParametersDashVectorSchemaParameters& setValue(const Models::GetEventStreamingResponseBodyDataSinkSinkDashVectorParametersDashVectorSchemaParametersValue & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
    inline GetEventStreamingResponseBodyDataSinkSinkDashVectorParametersDashVectorSchemaParameters& setValue(Models::GetEventStreamingResponseBodyDataSinkSinkDashVectorParametersDashVectorSchemaParametersValue && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


  protected:
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkDashVectorParametersDashVectorSchemaParametersName> name_ = nullptr;
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkDashVectorParametersDashVectorSchemaParametersType> type_ = nullptr;
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkDashVectorParametersDashVectorSchemaParametersValue> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
