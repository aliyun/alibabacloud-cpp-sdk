// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPLICATIONTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPLICATIONTEMPLATEREQUEST_HPP_
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
  class UpdateApplicationTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApplicationTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddBuiltInApplicationCustomActions, addBuiltInApplicationCustomActions_);
      DARABONBA_PTR_TO_JSON(ApplicationTemplateId, applicationTemplateId_);
      DARABONBA_PTR_TO_JSON(ApplicationTemplateName, applicationTemplateName_);
      DARABONBA_PTR_TO_JSON(BuiltInApplicationStatus, builtInApplicationStatus_);
      DARABONBA_PTR_TO_JSON(CustomRuleStatus, customRuleStatus_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(RemoveBuiltInApplicationCustomActions, removeBuiltInApplicationCustomActions_);
      DARABONBA_PTR_TO_JSON(TemplateStatus, templateStatus_);
      DARABONBA_PTR_TO_JSON(UnknownAction, unknownAction_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApplicationTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddBuiltInApplicationCustomActions, addBuiltInApplicationCustomActions_);
      DARABONBA_PTR_FROM_JSON(ApplicationTemplateId, applicationTemplateId_);
      DARABONBA_PTR_FROM_JSON(ApplicationTemplateName, applicationTemplateName_);
      DARABONBA_PTR_FROM_JSON(BuiltInApplicationStatus, builtInApplicationStatus_);
      DARABONBA_PTR_FROM_JSON(CustomRuleStatus, customRuleStatus_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(RemoveBuiltInApplicationCustomActions, removeBuiltInApplicationCustomActions_);
      DARABONBA_PTR_FROM_JSON(TemplateStatus, templateStatus_);
      DARABONBA_PTR_FROM_JSON(UnknownAction, unknownAction_);
    };
    UpdateApplicationTemplateRequest() = default ;
    UpdateApplicationTemplateRequest(const UpdateApplicationTemplateRequest &) = default ;
    UpdateApplicationTemplateRequest(UpdateApplicationTemplateRequest &&) = default ;
    UpdateApplicationTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApplicationTemplateRequest() = default ;
    UpdateApplicationTemplateRequest& operator=(const UpdateApplicationTemplateRequest &) = default ;
    UpdateApplicationTemplateRequest& operator=(UpdateApplicationTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RemoveBuiltInApplicationCustomActions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RemoveBuiltInApplicationCustomActions& obj) { 
        DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      };
      friend void from_json(const Darabonba::Json& j, RemoveBuiltInApplicationCustomActions& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      };
      RemoveBuiltInApplicationCustomActions() = default ;
      RemoveBuiltInApplicationCustomActions(const RemoveBuiltInApplicationCustomActions &) = default ;
      RemoveBuiltInApplicationCustomActions(RemoveBuiltInApplicationCustomActions &&) = default ;
      RemoveBuiltInApplicationCustomActions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RemoveBuiltInApplicationCustomActions() = default ;
      RemoveBuiltInApplicationCustomActions& operator=(const RemoveBuiltInApplicationCustomActions &) = default ;
      RemoveBuiltInApplicationCustomActions& operator=(RemoveBuiltInApplicationCustomActions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->applicationId_ == nullptr; };
      // applicationId Field Functions 
      bool hasApplicationId() const { return this->applicationId_ != nullptr;};
      void deleteApplicationId() { this->applicationId_ = nullptr;};
      inline int64_t getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, 0L) };
      inline RemoveBuiltInApplicationCustomActions& setApplicationId(int64_t applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    protected:
      // The ID of the application for which you want to remove custom actions. The application must exist in the built-in application signature library.
      shared_ptr<int64_t> applicationId_ {};
    };

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
      // The action to be performed on the application. Valid values:
      // - **Allow**: Allow.
      // - **Alert**: Monitor.
      // - **Deny**: Block.
      shared_ptr<string> action_ {};
      // The ID of the application for which you want to configure custom actions. The application must exist in the built-in application signature library and the ID cannot be 0. You can call the ListApplications operation to query the ID.
      shared_ptr<int64_t> applicationId_ {};
    };

    virtual bool empty() const override { return this->addBuiltInApplicationCustomActions_ == nullptr
        && this->applicationTemplateId_ == nullptr && this->applicationTemplateName_ == nullptr && this->builtInApplicationStatus_ == nullptr && this->customRuleStatus_ == nullptr && this->description_ == nullptr
        && this->removeBuiltInApplicationCustomActions_ == nullptr && this->templateStatus_ == nullptr && this->unknownAction_ == nullptr; };
    // addBuiltInApplicationCustomActions Field Functions 
    bool hasAddBuiltInApplicationCustomActions() const { return this->addBuiltInApplicationCustomActions_ != nullptr;};
    void deleteAddBuiltInApplicationCustomActions() { this->addBuiltInApplicationCustomActions_ = nullptr;};
    inline const vector<UpdateApplicationTemplateRequest::AddBuiltInApplicationCustomActions> & getAddBuiltInApplicationCustomActions() const { DARABONBA_PTR_GET_CONST(addBuiltInApplicationCustomActions_, vector<UpdateApplicationTemplateRequest::AddBuiltInApplicationCustomActions>) };
    inline vector<UpdateApplicationTemplateRequest::AddBuiltInApplicationCustomActions> getAddBuiltInApplicationCustomActions() { DARABONBA_PTR_GET(addBuiltInApplicationCustomActions_, vector<UpdateApplicationTemplateRequest::AddBuiltInApplicationCustomActions>) };
    inline UpdateApplicationTemplateRequest& setAddBuiltInApplicationCustomActions(const vector<UpdateApplicationTemplateRequest::AddBuiltInApplicationCustomActions> & addBuiltInApplicationCustomActions) { DARABONBA_PTR_SET_VALUE(addBuiltInApplicationCustomActions_, addBuiltInApplicationCustomActions) };
    inline UpdateApplicationTemplateRequest& setAddBuiltInApplicationCustomActions(vector<UpdateApplicationTemplateRequest::AddBuiltInApplicationCustomActions> && addBuiltInApplicationCustomActions) { DARABONBA_PTR_SET_RVALUE(addBuiltInApplicationCustomActions_, addBuiltInApplicationCustomActions) };


    // applicationTemplateId Field Functions 
    bool hasApplicationTemplateId() const { return this->applicationTemplateId_ != nullptr;};
    void deleteApplicationTemplateId() { this->applicationTemplateId_ = nullptr;};
    inline string getApplicationTemplateId() const { DARABONBA_PTR_GET_DEFAULT(applicationTemplateId_, "") };
    inline UpdateApplicationTemplateRequest& setApplicationTemplateId(string applicationTemplateId) { DARABONBA_PTR_SET_VALUE(applicationTemplateId_, applicationTemplateId) };


    // applicationTemplateName Field Functions 
    bool hasApplicationTemplateName() const { return this->applicationTemplateName_ != nullptr;};
    void deleteApplicationTemplateName() { this->applicationTemplateName_ = nullptr;};
    inline string getApplicationTemplateName() const { DARABONBA_PTR_GET_DEFAULT(applicationTemplateName_, "") };
    inline UpdateApplicationTemplateRequest& setApplicationTemplateName(string applicationTemplateName) { DARABONBA_PTR_SET_VALUE(applicationTemplateName_, applicationTemplateName) };


    // builtInApplicationStatus Field Functions 
    bool hasBuiltInApplicationStatus() const { return this->builtInApplicationStatus_ != nullptr;};
    void deleteBuiltInApplicationStatus() { this->builtInApplicationStatus_ = nullptr;};
    inline string getBuiltInApplicationStatus() const { DARABONBA_PTR_GET_DEFAULT(builtInApplicationStatus_, "") };
    inline UpdateApplicationTemplateRequest& setBuiltInApplicationStatus(string builtInApplicationStatus) { DARABONBA_PTR_SET_VALUE(builtInApplicationStatus_, builtInApplicationStatus) };


    // customRuleStatus Field Functions 
    bool hasCustomRuleStatus() const { return this->customRuleStatus_ != nullptr;};
    void deleteCustomRuleStatus() { this->customRuleStatus_ = nullptr;};
    inline string getCustomRuleStatus() const { DARABONBA_PTR_GET_DEFAULT(customRuleStatus_, "") };
    inline UpdateApplicationTemplateRequest& setCustomRuleStatus(string customRuleStatus) { DARABONBA_PTR_SET_VALUE(customRuleStatus_, customRuleStatus) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateApplicationTemplateRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // removeBuiltInApplicationCustomActions Field Functions 
    bool hasRemoveBuiltInApplicationCustomActions() const { return this->removeBuiltInApplicationCustomActions_ != nullptr;};
    void deleteRemoveBuiltInApplicationCustomActions() { this->removeBuiltInApplicationCustomActions_ = nullptr;};
    inline const vector<UpdateApplicationTemplateRequest::RemoveBuiltInApplicationCustomActions> & getRemoveBuiltInApplicationCustomActions() const { DARABONBA_PTR_GET_CONST(removeBuiltInApplicationCustomActions_, vector<UpdateApplicationTemplateRequest::RemoveBuiltInApplicationCustomActions>) };
    inline vector<UpdateApplicationTemplateRequest::RemoveBuiltInApplicationCustomActions> getRemoveBuiltInApplicationCustomActions() { DARABONBA_PTR_GET(removeBuiltInApplicationCustomActions_, vector<UpdateApplicationTemplateRequest::RemoveBuiltInApplicationCustomActions>) };
    inline UpdateApplicationTemplateRequest& setRemoveBuiltInApplicationCustomActions(const vector<UpdateApplicationTemplateRequest::RemoveBuiltInApplicationCustomActions> & removeBuiltInApplicationCustomActions) { DARABONBA_PTR_SET_VALUE(removeBuiltInApplicationCustomActions_, removeBuiltInApplicationCustomActions) };
    inline UpdateApplicationTemplateRequest& setRemoveBuiltInApplicationCustomActions(vector<UpdateApplicationTemplateRequest::RemoveBuiltInApplicationCustomActions> && removeBuiltInApplicationCustomActions) { DARABONBA_PTR_SET_RVALUE(removeBuiltInApplicationCustomActions_, removeBuiltInApplicationCustomActions) };


    // templateStatus Field Functions 
    bool hasTemplateStatus() const { return this->templateStatus_ != nullptr;};
    void deleteTemplateStatus() { this->templateStatus_ = nullptr;};
    inline string getTemplateStatus() const { DARABONBA_PTR_GET_DEFAULT(templateStatus_, "") };
    inline UpdateApplicationTemplateRequest& setTemplateStatus(string templateStatus) { DARABONBA_PTR_SET_VALUE(templateStatus_, templateStatus) };


    // unknownAction Field Functions 
    bool hasUnknownAction() const { return this->unknownAction_ != nullptr;};
    void deleteUnknownAction() { this->unknownAction_ = nullptr;};
    inline string getUnknownAction() const { DARABONBA_PTR_GET_DEFAULT(unknownAction_, "") };
    inline UpdateApplicationTemplateRequest& setUnknownAction(string unknownAction) { DARABONBA_PTR_SET_VALUE(unknownAction_, unknownAction) };


  protected:
    // The list of custom actions to be added or updated for built-in applications. This list is merged with RemoveBuiltInApplicationCustomActions by removing items first and then adding items. The same application ID cannot appear in both lists at the same time.
    shared_ptr<vector<UpdateApplicationTemplateRequest::AddBuiltInApplicationCustomActions>> addBuiltInApplicationCustomActions_ {};
    // The ID of the application template to be modified. The template must exist within the current Alibaba Cloud account.
    // 
    // This parameter is required.
    shared_ptr<string> applicationTemplateId_ {};
    // The name of the application template. The name must be 1 to 64 characters in length and can contain Chinese characters, letters, digits, hyphens (-), underscores (_), and periods (.). It cannot contain spaces. If this parameter is not specified or is left empty, the original value is retained.
    shared_ptr<string> applicationTemplateName_ {};
    // The switch status of built-in application control. Only **Enable** is supported. If you specify Disable, an error is returned. If this parameter is not specified or is left empty, the original value is retained.
    shared_ptr<string> builtInApplicationStatus_ {};
    // The switch status of custom rules for applications. Valid values:
    // - **Enable**: Enabled.
    // - **Disable**: Disabled.
    // If this parameter is not specified or is left empty, the original value is retained.
    shared_ptr<string> customRuleStatus_ {};
    // The description of the application template. The description can be up to 128 characters in length. If this parameter is not specified, the original value is retained. If an empty string is specified, the description is cleared.
    shared_ptr<string> description_ {};
    // The list of built-in applications for which you want to remove custom actions. After removal, these applications revert to the default actions of the template. The same application ID cannot appear in AddBuiltInApplicationCustomActions at the same time.
    shared_ptr<vector<UpdateApplicationTemplateRequest::RemoveBuiltInApplicationCustomActions>> removeBuiltInApplicationCustomActions_ {};
    // The overall switch status of the application template. Valid values:
    // - **Enable**: Enabled.
    // - **Disable**: Disabled.
    // If this parameter is not specified or is left empty, the original value is retained.
    shared_ptr<string> templateStatus_ {};
    // The action for unidentified applications. Valid values:
    // - **Allow**: Allow.
    // - **Alert**: Monitor.
    // - **Deny**: Block.
    // If this parameter is not specified or is left empty, the original value is retained.
    shared_ptr<string> unknownAction_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
