// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPLICATIONTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPPLICATIONTEMPLATERESPONSEBODY_HPP_
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
  class GetApplicationTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApplicationTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationTemplate, applicationTemplate_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetApplicationTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationTemplate, applicationTemplate_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetApplicationTemplateResponseBody() = default ;
    GetApplicationTemplateResponseBody(const GetApplicationTemplateResponseBody &) = default ;
    GetApplicationTemplateResponseBody(GetApplicationTemplateResponseBody &&) = default ;
    GetApplicationTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApplicationTemplateResponseBody() = default ;
    GetApplicationTemplateResponseBody& operator=(const GetApplicationTemplateResponseBody &) = default ;
    GetApplicationTemplateResponseBody& operator=(GetApplicationTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ApplicationTemplate : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApplicationTemplate& obj) { 
        DARABONBA_PTR_TO_JSON(ApplicationTemplateId, applicationTemplateId_);
        DARABONBA_PTR_TO_JSON(ApplicationTemplateName, applicationTemplateName_);
        DARABONBA_PTR_TO_JSON(BuiltInApplicationActions, builtInApplicationActions_);
        DARABONBA_PTR_TO_JSON(BuiltInApplicationStatus, builtInApplicationStatus_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CustomRuleStatus, customRuleStatus_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(TemplateStatus, templateStatus_);
        DARABONBA_PTR_TO_JSON(UnknownAction, unknownAction_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, ApplicationTemplate& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplicationTemplateId, applicationTemplateId_);
        DARABONBA_PTR_FROM_JSON(ApplicationTemplateName, applicationTemplateName_);
        DARABONBA_PTR_FROM_JSON(BuiltInApplicationActions, builtInApplicationActions_);
        DARABONBA_PTR_FROM_JSON(BuiltInApplicationStatus, builtInApplicationStatus_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CustomRuleStatus, customRuleStatus_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(TemplateStatus, templateStatus_);
        DARABONBA_PTR_FROM_JSON(UnknownAction, unknownAction_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      ApplicationTemplate() = default ;
      ApplicationTemplate(const ApplicationTemplate &) = default ;
      ApplicationTemplate(ApplicationTemplate &&) = default ;
      ApplicationTemplate(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApplicationTemplate() = default ;
      ApplicationTemplate& operator=(const ApplicationTemplate &) = default ;
      ApplicationTemplate& operator=(ApplicationTemplate &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class BuiltInApplicationActions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BuiltInApplicationActions& obj) { 
          DARABONBA_PTR_TO_JSON(Action, action_);
          DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
        };
        friend void from_json(const Darabonba::Json& j, BuiltInApplicationActions& obj) { 
          DARABONBA_PTR_FROM_JSON(Action, action_);
          DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
        };
        BuiltInApplicationActions() = default ;
        BuiltInApplicationActions(const BuiltInApplicationActions &) = default ;
        BuiltInApplicationActions(BuiltInApplicationActions &&) = default ;
        BuiltInApplicationActions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BuiltInApplicationActions() = default ;
        BuiltInApplicationActions& operator=(const BuiltInApplicationActions &) = default ;
        BuiltInApplicationActions& operator=(BuiltInApplicationActions &&) = default ;
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
        inline BuiltInApplicationActions& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


        // applicationId Field Functions 
        bool hasApplicationId() const { return this->applicationId_ != nullptr;};
        void deleteApplicationId() { this->applicationId_ = nullptr;};
        inline int64_t getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, 0L) };
        inline BuiltInApplicationActions& setApplicationId(int64_t applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


      protected:
        // The action performed on the application. Valid values:
        // - **Allow**: Allows the traffic.
        // - **Alert**: Monitors the traffic.
        // - **Deny**: Blocks the traffic.
        shared_ptr<string> action_ {};
        // The ID of the application in the built-in application signature library.
        shared_ptr<int64_t> applicationId_ {};
      };

      virtual bool empty() const override { return this->applicationTemplateId_ == nullptr
        && this->applicationTemplateName_ == nullptr && this->builtInApplicationActions_ == nullptr && this->builtInApplicationStatus_ == nullptr && this->createTime_ == nullptr && this->customRuleStatus_ == nullptr
        && this->description_ == nullptr && this->templateStatus_ == nullptr && this->unknownAction_ == nullptr && this->updateTime_ == nullptr; };
      // applicationTemplateId Field Functions 
      bool hasApplicationTemplateId() const { return this->applicationTemplateId_ != nullptr;};
      void deleteApplicationTemplateId() { this->applicationTemplateId_ = nullptr;};
      inline string getApplicationTemplateId() const { DARABONBA_PTR_GET_DEFAULT(applicationTemplateId_, "") };
      inline ApplicationTemplate& setApplicationTemplateId(string applicationTemplateId) { DARABONBA_PTR_SET_VALUE(applicationTemplateId_, applicationTemplateId) };


      // applicationTemplateName Field Functions 
      bool hasApplicationTemplateName() const { return this->applicationTemplateName_ != nullptr;};
      void deleteApplicationTemplateName() { this->applicationTemplateName_ = nullptr;};
      inline string getApplicationTemplateName() const { DARABONBA_PTR_GET_DEFAULT(applicationTemplateName_, "") };
      inline ApplicationTemplate& setApplicationTemplateName(string applicationTemplateName) { DARABONBA_PTR_SET_VALUE(applicationTemplateName_, applicationTemplateName) };


      // builtInApplicationActions Field Functions 
      bool hasBuiltInApplicationActions() const { return this->builtInApplicationActions_ != nullptr;};
      void deleteBuiltInApplicationActions() { this->builtInApplicationActions_ = nullptr;};
      inline const vector<ApplicationTemplate::BuiltInApplicationActions> & getBuiltInApplicationActions() const { DARABONBA_PTR_GET_CONST(builtInApplicationActions_, vector<ApplicationTemplate::BuiltInApplicationActions>) };
      inline vector<ApplicationTemplate::BuiltInApplicationActions> getBuiltInApplicationActions() { DARABONBA_PTR_GET(builtInApplicationActions_, vector<ApplicationTemplate::BuiltInApplicationActions>) };
      inline ApplicationTemplate& setBuiltInApplicationActions(const vector<ApplicationTemplate::BuiltInApplicationActions> & builtInApplicationActions) { DARABONBA_PTR_SET_VALUE(builtInApplicationActions_, builtInApplicationActions) };
      inline ApplicationTemplate& setBuiltInApplicationActions(vector<ApplicationTemplate::BuiltInApplicationActions> && builtInApplicationActions) { DARABONBA_PTR_SET_RVALUE(builtInApplicationActions_, builtInApplicationActions) };


      // builtInApplicationStatus Field Functions 
      bool hasBuiltInApplicationStatus() const { return this->builtInApplicationStatus_ != nullptr;};
      void deleteBuiltInApplicationStatus() { this->builtInApplicationStatus_ = nullptr;};
      inline string getBuiltInApplicationStatus() const { DARABONBA_PTR_GET_DEFAULT(builtInApplicationStatus_, "") };
      inline ApplicationTemplate& setBuiltInApplicationStatus(string builtInApplicationStatus) { DARABONBA_PTR_SET_VALUE(builtInApplicationStatus_, builtInApplicationStatus) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline ApplicationTemplate& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // customRuleStatus Field Functions 
      bool hasCustomRuleStatus() const { return this->customRuleStatus_ != nullptr;};
      void deleteCustomRuleStatus() { this->customRuleStatus_ = nullptr;};
      inline string getCustomRuleStatus() const { DARABONBA_PTR_GET_DEFAULT(customRuleStatus_, "") };
      inline ApplicationTemplate& setCustomRuleStatus(string customRuleStatus) { DARABONBA_PTR_SET_VALUE(customRuleStatus_, customRuleStatus) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ApplicationTemplate& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // templateStatus Field Functions 
      bool hasTemplateStatus() const { return this->templateStatus_ != nullptr;};
      void deleteTemplateStatus() { this->templateStatus_ = nullptr;};
      inline string getTemplateStatus() const { DARABONBA_PTR_GET_DEFAULT(templateStatus_, "") };
      inline ApplicationTemplate& setTemplateStatus(string templateStatus) { DARABONBA_PTR_SET_VALUE(templateStatus_, templateStatus) };


      // unknownAction Field Functions 
      bool hasUnknownAction() const { return this->unknownAction_ != nullptr;};
      void deleteUnknownAction() { this->unknownAction_ = nullptr;};
      inline string getUnknownAction() const { DARABONBA_PTR_GET_DEFAULT(unknownAction_, "") };
      inline ApplicationTemplate& setUnknownAction(string unknownAction) { DARABONBA_PTR_SET_VALUE(unknownAction_, unknownAction) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline ApplicationTemplate& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The ID of the application template.
      shared_ptr<string> applicationTemplateId_ {};
      // The name of the application template.
      shared_ptr<string> applicationTemplateName_ {};
      // The list of built-in application actions.
      shared_ptr<vector<ApplicationTemplate::BuiltInApplicationActions>> builtInApplicationActions_ {};
      // The switch status of built-in application control. Valid values:
      // - **Enable**: Enabled.
      // - **Disable**: Disabled.
      shared_ptr<string> builtInApplicationStatus_ {};
      // The creation time of the application template. The value is a UNIX timestamp in seconds.
      shared_ptr<int64_t> createTime_ {};
      // The switch status of custom application rules. Valid values:
      // - **Enable**: Enabled.
      // - **Disable**: Disabled.
      shared_ptr<string> customRuleStatus_ {};
      // The description of the application template.
      shared_ptr<string> description_ {};
      // The master switch status of the application template. Valid values:
      // - **Enable**: Enabled.
      // - **Disable**: Disabled.
      shared_ptr<string> templateStatus_ {};
      // The action for unidentified applications. Valid values:
      // - **Allow**: Allows the traffic.
      // - **Alert**: Monitors the traffic.
      // - **Deny**: Blocks the traffic.
      shared_ptr<string> unknownAction_ {};
      // The last modification time of the application template. The value is a UNIX timestamp in seconds.
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->applicationTemplate_ == nullptr
        && this->requestId_ == nullptr; };
    // applicationTemplate Field Functions 
    bool hasApplicationTemplate() const { return this->applicationTemplate_ != nullptr;};
    void deleteApplicationTemplate() { this->applicationTemplate_ = nullptr;};
    inline const GetApplicationTemplateResponseBody::ApplicationTemplate & getApplicationTemplate() const { DARABONBA_PTR_GET_CONST(applicationTemplate_, GetApplicationTemplateResponseBody::ApplicationTemplate) };
    inline GetApplicationTemplateResponseBody::ApplicationTemplate getApplicationTemplate() { DARABONBA_PTR_GET(applicationTemplate_, GetApplicationTemplateResponseBody::ApplicationTemplate) };
    inline GetApplicationTemplateResponseBody& setApplicationTemplate(const GetApplicationTemplateResponseBody::ApplicationTemplate & applicationTemplate) { DARABONBA_PTR_SET_VALUE(applicationTemplate_, applicationTemplate) };
    inline GetApplicationTemplateResponseBody& setApplicationTemplate(GetApplicationTemplateResponseBody::ApplicationTemplate && applicationTemplate) { DARABONBA_PTR_SET_RVALUE(applicationTemplate_, applicationTemplate) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetApplicationTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The application template details.
    shared_ptr<GetApplicationTemplateResponseBody::ApplicationTemplate> applicationTemplate_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
