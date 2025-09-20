// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TOOLCALL_HPP_
#define ALIBABACLOUD_MODELS_TOOLCALL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/FunctionCall.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class ToolCall : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ToolCall& obj) { 
      DARABONBA_PTR_TO_JSON(Function, function_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ToolCall& obj) { 
      DARABONBA_PTR_FROM_JSON(Function, function_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ToolCall() = default ;
    ToolCall(const ToolCall &) = default ;
    ToolCall(ToolCall &&) = default ;
    ToolCall(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ToolCall() = default ;
    ToolCall& operator=(const ToolCall &) = default ;
    ToolCall& operator=(ToolCall &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->function_ != nullptr
        && this->type_ != nullptr; };
    // function Field Functions 
    bool hasFunction() const { return this->function_ != nullptr;};
    void deleteFunction() { this->function_ = nullptr;};
    inline const FunctionCall & function() const { DARABONBA_PTR_GET_CONST(function_, FunctionCall) };
    inline FunctionCall function() { DARABONBA_PTR_GET(function_, FunctionCall) };
    inline ToolCall& setFunction(const FunctionCall & function) { DARABONBA_PTR_SET_VALUE(function_, function) };
    inline ToolCall& setFunction(FunctionCall && function) { DARABONBA_PTR_SET_RVALUE(function_, function) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ToolCall& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<FunctionCall> function_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
