// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDIALOGANALYSISTASKREQUESTCONVERSATIONLIST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDIALOGANALYSISTASKREQUESTCONVERSATIONLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateDialogAnalysisTaskRequestConversationListDialogueList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class CreateDialogAnalysisTaskRequestConversationList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDialogAnalysisTaskRequestConversationList& obj) { 
      DARABONBA_PTR_TO_JSON(dialogueList, dialogueList_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDialogAnalysisTaskRequestConversationList& obj) { 
      DARABONBA_PTR_FROM_JSON(dialogueList, dialogueList_);
    };
    CreateDialogAnalysisTaskRequestConversationList() = default ;
    CreateDialogAnalysisTaskRequestConversationList(const CreateDialogAnalysisTaskRequestConversationList &) = default ;
    CreateDialogAnalysisTaskRequestConversationList(CreateDialogAnalysisTaskRequestConversationList &&) = default ;
    CreateDialogAnalysisTaskRequestConversationList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDialogAnalysisTaskRequestConversationList() = default ;
    CreateDialogAnalysisTaskRequestConversationList& operator=(const CreateDialogAnalysisTaskRequestConversationList &) = default ;
    CreateDialogAnalysisTaskRequestConversationList& operator=(CreateDialogAnalysisTaskRequestConversationList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dialogueList_ == nullptr; };
    // dialogueList Field Functions 
    bool hasDialogueList() const { return this->dialogueList_ != nullptr;};
    void deleteDialogueList() { this->dialogueList_ = nullptr;};
    inline const vector<Models::CreateDialogAnalysisTaskRequestConversationListDialogueList> & dialogueList() const { DARABONBA_PTR_GET_CONST(dialogueList_, vector<Models::CreateDialogAnalysisTaskRequestConversationListDialogueList>) };
    inline vector<Models::CreateDialogAnalysisTaskRequestConversationListDialogueList> dialogueList() { DARABONBA_PTR_GET(dialogueList_, vector<Models::CreateDialogAnalysisTaskRequestConversationListDialogueList>) };
    inline CreateDialogAnalysisTaskRequestConversationList& setDialogueList(const vector<Models::CreateDialogAnalysisTaskRequestConversationListDialogueList> & dialogueList) { DARABONBA_PTR_SET_VALUE(dialogueList_, dialogueList) };
    inline CreateDialogAnalysisTaskRequestConversationList& setDialogueList(vector<Models::CreateDialogAnalysisTaskRequestConversationListDialogueList> && dialogueList) { DARABONBA_PTR_SET_RVALUE(dialogueList_, dialogueList) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<Models::CreateDialogAnalysisTaskRequestConversationListDialogueList>> dialogueList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
