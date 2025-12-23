// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEFUNCTIONINSTANCEREQUESTCREATEPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEFUNCTIONINSTANCEREQUESTCREATEPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class UpdateFunctionInstanceRequestCreateParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateFunctionInstanceRequestCreateParameters& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateFunctionInstanceRequestCreateParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    UpdateFunctionInstanceRequestCreateParameters() = default ;
    UpdateFunctionInstanceRequestCreateParameters(const UpdateFunctionInstanceRequestCreateParameters &) = default ;
    UpdateFunctionInstanceRequestCreateParameters(UpdateFunctionInstanceRequestCreateParameters &&) = default ;
    UpdateFunctionInstanceRequestCreateParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateFunctionInstanceRequestCreateParameters() = default ;
    UpdateFunctionInstanceRequestCreateParameters& operator=(const UpdateFunctionInstanceRequestCreateParameters &) = default ;
    UpdateFunctionInstanceRequestCreateParameters& operator=(UpdateFunctionInstanceRequestCreateParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->value_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateFunctionInstanceRequestCreateParameters& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline UpdateFunctionInstanceRequestCreateParameters& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The name of the parameter.
    std::shared_ptr<string> name_ = nullptr;
    // The value of the parameter.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
