// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATAQUALITYSCANRUNREQUESTPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATAQUALITYSCANRUNREQUESTPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateDataQualityScanRunRequestParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataQualityScanRunRequestParameters& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataQualityScanRunRequestParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    CreateDataQualityScanRunRequestParameters() = default ;
    CreateDataQualityScanRunRequestParameters(const CreateDataQualityScanRunRequestParameters &) = default ;
    CreateDataQualityScanRunRequestParameters(CreateDataQualityScanRunRequestParameters &&) = default ;
    CreateDataQualityScanRunRequestParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataQualityScanRunRequestParameters() = default ;
    CreateDataQualityScanRunRequestParameters& operator=(const CreateDataQualityScanRunRequestParameters &) = default ;
    CreateDataQualityScanRunRequestParameters& operator=(CreateDataQualityScanRunRequestParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->value_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateDataQualityScanRunRequestParameters& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline CreateDataQualityScanRunRequestParameters& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The parameter name.
    std::shared_ptr<string> name_ = nullptr;
    // The parameter value. You can use a scheduling time expression.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
