// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ANALYZECONVERSATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ANALYZECONVERSATIONREQUEST_HPP_
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
  class AnalyzeConversationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AnalyzeConversationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(categoryTags, categoryTags_);
      DARABONBA_PTR_TO_JSON(customPrompt, customPrompt_);
      DARABONBA_PTR_TO_JSON(dialogue, dialogue_);
      DARABONBA_PTR_TO_JSON(examples, examples_);
      DARABONBA_PTR_TO_JSON(fields, fields_);
      DARABONBA_PTR_TO_JSON(modelCode, modelCode_);
      DARABONBA_PTR_TO_JSON(responseFormatType, responseFormatType_);
      DARABONBA_PTR_TO_JSON(resultTypes, resultTypes_);
      DARABONBA_PTR_TO_JSON(sceneName, sceneName_);
      DARABONBA_PTR_TO_JSON(serviceInspection, serviceInspection_);
      DARABONBA_PTR_TO_JSON(sourceCallerUid, sourceCallerUid_);
      DARABONBA_PTR_TO_JSON(stream, stream_);
      DARABONBA_PTR_TO_JSON(timeConstraintList, timeConstraintList_);
      DARABONBA_PTR_TO_JSON(userProfiles, userProfiles_);
    };
    friend void from_json(const Darabonba::Json& j, AnalyzeConversationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(categoryTags, categoryTags_);
      DARABONBA_PTR_FROM_JSON(customPrompt, customPrompt_);
      DARABONBA_PTR_FROM_JSON(dialogue, dialogue_);
      DARABONBA_PTR_FROM_JSON(examples, examples_);
      DARABONBA_PTR_FROM_JSON(fields, fields_);
      DARABONBA_PTR_FROM_JSON(modelCode, modelCode_);
      DARABONBA_PTR_FROM_JSON(responseFormatType, responseFormatType_);
      DARABONBA_PTR_FROM_JSON(resultTypes, resultTypes_);
      DARABONBA_PTR_FROM_JSON(sceneName, sceneName_);
      DARABONBA_PTR_FROM_JSON(serviceInspection, serviceInspection_);
      DARABONBA_PTR_FROM_JSON(sourceCallerUid, sourceCallerUid_);
      DARABONBA_PTR_FROM_JSON(stream, stream_);
      DARABONBA_PTR_FROM_JSON(timeConstraintList, timeConstraintList_);
      DARABONBA_PTR_FROM_JSON(userProfiles, userProfiles_);
    };
    AnalyzeConversationRequest() = default ;
    AnalyzeConversationRequest(const AnalyzeConversationRequest &) = default ;
    AnalyzeConversationRequest(AnalyzeConversationRequest &&) = default ;
    AnalyzeConversationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AnalyzeConversationRequest() = default ;
    AnalyzeConversationRequest& operator=(const AnalyzeConversationRequest &) = default ;
    AnalyzeConversationRequest& operator=(AnalyzeConversationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserProfiles : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserProfiles& obj) { 
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(value, value_);
      };
      friend void from_json(const Darabonba::Json& j, UserProfiles& obj) { 
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(value, value_);
      };
      UserProfiles() = default ;
      UserProfiles(const UserProfiles &) = default ;
      UserProfiles(UserProfiles &&) = default ;
      UserProfiles(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserProfiles() = default ;
      UserProfiles& operator=(const UserProfiles &) = default ;
      UserProfiles& operator=(UserProfiles &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->value_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline UserProfiles& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline UserProfiles& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> name_ {};
      shared_ptr<string> value_ {};
    };

    class ServiceInspection : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ServiceInspection& obj) { 
        DARABONBA_PTR_TO_JSON(inspectionContents, inspectionContents_);
        DARABONBA_PTR_TO_JSON(inspectionIntroduction, inspectionIntroduction_);
        DARABONBA_PTR_TO_JSON(sceneIntroduction, sceneIntroduction_);
      };
      friend void from_json(const Darabonba::Json& j, ServiceInspection& obj) { 
        DARABONBA_PTR_FROM_JSON(inspectionContents, inspectionContents_);
        DARABONBA_PTR_FROM_JSON(inspectionIntroduction, inspectionIntroduction_);
        DARABONBA_PTR_FROM_JSON(sceneIntroduction, sceneIntroduction_);
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
          DARABONBA_PTR_TO_JSON(content, content_);
          DARABONBA_PTR_TO_JSON(title, title_);
        };
        friend void from_json(const Darabonba::Json& j, InspectionContents& obj) { 
          DARABONBA_PTR_FROM_JSON(content, content_);
          DARABONBA_PTR_FROM_JSON(title, title_);
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
        // This parameter is required.
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
      // This parameter is required.
      shared_ptr<vector<ServiceInspection::InspectionContents>> inspectionContents_ {};
      // This parameter is required.
      shared_ptr<string> inspectionIntroduction_ {};
      // This parameter is required.
      shared_ptr<string> sceneIntroduction_ {};
    };

    class Fields : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Fields& obj) { 
        DARABONBA_PTR_TO_JSON(code, code_);
        DARABONBA_PTR_TO_JSON(desc, desc_);
        DARABONBA_PTR_TO_JSON(enumValues, enumValues_);
        DARABONBA_PTR_TO_JSON(name, name_);
      };
      friend void from_json(const Darabonba::Json& j, Fields& obj) { 
        DARABONBA_PTR_FROM_JSON(code, code_);
        DARABONBA_PTR_FROM_JSON(desc, desc_);
        DARABONBA_PTR_FROM_JSON(enumValues, enumValues_);
        DARABONBA_PTR_FROM_JSON(name, name_);
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
          DARABONBA_PTR_TO_JSON(desc, desc_);
          DARABONBA_PTR_TO_JSON(enumValue, enumValue_);
        };
        friend void from_json(const Darabonba::Json& j, EnumValues& obj) { 
          DARABONBA_PTR_FROM_JSON(desc, desc_);
          DARABONBA_PTR_FROM_JSON(enumValue, enumValue_);
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
        // This parameter is required.
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
      // This parameter is required.
      shared_ptr<string> desc_ {};
      shared_ptr<vector<Fields::EnumValues>> enumValues_ {};
      // This parameter is required.
      shared_ptr<string> name_ {};
    };

    class Examples : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Examples& obj) { 
        DARABONBA_PTR_TO_JSON(output, output_);
        DARABONBA_PTR_TO_JSON(sentences, sentences_);
      };
      friend void from_json(const Darabonba::Json& j, Examples& obj) { 
        DARABONBA_PTR_FROM_JSON(output, output_);
        DARABONBA_PTR_FROM_JSON(sentences, sentences_);
      };
      Examples() = default ;
      Examples(const Examples &) = default ;
      Examples(Examples &&) = default ;
      Examples(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Examples() = default ;
      Examples& operator=(const Examples &) = default ;
      Examples& operator=(Examples &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Sentences : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Sentences& obj) { 
          DARABONBA_PTR_TO_JSON(chatId, chatId_);
          DARABONBA_PTR_TO_JSON(role, role_);
          DARABONBA_PTR_TO_JSON(text, text_);
        };
        friend void from_json(const Darabonba::Json& j, Sentences& obj) { 
          DARABONBA_PTR_FROM_JSON(chatId, chatId_);
          DARABONBA_PTR_FROM_JSON(role, role_);
          DARABONBA_PTR_FROM_JSON(text, text_);
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

      virtual bool empty() const override { return this->output_ == nullptr
        && this->sentences_ == nullptr; };
      // output Field Functions 
      bool hasOutput() const { return this->output_ != nullptr;};
      void deleteOutput() { this->output_ = nullptr;};
      inline string getOutput() const { DARABONBA_PTR_GET_DEFAULT(output_, "") };
      inline Examples& setOutput(string output) { DARABONBA_PTR_SET_VALUE(output_, output) };


      // sentences Field Functions 
      bool hasSentences() const { return this->sentences_ != nullptr;};
      void deleteSentences() { this->sentences_ = nullptr;};
      inline const vector<Examples::Sentences> & getSentences() const { DARABONBA_PTR_GET_CONST(sentences_, vector<Examples::Sentences>) };
      inline vector<Examples::Sentences> getSentences() { DARABONBA_PTR_GET(sentences_, vector<Examples::Sentences>) };
      inline Examples& setSentences(const vector<Examples::Sentences> & sentences) { DARABONBA_PTR_SET_VALUE(sentences_, sentences) };
      inline Examples& setSentences(vector<Examples::Sentences> && sentences) { DARABONBA_PTR_SET_RVALUE(sentences_, sentences) };


    protected:
      // This parameter is required.
      shared_ptr<string> output_ {};
      // This parameter is required.
      shared_ptr<vector<Examples::Sentences>> sentences_ {};
    };

    class Dialogue : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Dialogue& obj) { 
        DARABONBA_PTR_TO_JSON(sentences, sentences_);
        DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
      };
      friend void from_json(const Darabonba::Json& j, Dialogue& obj) { 
        DARABONBA_PTR_FROM_JSON(sentences, sentences_);
        DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
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
          DARABONBA_PTR_TO_JSON(role, role_);
          DARABONBA_PTR_TO_JSON(text, text_);
        };
        friend void from_json(const Darabonba::Json& j, Sentences& obj) { 
          DARABONBA_PTR_FROM_JSON(role, role_);
          DARABONBA_PTR_FROM_JSON(text, text_);
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
        virtual bool empty() const override { return this->role_ == nullptr
        && this->text_ == nullptr; };
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
      // This parameter is required.
      shared_ptr<vector<Dialogue::Sentences>> sentences_ {};
      shared_ptr<string> sessionId_ {};
    };

    class CategoryTags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CategoryTags& obj) { 
        DARABONBA_PTR_TO_JSON(tagDesc, tagDesc_);
        DARABONBA_PTR_TO_JSON(tagName, tagName_);
      };
      friend void from_json(const Darabonba::Json& j, CategoryTags& obj) { 
        DARABONBA_PTR_FROM_JSON(tagDesc, tagDesc_);
        DARABONBA_PTR_FROM_JSON(tagName, tagName_);
      };
      CategoryTags() = default ;
      CategoryTags(const CategoryTags &) = default ;
      CategoryTags(CategoryTags &&) = default ;
      CategoryTags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CategoryTags() = default ;
      CategoryTags& operator=(const CategoryTags &) = default ;
      CategoryTags& operator=(CategoryTags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->tagDesc_ == nullptr
        && this->tagName_ == nullptr; };
      // tagDesc Field Functions 
      bool hasTagDesc() const { return this->tagDesc_ != nullptr;};
      void deleteTagDesc() { this->tagDesc_ = nullptr;};
      inline string getTagDesc() const { DARABONBA_PTR_GET_DEFAULT(tagDesc_, "") };
      inline CategoryTags& setTagDesc(string tagDesc) { DARABONBA_PTR_SET_VALUE(tagDesc_, tagDesc) };


      // tagName Field Functions 
      bool hasTagName() const { return this->tagName_ != nullptr;};
      void deleteTagName() { this->tagName_ = nullptr;};
      inline string getTagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
      inline CategoryTags& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


    protected:
      shared_ptr<string> tagDesc_ {};
      shared_ptr<string> tagName_ {};
    };

    virtual bool empty() const override { return this->categoryTags_ == nullptr
        && this->customPrompt_ == nullptr && this->dialogue_ == nullptr && this->examples_ == nullptr && this->fields_ == nullptr && this->modelCode_ == nullptr
        && this->responseFormatType_ == nullptr && this->resultTypes_ == nullptr && this->sceneName_ == nullptr && this->serviceInspection_ == nullptr && this->sourceCallerUid_ == nullptr
        && this->stream_ == nullptr && this->timeConstraintList_ == nullptr && this->userProfiles_ == nullptr; };
    // categoryTags Field Functions 
    bool hasCategoryTags() const { return this->categoryTags_ != nullptr;};
    void deleteCategoryTags() { this->categoryTags_ = nullptr;};
    inline const vector<AnalyzeConversationRequest::CategoryTags> & getCategoryTags() const { DARABONBA_PTR_GET_CONST(categoryTags_, vector<AnalyzeConversationRequest::CategoryTags>) };
    inline vector<AnalyzeConversationRequest::CategoryTags> getCategoryTags() { DARABONBA_PTR_GET(categoryTags_, vector<AnalyzeConversationRequest::CategoryTags>) };
    inline AnalyzeConversationRequest& setCategoryTags(const vector<AnalyzeConversationRequest::CategoryTags> & categoryTags) { DARABONBA_PTR_SET_VALUE(categoryTags_, categoryTags) };
    inline AnalyzeConversationRequest& setCategoryTags(vector<AnalyzeConversationRequest::CategoryTags> && categoryTags) { DARABONBA_PTR_SET_RVALUE(categoryTags_, categoryTags) };


    // customPrompt Field Functions 
    bool hasCustomPrompt() const { return this->customPrompt_ != nullptr;};
    void deleteCustomPrompt() { this->customPrompt_ = nullptr;};
    inline string getCustomPrompt() const { DARABONBA_PTR_GET_DEFAULT(customPrompt_, "") };
    inline AnalyzeConversationRequest& setCustomPrompt(string customPrompt) { DARABONBA_PTR_SET_VALUE(customPrompt_, customPrompt) };


    // dialogue Field Functions 
    bool hasDialogue() const { return this->dialogue_ != nullptr;};
    void deleteDialogue() { this->dialogue_ = nullptr;};
    inline const AnalyzeConversationRequest::Dialogue & getDialogue() const { DARABONBA_PTR_GET_CONST(dialogue_, AnalyzeConversationRequest::Dialogue) };
    inline AnalyzeConversationRequest::Dialogue getDialogue() { DARABONBA_PTR_GET(dialogue_, AnalyzeConversationRequest::Dialogue) };
    inline AnalyzeConversationRequest& setDialogue(const AnalyzeConversationRequest::Dialogue & dialogue) { DARABONBA_PTR_SET_VALUE(dialogue_, dialogue) };
    inline AnalyzeConversationRequest& setDialogue(AnalyzeConversationRequest::Dialogue && dialogue) { DARABONBA_PTR_SET_RVALUE(dialogue_, dialogue) };


    // examples Field Functions 
    bool hasExamples() const { return this->examples_ != nullptr;};
    void deleteExamples() { this->examples_ = nullptr;};
    inline const vector<AnalyzeConversationRequest::Examples> & getExamples() const { DARABONBA_PTR_GET_CONST(examples_, vector<AnalyzeConversationRequest::Examples>) };
    inline vector<AnalyzeConversationRequest::Examples> getExamples() { DARABONBA_PTR_GET(examples_, vector<AnalyzeConversationRequest::Examples>) };
    inline AnalyzeConversationRequest& setExamples(const vector<AnalyzeConversationRequest::Examples> & examples) { DARABONBA_PTR_SET_VALUE(examples_, examples) };
    inline AnalyzeConversationRequest& setExamples(vector<AnalyzeConversationRequest::Examples> && examples) { DARABONBA_PTR_SET_RVALUE(examples_, examples) };


    // fields Field Functions 
    bool hasFields() const { return this->fields_ != nullptr;};
    void deleteFields() { this->fields_ = nullptr;};
    inline const vector<AnalyzeConversationRequest::Fields> & getFields() const { DARABONBA_PTR_GET_CONST(fields_, vector<AnalyzeConversationRequest::Fields>) };
    inline vector<AnalyzeConversationRequest::Fields> getFields() { DARABONBA_PTR_GET(fields_, vector<AnalyzeConversationRequest::Fields>) };
    inline AnalyzeConversationRequest& setFields(const vector<AnalyzeConversationRequest::Fields> & fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };
    inline AnalyzeConversationRequest& setFields(vector<AnalyzeConversationRequest::Fields> && fields) { DARABONBA_PTR_SET_RVALUE(fields_, fields) };


    // modelCode Field Functions 
    bool hasModelCode() const { return this->modelCode_ != nullptr;};
    void deleteModelCode() { this->modelCode_ = nullptr;};
    inline string getModelCode() const { DARABONBA_PTR_GET_DEFAULT(modelCode_, "") };
    inline AnalyzeConversationRequest& setModelCode(string modelCode) { DARABONBA_PTR_SET_VALUE(modelCode_, modelCode) };


    // responseFormatType Field Functions 
    bool hasResponseFormatType() const { return this->responseFormatType_ != nullptr;};
    void deleteResponseFormatType() { this->responseFormatType_ = nullptr;};
    inline string getResponseFormatType() const { DARABONBA_PTR_GET_DEFAULT(responseFormatType_, "") };
    inline AnalyzeConversationRequest& setResponseFormatType(string responseFormatType) { DARABONBA_PTR_SET_VALUE(responseFormatType_, responseFormatType) };


    // resultTypes Field Functions 
    bool hasResultTypes() const { return this->resultTypes_ != nullptr;};
    void deleteResultTypes() { this->resultTypes_ = nullptr;};
    inline const vector<string> & getResultTypes() const { DARABONBA_PTR_GET_CONST(resultTypes_, vector<string>) };
    inline vector<string> getResultTypes() { DARABONBA_PTR_GET(resultTypes_, vector<string>) };
    inline AnalyzeConversationRequest& setResultTypes(const vector<string> & resultTypes) { DARABONBA_PTR_SET_VALUE(resultTypes_, resultTypes) };
    inline AnalyzeConversationRequest& setResultTypes(vector<string> && resultTypes) { DARABONBA_PTR_SET_RVALUE(resultTypes_, resultTypes) };


    // sceneName Field Functions 
    bool hasSceneName() const { return this->sceneName_ != nullptr;};
    void deleteSceneName() { this->sceneName_ = nullptr;};
    inline string getSceneName() const { DARABONBA_PTR_GET_DEFAULT(sceneName_, "") };
    inline AnalyzeConversationRequest& setSceneName(string sceneName) { DARABONBA_PTR_SET_VALUE(sceneName_, sceneName) };


    // serviceInspection Field Functions 
    bool hasServiceInspection() const { return this->serviceInspection_ != nullptr;};
    void deleteServiceInspection() { this->serviceInspection_ = nullptr;};
    inline const AnalyzeConversationRequest::ServiceInspection & getServiceInspection() const { DARABONBA_PTR_GET_CONST(serviceInspection_, AnalyzeConversationRequest::ServiceInspection) };
    inline AnalyzeConversationRequest::ServiceInspection getServiceInspection() { DARABONBA_PTR_GET(serviceInspection_, AnalyzeConversationRequest::ServiceInspection) };
    inline AnalyzeConversationRequest& setServiceInspection(const AnalyzeConversationRequest::ServiceInspection & serviceInspection) { DARABONBA_PTR_SET_VALUE(serviceInspection_, serviceInspection) };
    inline AnalyzeConversationRequest& setServiceInspection(AnalyzeConversationRequest::ServiceInspection && serviceInspection) { DARABONBA_PTR_SET_RVALUE(serviceInspection_, serviceInspection) };


    // sourceCallerUid Field Functions 
    bool hasSourceCallerUid() const { return this->sourceCallerUid_ != nullptr;};
    void deleteSourceCallerUid() { this->sourceCallerUid_ = nullptr;};
    inline string getSourceCallerUid() const { DARABONBA_PTR_GET_DEFAULT(sourceCallerUid_, "") };
    inline AnalyzeConversationRequest& setSourceCallerUid(string sourceCallerUid) { DARABONBA_PTR_SET_VALUE(sourceCallerUid_, sourceCallerUid) };


    // stream Field Functions 
    bool hasStream() const { return this->stream_ != nullptr;};
    void deleteStream() { this->stream_ = nullptr;};
    inline bool getStream() const { DARABONBA_PTR_GET_DEFAULT(stream_, false) };
    inline AnalyzeConversationRequest& setStream(bool stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };


    // timeConstraintList Field Functions 
    bool hasTimeConstraintList() const { return this->timeConstraintList_ != nullptr;};
    void deleteTimeConstraintList() { this->timeConstraintList_ = nullptr;};
    inline const vector<string> & getTimeConstraintList() const { DARABONBA_PTR_GET_CONST(timeConstraintList_, vector<string>) };
    inline vector<string> getTimeConstraintList() { DARABONBA_PTR_GET(timeConstraintList_, vector<string>) };
    inline AnalyzeConversationRequest& setTimeConstraintList(const vector<string> & timeConstraintList) { DARABONBA_PTR_SET_VALUE(timeConstraintList_, timeConstraintList) };
    inline AnalyzeConversationRequest& setTimeConstraintList(vector<string> && timeConstraintList) { DARABONBA_PTR_SET_RVALUE(timeConstraintList_, timeConstraintList) };


    // userProfiles Field Functions 
    bool hasUserProfiles() const { return this->userProfiles_ != nullptr;};
    void deleteUserProfiles() { this->userProfiles_ = nullptr;};
    inline const vector<AnalyzeConversationRequest::UserProfiles> & getUserProfiles() const { DARABONBA_PTR_GET_CONST(userProfiles_, vector<AnalyzeConversationRequest::UserProfiles>) };
    inline vector<AnalyzeConversationRequest::UserProfiles> getUserProfiles() { DARABONBA_PTR_GET(userProfiles_, vector<AnalyzeConversationRequest::UserProfiles>) };
    inline AnalyzeConversationRequest& setUserProfiles(const vector<AnalyzeConversationRequest::UserProfiles> & userProfiles) { DARABONBA_PTR_SET_VALUE(userProfiles_, userProfiles) };
    inline AnalyzeConversationRequest& setUserProfiles(vector<AnalyzeConversationRequest::UserProfiles> && userProfiles) { DARABONBA_PTR_SET_RVALUE(userProfiles_, userProfiles) };


  protected:
    shared_ptr<vector<AnalyzeConversationRequest::CategoryTags>> categoryTags_ {};
    shared_ptr<string> customPrompt_ {};
    shared_ptr<AnalyzeConversationRequest::Dialogue> dialogue_ {};
    shared_ptr<vector<AnalyzeConversationRequest::Examples>> examples_ {};
    shared_ptr<vector<AnalyzeConversationRequest::Fields>> fields_ {};
    shared_ptr<string> modelCode_ {};
    shared_ptr<string> responseFormatType_ {};
    // This parameter is required.
    shared_ptr<vector<string>> resultTypes_ {};
    shared_ptr<string> sceneName_ {};
    shared_ptr<AnalyzeConversationRequest::ServiceInspection> serviceInspection_ {};
    shared_ptr<string> sourceCallerUid_ {};
    // This parameter is required.
    shared_ptr<bool> stream_ {};
    shared_ptr<vector<string>> timeConstraintList_ {};
    shared_ptr<vector<AnalyzeConversationRequest::UserProfiles>> userProfiles_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ContactCenterAI20240603
#endif
