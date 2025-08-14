// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AIAGENTCONFIGAVATARCONFIG_HPP_
#define ALIBABACLOUD_MODELS_AIAGENTCONFIGAVATARCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class AIAgentConfigAvatarConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AIAgentConfigAvatarConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AvatarId, avatarId_);
    };
    friend void from_json(const Darabonba::Json& j, AIAgentConfigAvatarConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AvatarId, avatarId_);
    };
    AIAgentConfigAvatarConfig() = default ;
    AIAgentConfigAvatarConfig(const AIAgentConfigAvatarConfig &) = default ;
    AIAgentConfigAvatarConfig(AIAgentConfigAvatarConfig &&) = default ;
    AIAgentConfigAvatarConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AIAgentConfigAvatarConfig() = default ;
    AIAgentConfigAvatarConfig& operator=(const AIAgentConfigAvatarConfig &) = default ;
    AIAgentConfigAvatarConfig& operator=(AIAgentConfigAvatarConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->avatarId_ != nullptr; };
    // avatarId Field Functions 
    bool hasAvatarId() const { return this->avatarId_ != nullptr;};
    void deleteAvatarId() { this->avatarId_ = nullptr;};
    inline string avatarId() const { DARABONBA_PTR_GET_DEFAULT(avatarId_, "") };
    inline AIAgentConfigAvatarConfig& setAvatarId(string avatarId) { DARABONBA_PTR_SET_VALUE(avatarId_, avatarId) };


  protected:
    std::shared_ptr<string> avatarId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
