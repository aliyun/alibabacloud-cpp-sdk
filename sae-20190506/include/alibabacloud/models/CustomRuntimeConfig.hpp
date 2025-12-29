// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CUSTOMRUNTIMECONFIG_HPP_
#define ALIBABACLOUD_MODELS_CUSTOMRUNTIMECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class CustomRuntimeConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CustomRuntimeConfig& obj) { 
      DARABONBA_PTR_TO_JSON(args, args_);
      DARABONBA_PTR_TO_JSON(command, command_);
    };
    friend void from_json(const Darabonba::Json& j, CustomRuntimeConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(args, args_);
      DARABONBA_PTR_FROM_JSON(command, command_);
    };
    CustomRuntimeConfig() = default ;
    CustomRuntimeConfig(const CustomRuntimeConfig &) = default ;
    CustomRuntimeConfig(CustomRuntimeConfig &&) = default ;
    CustomRuntimeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CustomRuntimeConfig() = default ;
    CustomRuntimeConfig& operator=(const CustomRuntimeConfig &) = default ;
    CustomRuntimeConfig& operator=(CustomRuntimeConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->args_ == nullptr
        && this->command_ == nullptr; };
    // args Field Functions 
    bool hasArgs() const { return this->args_ != nullptr;};
    void deleteArgs() { this->args_ = nullptr;};
    inline const vector<string> & getArgs() const { DARABONBA_PTR_GET_CONST(args_, vector<string>) };
    inline vector<string> getArgs() { DARABONBA_PTR_GET(args_, vector<string>) };
    inline CustomRuntimeConfig& setArgs(const vector<string> & args) { DARABONBA_PTR_SET_VALUE(args_, args) };
    inline CustomRuntimeConfig& setArgs(vector<string> && args) { DARABONBA_PTR_SET_RVALUE(args_, args) };


    // command Field Functions 
    bool hasCommand() const { return this->command_ != nullptr;};
    void deleteCommand() { this->command_ = nullptr;};
    inline const vector<string> & getCommand() const { DARABONBA_PTR_GET_CONST(command_, vector<string>) };
    inline vector<string> getCommand() { DARABONBA_PTR_GET(command_, vector<string>) };
    inline CustomRuntimeConfig& setCommand(const vector<string> & command) { DARABONBA_PTR_SET_VALUE(command_, command) };
    inline CustomRuntimeConfig& setCommand(vector<string> && command) { DARABONBA_PTR_SET_RVALUE(command_, command) };


  protected:
    shared_ptr<vector<string>> args_ {};
    shared_ptr<vector<string>> command_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
