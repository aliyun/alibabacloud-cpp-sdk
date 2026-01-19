// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREMEDIATIONTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETREMEDIATIONTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetRemediationTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRemediationTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RemediationTemplates, remediationTemplates_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRemediationTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RemediationTemplates, remediationTemplates_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetRemediationTemplateResponseBody() = default ;
    GetRemediationTemplateResponseBody(const GetRemediationTemplateResponseBody &) = default ;
    GetRemediationTemplateResponseBody(GetRemediationTemplateResponseBody &&) = default ;
    GetRemediationTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRemediationTemplateResponseBody() = default ;
    GetRemediationTemplateResponseBody& operator=(const GetRemediationTemplateResponseBody &) = default ;
    GetRemediationTemplateResponseBody& operator=(GetRemediationTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RemediationTemplates : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RemediationTemplates& obj) { 
        DARABONBA_PTR_TO_JSON(ManagedRuleIdentifier, managedRuleIdentifier_);
        DARABONBA_PTR_TO_JSON(RemediationType, remediationType_);
        DARABONBA_PTR_TO_JSON(TemplateDefinition, templateDefinition_);
        DARABONBA_PTR_TO_JSON(TemplateDescription, templateDescription_);
        DARABONBA_PTR_TO_JSON(TemplateIdentifier, templateIdentifier_);
        DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      };
      friend void from_json(const Darabonba::Json& j, RemediationTemplates& obj) { 
        DARABONBA_PTR_FROM_JSON(ManagedRuleIdentifier, managedRuleIdentifier_);
        DARABONBA_PTR_FROM_JSON(RemediationType, remediationType_);
        DARABONBA_PTR_FROM_JSON(TemplateDefinition, templateDefinition_);
        DARABONBA_PTR_FROM_JSON(TemplateDescription, templateDescription_);
        DARABONBA_PTR_FROM_JSON(TemplateIdentifier, templateIdentifier_);
        DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      };
      RemediationTemplates() = default ;
      RemediationTemplates(const RemediationTemplates &) = default ;
      RemediationTemplates(RemediationTemplates &&) = default ;
      RemediationTemplates(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RemediationTemplates() = default ;
      RemediationTemplates& operator=(const RemediationTemplates &) = default ;
      RemediationTemplates& operator=(RemediationTemplates &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->managedRuleIdentifier_ == nullptr
        && this->remediationType_ == nullptr && this->templateDefinition_ == nullptr && this->templateDescription_ == nullptr && this->templateIdentifier_ == nullptr && this->templateName_ == nullptr; };
      // managedRuleIdentifier Field Functions 
      bool hasManagedRuleIdentifier() const { return this->managedRuleIdentifier_ != nullptr;};
      void deleteManagedRuleIdentifier() { this->managedRuleIdentifier_ = nullptr;};
      inline string getManagedRuleIdentifier() const { DARABONBA_PTR_GET_DEFAULT(managedRuleIdentifier_, "") };
      inline RemediationTemplates& setManagedRuleIdentifier(string managedRuleIdentifier) { DARABONBA_PTR_SET_VALUE(managedRuleIdentifier_, managedRuleIdentifier) };


      // remediationType Field Functions 
      bool hasRemediationType() const { return this->remediationType_ != nullptr;};
      void deleteRemediationType() { this->remediationType_ = nullptr;};
      inline string getRemediationType() const { DARABONBA_PTR_GET_DEFAULT(remediationType_, "") };
      inline RemediationTemplates& setRemediationType(string remediationType) { DARABONBA_PTR_SET_VALUE(remediationType_, remediationType) };


      // templateDefinition Field Functions 
      bool hasTemplateDefinition() const { return this->templateDefinition_ != nullptr;};
      void deleteTemplateDefinition() { this->templateDefinition_ = nullptr;};
      inline string getTemplateDefinition() const { DARABONBA_PTR_GET_DEFAULT(templateDefinition_, "") };
      inline RemediationTemplates& setTemplateDefinition(string templateDefinition) { DARABONBA_PTR_SET_VALUE(templateDefinition_, templateDefinition) };


      // templateDescription Field Functions 
      bool hasTemplateDescription() const { return this->templateDescription_ != nullptr;};
      void deleteTemplateDescription() { this->templateDescription_ = nullptr;};
      inline string getTemplateDescription() const { DARABONBA_PTR_GET_DEFAULT(templateDescription_, "") };
      inline RemediationTemplates& setTemplateDescription(string templateDescription) { DARABONBA_PTR_SET_VALUE(templateDescription_, templateDescription) };


      // templateIdentifier Field Functions 
      bool hasTemplateIdentifier() const { return this->templateIdentifier_ != nullptr;};
      void deleteTemplateIdentifier() { this->templateIdentifier_ = nullptr;};
      inline string getTemplateIdentifier() const { DARABONBA_PTR_GET_DEFAULT(templateIdentifier_, "") };
      inline RemediationTemplates& setTemplateIdentifier(string templateIdentifier) { DARABONBA_PTR_SET_VALUE(templateIdentifier_, templateIdentifier) };


      // templateName Field Functions 
      bool hasTemplateName() const { return this->templateName_ != nullptr;};
      void deleteTemplateName() { this->templateName_ = nullptr;};
      inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
      inline RemediationTemplates& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    protected:
      // The ID of the supported rule template.
      // 
      // This parameter is required.
      shared_ptr<string> managedRuleIdentifier_ {};
      // The type of the automatic remediation template. The value is set to OOS.
      shared_ptr<string> remediationType_ {};
      // The parameters of the automatic remediation template.
      shared_ptr<string> templateDefinition_ {};
      // The description of the automatic remediation template.
      // 
      // This parameter is required.
      shared_ptr<string> templateDescription_ {};
      // The ID of the automatic remediation template.
      shared_ptr<string> templateIdentifier_ {};
      // The name of the automatic remediation template.
      shared_ptr<string> templateName_ {};
    };

    virtual bool empty() const override { return this->remediationTemplates_ == nullptr
        && this->requestId_ == nullptr; };
    // remediationTemplates Field Functions 
    bool hasRemediationTemplates() const { return this->remediationTemplates_ != nullptr;};
    void deleteRemediationTemplates() { this->remediationTemplates_ = nullptr;};
    inline const vector<GetRemediationTemplateResponseBody::RemediationTemplates> & getRemediationTemplates() const { DARABONBA_PTR_GET_CONST(remediationTemplates_, vector<GetRemediationTemplateResponseBody::RemediationTemplates>) };
    inline vector<GetRemediationTemplateResponseBody::RemediationTemplates> getRemediationTemplates() { DARABONBA_PTR_GET(remediationTemplates_, vector<GetRemediationTemplateResponseBody::RemediationTemplates>) };
    inline GetRemediationTemplateResponseBody& setRemediationTemplates(const vector<GetRemediationTemplateResponseBody::RemediationTemplates> & remediationTemplates) { DARABONBA_PTR_SET_VALUE(remediationTemplates_, remediationTemplates) };
    inline GetRemediationTemplateResponseBody& setRemediationTemplates(vector<GetRemediationTemplateResponseBody::RemediationTemplates> && remediationTemplates) { DARABONBA_PTR_SET_RVALUE(remediationTemplates_, remediationTemplates) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRemediationTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the automatic remediation template.
    shared_ptr<vector<GetRemediationTemplateResponseBody::RemediationTemplates>> remediationTemplates_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
