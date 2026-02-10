// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCOMPLETIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNCOMPLETIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ContactCenterAI20240603
{
namespace Models
{
  class RunCompletionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunCompletionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Dialogue, dialogue_);
      DARABONBA_PTR_TO_JSON(Fields, fields_);
      DARABONBA_PTR_TO_JSON(ModelCode, modelCode_);
      DARABONBA_PTR_TO_JSON(ServiceInspection, serviceInspection_);
      DARABONBA_PTR_TO_JSON(Stream, stream_);
      DARABONBA_PTR_TO_JSON(TemplateIds, templateIds_);
      DARABONBA_PTR_TO_JSON(responseFormatType, responseFormatType_);
      DARABONBA_PTR_TO_JSON(variables, variables_);
    };
    friend void from_json(const Darabonba::Json& j, RunCompletionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Dialogue, dialogue_);
      DARABONBA_PTR_FROM_JSON(Fields, fields_);
      DARABONBA_PTR_FROM_JSON(ModelCode, modelCode_);
      DARABONBA_PTR_FROM_JSON(ServiceInspection, serviceInspection_);
      DARABONBA_PTR_FROM_JSON(Stream, stream_);
      DARABONBA_PTR_FROM_JSON(TemplateIds, templateIds_);
      DARABONBA_PTR_FROM_JSON(responseFormatType, responseFormatType_);
      DARABONBA_PTR_FROM_JSON(variables, variables_);
    };
    RunCompletionRequest() = default ;
    RunCompletionRequest(const RunCompletionRequest &) = default ;
    RunCompletionRequest(RunCompletionRequest &&) = default ;
    RunCompletionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunCompletionRequest() = default ;
    RunCompletionRequest& operator=(const RunCompletionRequest &) = default ;
    RunCompletionRequest& operator=(RunCompletionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Variables : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Variables& obj) { 
        DARABONBA_PTR_TO_JSON(variableCode, variableCode_);
        DARABONBA_PTR_TO_JSON(variableValue, variableValue_);
      };
      friend void from_json(const Darabonba::Json& j, Variables& obj) { 
        DARABONBA_PTR_FROM_JSON(variableCode, variableCode_);
        DARABONBA_PTR_FROM_JSON(variableValue, variableValue_);
      };
      Variables() = default ;
      Variables(const Variables &) = default ;
      Variables(Variables &&) = default ;
      Variables(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Variables() = default ;
      Variables& operator=(const Variables &) = default ;
      Variables& operator=(Variables &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->variableCode_ == nullptr
        && this->variableValue_ == nullptr; };
      // variableCode Field Functions 
      bool hasVariableCode() const { return this->variableCode_ != nullptr;};
      void deleteVariableCode() { this->variableCode_ = nullptr;};
      inline string getVariableCode() const { DARABONBA_PTR_GET_DEFAULT(variableCode_, "") };
      inline Variables& setVariableCode(string variableCode) { DARABONBA_PTR_SET_VALUE(variableCode_, variableCode) };


      // variableValue Field Functions 
      bool hasVariableValue() const { return this->variableValue_ != nullptr;};
      void deleteVariableValue() { this->variableValue_ = nullptr;};
      inline string getVariableValue() const { DARABONBA_PTR_GET_DEFAULT(variableValue_, "") };
      inline Variables& setVariableValue(string variableValue) { DARABONBA_PTR_SET_VALUE(variableValue_, variableValue) };


    protected:
      shared_ptr<string> variableCode_ {};
      shared_ptr<string> variableValue_ {};
    };

    class ServiceInspection : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ServiceInspection& obj) { 
        DARABONBA_PTR_TO_JSON(InspectionContents, inspectionContents_);
        DARABONBA_PTR_TO_JSON(InspectionIntroduction, inspectionIntroduction_);
        DARABONBA_PTR_TO_JSON(SceneIntroduction, sceneIntroduction_);
      };
      friend void from_json(const Darabonba::Json& j, ServiceInspection& obj) { 
        DARABONBA_PTR_FROM_JSON(InspectionContents, inspectionContents_);
        DARABONBA_PTR_FROM_JSON(InspectionIntroduction, inspectionIntroduction_);
        DARABONBA_PTR_FROM_JSON(SceneIntroduction, sceneIntroduction_);
      };
      ServiceInspection() = default ;
      ServiceInspection(const ServiceInspection &) = default ;
      ServiceInspection(ServiceInspection &&) = default ;
      ServiceInspection(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ServiceInspection() = default ;
      ServiceInspection& operator=(const ServiceInspection &) = default ;
      ServiceInspection& operator=(ServiceInspection &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class InspectionContents : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InspectionContents& obj) { 
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(Title, title_);
        };
        friend void from_json(const Darabonba::Json& j, InspectionContents& obj) { 
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(Title, title_);
        };
        InspectionContents() = default ;
        InspectionContents(const InspectionContents &) = default ;
        InspectionContents(InspectionContents &&) = default ;
        InspectionContents(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InspectionContents() = default ;
        InspectionContents& operator=(const InspectionContents &) = default ;
        InspectionContents& operator=(InspectionContents &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->content_ == nullptr
        && this->title_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline InspectionContents& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline InspectionContents& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      protected:
        shared_ptr<string> content_ {};
        // This parameter is required.
        shared_ptr<string> title_ {};
      };

      virtual bool empty() const override { return this->inspectionContents_ == nullptr
        && this->inspectionIntroduction_ == nullptr && this->sceneIntroduction_ == nullptr; };
      // inspectionContents Field Functions 
      bool hasInspectionContents() const { return this->inspectionContents_ != nullptr;};
      void deleteInspectionContents() { this->inspectionContents_ = nullptr;};
      inline const vector<ServiceInspection::InspectionContents> & getInspectionContents() const { DARABONBA_PTR_GET_CONST(inspectionContents_, vector<ServiceInspection::InspectionContents>) };
      inline vector<ServiceInspection::InspectionContents> getInspectionContents() { DARABONBA_PTR_GET(inspectionContents_, vector<ServiceInspection::InspectionContents>) };
      inline ServiceInspection& setInspectionContents(const vector<ServiceInspection::InspectionContents> & inspectionContents) { DARABONBA_PTR_SET_VALUE(inspectionContents_, inspectionContents) };
      inline ServiceInspection& setInspectionContents(vector<ServiceInspection::InspectionContents> && inspectionContents) { DARABONBA_PTR_SET_RVALUE(inspectionContents_, inspectionContents) };


      // inspectionIntroduction Field Functions 
      bool hasInspectionIntroduction() const { return this->inspectionIntroduction_ != nullptr;};
      void deleteInspectionIntroduction() { this->inspectionIntroduction_ = nullptr;};
      inline string getInspectionIntroduction() const { DARABONBA_PTR_GET_DEFAULT(inspectionIntroduction_, "") };
      inline ServiceInspection& setInspectionIntroduction(string inspectionIntroduction) { DARABONBA_PTR_SET_VALUE(inspectionIntroduction_, inspectionIntroduction) };


      // sceneIntroduction Field Functions 
      bool hasSceneIntroduction() const { return this->sceneIntroduction_ != nullptr;};
      void deleteSceneIntroduction() { this->sceneIntroduction_ = nullptr;};
      inline string getSceneIntroduction() const { DARABONBA_PTR_GET_DEFAULT(sceneIntroduction_, "") };
      inline ServiceInspection& setSceneIntroduction(string sceneIntroduction) { DARABONBA_PTR_SET_VALUE(sceneIntroduction_, sceneIntroduction) };


    protected:
      shared_ptr<vector<ServiceInspection::InspectionContents>> inspectionContents_ {};
      shared_ptr<string> inspectionIntroduction_ {};
      shared_ptr<string> sceneIntroduction_ {};
    };

    class Fields : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Fields& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(Desc, desc_);
        DARABONBA_PTR_TO_JSON(EnumValues, enumValues_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, Fields& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(Desc, desc_);
        DARABONBA_PTR_FROM_JSON(EnumValues, enumValues_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      Fields() = default ;
      Fields(const Fields &) = default ;
      Fields(Fields &&) = default ;
      Fields(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Fields() = default ;
      Fields& operator=(const Fields &) = default ;
      Fields& operator=(Fields &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class EnumValues : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EnumValues& obj) { 
          DARABONBA_PTR_TO_JSON(Desc, desc_);
          DARABONBA_PTR_TO_JSON(EnumValue, enumValue_);
        };
        friend void from_json(const Darabonba::Json& j, EnumValues& obj) { 
          DARABONBA_PTR_FROM_JSON(Desc, desc_);
          DARABONBA_PTR_FROM_JSON(EnumValue, enumValue_);
        };
        EnumValues() = default ;
        EnumValues(const EnumValues &) = default ;
        EnumValues(EnumValues &&) = default ;
        EnumValues(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EnumValues() = default ;
        EnumValues& operator=(const EnumValues &) = default ;
        EnumValues& operator=(EnumValues &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->desc_ == nullptr
        && this->enumValue_ == nullptr; };
        // desc Field Functions 
        bool hasDesc() const { return this->desc_ != nullptr;};
        void deleteDesc() { this->desc_ = nullptr;};
        inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
        inline EnumValues& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


        // enumValue Field Functions 
        bool hasEnumValue() const { return this->enumValue_ != nullptr;};
        void deleteEnumValue() { this->enumValue_ = nullptr;};
        inline string getEnumValue() const { DARABONBA_PTR_GET_DEFAULT(enumValue_, "") };
        inline EnumValues& setEnumValue(string enumValue) { DARABONBA_PTR_SET_VALUE(enumValue_, enumValue) };


      protected:
        shared_ptr<string> desc_ {};
        // This parameter is required.
        shared_ptr<string> enumValue_ {};
      };

      virtual bool empty() const override { return this->code_ == nullptr
        && this->desc_ == nullptr && this->enumValues_ == nullptr && this->name_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline Fields& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // desc Field Functions 
      bool hasDesc() const { return this->desc_ != nullptr;};
      void deleteDesc() { this->desc_ = nullptr;};
      inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
      inline Fields& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


      // enumValues Field Functions 
      bool hasEnumValues() const { return this->enumValues_ != nullptr;};
      void deleteEnumValues() { this->enumValues_ = nullptr;};
      inline const vector<Fields::EnumValues> & getEnumValues() const { DARABONBA_PTR_GET_CONST(enumValues_, vector<Fields::EnumValues>) };
      inline vector<Fields::EnumValues> getEnumValues() { DARABONBA_PTR_GET(enumValues_, vector<Fields::EnumValues>) };
      inline Fields& setEnumValues(const vector<Fields::EnumValues> & enumValues) { DARABONBA_PTR_SET_VALUE(enumValues_, enumValues) };
      inline Fields& setEnumValues(vector<Fields::EnumValues> && enumValues) { DARABONBA_PTR_SET_RVALUE(enumValues_, enumValues) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Fields& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      shared_ptr<string> code_ {};
      shared_ptr<string> desc_ {};
      shared_ptr<vector<Fields::EnumValues>> enumValues_ {};
      // This parameter is required.
      shared_ptr<string> name_ {};
    };

    class Dialogue : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Dialogue& obj) { 
        DARABONBA_PTR_TO_JSON(Sentences, sentences_);
        DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      };
      friend void from_json(const Darabonba::Json& j, Dialogue& obj) { 
        DARABONBA_PTR_FROM_JSON(Sentences, sentences_);
        DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      };
      Dialogue() = default ;
      Dialogue(const Dialogue &) = default ;
      Dialogue(Dialogue &&) = default ;
      Dialogue(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Dialogue() = default ;
      Dialogue& operator=(const Dialogue &) = default ;
      Dialogue& operator=(Dialogue &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Sentences : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Sentences& obj) { 
          DARABONBA_PTR_TO_JSON(ChatId, chatId_);
          DARABONBA_PTR_TO_JSON(Role, role_);
          DARABONBA_PTR_TO_JSON(Text, text_);
        };
        friend void from_json(const Darabonba::Json& j, Sentences& obj) { 
          DARABONBA_PTR_FROM_JSON(ChatId, chatId_);
          DARABONBA_PTR_FROM_JSON(Role, role_);
          DARABONBA_PTR_FROM_JSON(Text, text_);
        };
        Sentences() = default ;
        Sentences(const Sentences &) = default ;
        Sentences(Sentences &&) = default ;
        Sentences(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Sentences() = default ;
        Sentences& operator=(const Sentences &) = default ;
        Sentences& operator=(Sentences &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->chatId_ == nullptr
        && this->role_ == nullptr && this->text_ == nullptr; };
        // chatId Field Functions 
        bool hasChatId() const { return this->chatId_ != nullptr;};
        void deleteChatId() { this->chatId_ = nullptr;};
        inline string getChatId() const { DARABONBA_PTR_GET_DEFAULT(chatId_, "") };
        inline Sentences& setChatId(string chatId) { DARABONBA_PTR_SET_VALUE(chatId_, chatId) };


        // role Field Functions 
        bool hasRole() const { return this->role_ != nullptr;};
        void deleteRole() { this->role_ = nullptr;};
        inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
        inline Sentences& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


        // text Field Functions 
        bool hasText() const { return this->text_ != nullptr;};
        void deleteText() { this->text_ = nullptr;};
        inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
        inline Sentences& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


      protected:
        shared_ptr<string> chatId_ {};
        // This parameter is required.
        shared_ptr<string> role_ {};
        // This parameter is required.
        shared_ptr<string> text_ {};
      };

      virtual bool empty() const override { return this->sentences_ == nullptr
        && this->sessionId_ == nullptr; };
      // sentences Field Functions 
      bool hasSentences() const { return this->sentences_ != nullptr;};
      void deleteSentences() { this->sentences_ = nullptr;};
      inline const vector<Dialogue::Sentences> & getSentences() const { DARABONBA_PTR_GET_CONST(sentences_, vector<Dialogue::Sentences>) };
      inline vector<Dialogue::Sentences> getSentences() { DARABONBA_PTR_GET(sentences_, vector<Dialogue::Sentences>) };
      inline Dialogue& setSentences(const vector<Dialogue::Sentences> & sentences) { DARABONBA_PTR_SET_VALUE(sentences_, sentences) };
      inline Dialogue& setSentences(vector<Dialogue::Sentences> && sentences) { DARABONBA_PTR_SET_RVALUE(sentences_, sentences) };


      // sessionId Field Functions 
      bool hasSessionId() const { return this->sessionId_ != nullptr;};
      void deleteSessionId() { this->sessionId_ = nullptr;};
      inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
      inline Dialogue& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    protected:
      shared_ptr<vector<Dialogue::Sentences>> sentences_ {};
      shared_ptr<string> sessionId_ {};
    };

    virtual bool empty() const override { return this->dialogue_ == nullptr
        && this->fields_ == nullptr && this->modelCode_ == nullptr && this->serviceInspection_ == nullptr && this->stream_ == nullptr && this->templateIds_ == nullptr
        && this->responseFormatType_ == nullptr && this->variables_ == nullptr; };
    // dialogue Field Functions 
    bool hasDialogue() const { return this->dialogue_ != nullptr;};
    void deleteDialogue() { this->dialogue_ = nullptr;};
    inline const RunCompletionRequest::Dialogue & getDialogue() const { DARABONBA_PTR_GET_CONST(dialogue_, RunCompletionRequest::Dialogue) };
    inline RunCompletionRequest::Dialogue getDialogue() { DARABONBA_PTR_GET(dialogue_, RunCompletionRequest::Dialogue) };
    inline RunCompletionRequest& setDialogue(const RunCompletionRequest::Dialogue & dialogue) { DARABONBA_PTR_SET_VALUE(dialogue_, dialogue) };
    inline RunCompletionRequest& setDialogue(RunCompletionRequest::Dialogue && dialogue) { DARABONBA_PTR_SET_RVALUE(dialogue_, dialogue) };


    // fields Field Functions 
    bool hasFields() const { return this->fields_ != nullptr;};
    void deleteFields() { this->fields_ = nullptr;};
    inline const vector<RunCompletionRequest::Fields> & getFields() const { DARABONBA_PTR_GET_CONST(fields_, vector<RunCompletionRequest::Fields>) };
    inline vector<RunCompletionRequest::Fields> getFields() { DARABONBA_PTR_GET(fields_, vector<RunCompletionRequest::Fields>) };
    inline RunCompletionRequest& setFields(const vector<RunCompletionRequest::Fields> & fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };
    inline RunCompletionRequest& setFields(vector<RunCompletionRequest::Fields> && fields) { DARABONBA_PTR_SET_RVALUE(fields_, fields) };


    // modelCode Field Functions 
    bool hasModelCode() const { return this->modelCode_ != nullptr;};
    void deleteModelCode() { this->modelCode_ = nullptr;};
    inline string getModelCode() const { DARABONBA_PTR_GET_DEFAULT(modelCode_, "") };
    inline RunCompletionRequest& setModelCode(string modelCode) { DARABONBA_PTR_SET_VALUE(modelCode_, modelCode) };


    // serviceInspection Field Functions 
    bool hasServiceInspection() const { return this->serviceInspection_ != nullptr;};
    void deleteServiceInspection() { this->serviceInspection_ = nullptr;};
    inline const RunCompletionRequest::ServiceInspection & getServiceInspection() const { DARABONBA_PTR_GET_CONST(serviceInspection_, RunCompletionRequest::ServiceInspection) };
    inline RunCompletionRequest::ServiceInspection getServiceInspection() { DARABONBA_PTR_GET(serviceInspection_, RunCompletionRequest::ServiceInspection) };
    inline RunCompletionRequest& setServiceInspection(const RunCompletionRequest::ServiceInspection & serviceInspection) { DARABONBA_PTR_SET_VALUE(serviceInspection_, serviceInspection) };
    inline RunCompletionRequest& setServiceInspection(RunCompletionRequest::ServiceInspection && serviceInspection) { DARABONBA_PTR_SET_RVALUE(serviceInspection_, serviceInspection) };


    // stream Field Functions 
    bool hasStream() const { return this->stream_ != nullptr;};
    void deleteStream() { this->stream_ = nullptr;};
    inline bool getStream() const { DARABONBA_PTR_GET_DEFAULT(stream_, false) };
    inline RunCompletionRequest& setStream(bool stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };


    // templateIds Field Functions 
    bool hasTemplateIds() const { return this->templateIds_ != nullptr;};
    void deleteTemplateIds() { this->templateIds_ = nullptr;};
    inline const vector<int64_t> & getTemplateIds() const { DARABONBA_PTR_GET_CONST(templateIds_, vector<int64_t>) };
    inline vector<int64_t> getTemplateIds() { DARABONBA_PTR_GET(templateIds_, vector<int64_t>) };
    inline RunCompletionRequest& setTemplateIds(const vector<int64_t> & templateIds) { DARABONBA_PTR_SET_VALUE(templateIds_, templateIds) };
    inline RunCompletionRequest& setTemplateIds(vector<int64_t> && templateIds) { DARABONBA_PTR_SET_RVALUE(templateIds_, templateIds) };


    // responseFormatType Field Functions 
    bool hasResponseFormatType() const { return this->responseFormatType_ != nullptr;};
    void deleteResponseFormatType() { this->responseFormatType_ = nullptr;};
    inline string getResponseFormatType() const { DARABONBA_PTR_GET_DEFAULT(responseFormatType_, "") };
    inline RunCompletionRequest& setResponseFormatType(string responseFormatType) { DARABONBA_PTR_SET_VALUE(responseFormatType_, responseFormatType) };


    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline const vector<RunCompletionRequest::Variables> & getVariables() const { DARABONBA_PTR_GET_CONST(variables_, vector<RunCompletionRequest::Variables>) };
    inline vector<RunCompletionRequest::Variables> getVariables() { DARABONBA_PTR_GET(variables_, vector<RunCompletionRequest::Variables>) };
    inline RunCompletionRequest& setVariables(const vector<RunCompletionRequest::Variables> & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
    inline RunCompletionRequest& setVariables(vector<RunCompletionRequest::Variables> && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


  protected:
    // This parameter is required.
    shared_ptr<RunCompletionRequest::Dialogue> dialogue_ {};
    shared_ptr<vector<RunCompletionRequest::Fields>> fields_ {};
    shared_ptr<string> modelCode_ {};
    shared_ptr<RunCompletionRequest::ServiceInspection> serviceInspection_ {};
    shared_ptr<bool> stream_ {};
    // This parameter is required.
    shared_ptr<vector<int64_t>> templateIds_ {};
    shared_ptr<string> responseFormatType_ {};
    shared_ptr<vector<RunCompletionRequest::Variables>> variables_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ContactCenterAI20240603
#endif
