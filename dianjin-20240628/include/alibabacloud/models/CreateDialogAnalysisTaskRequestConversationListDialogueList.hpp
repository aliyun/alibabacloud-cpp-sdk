// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDIALOGANALYSISTASKREQUESTCONVERSATIONLISTDIALOGUELIST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDIALOGANALYSISTASKREQUESTCONVERSATIONLISTDIALOGUELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class CreateDialogAnalysisTaskRequestConversationListDialogueList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDialogAnalysisTaskRequestConversationListDialogueList& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(role, role_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDialogAnalysisTaskRequestConversationListDialogueList& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(role, role_);
    };
    CreateDialogAnalysisTaskRequestConversationListDialogueList() = default ;
    CreateDialogAnalysisTaskRequestConversationListDialogueList(const CreateDialogAnalysisTaskRequestConversationListDialogueList &) = default ;
    CreateDialogAnalysisTaskRequestConversationListDialogueList(CreateDialogAnalysisTaskRequestConversationListDialogueList &&) = default ;
    CreateDialogAnalysisTaskRequestConversationListDialogueList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDialogAnalysisTaskRequestConversationListDialogueList() = default ;
    CreateDialogAnalysisTaskRequestConversationListDialogueList& operator=(const CreateDialogAnalysisTaskRequestConversationListDialogueList &) = default ;
    CreateDialogAnalysisTaskRequestConversationListDialogueList& operator=(CreateDialogAnalysisTaskRequestConversationListDialogueList &&) = default ;
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
    inline CreateDialogAnalysisTaskRequestConversationListDialogueList& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline CreateDialogAnalysisTaskRequestConversationListDialogueList& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> content_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> role_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
