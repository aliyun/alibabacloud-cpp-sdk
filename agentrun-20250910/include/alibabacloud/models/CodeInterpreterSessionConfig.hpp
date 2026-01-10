// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CODEINTERPRETERSESSIONCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CODEINTERPRETERSESSIONCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class CodeInterpreterSessionConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CodeInterpreterSessionConfig& obj) { 
      DARABONBA_PTR_TO_JSON(environment, environment_);
      DARABONBA_PTR_TO_JSON(timeout, timeout_);
      DARABONBA_PTR_TO_JSON(workingDirectory, workingDirectory_);
    };
    friend void from_json(const Darabonba::Json& j, CodeInterpreterSessionConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(environment, environment_);
      DARABONBA_PTR_FROM_JSON(timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(workingDirectory, workingDirectory_);
    };
    CodeInterpreterSessionConfig() = default ;
    CodeInterpreterSessionConfig(const CodeInterpreterSessionConfig &) = default ;
    CodeInterpreterSessionConfig(CodeInterpreterSessionConfig &&) = default ;
    CodeInterpreterSessionConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CodeInterpreterSessionConfig() = default ;
    CodeInterpreterSessionConfig& operator=(const CodeInterpreterSessionConfig &) = default ;
    CodeInterpreterSessionConfig& operator=(CodeInterpreterSessionConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->environment_ == nullptr
        && this->timeout_ == nullptr && this->workingDirectory_ == nullptr; };
    // environment Field Functions 
    bool hasEnvironment() const { return this->environment_ != nullptr;};
    void deleteEnvironment() { this->environment_ = nullptr;};
    inline const map<string, string> & getEnvironment() const { DARABONBA_PTR_GET_CONST(environment_, map<string, string>) };
    inline map<string, string> getEnvironment() { DARABONBA_PTR_GET(environment_, map<string, string>) };
    inline CodeInterpreterSessionConfig& setEnvironment(const map<string, string> & environment) { DARABONBA_PTR_SET_VALUE(environment_, environment) };
    inline CodeInterpreterSessionConfig& setEnvironment(map<string, string> && environment) { DARABONBA_PTR_SET_RVALUE(environment_, environment) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline CodeInterpreterSessionConfig& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // workingDirectory Field Functions 
    bool hasWorkingDirectory() const { return this->workingDirectory_ != nullptr;};
    void deleteWorkingDirectory() { this->workingDirectory_ = nullptr;};
    inline string getWorkingDirectory() const { DARABONBA_PTR_GET_DEFAULT(workingDirectory_, "") };
    inline CodeInterpreterSessionConfig& setWorkingDirectory(string workingDirectory) { DARABONBA_PTR_SET_VALUE(workingDirectory_, workingDirectory) };


  protected:
    // 代码解释器会话的环境变量配置
    shared_ptr<map<string, string>> environment_ {};
    // 代码解释器会话的超时时间，单位为秒
    shared_ptr<int32_t> timeout_ {};
    // 代码解释器会话的工作目录路径
    shared_ptr<string> workingDirectory_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
