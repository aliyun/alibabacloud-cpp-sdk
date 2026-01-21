// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETRICRULETEMPLATELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETRICRULETEMPLATELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMetricRuleTemplateListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetricRuleTemplateListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Templates, templates_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetricRuleTemplateListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Templates, templates_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeMetricRuleTemplateListResponseBody() = default ;
    DescribeMetricRuleTemplateListResponseBody(const DescribeMetricRuleTemplateListResponseBody &) = default ;
    DescribeMetricRuleTemplateListResponseBody(DescribeMetricRuleTemplateListResponseBody &&) = default ;
    DescribeMetricRuleTemplateListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetricRuleTemplateListResponseBody() = default ;
    DescribeMetricRuleTemplateListResponseBody& operator=(const DescribeMetricRuleTemplateListResponseBody &) = default ;
    DescribeMetricRuleTemplateListResponseBody& operator=(DescribeMetricRuleTemplateListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Templates : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Templates& obj) { 
        DARABONBA_PTR_TO_JSON(Template, template_);
      };
      friend void from_json(const Darabonba::Json& j, Templates& obj) { 
        DARABONBA_PTR_FROM_JSON(Template, template_);
      };
      Templates() = default ;
      Templates(const Templates &) = default ;
      Templates(Templates &&) = default ;
      Templates(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Templates() = default ;
      Templates& operator=(const Templates &) = default ;
      Templates& operator=(Templates &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Template : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Template& obj) { 
          DARABONBA_PTR_TO_JSON(ApplyHistories, applyHistories_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(RestVersion, restVersion_);
          DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
        };
        friend void from_json(const Darabonba::Json& j, Template& obj) { 
          DARABONBA_PTR_FROM_JSON(ApplyHistories, applyHistories_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(RestVersion, restVersion_);
          DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
        };
        Template() = default ;
        Template(const Template &) = default ;
        Template(Template &&) = default ;
        Template(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Template() = default ;
        Template& operator=(const Template &) = default ;
        Template& operator=(Template &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ApplyHistories : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ApplyHistories& obj) { 
            DARABONBA_PTR_TO_JSON(ApplyHistory, applyHistory_);
          };
          friend void from_json(const Darabonba::Json& j, ApplyHistories& obj) { 
            DARABONBA_PTR_FROM_JSON(ApplyHistory, applyHistory_);
          };
          ApplyHistories() = default ;
          ApplyHistories(const ApplyHistories &) = default ;
          ApplyHistories(ApplyHistories &&) = default ;
          ApplyHistories(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ApplyHistories() = default ;
          ApplyHistories& operator=(const ApplyHistories &) = default ;
          ApplyHistories& operator=(ApplyHistories &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ApplyHistory : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ApplyHistory& obj) { 
              DARABONBA_PTR_TO_JSON(ApplyTime, applyTime_);
              DARABONBA_PTR_TO_JSON(GroupId, groupId_);
              DARABONBA_PTR_TO_JSON(GroupName, groupName_);
            };
            friend void from_json(const Darabonba::Json& j, ApplyHistory& obj) { 
              DARABONBA_PTR_FROM_JSON(ApplyTime, applyTime_);
              DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
              DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
            };
            ApplyHistory() = default ;
            ApplyHistory(const ApplyHistory &) = default ;
            ApplyHistory(ApplyHistory &&) = default ;
            ApplyHistory(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ApplyHistory() = default ;
            ApplyHistory& operator=(const ApplyHistory &) = default ;
            ApplyHistory& operator=(ApplyHistory &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->applyTime_ == nullptr
        && this->groupId_ == nullptr && this->groupName_ == nullptr; };
            // applyTime Field Functions 
            bool hasApplyTime() const { return this->applyTime_ != nullptr;};
            void deleteApplyTime() { this->applyTime_ = nullptr;};
            inline int64_t getApplyTime() const { DARABONBA_PTR_GET_DEFAULT(applyTime_, 0L) };
            inline ApplyHistory& setApplyTime(int64_t applyTime) { DARABONBA_PTR_SET_VALUE(applyTime_, applyTime) };


            // groupId Field Functions 
            bool hasGroupId() const { return this->groupId_ != nullptr;};
            void deleteGroupId() { this->groupId_ = nullptr;};
            inline int64_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
            inline ApplyHistory& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


            // groupName Field Functions 
            bool hasGroupName() const { return this->groupName_ != nullptr;};
            void deleteGroupName() { this->groupName_ = nullptr;};
            inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
            inline ApplyHistory& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


          protected:
            // The timestamp when the alert template was applied to the application group.
            // 
            // Unit: milliseconds.
            shared_ptr<int64_t> applyTime_ {};
            // The ID of the application group.
            shared_ptr<int64_t> groupId_ {};
            // The name of the application group.
            shared_ptr<string> groupName_ {};
          };

          virtual bool empty() const override { return this->applyHistory_ == nullptr; };
          // applyHistory Field Functions 
          bool hasApplyHistory() const { return this->applyHistory_ != nullptr;};
          void deleteApplyHistory() { this->applyHistory_ = nullptr;};
          inline const vector<ApplyHistories::ApplyHistory> & getApplyHistory() const { DARABONBA_PTR_GET_CONST(applyHistory_, vector<ApplyHistories::ApplyHistory>) };
          inline vector<ApplyHistories::ApplyHistory> getApplyHistory() { DARABONBA_PTR_GET(applyHistory_, vector<ApplyHistories::ApplyHistory>) };
          inline ApplyHistories& setApplyHistory(const vector<ApplyHistories::ApplyHistory> & applyHistory) { DARABONBA_PTR_SET_VALUE(applyHistory_, applyHistory) };
          inline ApplyHistories& setApplyHistory(vector<ApplyHistories::ApplyHistory> && applyHistory) { DARABONBA_PTR_SET_RVALUE(applyHistory_, applyHistory) };


        protected:
          shared_ptr<vector<ApplyHistories::ApplyHistory>> applyHistory_ {};
        };

        virtual bool empty() const override { return this->applyHistories_ == nullptr
        && this->description_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->name_ == nullptr && this->restVersion_ == nullptr
        && this->templateId_ == nullptr; };
        // applyHistories Field Functions 
        bool hasApplyHistories() const { return this->applyHistories_ != nullptr;};
        void deleteApplyHistories() { this->applyHistories_ = nullptr;};
        inline const Template::ApplyHistories & getApplyHistories() const { DARABONBA_PTR_GET_CONST(applyHistories_, Template::ApplyHistories) };
        inline Template::ApplyHistories getApplyHistories() { DARABONBA_PTR_GET(applyHistories_, Template::ApplyHistories) };
        inline Template& setApplyHistories(const Template::ApplyHistories & applyHistories) { DARABONBA_PTR_SET_VALUE(applyHistories_, applyHistories) };
        inline Template& setApplyHistories(Template::ApplyHistories && applyHistories) { DARABONBA_PTR_SET_RVALUE(applyHistories_, applyHistories) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Template& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
        inline Template& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
        inline Template& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Template& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // restVersion Field Functions 
        bool hasRestVersion() const { return this->restVersion_ != nullptr;};
        void deleteRestVersion() { this->restVersion_ = nullptr;};
        inline int64_t getRestVersion() const { DARABONBA_PTR_GET_DEFAULT(restVersion_, 0L) };
        inline Template& setRestVersion(int64_t restVersion) { DARABONBA_PTR_SET_VALUE(restVersion_, restVersion) };


        // templateId Field Functions 
        bool hasTemplateId() const { return this->templateId_ != nullptr;};
        void deleteTemplateId() { this->templateId_ = nullptr;};
        inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
        inline Template& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      protected:
        // The history of applying the alert templates to application groups.
        shared_ptr<Template::ApplyHistories> applyHistories_ {};
        // The description of the alert template.
        shared_ptr<string> description_ {};
        // The timestamp when the alert template was created.
        // 
        // Unit: milliseconds.
        shared_ptr<int64_t> gmtCreate_ {};
        // The timestamp when the alert template was modified.
        // 
        // Unit: milliseconds.
        shared_ptr<int64_t> gmtModified_ {};
        // The name of the alert template.
        shared_ptr<string> name_ {};
        // The version of the alert template.
        // 
        // Default value: 0.
        shared_ptr<int64_t> restVersion_ {};
        // The ID of the alert template.
        shared_ptr<int64_t> templateId_ {};
      };

      virtual bool empty() const override { return this->template_ == nullptr; };
      // template Field Functions 
      bool hasTemplate() const { return this->template_ != nullptr;};
      void deleteTemplate() { this->template_ = nullptr;};
      inline const vector<Templates::Template> & getTemplate() const { DARABONBA_PTR_GET_CONST(template_, vector<Templates::Template>) };
      inline vector<Templates::Template> getTemplate() { DARABONBA_PTR_GET(template_, vector<Templates::Template>) };
      inline Templates& setTemplate(const vector<Templates::Template> & _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };
      inline Templates& setTemplate(vector<Templates::Template> && _template) { DARABONBA_PTR_SET_RVALUE(template_, _template) };


    protected:
      shared_ptr<vector<Templates::Template>> template_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->templates_ == nullptr && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeMetricRuleTemplateListResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeMetricRuleTemplateListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMetricRuleTemplateListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeMetricRuleTemplateListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // templates Field Functions 
    bool hasTemplates() const { return this->templates_ != nullptr;};
    void deleteTemplates() { this->templates_ = nullptr;};
    inline const DescribeMetricRuleTemplateListResponseBody::Templates & getTemplates() const { DARABONBA_PTR_GET_CONST(templates_, DescribeMetricRuleTemplateListResponseBody::Templates) };
    inline DescribeMetricRuleTemplateListResponseBody::Templates getTemplates() { DARABONBA_PTR_GET(templates_, DescribeMetricRuleTemplateListResponseBody::Templates) };
    inline DescribeMetricRuleTemplateListResponseBody& setTemplates(const DescribeMetricRuleTemplateListResponseBody::Templates & templates) { DARABONBA_PTR_SET_VALUE(templates_, templates) };
    inline DescribeMetricRuleTemplateListResponseBody& setTemplates(DescribeMetricRuleTemplateListResponseBody::Templates && templates) { DARABONBA_PTR_SET_RVALUE(templates_, templates) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline DescribeMetricRuleTemplateListResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The status code.
    // 
    // > The status code 200 indicates that the request was successful.
    shared_ptr<int32_t> code_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
    // The queried alert templates.
    shared_ptr<DescribeMetricRuleTemplateListResponseBody::Templates> templates_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
