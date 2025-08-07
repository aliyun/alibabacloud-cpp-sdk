// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RULETESTDIALOGUE_HPP_
#define ALIBABACLOUD_MODELS_RULETESTDIALOGUE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RuleTestDialogueContent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class RuleTestDialogue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RuleTestDialogue& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(UserGroup, userGroup_);
    };
    friend void from_json(const Darabonba::Json& j, RuleTestDialogue& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(UserGroup, userGroup_);
    };
    RuleTestDialogue() = default ;
    RuleTestDialogue(const RuleTestDialogue &) = default ;
    RuleTestDialogue(RuleTestDialogue &&) = default ;
    RuleTestDialogue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RuleTestDialogue() = default ;
    RuleTestDialogue& operator=(const RuleTestDialogue &) = default ;
    RuleTestDialogue& operator=(RuleTestDialogue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->id_ != nullptr && this->name_ != nullptr && this->userGroup_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const vector<RuleTestDialogueContent> & content() const { DARABONBA_PTR_GET_CONST(content_, vector<RuleTestDialogueContent>) };
    inline vector<RuleTestDialogueContent> content() { DARABONBA_PTR_GET(content_, vector<RuleTestDialogueContent>) };
    inline RuleTestDialogue& setContent(const vector<RuleTestDialogueContent> & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline RuleTestDialogue& setContent(vector<RuleTestDialogueContent> && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline RuleTestDialogue& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline RuleTestDialogue& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // userGroup Field Functions 
    bool hasUserGroup() const { return this->userGroup_ != nullptr;};
    void deleteUserGroup() { this->userGroup_ = nullptr;};
    inline string userGroup() const { DARABONBA_PTR_GET_DEFAULT(userGroup_, "") };
    inline RuleTestDialogue& setUserGroup(string userGroup) { DARABONBA_PTR_SET_VALUE(userGroup_, userGroup) };


  protected:
    std::shared_ptr<vector<RuleTestDialogueContent>> content_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> userGroup_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
