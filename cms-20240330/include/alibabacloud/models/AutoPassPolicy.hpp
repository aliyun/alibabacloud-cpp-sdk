// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTOPASSPOLICY_HPP_
#define ALIBABACLOUD_MODELS_AUTOPASSPOLICY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class AutoPassPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AutoPassPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(commandPrefix, commandPrefix_);
      DARABONBA_PTR_TO_JSON(fullCommand, fullCommand_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, AutoPassPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(commandPrefix, commandPrefix_);
      DARABONBA_PTR_FROM_JSON(fullCommand, fullCommand_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    AutoPassPolicy() = default ;
    AutoPassPolicy(const AutoPassPolicy &) = default ;
    AutoPassPolicy(AutoPassPolicy &&) = default ;
    AutoPassPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AutoPassPolicy() = default ;
    AutoPassPolicy& operator=(const AutoPassPolicy &) = default ;
    AutoPassPolicy& operator=(AutoPassPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commandPrefix_ == nullptr
        && this->fullCommand_ == nullptr && this->version_ == nullptr; };
    // commandPrefix Field Functions 
    bool hasCommandPrefix() const { return this->commandPrefix_ != nullptr;};
    void deleteCommandPrefix() { this->commandPrefix_ = nullptr;};
    inline const vector<string> & getCommandPrefix() const { DARABONBA_PTR_GET_CONST(commandPrefix_, vector<string>) };
    inline vector<string> getCommandPrefix() { DARABONBA_PTR_GET(commandPrefix_, vector<string>) };
    inline AutoPassPolicy& setCommandPrefix(const vector<string> & commandPrefix) { DARABONBA_PTR_SET_VALUE(commandPrefix_, commandPrefix) };
    inline AutoPassPolicy& setCommandPrefix(vector<string> && commandPrefix) { DARABONBA_PTR_SET_RVALUE(commandPrefix_, commandPrefix) };


    // fullCommand Field Functions 
    bool hasFullCommand() const { return this->fullCommand_ != nullptr;};
    void deleteFullCommand() { this->fullCommand_ = nullptr;};
    inline string getFullCommand() const { DARABONBA_PTR_GET_DEFAULT(fullCommand_, "") };
    inline AutoPassPolicy& setFullCommand(string fullCommand) { DARABONBA_PTR_SET_VALUE(fullCommand_, fullCommand) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline AutoPassPolicy& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The selected command prefix. The array must contain exactly one prefix. You must specify either this parameter or fullCommand.
    shared_ptr<vector<string>> commandPrefix_ {};
    // The full command for exact matching. The command must not be empty. You must specify either this parameter or commandPrefix.
    shared_ptr<string> fullCommand_ {};
    // The version required for a valid rule. The current version is v1.0.0.
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
