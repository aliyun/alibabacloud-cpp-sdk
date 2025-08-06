// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMMANDSRESPONSEBODYCOMMANDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMMANDSRESPONSEBODYCOMMANDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCommandsResponseBodyCommandsCommand.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeCommandsResponseBodyCommands : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCommandsResponseBodyCommands& obj) { 
      DARABONBA_PTR_TO_JSON(Command, command_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCommandsResponseBodyCommands& obj) { 
      DARABONBA_PTR_FROM_JSON(Command, command_);
    };
    DescribeCommandsResponseBodyCommands() = default ;
    DescribeCommandsResponseBodyCommands(const DescribeCommandsResponseBodyCommands &) = default ;
    DescribeCommandsResponseBodyCommands(DescribeCommandsResponseBodyCommands &&) = default ;
    DescribeCommandsResponseBodyCommands(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCommandsResponseBodyCommands() = default ;
    DescribeCommandsResponseBodyCommands& operator=(const DescribeCommandsResponseBodyCommands &) = default ;
    DescribeCommandsResponseBodyCommands& operator=(DescribeCommandsResponseBodyCommands &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->command_ != nullptr; };
    // command Field Functions 
    bool hasCommand() const { return this->command_ != nullptr;};
    void deleteCommand() { this->command_ = nullptr;};
    inline const vector<Models::DescribeCommandsResponseBodyCommandsCommand> & command() const { DARABONBA_PTR_GET_CONST(command_, vector<Models::DescribeCommandsResponseBodyCommandsCommand>) };
    inline vector<Models::DescribeCommandsResponseBodyCommandsCommand> command() { DARABONBA_PTR_GET(command_, vector<Models::DescribeCommandsResponseBodyCommandsCommand>) };
    inline DescribeCommandsResponseBodyCommands& setCommand(const vector<Models::DescribeCommandsResponseBodyCommandsCommand> & command) { DARABONBA_PTR_SET_VALUE(command_, command) };
    inline DescribeCommandsResponseBodyCommands& setCommand(vector<Models::DescribeCommandsResponseBodyCommandsCommand> && command) { DARABONBA_PTR_SET_RVALUE(command_, command) };


  protected:
    std::shared_ptr<vector<Models::DescribeCommandsResponseBodyCommandsCommand>> command_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
