// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHANGESETRESPONSEBODYLOGTERRAFORMLOGS_HPP_
#define ALIBABACLOUD_MODELS_GETCHANGESETRESPONSEBODYLOGTERRAFORMLOGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GetChangeSetResponseBodyLogTerraformLogs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetChangeSetResponseBodyLogTerraformLogs& obj) { 
      DARABONBA_PTR_TO_JSON(Command, command_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Stream, stream_);
    };
    friend void from_json(const Darabonba::Json& j, GetChangeSetResponseBodyLogTerraformLogs& obj) { 
      DARABONBA_PTR_FROM_JSON(Command, command_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Stream, stream_);
    };
    GetChangeSetResponseBodyLogTerraformLogs() = default ;
    GetChangeSetResponseBodyLogTerraformLogs(const GetChangeSetResponseBodyLogTerraformLogs &) = default ;
    GetChangeSetResponseBodyLogTerraformLogs(GetChangeSetResponseBodyLogTerraformLogs &&) = default ;
    GetChangeSetResponseBodyLogTerraformLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetChangeSetResponseBodyLogTerraformLogs() = default ;
    GetChangeSetResponseBodyLogTerraformLogs& operator=(const GetChangeSetResponseBodyLogTerraformLogs &) = default ;
    GetChangeSetResponseBodyLogTerraformLogs& operator=(GetChangeSetResponseBodyLogTerraformLogs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->command_ != nullptr
        && this->content_ != nullptr && this->stream_ != nullptr; };
    // command Field Functions 
    bool hasCommand() const { return this->command_ != nullptr;};
    void deleteCommand() { this->command_ = nullptr;};
    inline string command() const { DARABONBA_PTR_GET_DEFAULT(command_, "") };
    inline GetChangeSetResponseBodyLogTerraformLogs& setCommand(string command) { DARABONBA_PTR_SET_VALUE(command_, command) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline GetChangeSetResponseBodyLogTerraformLogs& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // stream Field Functions 
    bool hasStream() const { return this->stream_ != nullptr;};
    void deleteStream() { this->stream_ = nullptr;};
    inline string stream() const { DARABONBA_PTR_GET_DEFAULT(stream_, "") };
    inline GetChangeSetResponseBodyLogTerraformLogs& setStream(string stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };


  protected:
    // The name of the Terraform command that is run. Valid values:
    // 
    // *   apply
    // *   plan
    // *   destroy
    // *   version
    // 
    // For more information about Terraform commands, see [Command](https://www.terraform.io/cli/commands).
    std::shared_ptr<string> command_ = nullptr;
    // The content of the output stream that is returned after the command is run.
    std::shared_ptr<string> content_ = nullptr;
    // The output stream. Valid values:
    // 
    // *   stdout: standard output stream
    // *   stderr: standard error stream
    std::shared_ptr<string> stream_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
