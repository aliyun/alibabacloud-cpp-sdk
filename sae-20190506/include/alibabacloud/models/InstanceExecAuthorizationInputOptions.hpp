// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSTANCEEXECAUTHORIZATIONINPUTOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_INSTANCEEXECAUTHORIZATIONINPUTOPTIONS_HPP_
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
  class InstanceExecAuthorizationInputOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InstanceExecAuthorizationInputOptions& obj) { 
      DARABONBA_PTR_TO_JSON(command, command_);
      DARABONBA_PTR_TO_JSON(stderr, stderr_);
      DARABONBA_PTR_TO_JSON(stdin, stdin_);
      DARABONBA_PTR_TO_JSON(stdout, stdout_);
      DARABONBA_PTR_TO_JSON(tty, tty_);
    };
    friend void from_json(const Darabonba::Json& j, InstanceExecAuthorizationInputOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(command, command_);
      DARABONBA_PTR_FROM_JSON(stderr, stderr_);
      DARABONBA_PTR_FROM_JSON(stdin, stdin_);
      DARABONBA_PTR_FROM_JSON(stdout, stdout_);
      DARABONBA_PTR_FROM_JSON(tty, tty_);
    };
    InstanceExecAuthorizationInputOptions() = default ;
    InstanceExecAuthorizationInputOptions(const InstanceExecAuthorizationInputOptions &) = default ;
    InstanceExecAuthorizationInputOptions(InstanceExecAuthorizationInputOptions &&) = default ;
    InstanceExecAuthorizationInputOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InstanceExecAuthorizationInputOptions() = default ;
    InstanceExecAuthorizationInputOptions& operator=(const InstanceExecAuthorizationInputOptions &) = default ;
    InstanceExecAuthorizationInputOptions& operator=(InstanceExecAuthorizationInputOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->command_ == nullptr
        && this->stderr_ == nullptr && this->stdin_ == nullptr && this->stdout_ == nullptr && this->tty_ == nullptr; };
    // command Field Functions 
    bool hasCommand() const { return this->command_ != nullptr;};
    void deleteCommand() { this->command_ = nullptr;};
    inline const vector<string> & getCommand() const { DARABONBA_PTR_GET_CONST(command_, vector<string>) };
    inline vector<string> getCommand() { DARABONBA_PTR_GET(command_, vector<string>) };
    inline InstanceExecAuthorizationInputOptions& setCommand(const vector<string> & command) { DARABONBA_PTR_SET_VALUE(command_, command) };
    inline InstanceExecAuthorizationInputOptions& setCommand(vector<string> && command) { DARABONBA_PTR_SET_RVALUE(command_, command) };


    // stderr Field Functions 
    bool hasStderr() const { return this->stderr_ != nullptr;};
    void deleteStderr() { this->stderr_ = nullptr;};
    inline bool getStderr() const { DARABONBA_PTR_GET_DEFAULT(stderr_, false) };
    inline InstanceExecAuthorizationInputOptions& setStderr(bool stderr) { DARABONBA_PTR_SET_VALUE(stderr_, stderr) };


    // stdin Field Functions 
    bool hasStdin() const { return this->stdin_ != nullptr;};
    void deleteStdin() { this->stdin_ = nullptr;};
    inline bool getStdin() const { DARABONBA_PTR_GET_DEFAULT(stdin_, false) };
    inline InstanceExecAuthorizationInputOptions& setStdin(bool stdin) { DARABONBA_PTR_SET_VALUE(stdin_, stdin) };


    // stdout Field Functions 
    bool hasStdout() const { return this->stdout_ != nullptr;};
    void deleteStdout() { this->stdout_ = nullptr;};
    inline bool getStdout() const { DARABONBA_PTR_GET_DEFAULT(stdout_, false) };
    inline InstanceExecAuthorizationInputOptions& setStdout(bool stdout) { DARABONBA_PTR_SET_VALUE(stdout_, stdout) };


    // tty Field Functions 
    bool hasTty() const { return this->tty_ != nullptr;};
    void deleteTty() { this->tty_ = nullptr;};
    inline bool getTty() const { DARABONBA_PTR_GET_DEFAULT(tty_, false) };
    inline InstanceExecAuthorizationInputOptions& setTty(bool tty) { DARABONBA_PTR_SET_VALUE(tty_, tty) };


  protected:
    shared_ptr<vector<string>> command_ {};
    shared_ptr<bool> stderr_ {};
    shared_ptr<bool> stdin_ {};
    shared_ptr<bool> stdout_ {};
    shared_ptr<bool> tty_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
