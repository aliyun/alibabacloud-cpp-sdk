// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AIAGENTTEMPLATECONFIGAVATARCHAT3DLLMHISTORY_HPP_
#define ALIBABACLOUD_MODELS_AIAGENTTEMPLATECONFIGAVATARCHAT3DLLMHISTORY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class AIAgentTemplateConfigAvatarChat3DLlmHistory : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AIAgentTemplateConfigAvatarChat3DLlmHistory& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Role, role_);
    };
    friend void from_json(const Darabonba::Json& j, AIAgentTemplateConfigAvatarChat3DLlmHistory& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
    };
    AIAgentTemplateConfigAvatarChat3DLlmHistory() = default ;
    AIAgentTemplateConfigAvatarChat3DLlmHistory(const AIAgentTemplateConfigAvatarChat3DLlmHistory &) = default ;
    AIAgentTemplateConfigAvatarChat3DLlmHistory(AIAgentTemplateConfigAvatarChat3DLlmHistory &&) = default ;
    AIAgentTemplateConfigAvatarChat3DLlmHistory(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AIAgentTemplateConfigAvatarChat3DLlmHistory() = default ;
    AIAgentTemplateConfigAvatarChat3DLlmHistory& operator=(const AIAgentTemplateConfigAvatarChat3DLlmHistory &) = default ;
    AIAgentTemplateConfigAvatarChat3DLlmHistory& operator=(AIAgentTemplateConfigAvatarChat3DLlmHistory &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->role_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline AIAgentTemplateConfigAvatarChat3DLlmHistory& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline AIAgentTemplateConfigAvatarChat3DLlmHistory& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> role_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
