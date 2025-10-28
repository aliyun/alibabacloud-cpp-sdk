// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPCONFIGENVS_HPP_
#define ALIBABACLOUD_MODELS_APPCONFIGENVS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class AppConfigEnvs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AppConfigEnvs& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Value, value_);
      DARABONBA_PTR_TO_JSON(ValueFrom, valueFrom_);
    };
    friend void from_json(const Darabonba::Json& j, AppConfigEnvs& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
      DARABONBA_PTR_FROM_JSON(ValueFrom, valueFrom_);
    };
    AppConfigEnvs() = default ;
    AppConfigEnvs(const AppConfigEnvs &) = default ;
    AppConfigEnvs(AppConfigEnvs &&) = default ;
    AppConfigEnvs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AppConfigEnvs() = default ;
    AppConfigEnvs& operator=(const AppConfigEnvs &) = default ;
    AppConfigEnvs& operator=(AppConfigEnvs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->value_ == nullptr && return this->valueFrom_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AppConfigEnvs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline AppConfigEnvs& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    // valueFrom Field Functions 
    bool hasValueFrom() const { return this->valueFrom_ != nullptr;};
    void deleteValueFrom() { this->valueFrom_ = nullptr;};
    inline string valueFrom() const { DARABONBA_PTR_GET_DEFAULT(valueFrom_, "") };
    inline AppConfigEnvs& setValueFrom(string valueFrom) { DARABONBA_PTR_SET_VALUE(valueFrom_, valueFrom) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
    std::shared_ptr<string> valueFrom_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
