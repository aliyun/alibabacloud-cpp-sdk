// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTERMINALCOMMANDSRESPONSEBODYTERMINALCOMMANDLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTTERMINALCOMMANDSRESPONSEBODYTERMINALCOMMANDLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EcsWorkbench20220220
{
namespace Models
{
  class ListTerminalCommandsResponseBodyTerminalCommandList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTerminalCommandsResponseBodyTerminalCommandList& obj) { 
      DARABONBA_PTR_TO_JSON(CommandLine, commandLine_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ExecutePath, executePath_);
      DARABONBA_PTR_TO_JSON(LoginUser, loginUser_);
    };
    friend void from_json(const Darabonba::Json& j, ListTerminalCommandsResponseBodyTerminalCommandList& obj) { 
      DARABONBA_PTR_FROM_JSON(CommandLine, commandLine_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ExecutePath, executePath_);
      DARABONBA_PTR_FROM_JSON(LoginUser, loginUser_);
    };
    ListTerminalCommandsResponseBodyTerminalCommandList() = default ;
    ListTerminalCommandsResponseBodyTerminalCommandList(const ListTerminalCommandsResponseBodyTerminalCommandList &) = default ;
    ListTerminalCommandsResponseBodyTerminalCommandList(ListTerminalCommandsResponseBodyTerminalCommandList &&) = default ;
    ListTerminalCommandsResponseBodyTerminalCommandList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTerminalCommandsResponseBodyTerminalCommandList() = default ;
    ListTerminalCommandsResponseBodyTerminalCommandList& operator=(const ListTerminalCommandsResponseBodyTerminalCommandList &) = default ;
    ListTerminalCommandsResponseBodyTerminalCommandList& operator=(ListTerminalCommandsResponseBodyTerminalCommandList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->commandLine_ != nullptr
        && this->createTime_ != nullptr && this->executePath_ != nullptr && this->loginUser_ != nullptr; };
    // commandLine Field Functions 
    bool hasCommandLine() const { return this->commandLine_ != nullptr;};
    void deleteCommandLine() { this->commandLine_ = nullptr;};
    inline string commandLine() const { DARABONBA_PTR_GET_DEFAULT(commandLine_, "") };
    inline ListTerminalCommandsResponseBodyTerminalCommandList& setCommandLine(string commandLine) { DARABONBA_PTR_SET_VALUE(commandLine_, commandLine) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListTerminalCommandsResponseBodyTerminalCommandList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // executePath Field Functions 
    bool hasExecutePath() const { return this->executePath_ != nullptr;};
    void deleteExecutePath() { this->executePath_ = nullptr;};
    inline string executePath() const { DARABONBA_PTR_GET_DEFAULT(executePath_, "") };
    inline ListTerminalCommandsResponseBodyTerminalCommandList& setExecutePath(string executePath) { DARABONBA_PTR_SET_VALUE(executePath_, executePath) };


    // loginUser Field Functions 
    bool hasLoginUser() const { return this->loginUser_ != nullptr;};
    void deleteLoginUser() { this->loginUser_ = nullptr;};
    inline string loginUser() const { DARABONBA_PTR_GET_DEFAULT(loginUser_, "") };
    inline ListTerminalCommandsResponseBodyTerminalCommandList& setLoginUser(string loginUser) { DARABONBA_PTR_SET_VALUE(loginUser_, loginUser) };


  protected:
    std::shared_ptr<string> commandLine_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> executePath_ = nullptr;
    std::shared_ptr<string> loginUser_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EcsWorkbench20220220
#endif
