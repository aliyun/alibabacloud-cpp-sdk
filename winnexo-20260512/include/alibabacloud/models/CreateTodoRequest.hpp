// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETODOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETODOREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class CreateTodoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTodoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(assigneeUserIds, assigneeUserIds_);
      DARABONBA_PTR_TO_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_TO_JSON(priority, priority_);
      DARABONBA_PTR_TO_JSON(questions, questions_);
      DARABONBA_ANY_TO_JSON(sourceContext, sourceContext_);
      DARABONBA_PTR_TO_JSON(sourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(title, title_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTodoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(assigneeUserIds, assigneeUserIds_);
      DARABONBA_PTR_FROM_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_FROM_JSON(priority, priority_);
      DARABONBA_PTR_FROM_JSON(questions, questions_);
      DARABONBA_ANY_FROM_JSON(sourceContext, sourceContext_);
      DARABONBA_PTR_FROM_JSON(sourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(title, title_);
    };
    CreateTodoRequest() = default ;
    CreateTodoRequest(const CreateTodoRequest &) = default ;
    CreateTodoRequest(CreateTodoRequest &&) = default ;
    CreateTodoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTodoRequest() = default ;
    CreateTodoRequest& operator=(const CreateTodoRequest &) = default ;
    CreateTodoRequest& operator=(CreateTodoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Questions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Questions& obj) { 
        DARABONBA_PTR_TO_JSON(allowCustom, allowCustom_);
        DARABONBA_PTR_TO_JSON(customLabel, customLabel_);
        DARABONBA_PTR_TO_JSON(customMaxLength, customMaxLength_);
        DARABONBA_PTR_TO_JSON(customPlaceholder, customPlaceholder_);
        DARABONBA_PTR_TO_JSON(maxLength, maxLength_);
        DARABONBA_PTR_TO_JSON(mode, mode_);
        DARABONBA_PTR_TO_JSON(options, options_);
        DARABONBA_PTR_TO_JSON(placeholder, placeholder_);
        DARABONBA_PTR_TO_JSON(question, question_);
        DARABONBA_PTR_TO_JSON(required, required_);
      };
      friend void from_json(const Darabonba::Json& j, Questions& obj) { 
        DARABONBA_PTR_FROM_JSON(allowCustom, allowCustom_);
        DARABONBA_PTR_FROM_JSON(customLabel, customLabel_);
        DARABONBA_PTR_FROM_JSON(customMaxLength, customMaxLength_);
        DARABONBA_PTR_FROM_JSON(customPlaceholder, customPlaceholder_);
        DARABONBA_PTR_FROM_JSON(maxLength, maxLength_);
        DARABONBA_PTR_FROM_JSON(mode, mode_);
        DARABONBA_PTR_FROM_JSON(options, options_);
        DARABONBA_PTR_FROM_JSON(placeholder, placeholder_);
        DARABONBA_PTR_FROM_JSON(question, question_);
        DARABONBA_PTR_FROM_JSON(required, required_);
      };
      Questions() = default ;
      Questions(const Questions &) = default ;
      Questions(Questions &&) = default ;
      Questions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Questions() = default ;
      Questions& operator=(const Questions &) = default ;
      Questions& operator=(Questions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Options : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Options& obj) { 
          DARABONBA_PTR_TO_JSON(description, description_);
          DARABONBA_PTR_TO_JSON(label, label_);
          DARABONBA_PTR_TO_JSON(recommended, recommended_);
        };
        friend void from_json(const Darabonba::Json& j, Options& obj) { 
          DARABONBA_PTR_FROM_JSON(description, description_);
          DARABONBA_PTR_FROM_JSON(label, label_);
          DARABONBA_PTR_FROM_JSON(recommended, recommended_);
        };
        Options() = default ;
        Options(const Options &) = default ;
        Options(Options &&) = default ;
        Options(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Options() = default ;
        Options& operator=(const Options &) = default ;
        Options& operator=(Options &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->label_ == nullptr && this->recommended_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Options& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // label Field Functions 
        bool hasLabel() const { return this->label_ != nullptr;};
        void deleteLabel() { this->label_ = nullptr;};
        inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
        inline Options& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


        // recommended Field Functions 
        bool hasRecommended() const { return this->recommended_ != nullptr;};
        void deleteRecommended() { this->recommended_ = nullptr;};
        inline bool getRecommended() const { DARABONBA_PTR_GET_DEFAULT(recommended_, false) };
        inline Options& setRecommended(bool recommended) { DARABONBA_PTR_SET_VALUE(recommended_, recommended) };


      protected:
        // 选项补充说明
        shared_ptr<string> description_ {};
        // 选项文案（引用键）
        // 
        // This parameter is required.
        shared_ptr<string> label_ {};
        // 是否推荐
        shared_ptr<bool> recommended_ {};
      };

      virtual bool empty() const override { return this->allowCustom_ == nullptr
        && this->customLabel_ == nullptr && this->customMaxLength_ == nullptr && this->customPlaceholder_ == nullptr && this->maxLength_ == nullptr && this->mode_ == nullptr
        && this->options_ == nullptr && this->placeholder_ == nullptr && this->question_ == nullptr && this->required_ == nullptr; };
      // allowCustom Field Functions 
      bool hasAllowCustom() const { return this->allowCustom_ != nullptr;};
      void deleteAllowCustom() { this->allowCustom_ = nullptr;};
      inline bool getAllowCustom() const { DARABONBA_PTR_GET_DEFAULT(allowCustom_, false) };
      inline Questions& setAllowCustom(bool allowCustom) { DARABONBA_PTR_SET_VALUE(allowCustom_, allowCustom) };


      // customLabel Field Functions 
      bool hasCustomLabel() const { return this->customLabel_ != nullptr;};
      void deleteCustomLabel() { this->customLabel_ = nullptr;};
      inline string getCustomLabel() const { DARABONBA_PTR_GET_DEFAULT(customLabel_, "") };
      inline Questions& setCustomLabel(string customLabel) { DARABONBA_PTR_SET_VALUE(customLabel_, customLabel) };


      // customMaxLength Field Functions 
      bool hasCustomMaxLength() const { return this->customMaxLength_ != nullptr;};
      void deleteCustomMaxLength() { this->customMaxLength_ = nullptr;};
      inline int64_t getCustomMaxLength() const { DARABONBA_PTR_GET_DEFAULT(customMaxLength_, 0L) };
      inline Questions& setCustomMaxLength(int64_t customMaxLength) { DARABONBA_PTR_SET_VALUE(customMaxLength_, customMaxLength) };


      // customPlaceholder Field Functions 
      bool hasCustomPlaceholder() const { return this->customPlaceholder_ != nullptr;};
      void deleteCustomPlaceholder() { this->customPlaceholder_ = nullptr;};
      inline string getCustomPlaceholder() const { DARABONBA_PTR_GET_DEFAULT(customPlaceholder_, "") };
      inline Questions& setCustomPlaceholder(string customPlaceholder) { DARABONBA_PTR_SET_VALUE(customPlaceholder_, customPlaceholder) };


      // maxLength Field Functions 
      bool hasMaxLength() const { return this->maxLength_ != nullptr;};
      void deleteMaxLength() { this->maxLength_ = nullptr;};
      inline int64_t getMaxLength() const { DARABONBA_PTR_GET_DEFAULT(maxLength_, 0L) };
      inline Questions& setMaxLength(int64_t maxLength) { DARABONBA_PTR_SET_VALUE(maxLength_, maxLength) };


      // mode Field Functions 
      bool hasMode() const { return this->mode_ != nullptr;};
      void deleteMode() { this->mode_ = nullptr;};
      inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
      inline Questions& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


      // options Field Functions 
      bool hasOptions() const { return this->options_ != nullptr;};
      void deleteOptions() { this->options_ = nullptr;};
      inline const vector<Questions::Options> & getOptions() const { DARABONBA_PTR_GET_CONST(options_, vector<Questions::Options>) };
      inline vector<Questions::Options> getOptions() { DARABONBA_PTR_GET(options_, vector<Questions::Options>) };
      inline Questions& setOptions(const vector<Questions::Options> & options) { DARABONBA_PTR_SET_VALUE(options_, options) };
      inline Questions& setOptions(vector<Questions::Options> && options) { DARABONBA_PTR_SET_RVALUE(options_, options) };


      // placeholder Field Functions 
      bool hasPlaceholder() const { return this->placeholder_ != nullptr;};
      void deletePlaceholder() { this->placeholder_ = nullptr;};
      inline string getPlaceholder() const { DARABONBA_PTR_GET_DEFAULT(placeholder_, "") };
      inline Questions& setPlaceholder(string placeholder) { DARABONBA_PTR_SET_VALUE(placeholder_, placeholder) };


      // question Field Functions 
      bool hasQuestion() const { return this->question_ != nullptr;};
      void deleteQuestion() { this->question_ = nullptr;};
      inline string getQuestion() const { DARABONBA_PTR_GET_DEFAULT(question_, "") };
      inline Questions& setQuestion(string question) { DARABONBA_PTR_SET_VALUE(question_, question) };


      // required Field Functions 
      bool hasRequired() const { return this->required_ != nullptr;};
      void deleteRequired() { this->required_ = nullptr;};
      inline bool getRequired() const { DARABONBA_PTR_GET_DEFAULT(required_, false) };
      inline Questions& setRequired(bool required) { DARABONBA_PTR_SET_VALUE(required_, required) };


    protected:
      // 是否允许自定义输入
      shared_ptr<bool> allowCustom_ {};
      // 自定义输入项文案
      shared_ptr<string> customLabel_ {};
      // 自定义输入长度上限
      shared_ptr<int64_t> customMaxLength_ {};
      // 自定义输入占位符
      shared_ptr<string> customPlaceholder_ {};
      // TEXT 题长度上限
      shared_ptr<int64_t> maxLength_ {};
      // 作答形态：SINGLE_CHOICE/MULTI_CHOICE/TEXT
      // 
      // This parameter is required.
      shared_ptr<string> mode_ {};
      // 问题的选项列表；选择题必填，每项含选项文案（label）、补充说明（description）与是否推荐（recommended）
      shared_ptr<vector<Questions::Options>> options_ {};
      // TEXT 题占位符
      shared_ptr<string> placeholder_ {};
      // 问题正文（引用键，清单内唯一）
      // 
      // This parameter is required.
      shared_ptr<string> question_ {};
      // 是否必答
      shared_ptr<bool> required_ {};
    };

    virtual bool empty() const override { return this->assigneeUserIds_ == nullptr
        && this->collaborationGroupId_ == nullptr && this->priority_ == nullptr && this->questions_ == nullptr && this->sourceContext_ == nullptr && this->sourceType_ == nullptr
        && this->tenantId_ == nullptr && this->title_ == nullptr; };
    // assigneeUserIds Field Functions 
    bool hasAssigneeUserIds() const { return this->assigneeUserIds_ != nullptr;};
    void deleteAssigneeUserIds() { this->assigneeUserIds_ = nullptr;};
    inline const vector<string> & getAssigneeUserIds() const { DARABONBA_PTR_GET_CONST(assigneeUserIds_, vector<string>) };
    inline vector<string> getAssigneeUserIds() { DARABONBA_PTR_GET(assigneeUserIds_, vector<string>) };
    inline CreateTodoRequest& setAssigneeUserIds(const vector<string> & assigneeUserIds) { DARABONBA_PTR_SET_VALUE(assigneeUserIds_, assigneeUserIds) };
    inline CreateTodoRequest& setAssigneeUserIds(vector<string> && assigneeUserIds) { DARABONBA_PTR_SET_RVALUE(assigneeUserIds_, assigneeUserIds) };


    // collaborationGroupId Field Functions 
    bool hasCollaborationGroupId() const { return this->collaborationGroupId_ != nullptr;};
    void deleteCollaborationGroupId() { this->collaborationGroupId_ = nullptr;};
    inline string getCollaborationGroupId() const { DARABONBA_PTR_GET_DEFAULT(collaborationGroupId_, "") };
    inline CreateTodoRequest& setCollaborationGroupId(string collaborationGroupId) { DARABONBA_PTR_SET_VALUE(collaborationGroupId_, collaborationGroupId) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline string getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
    inline CreateTodoRequest& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // questions Field Functions 
    bool hasQuestions() const { return this->questions_ != nullptr;};
    void deleteQuestions() { this->questions_ = nullptr;};
    inline const vector<CreateTodoRequest::Questions> & getQuestions() const { DARABONBA_PTR_GET_CONST(questions_, vector<CreateTodoRequest::Questions>) };
    inline vector<CreateTodoRequest::Questions> getQuestions() { DARABONBA_PTR_GET(questions_, vector<CreateTodoRequest::Questions>) };
    inline CreateTodoRequest& setQuestions(const vector<CreateTodoRequest::Questions> & questions) { DARABONBA_PTR_SET_VALUE(questions_, questions) };
    inline CreateTodoRequest& setQuestions(vector<CreateTodoRequest::Questions> && questions) { DARABONBA_PTR_SET_RVALUE(questions_, questions) };


    // sourceContext Field Functions 
    bool hasSourceContext() const { return this->sourceContext_ != nullptr;};
    void deleteSourceContext() { this->sourceContext_ = nullptr;};
    inline     const Darabonba::Json & getSourceContext() const { DARABONBA_GET(sourceContext_) };
    Darabonba::Json & getSourceContext() { DARABONBA_GET(sourceContext_) };
    inline CreateTodoRequest& setSourceContext(const Darabonba::Json & sourceContext) { DARABONBA_SET_VALUE(sourceContext_, sourceContext) };
    inline CreateTodoRequest& setSourceContext(Darabonba::Json && sourceContext) { DARABONBA_SET_RVALUE(sourceContext_, sourceContext) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline CreateTodoRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline CreateTodoRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CreateTodoRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // 处理人平台用户ID列表（1~100，去重后生效）
    // 
    // This parameter is required.
    shared_ptr<vector<string>> assigneeUserIds_ {};
    // 协作空间 ID（可选）
    shared_ptr<string> collaborationGroupId_ {};
    // 优先级
    shared_ptr<string> priority_ {};
    // 问题清单（1~N）
    // 
    // This parameter is required.
    shared_ptr<vector<CreateTodoRequest::Questions>> questions_ {};
    // 来源上下文（原样透传落库，不校验）
    // 
    // This parameter is required.
    Darabonba::Json sourceContext_ {};
    // 待办来源（仅 OPEN_API）
    // 
    // This parameter is required.
    shared_ptr<string> sourceType_ {};
    // 租户ID，公共参数；缺省时使用调用方默认租户
    shared_ptr<string> tenantId_ {};
    // 待办标题（≤200 字）
    // 
    // This parameter is required.
    shared_ptr<string> title_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
