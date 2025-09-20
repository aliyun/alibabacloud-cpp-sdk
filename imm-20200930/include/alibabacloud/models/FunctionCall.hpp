// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FUNCTIONCALL_HPP_
#define ALIBABACLOUD_MODELS_FUNCTIONCALL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class FunctionCall : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FunctionCall& obj) { 
      DARABONBA_PTR_TO_JSON(Arguments, arguments_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, FunctionCall& obj) { 
      DARABONBA_PTR_FROM_JSON(Arguments, arguments_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    FunctionCall() = default ;
    FunctionCall(const FunctionCall &) = default ;
    FunctionCall(FunctionCall &&) = default ;
    FunctionCall(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FunctionCall() = default ;
    FunctionCall& operator=(const FunctionCall &) = default ;
    FunctionCall& operator=(FunctionCall &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arguments_ != nullptr
        && this->name_ != nullptr; };
    // arguments Field Functions 
    bool hasArguments() const { return this->arguments_ != nullptr;};
    void deleteArguments() { this->arguments_ = nullptr;};
    inline string arguments() const { DARABONBA_PTR_GET_DEFAULT(arguments_, "") };
    inline FunctionCall& setArguments(string arguments) { DARABONBA_PTR_SET_VALUE(arguments_, arguments) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline FunctionCall& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<string> arguments_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
