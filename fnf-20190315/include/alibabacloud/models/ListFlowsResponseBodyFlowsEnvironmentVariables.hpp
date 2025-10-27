// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFLOWSRESPONSEBODYFLOWSENVIRONMENTVARIABLES_HPP_
#define ALIBABACLOUD_MODELS_LISTFLOWSRESPONSEBODYFLOWSENVIRONMENTVARIABLES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Fnf20190315
{
namespace Models
{
  class ListFlowsResponseBodyFlowsEnvironmentVariables : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFlowsResponseBodyFlowsEnvironmentVariables& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListFlowsResponseBodyFlowsEnvironmentVariables& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListFlowsResponseBodyFlowsEnvironmentVariables() = default ;
    ListFlowsResponseBodyFlowsEnvironmentVariables(const ListFlowsResponseBodyFlowsEnvironmentVariables &) = default ;
    ListFlowsResponseBodyFlowsEnvironmentVariables(ListFlowsResponseBodyFlowsEnvironmentVariables &&) = default ;
    ListFlowsResponseBodyFlowsEnvironmentVariables(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFlowsResponseBodyFlowsEnvironmentVariables() = default ;
    ListFlowsResponseBodyFlowsEnvironmentVariables& operator=(const ListFlowsResponseBodyFlowsEnvironmentVariables &) = default ;
    ListFlowsResponseBodyFlowsEnvironmentVariables& operator=(ListFlowsResponseBodyFlowsEnvironmentVariables &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->name_ == nullptr && return this->value_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListFlowsResponseBodyFlowsEnvironmentVariables& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListFlowsResponseBodyFlowsEnvironmentVariables& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ListFlowsResponseBodyFlowsEnvironmentVariables& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Fnf20190315
#endif
