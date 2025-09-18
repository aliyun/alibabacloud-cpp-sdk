// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMMAPPREQUESTBINDINGCONFIG_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMMAPPREQUESTBINDINGCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateMmAppRequestBindingConfigCommands.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SfmMultiModalApp20250909
{
namespace Models
{
  class UpdateMmAppRequestBindingConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMmAppRequestBindingConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Commands, commands_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMmAppRequestBindingConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Commands, commands_);
    };
    UpdateMmAppRequestBindingConfig() = default ;
    UpdateMmAppRequestBindingConfig(const UpdateMmAppRequestBindingConfig &) = default ;
    UpdateMmAppRequestBindingConfig(UpdateMmAppRequestBindingConfig &&) = default ;
    UpdateMmAppRequestBindingConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMmAppRequestBindingConfig() = default ;
    UpdateMmAppRequestBindingConfig& operator=(const UpdateMmAppRequestBindingConfig &) = default ;
    UpdateMmAppRequestBindingConfig& operator=(UpdateMmAppRequestBindingConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->commands_ != nullptr; };
    // commands Field Functions 
    bool hasCommands() const { return this->commands_ != nullptr;};
    void deleteCommands() { this->commands_ = nullptr;};
    inline const vector<Models::UpdateMmAppRequestBindingConfigCommands> & commands() const { DARABONBA_PTR_GET_CONST(commands_, vector<Models::UpdateMmAppRequestBindingConfigCommands>) };
    inline vector<Models::UpdateMmAppRequestBindingConfigCommands> commands() { DARABONBA_PTR_GET(commands_, vector<Models::UpdateMmAppRequestBindingConfigCommands>) };
    inline UpdateMmAppRequestBindingConfig& setCommands(const vector<Models::UpdateMmAppRequestBindingConfigCommands> & commands) { DARABONBA_PTR_SET_VALUE(commands_, commands) };
    inline UpdateMmAppRequestBindingConfig& setCommands(vector<Models::UpdateMmAppRequestBindingConfigCommands> && commands) { DARABONBA_PTR_SET_RVALUE(commands_, commands) };


  protected:
    std::shared_ptr<vector<Models::UpdateMmAppRequestBindingConfigCommands>> commands_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SfmMultiModalApp20250909
#endif
