// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPLICATIONTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPLICATIONTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class CreateApplicationTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApplicationTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddBuiltInApplicationCustomActions, addBuiltInApplicationCustomActions_);
      DARABONBA_PTR_TO_JSON(ApplicationTemplateName, applicationTemplateName_);
      DARABONBA_PTR_TO_JSON(BuiltInApplicationStatus, builtInApplicationStatus_);
      DARABONBA_PTR_TO_JSON(CustomRuleStatus, customRuleStatus_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(TemplateStatus, templateStatus_);
      DARABONBA_PTR_TO_JSON(UnknownAction, unknownAction_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApplicationTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddBuiltInApplicationCustomActions, addBuiltInApplicationCustomActions_);
      DARABONBA_PTR_FROM_JSON(ApplicationTemplateName, applicationTemplateName_);
      DARABONBA_PTR_FROM_JSON(BuiltInApplicationStatus, builtInApplicationStatus_);
      DARABONBA_PTR_FROM_JSON(CustomRuleStatus, customRuleStatus_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(TemplateStatus, templateStatus_);
      DARABONBA_PTR_FROM_JSON(UnknownAction, unknownAction_);
    };
    CreateApplicationTemplateRequest() = default ;
    CreateApplicationTemplateRequest(const CreateApplicationTemplateRequest &) = default ;
    CreateApplicationTemplateRequest(CreateApplicationTemplateRequest &&) = default ;
    CreateApplicationTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApplicationTemplateRequest() = default ;
    CreateApplicationTemplateRequest& operator=(const CreateApplicationTemplateRequest &) = default ;
    CreateApplicationTemplateRequest& operator=(CreateApplicationTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AddBuiltInApplicationCustomActions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AddBuiltInApplicationCustomActions& obj) { 
        DARABONBA_PTR_TO_JSON(Action, action_);
        DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      };
      friend void from_json(const Darabonba::Json& j, AddBuiltInApplicationCustomActions& obj) { 
        DARABONBA_PTR_FROM_JSON(Action, action_);
        DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      };
      AddBuiltInApplicationCustomActions() = default ;
      AddBuiltInApplicationCustomActions(const AddBuiltInApplicationCustomActions &) = default ;
      AddBuiltInApplicationCustomActions(AddBuiltInApplicationCustomActions &&) = default ;
      AddBuiltInApplicationCustomActions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AddBuiltInApplicationCustomActions() = default ;
      AddBuiltInApplicationCustomActions& operator=(const AddBuiltInApplicationCustomActions &) = default ;
      AddBuiltInApplicationCustomActions& operator=(AddBuiltInApplicationCustomActions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->action_ == nullptr
        && this->applicationId_ == nullptr; };
      // action Field Functions 
      bool hasAction() const { return this->action_ != nullptr;};
      void deleteAction() { this->action_ = nullptr;};
      inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
      inline AddBuiltInApplicationCustomActions& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


      // applicationId Field Functions 
      bool hasApplicationId() const { return this->applicationId_ != nullptr;};
      void deleteApplicationId() { this->applicationId_ = nullptr;};
      inline int64_t getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, 0L) };
      inline AddBuiltInApplicationCustomActions& setApplicationId(int64_t applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    protected:
      // The action to take on the application. Valid values:
      // - **Allow**: Allow.
      // - **Alert**: Monitor.
      // - **Deny**: Block.
      shared_ptr<string> action_ {};
      // The ID of the application for which you want to configure a custom action. The application must exist in the built-in application signature library and the ID cannot be 0. You can call the ListApplications operation to query the ID.
      shared_ptr<int64_t> applicationId_ {};
    };

    virtual bool empty() const override { return this->addBuiltInApplicationCustomActions_ == nullptr
        && this->applicationTemplateName_ == nullptr && this->builtInApplicationStatus_ == nullptr && this->customRuleStatus_ == nullptr && this->description_ == nullptr && this->templateStatus_ == nullptr
        && this->unknownAction_ == nullptr; };
    // addBuiltInApplicationCustomActions Field Functions 
    bool hasAddBuiltInApplicationCustomActions() const { return this->addBuiltInApplicationCustomActions_ != nullptr;};
    void deleteAddBuiltInApplicationCustomActions() { this->addBuiltInApplicationCustomActions_ = nullptr;};
    inline const vector<CreateApplicationTemplateRequest::AddBuiltInApplicationCustomActions> & getAddBuiltInApplicationCustomActions() const { DARABONBA_PTR_GET_CONST(addBuiltInApplicationCustomActions_, vector<CreateApplicationTemplateRequest::AddBuiltInApplicationCustomActions>) };
    inline vector<CreateApplicationTemplateRequest::AddBuiltInApplicationCustomActions> getAddBuiltInApplicationCustomActions() { DARABONBA_PTR_GET(addBuiltInApplicationCustomActions_, vector<CreateApplicationTemplateRequest::AddBuiltInApplicationCustomActions>) };
    inline CreateApplicationTemplateRequest& setAddBuiltInApplicationCustomActions(const vector<CreateApplicationTemplateRequest::AddBuiltInApplicationCustomActions> & addBuiltInApplicationCustomActions) { DARABONBA_PTR_SET_VALUE(addBuiltInApplicationCustomActions_, addBuiltInApplicationCustomActions) };
    inline CreateApplicationTemplateRequest& setAddBuiltInApplicationCustomActions(vector<CreateApplicationTemplateRequest::AddBuiltInApplicationCustomActions> && addBuiltInApplicationCustomActions) { DARABONBA_PTR_SET_RVALUE(addBuiltInApplicationCustomActions_, addBuiltInApplicationCustomActions) };


    // applicationTemplateName Field Functions 
    bool hasApplicationTemplateName() const { return this->applicationTemplateName_ != nullptr;};
    void deleteApplicationTemplateName() { this->applicationTemplateName_ = nullptr;};
    inline string getApplicationTemplateName() const { DARABONBA_PTR_GET_DEFAULT(applicationTemplateName_, "") };
    inline CreateApplicationTemplateRequest& setApplicationTemplateName(string applicationTemplateName) { DARABONBA_PTR_SET_VALUE(applicationTemplateName_, applicationTemplateName) };


    // builtInApplicationStatus Field Functions 
    bool hasBuiltInApplicationStatus() const { return this->builtInApplicationStatus_ != nullptr;};
    void deleteBuiltInApplicationStatus() { this->builtInApplicationStatus_ = nullptr;};
    inline string getBuiltInApplicationStatus() const { DARABONBA_PTR_GET_DEFAULT(builtInApplicationStatus_, "") };
    inline CreateApplicationTemplateRequest& setBuiltInApplicationStatus(string builtInApplicationStatus) { DARABONBA_PTR_SET_VALUE(builtInApplicationStatus_, builtInApplicationStatus) };


    // customRuleStatus Field Functions 
    bool hasCustomRuleStatus() const { return this->customRuleStatus_ != nullptr;};
    void deleteCustomRuleStatus() { this->customRuleStatus_ = nullptr;};
    inline string getCustomRuleStatus() const { DARABONBA_PTR_GET_DEFAULT(customRuleStatus_, "") };
    inline CreateApplicationTemplateRequest& setCustomRuleStatus(string customRuleStatus) { DARABONBA_PTR_SET_VALUE(customRuleStatus_, customRuleStatus) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateApplicationTemplateRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // templateStatus Field Functions 
    bool hasTemplateStatus() const { return this->templateStatus_ != nullptr;};
    void deleteTemplateStatus() { this->templateStatus_ = nullptr;};
    inline string getTemplateStatus() const { DARABONBA_PTR_GET_DEFAULT(templateStatus_, "") };
    inline CreateApplicationTemplateRequest& setTemplateStatus(string templateStatus) { DARABONBA_PTR_SET_VALUE(templateStatus_, templateStatus) };


    // unknownAction Field Functions 
    bool hasUnknownAction() const { return this->unknownAction_ != nullptr;};
    void deleteUnknownAction() { this->unknownAction_ = nullptr;};
    inline string getUnknownAction() const { DARABONBA_PTR_GET_DEFAULT(unknownAction_, "") };
    inline CreateApplicationTemplateRequest& setUnknownAction(string unknownAction) { DARABONBA_PTR_SET_VALUE(unknownAction_, unknownAction) };


  protected:
    // The list of custom actions to configure for built-in applications. Application IDs in the list must be unique.
    shared_ptr<vector<CreateApplicationTemplateRequest::AddBuiltInApplicationCustomActions>> addBuiltInApplicationCustomActions_ {};
    // The name of the application template. The name must be 1 to 64 characters in length and can contain Chinese characters, letters, digits, hyphens (-), underscores (_), and periods (.). It cannot contain spaces or be empty.
    // 
    // This parameter is required.
    shared_ptr<string> applicationTemplateName_ {};
    // The switch status of built-in application control. Valid values: **Enable**, which indicates that built-in application control is enabled. If you specify Disable, an error is returned.
    // 
    // This parameter is required.
    shared_ptr<string> builtInApplicationStatus_ {};
    // The switch status of custom application rules. Valid values:
    // - **Enable**: Enabled.
    // - **Disable**: Disabled.
    // 
    // This parameter is required.
    shared_ptr<string> customRuleStatus_ {};
    // The description of the application template. The description can be up to 128 characters in length and can be empty.
    shared_ptr<string> description_ {};
    // The master switch status of the application template. Valid values:
    // - **Enable**: Enabled.
    // - **Disable**: Disabled.
    // 
    // This parameter is required.
    shared_ptr<string> templateStatus_ {};
    // The action to take on unidentified applications. Valid values:
    // - **Allow**: Allow.
    // - **Alert**: Monitor.
    // - **Deny**: Block.
    // 
    // This parameter is required.
    shared_ptr<string> unknownAction_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
