// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLARCLAWSKILLTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLARCLAWSKILLTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribePolarClawSkillTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolarClawSkillTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SkillTemplates, skillTemplates_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolarClawSkillTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SkillTemplates, skillTemplates_);
    };
    DescribePolarClawSkillTemplateResponseBody() = default ;
    DescribePolarClawSkillTemplateResponseBody(const DescribePolarClawSkillTemplateResponseBody &) = default ;
    DescribePolarClawSkillTemplateResponseBody(DescribePolarClawSkillTemplateResponseBody &&) = default ;
    DescribePolarClawSkillTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolarClawSkillTemplateResponseBody() = default ;
    DescribePolarClawSkillTemplateResponseBody& operator=(const DescribePolarClawSkillTemplateResponseBody &) = default ;
    DescribePolarClawSkillTemplateResponseBody& operator=(DescribePolarClawSkillTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SkillTemplates : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SkillTemplates& obj) { 
        DARABONBA_PTR_TO_JSON(Created, created_);
        DARABONBA_PTR_TO_JSON(Modified, modified_);
        DARABONBA_PTR_TO_JSON(SkillTemplateDesc, skillTemplateDesc_);
        DARABONBA_PTR_TO_JSON(SkillTemplateId, skillTemplateId_);
        DARABONBA_PTR_TO_JSON(SkillTemplateName, skillTemplateName_);
        DARABONBA_PTR_TO_JSON(Skills, skills_);
        DARABONBA_PTR_TO_JSON(SrcApplicationId, srcApplicationId_);
      };
      friend void from_json(const Darabonba::Json& j, SkillTemplates& obj) { 
        DARABONBA_PTR_FROM_JSON(Created, created_);
        DARABONBA_PTR_FROM_JSON(Modified, modified_);
        DARABONBA_PTR_FROM_JSON(SkillTemplateDesc, skillTemplateDesc_);
        DARABONBA_PTR_FROM_JSON(SkillTemplateId, skillTemplateId_);
        DARABONBA_PTR_FROM_JSON(SkillTemplateName, skillTemplateName_);
        DARABONBA_PTR_FROM_JSON(Skills, skills_);
        DARABONBA_PTR_FROM_JSON(SrcApplicationId, srcApplicationId_);
      };
      SkillTemplates() = default ;
      SkillTemplates(const SkillTemplates &) = default ;
      SkillTemplates(SkillTemplates &&) = default ;
      SkillTemplates(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SkillTemplates() = default ;
      SkillTemplates& operator=(const SkillTemplates &) = default ;
      SkillTemplates& operator=(SkillTemplates &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->created_ == nullptr
        && this->modified_ == nullptr && this->skillTemplateDesc_ == nullptr && this->skillTemplateId_ == nullptr && this->skillTemplateName_ == nullptr && this->skills_ == nullptr
        && this->srcApplicationId_ == nullptr; };
      // created Field Functions 
      bool hasCreated() const { return this->created_ != nullptr;};
      void deleteCreated() { this->created_ = nullptr;};
      inline string getCreated() const { DARABONBA_PTR_GET_DEFAULT(created_, "") };
      inline SkillTemplates& setCreated(string created) { DARABONBA_PTR_SET_VALUE(created_, created) };


      // modified Field Functions 
      bool hasModified() const { return this->modified_ != nullptr;};
      void deleteModified() { this->modified_ = nullptr;};
      inline string getModified() const { DARABONBA_PTR_GET_DEFAULT(modified_, "") };
      inline SkillTemplates& setModified(string modified) { DARABONBA_PTR_SET_VALUE(modified_, modified) };


      // skillTemplateDesc Field Functions 
      bool hasSkillTemplateDesc() const { return this->skillTemplateDesc_ != nullptr;};
      void deleteSkillTemplateDesc() { this->skillTemplateDesc_ = nullptr;};
      inline string getSkillTemplateDesc() const { DARABONBA_PTR_GET_DEFAULT(skillTemplateDesc_, "") };
      inline SkillTemplates& setSkillTemplateDesc(string skillTemplateDesc) { DARABONBA_PTR_SET_VALUE(skillTemplateDesc_, skillTemplateDesc) };


      // skillTemplateId Field Functions 
      bool hasSkillTemplateId() const { return this->skillTemplateId_ != nullptr;};
      void deleteSkillTemplateId() { this->skillTemplateId_ = nullptr;};
      inline string getSkillTemplateId() const { DARABONBA_PTR_GET_DEFAULT(skillTemplateId_, "") };
      inline SkillTemplates& setSkillTemplateId(string skillTemplateId) { DARABONBA_PTR_SET_VALUE(skillTemplateId_, skillTemplateId) };


      // skillTemplateName Field Functions 
      bool hasSkillTemplateName() const { return this->skillTemplateName_ != nullptr;};
      void deleteSkillTemplateName() { this->skillTemplateName_ = nullptr;};
      inline string getSkillTemplateName() const { DARABONBA_PTR_GET_DEFAULT(skillTemplateName_, "") };
      inline SkillTemplates& setSkillTemplateName(string skillTemplateName) { DARABONBA_PTR_SET_VALUE(skillTemplateName_, skillTemplateName) };


      // skills Field Functions 
      bool hasSkills() const { return this->skills_ != nullptr;};
      void deleteSkills() { this->skills_ = nullptr;};
      inline const map<string, string> & getSkills() const { DARABONBA_PTR_GET_CONST(skills_, map<string, string>) };
      inline map<string, string> getSkills() { DARABONBA_PTR_GET(skills_, map<string, string>) };
      inline SkillTemplates& setSkills(const map<string, string> & skills) { DARABONBA_PTR_SET_VALUE(skills_, skills) };
      inline SkillTemplates& setSkills(map<string, string> && skills) { DARABONBA_PTR_SET_RVALUE(skills_, skills) };


      // srcApplicationId Field Functions 
      bool hasSrcApplicationId() const { return this->srcApplicationId_ != nullptr;};
      void deleteSrcApplicationId() { this->srcApplicationId_ = nullptr;};
      inline string getSrcApplicationId() const { DARABONBA_PTR_GET_DEFAULT(srcApplicationId_, "") };
      inline SkillTemplates& setSrcApplicationId(string srcApplicationId) { DARABONBA_PTR_SET_VALUE(srcApplicationId_, srcApplicationId) };


    protected:
      // Indicates whether the template is actually created.
      shared_ptr<string> created_ {};
      // The last modification time of the parameter template.
      shared_ptr<string> modified_ {};
      // The description of the skill template.
      shared_ptr<string> skillTemplateDesc_ {};
      // The skill template ID.
      shared_ptr<string> skillTemplateId_ {};
      // The name of the skill template.
      shared_ptr<string> skillTemplateName_ {};
      // The map of associated skill details. The key is the skill identifier, and the value is a JSON string that can be parsed into an array of skill details. Each array element contains skillName and version.
      shared_ptr<map<string, string>> skills_ {};
      // The source application ID.
      shared_ptr<string> srcApplicationId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->skillTemplates_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePolarClawSkillTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // skillTemplates Field Functions 
    bool hasSkillTemplates() const { return this->skillTemplates_ != nullptr;};
    void deleteSkillTemplates() { this->skillTemplates_ = nullptr;};
    inline const vector<DescribePolarClawSkillTemplateResponseBody::SkillTemplates> & getSkillTemplates() const { DARABONBA_PTR_GET_CONST(skillTemplates_, vector<DescribePolarClawSkillTemplateResponseBody::SkillTemplates>) };
    inline vector<DescribePolarClawSkillTemplateResponseBody::SkillTemplates> getSkillTemplates() { DARABONBA_PTR_GET(skillTemplates_, vector<DescribePolarClawSkillTemplateResponseBody::SkillTemplates>) };
    inline DescribePolarClawSkillTemplateResponseBody& setSkillTemplates(const vector<DescribePolarClawSkillTemplateResponseBody::SkillTemplates> & skillTemplates) { DARABONBA_PTR_SET_VALUE(skillTemplates_, skillTemplates) };
    inline DescribePolarClawSkillTemplateResponseBody& setSkillTemplates(vector<DescribePolarClawSkillTemplateResponseBody::SkillTemplates> && skillTemplates) { DARABONBA_PTR_SET_RVALUE(skillTemplates_, skillTemplates) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The skill template group.
    shared_ptr<vector<DescribePolarClawSkillTemplateResponseBody::SkillTemplates>> skillTemplates_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
