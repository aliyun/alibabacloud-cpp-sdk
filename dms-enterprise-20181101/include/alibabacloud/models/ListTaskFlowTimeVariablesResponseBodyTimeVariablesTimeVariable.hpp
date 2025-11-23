// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKFLOWTIMEVARIABLESRESPONSEBODYTIMEVARIABLESTIMEVARIABLE_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKFLOWTIMEVARIABLESRESPONSEBODYTIMEVARIABLESTIMEVARIABLE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListTaskFlowTimeVariablesResponseBodyTimeVariablesTimeVariable : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTaskFlowTimeVariablesResponseBodyTimeVariablesTimeVariable& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Pattern, pattern_);
    };
    friend void from_json(const Darabonba::Json& j, ListTaskFlowTimeVariablesResponseBodyTimeVariablesTimeVariable& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Pattern, pattern_);
    };
    ListTaskFlowTimeVariablesResponseBodyTimeVariablesTimeVariable() = default ;
    ListTaskFlowTimeVariablesResponseBodyTimeVariablesTimeVariable(const ListTaskFlowTimeVariablesResponseBodyTimeVariablesTimeVariable &) = default ;
    ListTaskFlowTimeVariablesResponseBodyTimeVariablesTimeVariable(ListTaskFlowTimeVariablesResponseBodyTimeVariablesTimeVariable &&) = default ;
    ListTaskFlowTimeVariablesResponseBodyTimeVariablesTimeVariable(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTaskFlowTimeVariablesResponseBodyTimeVariablesTimeVariable() = default ;
    ListTaskFlowTimeVariablesResponseBodyTimeVariablesTimeVariable& operator=(const ListTaskFlowTimeVariablesResponseBodyTimeVariablesTimeVariable &) = default ;
    ListTaskFlowTimeVariablesResponseBodyTimeVariablesTimeVariable& operator=(ListTaskFlowTimeVariablesResponseBodyTimeVariablesTimeVariable &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->pattern_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListTaskFlowTimeVariablesResponseBodyTimeVariablesTimeVariable& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pattern Field Functions 
    bool hasPattern() const { return this->pattern_ != nullptr;};
    void deletePattern() { this->pattern_ = nullptr;};
    inline string pattern() const { DARABONBA_PTR_GET_DEFAULT(pattern_, "") };
    inline ListTaskFlowTimeVariablesResponseBodyTimeVariablesTimeVariable& setPattern(string pattern) { DARABONBA_PTR_SET_VALUE(pattern_, pattern) };


  protected:
    // The name of the time variable.
    std::shared_ptr<string> name_ = nullptr;
    // The format of the time variable.
    std::shared_ptr<string> pattern_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
