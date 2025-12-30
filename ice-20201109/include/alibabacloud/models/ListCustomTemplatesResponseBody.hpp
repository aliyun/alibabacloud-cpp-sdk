// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMTEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMTEMPLATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListCustomTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CustomTemplateList, customTemplateList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomTemplateList, customTemplateList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListCustomTemplatesResponseBody() = default ;
    ListCustomTemplatesResponseBody(const ListCustomTemplatesResponseBody &) = default ;
    ListCustomTemplatesResponseBody(ListCustomTemplatesResponseBody &&) = default ;
    ListCustomTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomTemplatesResponseBody() = default ;
    ListCustomTemplatesResponseBody& operator=(const ListCustomTemplatesResponseBody &) = default ;
    ListCustomTemplatesResponseBody& operator=(ListCustomTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CustomTemplateList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CustomTemplateList& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(FrontendHint, frontendHint_);
        DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Subtype, subtype_);
        DARABONBA_PTR_TO_JSON(SubtypeName, subtypeName_);
        DARABONBA_PTR_TO_JSON(TemplateConfig, templateConfig_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
        DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(TypeName, typeName_);
      };
      friend void from_json(const Darabonba::Json& j, CustomTemplateList& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(FrontendHint, frontendHint_);
        DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Subtype, subtype_);
        DARABONBA_PTR_FROM_JSON(SubtypeName, subtypeName_);
        DARABONBA_PTR_FROM_JSON(TemplateConfig, templateConfig_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
        DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(TypeName, typeName_);
      };
      CustomTemplateList() = default ;
      CustomTemplateList(const CustomTemplateList &) = default ;
      CustomTemplateList(CustomTemplateList &&) = default ;
      CustomTemplateList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CustomTemplateList() = default ;
      CustomTemplateList& operator=(const CustomTemplateList &) = default ;
      CustomTemplateList& operator=(CustomTemplateList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class FrontendHint : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FrontendHint& obj) { 
          DARABONBA_PTR_TO_JSON(TranscodeTemplateHint, transcodeTemplateHint_);
        };
        friend void from_json(const Darabonba::Json& j, FrontendHint& obj) { 
          DARABONBA_PTR_FROM_JSON(TranscodeTemplateHint, transcodeTemplateHint_);
        };
        FrontendHint() = default ;
        FrontendHint(const FrontendHint &) = default ;
        FrontendHint(FrontendHint &&) = default ;
        FrontendHint(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FrontendHint() = default ;
        FrontendHint& operator=(const FrontendHint &) = default ;
        FrontendHint& operator=(FrontendHint &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TranscodeTemplateHint : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TranscodeTemplateHint& obj) { 
            DARABONBA_PTR_TO_JSON(BitrateControlType, bitrateControlType_);
          };
          friend void from_json(const Darabonba::Json& j, TranscodeTemplateHint& obj) { 
            DARABONBA_PTR_FROM_JSON(BitrateControlType, bitrateControlType_);
          };
          TranscodeTemplateHint() = default ;
          TranscodeTemplateHint(const TranscodeTemplateHint &) = default ;
          TranscodeTemplateHint(TranscodeTemplateHint &&) = default ;
          TranscodeTemplateHint(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TranscodeTemplateHint() = default ;
          TranscodeTemplateHint& operator=(const TranscodeTemplateHint &) = default ;
          TranscodeTemplateHint& operator=(TranscodeTemplateHint &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->bitrateControlType_ == nullptr; };
          // bitrateControlType Field Functions 
          bool hasBitrateControlType() const { return this->bitrateControlType_ != nullptr;};
          void deleteBitrateControlType() { this->bitrateControlType_ = nullptr;};
          inline string getBitrateControlType() const { DARABONBA_PTR_GET_DEFAULT(bitrateControlType_, "") };
          inline TranscodeTemplateHint& setBitrateControlType(string bitrateControlType) { DARABONBA_PTR_SET_VALUE(bitrateControlType_, bitrateControlType) };


        protected:
          shared_ptr<string> bitrateControlType_ {};
        };

        virtual bool empty() const override { return this->transcodeTemplateHint_ == nullptr; };
        // transcodeTemplateHint Field Functions 
        bool hasTranscodeTemplateHint() const { return this->transcodeTemplateHint_ != nullptr;};
        void deleteTranscodeTemplateHint() { this->transcodeTemplateHint_ = nullptr;};
        inline const FrontendHint::TranscodeTemplateHint & getTranscodeTemplateHint() const { DARABONBA_PTR_GET_CONST(transcodeTemplateHint_, FrontendHint::TranscodeTemplateHint) };
        inline FrontendHint::TranscodeTemplateHint getTranscodeTemplateHint() { DARABONBA_PTR_GET(transcodeTemplateHint_, FrontendHint::TranscodeTemplateHint) };
        inline FrontendHint& setTranscodeTemplateHint(const FrontendHint::TranscodeTemplateHint & transcodeTemplateHint) { DARABONBA_PTR_SET_VALUE(transcodeTemplateHint_, transcodeTemplateHint) };
        inline FrontendHint& setTranscodeTemplateHint(FrontendHint::TranscodeTemplateHint && transcodeTemplateHint) { DARABONBA_PTR_SET_RVALUE(transcodeTemplateHint_, transcodeTemplateHint) };


      protected:
        shared_ptr<FrontendHint::TranscodeTemplateHint> transcodeTemplateHint_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->frontendHint_ == nullptr && this->isDefault_ == nullptr && this->modifiedTime_ == nullptr && this->status_ == nullptr && this->subtype_ == nullptr
        && this->subtypeName_ == nullptr && this->templateConfig_ == nullptr && this->templateId_ == nullptr && this->templateName_ == nullptr && this->type_ == nullptr
        && this->typeName_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline CustomTemplateList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // frontendHint Field Functions 
      bool hasFrontendHint() const { return this->frontendHint_ != nullptr;};
      void deleteFrontendHint() { this->frontendHint_ = nullptr;};
      inline const CustomTemplateList::FrontendHint & getFrontendHint() const { DARABONBA_PTR_GET_CONST(frontendHint_, CustomTemplateList::FrontendHint) };
      inline CustomTemplateList::FrontendHint getFrontendHint() { DARABONBA_PTR_GET(frontendHint_, CustomTemplateList::FrontendHint) };
      inline CustomTemplateList& setFrontendHint(const CustomTemplateList::FrontendHint & frontendHint) { DARABONBA_PTR_SET_VALUE(frontendHint_, frontendHint) };
      inline CustomTemplateList& setFrontendHint(CustomTemplateList::FrontendHint && frontendHint) { DARABONBA_PTR_SET_RVALUE(frontendHint_, frontendHint) };


      // isDefault Field Functions 
      bool hasIsDefault() const { return this->isDefault_ != nullptr;};
      void deleteIsDefault() { this->isDefault_ = nullptr;};
      inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
      inline CustomTemplateList& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


      // modifiedTime Field Functions 
      bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
      void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
      inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
      inline CustomTemplateList& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline CustomTemplateList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // subtype Field Functions 
      bool hasSubtype() const { return this->subtype_ != nullptr;};
      void deleteSubtype() { this->subtype_ = nullptr;};
      inline int32_t getSubtype() const { DARABONBA_PTR_GET_DEFAULT(subtype_, 0) };
      inline CustomTemplateList& setSubtype(int32_t subtype) { DARABONBA_PTR_SET_VALUE(subtype_, subtype) };


      // subtypeName Field Functions 
      bool hasSubtypeName() const { return this->subtypeName_ != nullptr;};
      void deleteSubtypeName() { this->subtypeName_ = nullptr;};
      inline string getSubtypeName() const { DARABONBA_PTR_GET_DEFAULT(subtypeName_, "") };
      inline CustomTemplateList& setSubtypeName(string subtypeName) { DARABONBA_PTR_SET_VALUE(subtypeName_, subtypeName) };


      // templateConfig Field Functions 
      bool hasTemplateConfig() const { return this->templateConfig_ != nullptr;};
      void deleteTemplateConfig() { this->templateConfig_ = nullptr;};
      inline string getTemplateConfig() const { DARABONBA_PTR_GET_DEFAULT(templateConfig_, "") };
      inline CustomTemplateList& setTemplateConfig(string templateConfig) { DARABONBA_PTR_SET_VALUE(templateConfig_, templateConfig) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
      inline CustomTemplateList& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      // templateName Field Functions 
      bool hasTemplateName() const { return this->templateName_ != nullptr;};
      void deleteTemplateName() { this->templateName_ = nullptr;};
      inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
      inline CustomTemplateList& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
      inline CustomTemplateList& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // typeName Field Functions 
      bool hasTypeName() const { return this->typeName_ != nullptr;};
      void deleteTypeName() { this->typeName_ = nullptr;};
      inline string getTypeName() const { DARABONBA_PTR_GET_DEFAULT(typeName_, "") };
      inline CustomTemplateList& setTypeName(string typeName) { DARABONBA_PTR_SET_VALUE(typeName_, typeName) };


    protected:
      // The time when the template was created.
      shared_ptr<string> createTime_ {};
      shared_ptr<CustomTemplateList::FrontendHint> frontendHint_ {};
      // Indicates whether the template is the default template.
      // 
      // Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> isDefault_ {};
      // The time when the template was last modified.
      shared_ptr<string> modifiedTime_ {};
      // The template state.
      // 
      // Valid values:
      // 
      // *   Normal
      shared_ptr<string> status_ {};
      // The subtype ID of the template.
      shared_ptr<int32_t> subtype_ {};
      // The subtype name of the template.
      shared_ptr<string> subtypeName_ {};
      // The template parameters.
      shared_ptr<string> templateConfig_ {};
      // The template ID.
      shared_ptr<string> templateId_ {};
      // The template name.
      shared_ptr<string> templateName_ {};
      // The type ID of the template.
      shared_ptr<int32_t> type_ {};
      // The type name of the template.
      shared_ptr<string> typeName_ {};
    };

    virtual bool empty() const override { return this->customTemplateList_ == nullptr
        && this->requestId_ == nullptr && this->total_ == nullptr; };
    // customTemplateList Field Functions 
    bool hasCustomTemplateList() const { return this->customTemplateList_ != nullptr;};
    void deleteCustomTemplateList() { this->customTemplateList_ = nullptr;};
    inline const vector<ListCustomTemplatesResponseBody::CustomTemplateList> & getCustomTemplateList() const { DARABONBA_PTR_GET_CONST(customTemplateList_, vector<ListCustomTemplatesResponseBody::CustomTemplateList>) };
    inline vector<ListCustomTemplatesResponseBody::CustomTemplateList> getCustomTemplateList() { DARABONBA_PTR_GET(customTemplateList_, vector<ListCustomTemplatesResponseBody::CustomTemplateList>) };
    inline ListCustomTemplatesResponseBody& setCustomTemplateList(const vector<ListCustomTemplatesResponseBody::CustomTemplateList> & customTemplateList) { DARABONBA_PTR_SET_VALUE(customTemplateList_, customTemplateList) };
    inline ListCustomTemplatesResponseBody& setCustomTemplateList(vector<ListCustomTemplatesResponseBody::CustomTemplateList> && customTemplateList) { DARABONBA_PTR_SET_RVALUE(customTemplateList_, customTemplateList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCustomTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListCustomTemplatesResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The queried templates.
    shared_ptr<vector<ListCustomTemplatesResponseBody::CustomTemplateList>> customTemplateList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of templates.
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
