// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECACTION_HPP_
#define ALIBABACLOUD_MODELS_EXECACTION_HPP_
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
  class ExecAction : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecAction& obj) { 
      DARABONBA_PTR_TO_JSON(command, command_);
    };
    friend void from_json(const Darabonba::Json& j, ExecAction& obj) { 
      DARABONBA_PTR_FROM_JSON(command, command_);
    };
    ExecAction() = default ;
    ExecAction(const ExecAction &) = default ;
    ExecAction(ExecAction &&) = default ;
    ExecAction(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecAction() = default ;
    ExecAction& operator=(const ExecAction &) = default ;
    ExecAction& operator=(ExecAction &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->command_ == nullptr; };
    // command Field Functions 
    bool hasCommand() const { return this->command_ != nullptr;};
    void deleteCommand() { this->command_ = nullptr;};
    inline const vector<string> & getCommand() const { DARABONBA_PTR_GET_CONST(command_, vector<string>) };
    inline vector<string> getCommand() { DARABONBA_PTR_GET(command_, vector<string>) };
    inline ExecAction& setCommand(const vector<string> & command) { DARABONBA_PTR_SET_VALUE(command_, command) };
    inline ExecAction& setCommand(vector<string> && command) { DARABONBA_PTR_SET_RVALUE(command_, command) };


  protected:
    shared_ptr<vector<string>> command_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
