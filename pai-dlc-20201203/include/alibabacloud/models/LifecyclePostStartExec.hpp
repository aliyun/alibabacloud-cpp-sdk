// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LIFECYCLEPOSTSTARTEXEC_HPP_
#define ALIBABACLOUD_MODELS_LIFECYCLEPOSTSTARTEXEC_HPP_
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
  class LifecyclePostStartExec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LifecyclePostStartExec& obj) { 
      DARABONBA_PTR_TO_JSON(Command, command_);
    };
    friend void from_json(const Darabonba::Json& j, LifecyclePostStartExec& obj) { 
      DARABONBA_PTR_FROM_JSON(Command, command_);
    };
    LifecyclePostStartExec() = default ;
    LifecyclePostStartExec(const LifecyclePostStartExec &) = default ;
    LifecyclePostStartExec(LifecyclePostStartExec &&) = default ;
    LifecyclePostStartExec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LifecyclePostStartExec() = default ;
    LifecyclePostStartExec& operator=(const LifecyclePostStartExec &) = default ;
    LifecyclePostStartExec& operator=(LifecyclePostStartExec &&) = default ;
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
    inline LifecyclePostStartExec& setCommand(const vector<string> & command) { DARABONBA_PTR_SET_VALUE(command_, command) };
    inline LifecyclePostStartExec& setCommand(vector<string> && command) { DARABONBA_PTR_SET_RVALUE(command_, command) };


  protected:
    std::shared_ptr<vector<string>> command_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
