// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LIFECYCLEPRESTOPEXEC_HPP_
#define ALIBABACLOUD_MODELS_LIFECYCLEPRESTOPEXEC_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class LifecyclePreStopExec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LifecyclePreStopExec& obj) { 
      DARABONBA_PTR_TO_JSON(Command, command_);
    };
    friend void from_json(const Darabonba::Json& j, LifecyclePreStopExec& obj) { 
      DARABONBA_PTR_FROM_JSON(Command, command_);
    };
    LifecyclePreStopExec() = default ;
    LifecyclePreStopExec(const LifecyclePreStopExec &) = default ;
    LifecyclePreStopExec(LifecyclePreStopExec &&) = default ;
    LifecyclePreStopExec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LifecyclePreStopExec() = default ;
    LifecyclePreStopExec& operator=(const LifecyclePreStopExec &) = default ;
    LifecyclePreStopExec& operator=(LifecyclePreStopExec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->command_ == nullptr; };
    // command Field Functions 
    bool hasCommand() const { return this->command_ != nullptr;};
    void deleteCommand() { this->command_ = nullptr;};
    inline const vector<string> & command() const { DARABONBA_PTR_GET_CONST(command_, vector<string>) };
    inline vector<string> command() { DARABONBA_PTR_GET(command_, vector<string>) };
    inline LifecyclePreStopExec& setCommand(const vector<string> & command) { DARABONBA_PTR_SET_VALUE(command_, command) };
    inline LifecyclePreStopExec& setCommand(vector<string> && command) { DARABONBA_PTR_SET_RVALUE(command_, command) };


  protected:
    std::shared_ptr<vector<string>> command_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
