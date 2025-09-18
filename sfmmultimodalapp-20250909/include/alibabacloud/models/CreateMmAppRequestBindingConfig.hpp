// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMMAPPREQUESTBINDINGCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATEMMAPPREQUESTBINDINGCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateMmAppRequestBindingConfigCommands.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SfmMultiModalApp20250909
{
namespace Models
{
  class CreateMmAppRequestBindingConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMmAppRequestBindingConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Commands, commands_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMmAppRequestBindingConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Commands, commands_);
    };
    CreateMmAppRequestBindingConfig() = default ;
    CreateMmAppRequestBindingConfig(const CreateMmAppRequestBindingConfig &) = default ;
    CreateMmAppRequestBindingConfig(CreateMmAppRequestBindingConfig &&) = default ;
    CreateMmAppRequestBindingConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMmAppRequestBindingConfig() = default ;
    CreateMmAppRequestBindingConfig& operator=(const CreateMmAppRequestBindingConfig &) = default ;
    CreateMmAppRequestBindingConfig& operator=(CreateMmAppRequestBindingConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->commands_ != nullptr; };
    // commands Field Functions 
    bool hasCommands() const { return this->commands_ != nullptr;};
    void deleteCommands() { this->commands_ = nullptr;};
    inline const vector<Models::CreateMmAppRequestBindingConfigCommands> & commands() const { DARABONBA_PTR_GET_CONST(commands_, vector<Models::CreateMmAppRequestBindingConfigCommands>) };
    inline vector<Models::CreateMmAppRequestBindingConfigCommands> commands() { DARABONBA_PTR_GET(commands_, vector<Models::CreateMmAppRequestBindingConfigCommands>) };
    inline CreateMmAppRequestBindingConfig& setCommands(const vector<Models::CreateMmAppRequestBindingConfigCommands> & commands) { DARABONBA_PTR_SET_VALUE(commands_, commands) };
    inline CreateMmAppRequestBindingConfig& setCommands(vector<Models::CreateMmAppRequestBindingConfigCommands> && commands) { DARABONBA_PTR_SET_RVALUE(commands_, commands) };


  protected:
    std::shared_ptr<vector<Models::CreateMmAppRequestBindingConfigCommands>> commands_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SfmMultiModalApp20250909
#endif
