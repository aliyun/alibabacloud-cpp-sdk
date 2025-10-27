// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTSYNCEXECUTIONRESPONSEBODYENVIRONMENTVARIABLES_HPP_
#define ALIBABACLOUD_MODELS_STARTSYNCEXECUTIONRESPONSEBODYENVIRONMENTVARIABLES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Fnf20190315
{
namespace Models
{
  class StartSyncExecutionResponseBodyEnvironmentVariables : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartSyncExecutionResponseBodyEnvironmentVariables& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, StartSyncExecutionResponseBodyEnvironmentVariables& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    StartSyncExecutionResponseBodyEnvironmentVariables() = default ;
    StartSyncExecutionResponseBodyEnvironmentVariables(const StartSyncExecutionResponseBodyEnvironmentVariables &) = default ;
    StartSyncExecutionResponseBodyEnvironmentVariables(StartSyncExecutionResponseBodyEnvironmentVariables &&) = default ;
    StartSyncExecutionResponseBodyEnvironmentVariables(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartSyncExecutionResponseBodyEnvironmentVariables() = default ;
    StartSyncExecutionResponseBodyEnvironmentVariables& operator=(const StartSyncExecutionResponseBodyEnvironmentVariables &) = default ;
    StartSyncExecutionResponseBodyEnvironmentVariables& operator=(StartSyncExecutionResponseBodyEnvironmentVariables &&) = default ;
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
    inline StartSyncExecutionResponseBodyEnvironmentVariables& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline StartSyncExecutionResponseBodyEnvironmentVariables& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Fnf20190315
#endif
