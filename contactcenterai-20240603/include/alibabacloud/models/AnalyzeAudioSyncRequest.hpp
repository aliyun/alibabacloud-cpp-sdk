// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ANALYZEAUDIOSYNCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ANALYZEAUDIOSYNCREQUEST_HPP_
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
  class AnalyzeAudioSyncRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AnalyzeAudioSyncRequest& obj) { 
      DARABONBA_PTR_TO_JSON(categoryTags, categoryTags_);
      DARABONBA_PTR_TO_JSON(customPrompt, customPrompt_);
      DARABONBA_PTR_TO_JSON(fields, fields_);
      DARABONBA_PTR_TO_JSON(modelCode, modelCode_);
      DARABONBA_PTR_TO_JSON(responseFormatType, responseFormatType_);
      DARABONBA_PTR_TO_JSON(resultTypes, resultTypes_);
      DARABONBA_PTR_TO_JSON(serviceInspection, serviceInspection_);
      DARABONBA_PTR_TO_JSON(stream, stream_);
      DARABONBA_PTR_TO_JSON(templateIds, templateIds_);
      DARABONBA_PTR_TO_JSON(transcription, transcription_);
      DARABONBA_PTR_TO_JSON(variables, variables_);
    };
    friend void from_json(const Darabonba::Json& j, AnalyzeAudioSyncRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(categoryTags, categoryTags_);
      DARABONBA_PTR_FROM_JSON(customPrompt, customPrompt_);
      DARABONBA_PTR_FROM_JSON(fields, fields_);
      DARABONBA_PTR_FROM_JSON(modelCode, modelCode_);
      DARABONBA_PTR_FROM_JSON(responseFormatType, responseFormatType_);
      DARABONBA_PTR_FROM_JSON(resultTypes, resultTypes_);
      DARABONBA_PTR_FROM_JSON(serviceInspection, serviceInspection_);
      DARABONBA_PTR_FROM_JSON(stream, stream_);
      DARABONBA_PTR_FROM_JSON(templateIds, templateIds_);
      DARABONBA_PTR_FROM_JSON(transcription, transcription_);
      DARABONBA_PTR_FROM_JSON(variables, variables_);
    };
    AnalyzeAudioSyncRequest() = default ;
    AnalyzeAudioSyncRequest(const AnalyzeAudioSyncRequest &) = default ;
    AnalyzeAudioSyncRequest(AnalyzeAudioSyncRequest &&) = default ;
    AnalyzeAudioSyncRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AnalyzeAudioSyncRequest() = default ;
    AnalyzeAudioSyncRequest& operator=(const AnalyzeAudioSyncRequest &) = default ;
    AnalyzeAudioSyncRequest& operator=(AnalyzeAudioSyncRequest &&) = default ;
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

    class Transcription : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Transcription& obj) { 
        DARABONBA_PTR_TO_JSON(asrModelCode, asrModelCode_);
        DARABONBA_PTR_TO_JSON(autoSplit, autoSplit_);
        DARABONBA_PTR_TO_JSON(clientChannel, clientChannel_);
        DARABONBA_PTR_TO_JSON(fileName, fileName_);
        DARABONBA_PTR_TO_JSON(level, level_);
        DARABONBA_PTR_TO_JSON(serviceChannel, serviceChannel_);
        DARABONBA_PTR_TO_JSON(serviceChannelKeywords, serviceChannelKeywords_);
        DARABONBA_PTR_TO_JSON(vocabularyId, vocabularyId_);
        DARABONBA_PTR_TO_JSON(voiceFileUrl, voiceFileUrl_);
      };
      friend void from_json(const Darabonba::Json& j, Transcription& obj) { 
        DARABONBA_PTR_FROM_JSON(asrModelCode, asrModelCode_);
        DARABONBA_PTR_FROM_JSON(autoSplit, autoSplit_);
        DARABONBA_PTR_FROM_JSON(clientChannel, clientChannel_);
        DARABONBA_PTR_FROM_JSON(fileName, fileName_);
        DARABONBA_PTR_FROM_JSON(level, level_);
        DARABONBA_PTR_FROM_JSON(serviceChannel, serviceChannel_);
        DARABONBA_PTR_FROM_JSON(serviceChannelKeywords, serviceChannelKeywords_);
        DARABONBA_PTR_FROM_JSON(vocabularyId, vocabularyId_);
        DARABONBA_PTR_FROM_JSON(voiceFileUrl, voiceFileUrl_);
      };
      Transcription() = default ;
      Transcription(const Transcription &) = default ;
      Transcription(Transcription &&) = default ;
      Transcription(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Transcription() = default ;
      Transcription& operator=(const Transcription &) = default ;
      Transcription& operator=(Transcription &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->asrModelCode_ == nullptr
        && this->autoSplit_ == nullptr && this->clientChannel_ == nullptr && this->fileName_ == nullptr && this->level_ == nullptr && this->serviceChannel_ == nullptr
        && this->serviceChannelKeywords_ == nullptr && this->vocabularyId_ == nullptr && this->voiceFileUrl_ == nullptr; };
      // asrModelCode Field Functions 
      bool hasAsrModelCode() const { return this->asrModelCode_ != nullptr;};
      void deleteAsrModelCode() { this->asrModelCode_ = nullptr;};
      inline string getAsrModelCode() const { DARABONBA_PTR_GET_DEFAULT(asrModelCode_, "") };
      inline Transcription& setAsrModelCode(string asrModelCode) { DARABONBA_PTR_SET_VALUE(asrModelCode_, asrModelCode) };


      // autoSplit Field Functions 
      bool hasAutoSplit() const { return this->autoSplit_ != nullptr;};
      void deleteAutoSplit() { this->autoSplit_ = nullptr;};
      inline int32_t getAutoSplit() const { DARABONBA_PTR_GET_DEFAULT(autoSplit_, 0) };
      inline Transcription& setAutoSplit(int32_t autoSplit) { DARABONBA_PTR_SET_VALUE(autoSplit_, autoSplit) };


      // clientChannel Field Functions 
      bool hasClientChannel() const { return this->clientChannel_ != nullptr;};
      void deleteClientChannel() { this->clientChannel_ = nullptr;};
      inline int32_t getClientChannel() const { DARABONBA_PTR_GET_DEFAULT(clientChannel_, 0) };
      inline Transcription& setClientChannel(int32_t clientChannel) { DARABONBA_PTR_SET_VALUE(clientChannel_, clientChannel) };


      // fileName Field Functions 
      bool hasFileName() const { return this->fileName_ != nullptr;};
      void deleteFileName() { this->fileName_ = nullptr;};
      inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
      inline Transcription& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


      // level Field Functions 
      bool hasLevel() const { return this->level_ != nullptr;};
      void deleteLevel() { this->level_ = nullptr;};
      inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
      inline Transcription& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


      // serviceChannel Field Functions 
      bool hasServiceChannel() const { return this->serviceChannel_ != nullptr;};
      void deleteServiceChannel() { this->serviceChannel_ = nullptr;};
      inline int32_t getServiceChannel() const { DARABONBA_PTR_GET_DEFAULT(serviceChannel_, 0) };
      inline Transcription& setServiceChannel(int32_t serviceChannel) { DARABONBA_PTR_SET_VALUE(serviceChannel_, serviceChannel) };


      // serviceChannelKeywords Field Functions 
      bool hasServiceChannelKeywords() const { return this->serviceChannelKeywords_ != nullptr;};
      void deleteServiceChannelKeywords() { this->serviceChannelKeywords_ = nullptr;};
      inline const vector<string> & getServiceChannelKeywords() const { DARABONBA_PTR_GET_CONST(serviceChannelKeywords_, vector<string>) };
      inline vector<string> getServiceChannelKeywords() { DARABONBA_PTR_GET(serviceChannelKeywords_, vector<string>) };
      inline Transcription& setServiceChannelKeywords(const vector<string> & serviceChannelKeywords) { DARABONBA_PTR_SET_VALUE(serviceChannelKeywords_, serviceChannelKeywords) };
      inline Transcription& setServiceChannelKeywords(vector<string> && serviceChannelKeywords) { DARABONBA_PTR_SET_RVALUE(serviceChannelKeywords_, serviceChannelKeywords) };


      // vocabularyId Field Functions 
      bool hasVocabularyId() const { return this->vocabularyId_ != nullptr;};
      void deleteVocabularyId() { this->vocabularyId_ = nullptr;};
      inline string getVocabularyId() const { DARABONBA_PTR_GET_DEFAULT(vocabularyId_, "") };
      inline Transcription& setVocabularyId(string vocabularyId) { DARABONBA_PTR_SET_VALUE(vocabularyId_, vocabularyId) };


      // voiceFileUrl Field Functions 
      bool hasVoiceFileUrl() const { return this->voiceFileUrl_ != nullptr;};
      void deleteVoiceFileUrl() { this->voiceFileUrl_ = nullptr;};
      inline string getVoiceFileUrl() const { DARABONBA_PTR_GET_DEFAULT(voiceFileUrl_, "") };
      inline Transcription& setVoiceFileUrl(string voiceFileUrl) { DARABONBA_PTR_SET_VALUE(voiceFileUrl_, voiceFileUrl) };


    protected:
      shared_ptr<string> asrModelCode_ {};
      shared_ptr<int32_t> autoSplit_ {};
      shared_ptr<int32_t> clientChannel_ {};
      // This parameter is required.
      shared_ptr<string> fileName_ {};
      shared_ptr<string> level_ {};
      shared_ptr<int32_t> serviceChannel_ {};
      shared_ptr<vector<string>> serviceChannelKeywords_ {};
      shared_ptr<string> vocabularyId_ {};
      // This parameter is required.
      shared_ptr<string> voiceFileUrl_ {};
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
        shared_ptr<string> content_ {};
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
        shared_ptr<string> desc_ {};
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
      shared_ptr<string> name_ {};
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
        && this->customPrompt_ == nullptr && this->fields_ == nullptr && this->modelCode_ == nullptr && this->responseFormatType_ == nullptr && this->resultTypes_ == nullptr
        && this->serviceInspection_ == nullptr && this->stream_ == nullptr && this->templateIds_ == nullptr && this->transcription_ == nullptr && this->variables_ == nullptr; };
    // categoryTags Field Functions 
    bool hasCategoryTags() const { return this->categoryTags_ != nullptr;};
    void deleteCategoryTags() { this->categoryTags_ = nullptr;};
    inline const vector<AnalyzeAudioSyncRequest::CategoryTags> & getCategoryTags() const { DARABONBA_PTR_GET_CONST(categoryTags_, vector<AnalyzeAudioSyncRequest::CategoryTags>) };
    inline vector<AnalyzeAudioSyncRequest::CategoryTags> getCategoryTags() { DARABONBA_PTR_GET(categoryTags_, vector<AnalyzeAudioSyncRequest::CategoryTags>) };
    inline AnalyzeAudioSyncRequest& setCategoryTags(const vector<AnalyzeAudioSyncRequest::CategoryTags> & categoryTags) { DARABONBA_PTR_SET_VALUE(categoryTags_, categoryTags) };
    inline AnalyzeAudioSyncRequest& setCategoryTags(vector<AnalyzeAudioSyncRequest::CategoryTags> && categoryTags) { DARABONBA_PTR_SET_RVALUE(categoryTags_, categoryTags) };


    // customPrompt Field Functions 
    bool hasCustomPrompt() const { return this->customPrompt_ != nullptr;};
    void deleteCustomPrompt() { this->customPrompt_ = nullptr;};
    inline string getCustomPrompt() const { DARABONBA_PTR_GET_DEFAULT(customPrompt_, "") };
    inline AnalyzeAudioSyncRequest& setCustomPrompt(string customPrompt) { DARABONBA_PTR_SET_VALUE(customPrompt_, customPrompt) };


    // fields Field Functions 
    bool hasFields() const { return this->fields_ != nullptr;};
    void deleteFields() { this->fields_ = nullptr;};
    inline const vector<AnalyzeAudioSyncRequest::Fields> & getFields() const { DARABONBA_PTR_GET_CONST(fields_, vector<AnalyzeAudioSyncRequest::Fields>) };
    inline vector<AnalyzeAudioSyncRequest::Fields> getFields() { DARABONBA_PTR_GET(fields_, vector<AnalyzeAudioSyncRequest::Fields>) };
    inline AnalyzeAudioSyncRequest& setFields(const vector<AnalyzeAudioSyncRequest::Fields> & fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };
    inline AnalyzeAudioSyncRequest& setFields(vector<AnalyzeAudioSyncRequest::Fields> && fields) { DARABONBA_PTR_SET_RVALUE(fields_, fields) };


    // modelCode Field Functions 
    bool hasModelCode() const { return this->modelCode_ != nullptr;};
    void deleteModelCode() { this->modelCode_ = nullptr;};
    inline string getModelCode() const { DARABONBA_PTR_GET_DEFAULT(modelCode_, "") };
    inline AnalyzeAudioSyncRequest& setModelCode(string modelCode) { DARABONBA_PTR_SET_VALUE(modelCode_, modelCode) };


    // responseFormatType Field Functions 
    bool hasResponseFormatType() const { return this->responseFormatType_ != nullptr;};
    void deleteResponseFormatType() { this->responseFormatType_ = nullptr;};
    inline string getResponseFormatType() const { DARABONBA_PTR_GET_DEFAULT(responseFormatType_, "") };
    inline AnalyzeAudioSyncRequest& setResponseFormatType(string responseFormatType) { DARABONBA_PTR_SET_VALUE(responseFormatType_, responseFormatType) };


    // resultTypes Field Functions 
    bool hasResultTypes() const { return this->resultTypes_ != nullptr;};
    void deleteResultTypes() { this->resultTypes_ = nullptr;};
    inline const vector<string> & getResultTypes() const { DARABONBA_PTR_GET_CONST(resultTypes_, vector<string>) };
    inline vector<string> getResultTypes() { DARABONBA_PTR_GET(resultTypes_, vector<string>) };
    inline AnalyzeAudioSyncRequest& setResultTypes(const vector<string> & resultTypes) { DARABONBA_PTR_SET_VALUE(resultTypes_, resultTypes) };
    inline AnalyzeAudioSyncRequest& setResultTypes(vector<string> && resultTypes) { DARABONBA_PTR_SET_RVALUE(resultTypes_, resultTypes) };


    // serviceInspection Field Functions 
    bool hasServiceInspection() const { return this->serviceInspection_ != nullptr;};
    void deleteServiceInspection() { this->serviceInspection_ = nullptr;};
    inline const AnalyzeAudioSyncRequest::ServiceInspection & getServiceInspection() const { DARABONBA_PTR_GET_CONST(serviceInspection_, AnalyzeAudioSyncRequest::ServiceInspection) };
    inline AnalyzeAudioSyncRequest::ServiceInspection getServiceInspection() { DARABONBA_PTR_GET(serviceInspection_, AnalyzeAudioSyncRequest::ServiceInspection) };
    inline AnalyzeAudioSyncRequest& setServiceInspection(const AnalyzeAudioSyncRequest::ServiceInspection & serviceInspection) { DARABONBA_PTR_SET_VALUE(serviceInspection_, serviceInspection) };
    inline AnalyzeAudioSyncRequest& setServiceInspection(AnalyzeAudioSyncRequest::ServiceInspection && serviceInspection) { DARABONBA_PTR_SET_RVALUE(serviceInspection_, serviceInspection) };


    // stream Field Functions 
    bool hasStream() const { return this->stream_ != nullptr;};
    void deleteStream() { this->stream_ = nullptr;};
    inline bool getStream() const { DARABONBA_PTR_GET_DEFAULT(stream_, false) };
    inline AnalyzeAudioSyncRequest& setStream(bool stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };


    // templateIds Field Functions 
    bool hasTemplateIds() const { return this->templateIds_ != nullptr;};
    void deleteTemplateIds() { this->templateIds_ = nullptr;};
    inline const vector<string> & getTemplateIds() const { DARABONBA_PTR_GET_CONST(templateIds_, vector<string>) };
    inline vector<string> getTemplateIds() { DARABONBA_PTR_GET(templateIds_, vector<string>) };
    inline AnalyzeAudioSyncRequest& setTemplateIds(const vector<string> & templateIds) { DARABONBA_PTR_SET_VALUE(templateIds_, templateIds) };
    inline AnalyzeAudioSyncRequest& setTemplateIds(vector<string> && templateIds) { DARABONBA_PTR_SET_RVALUE(templateIds_, templateIds) };


    // transcription Field Functions 
    bool hasTranscription() const { return this->transcription_ != nullptr;};
    void deleteTranscription() { this->transcription_ = nullptr;};
    inline const AnalyzeAudioSyncRequest::Transcription & getTranscription() const { DARABONBA_PTR_GET_CONST(transcription_, AnalyzeAudioSyncRequest::Transcription) };
    inline AnalyzeAudioSyncRequest::Transcription getTranscription() { DARABONBA_PTR_GET(transcription_, AnalyzeAudioSyncRequest::Transcription) };
    inline AnalyzeAudioSyncRequest& setTranscription(const AnalyzeAudioSyncRequest::Transcription & transcription) { DARABONBA_PTR_SET_VALUE(transcription_, transcription) };
    inline AnalyzeAudioSyncRequest& setTranscription(AnalyzeAudioSyncRequest::Transcription && transcription) { DARABONBA_PTR_SET_RVALUE(transcription_, transcription) };


    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline const vector<AnalyzeAudioSyncRequest::Variables> & getVariables() const { DARABONBA_PTR_GET_CONST(variables_, vector<AnalyzeAudioSyncRequest::Variables>) };
    inline vector<AnalyzeAudioSyncRequest::Variables> getVariables() { DARABONBA_PTR_GET(variables_, vector<AnalyzeAudioSyncRequest::Variables>) };
    inline AnalyzeAudioSyncRequest& setVariables(const vector<AnalyzeAudioSyncRequest::Variables> & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
    inline AnalyzeAudioSyncRequest& setVariables(vector<AnalyzeAudioSyncRequest::Variables> && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


  protected:
    shared_ptr<vector<AnalyzeAudioSyncRequest::CategoryTags>> categoryTags_ {};
    shared_ptr<string> customPrompt_ {};
    shared_ptr<vector<AnalyzeAudioSyncRequest::Fields>> fields_ {};
    shared_ptr<string> modelCode_ {};
    shared_ptr<string> responseFormatType_ {};
    shared_ptr<vector<string>> resultTypes_ {};
    shared_ptr<AnalyzeAudioSyncRequest::ServiceInspection> serviceInspection_ {};
    // This parameter is required.
    shared_ptr<bool> stream_ {};
    shared_ptr<vector<string>> templateIds_ {};
    shared_ptr<AnalyzeAudioSyncRequest::Transcription> transcription_ {};
    shared_ptr<vector<AnalyzeAudioSyncRequest::Variables>> variables_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ContactCenterAI20240603
#endif
