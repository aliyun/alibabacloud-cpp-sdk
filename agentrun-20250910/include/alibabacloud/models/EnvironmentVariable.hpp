// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENVIRONMENTVARIABLE_HPP_
#define ALIBABACLOUD_MODELS_ENVIRONMENTVARIABLE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class EnvironmentVariable : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnvironmentVariable& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, EnvironmentVariable& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    EnvironmentVariable() = default ;
    EnvironmentVariable(const EnvironmentVariable &) = default ;
    EnvironmentVariable(EnvironmentVariable &&) = default ;
    EnvironmentVariable(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnvironmentVariable() = default ;
    EnvironmentVariable& operator=(const EnvironmentVariable &) = default ;
    EnvironmentVariable& operator=(EnvironmentVariable &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr && this->value_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline EnvironmentVariable& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline EnvironmentVariable& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline EnvironmentVariable& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // 环境变量的描述信息
    shared_ptr<string> description_ {};
    // 环境变量的名称
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // 环境变量的值
    // 
    // This parameter is required.
    shared_ptr<string> value_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
