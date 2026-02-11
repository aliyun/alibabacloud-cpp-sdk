// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEALERTTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEALERTTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20210422
{
namespace Models
{
  class CreateAlertTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAlertTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Annotations, annotations_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(MatchExpressions, matchExpressions_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ParentId, parentId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Rule, rule_);
      DARABONBA_PTR_TO_JSON(TemplateProvider, templateProvider_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAlertTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Annotations, annotations_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(MatchExpressions, matchExpressions_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
      DARABONBA_PTR_FROM_JSON(TemplateProvider, templateProvider_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateAlertTemplateRequest() = default ;
    CreateAlertTemplateRequest(const CreateAlertTemplateRequest &) = default ;
    CreateAlertTemplateRequest(CreateAlertTemplateRequest &&) = default ;
    CreateAlertTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAlertTemplateRequest() = default ;
    CreateAlertTemplateRequest& operator=(const CreateAlertTemplateRequest &) = default ;
    CreateAlertTemplateRequest& operator=(CreateAlertTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->annotations_ == nullptr
        && this->labels_ == nullptr && this->matchExpressions_ == nullptr && this->message_ == nullptr && this->name_ == nullptr && this->parentId_ == nullptr
        && this->regionId_ == nullptr && this->rule_ == nullptr && this->templateProvider_ == nullptr && this->type_ == nullptr; };
    // annotations Field Functions 
    bool hasAnnotations() const { return this->annotations_ != nullptr;};
    void deleteAnnotations() { this->annotations_ = nullptr;};
    inline string getAnnotations() const { DARABONBA_PTR_GET_DEFAULT(annotations_, "") };
    inline CreateAlertTemplateRequest& setAnnotations(string annotations) { DARABONBA_PTR_SET_VALUE(annotations_, annotations) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline string getLabels() const { DARABONBA_PTR_GET_DEFAULT(labels_, "") };
    inline CreateAlertTemplateRequest& setLabels(string labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };


    // matchExpressions Field Functions 
    bool hasMatchExpressions() const { return this->matchExpressions_ != nullptr;};
    void deleteMatchExpressions() { this->matchExpressions_ = nullptr;};
    inline string getMatchExpressions() const { DARABONBA_PTR_GET_DEFAULT(matchExpressions_, "") };
    inline CreateAlertTemplateRequest& setMatchExpressions(string matchExpressions) { DARABONBA_PTR_SET_VALUE(matchExpressions_, matchExpressions) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateAlertTemplateRequest& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateAlertTemplateRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline string getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
    inline CreateAlertTemplateRequest& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateAlertTemplateRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline string getRule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
    inline CreateAlertTemplateRequest& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


    // templateProvider Field Functions 
    bool hasTemplateProvider() const { return this->templateProvider_ != nullptr;};
    void deleteTemplateProvider() { this->templateProvider_ = nullptr;};
    inline string getTemplateProvider() const { DARABONBA_PTR_GET_DEFAULT(templateProvider_, "") };
    inline CreateAlertTemplateRequest& setTemplateProvider(string templateProvider) { DARABONBA_PTR_SET_VALUE(templateProvider_, templateProvider) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateAlertTemplateRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<string> annotations_ {};
    shared_ptr<string> labels_ {};
    shared_ptr<string> matchExpressions_ {};
    // This parameter is required.
    shared_ptr<string> message_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    shared_ptr<string> parentId_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // This parameter is required.
    shared_ptr<string> rule_ {};
    shared_ptr<string> templateProvider_ {};
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20210422
#endif
