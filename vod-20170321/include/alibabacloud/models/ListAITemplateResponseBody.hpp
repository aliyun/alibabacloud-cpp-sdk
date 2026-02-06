// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAITEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAITEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListAITemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAITemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TemplateInfoList, templateInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, ListAITemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TemplateInfoList, templateInfoList_);
    };
    ListAITemplateResponseBody() = default ;
    ListAITemplateResponseBody(const ListAITemplateResponseBody &) = default ;
    ListAITemplateResponseBody(ListAITemplateResponseBody &&) = default ;
    ListAITemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAITemplateResponseBody() = default ;
    ListAITemplateResponseBody& operator=(const ListAITemplateResponseBody &) = default ;
    ListAITemplateResponseBody& operator=(ListAITemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TemplateInfoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TemplateInfoList& obj) { 
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(Source, source_);
        DARABONBA_PTR_TO_JSON(TemplateConfig, templateConfig_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
        DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
        DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
      };
      friend void from_json(const Darabonba::Json& j, TemplateInfoList& obj) { 
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(Source, source_);
        DARABONBA_PTR_FROM_JSON(TemplateConfig, templateConfig_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
        DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
        DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
      };
      TemplateInfoList() = default ;
      TemplateInfoList(const TemplateInfoList &) = default ;
      TemplateInfoList(TemplateInfoList &&) = default ;
      TemplateInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TemplateInfoList() = default ;
      TemplateInfoList& operator=(const TemplateInfoList &) = default ;
      TemplateInfoList& operator=(TemplateInfoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->creationTime_ == nullptr
        && this->isDefault_ == nullptr && this->modifyTime_ == nullptr && this->source_ == nullptr && this->templateConfig_ == nullptr && this->templateId_ == nullptr
        && this->templateName_ == nullptr && this->templateType_ == nullptr; };
      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline TemplateInfoList& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // isDefault Field Functions 
      bool hasIsDefault() const { return this->isDefault_ != nullptr;};
      void deleteIsDefault() { this->isDefault_ = nullptr;};
      inline string getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, "") };
      inline TemplateInfoList& setIsDefault(string isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
      inline TemplateInfoList& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline TemplateInfoList& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // templateConfig Field Functions 
      bool hasTemplateConfig() const { return this->templateConfig_ != nullptr;};
      void deleteTemplateConfig() { this->templateConfig_ = nullptr;};
      inline string getTemplateConfig() const { DARABONBA_PTR_GET_DEFAULT(templateConfig_, "") };
      inline TemplateInfoList& setTemplateConfig(string templateConfig) { DARABONBA_PTR_SET_VALUE(templateConfig_, templateConfig) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
      inline TemplateInfoList& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      // templateName Field Functions 
      bool hasTemplateName() const { return this->templateName_ != nullptr;};
      void deleteTemplateName() { this->templateName_ = nullptr;};
      inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
      inline TemplateInfoList& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


      // templateType Field Functions 
      bool hasTemplateType() const { return this->templateType_ != nullptr;};
      void deleteTemplateType() { this->templateType_ = nullptr;};
      inline string getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
      inline TemplateInfoList& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


    protected:
      // The time when the AI template was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
      shared_ptr<string> creationTime_ {};
      // Indicates whether the template is the default AI template. Valid values:
      // 
      // *   **Default**
      // *   **NotDefault**
      shared_ptr<string> isDefault_ {};
      // The time when the AI template was modified. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
      shared_ptr<string> modifyTime_ {};
      // The source of the AI template. Valid values:
      // 
      // *   **System**
      // *   **Custom**
      shared_ptr<string> source_ {};
      // The detailed configurations of the AI template. The value is a JSON string. For more information, see [AITemplateConfig](~~89863#title-vd3-499-o36~~).
      shared_ptr<string> templateConfig_ {};
      // The ID of the AI template.
      shared_ptr<string> templateId_ {};
      // The name of the AI template.
      shared_ptr<string> templateName_ {};
      // The type of the AI template. Valid values:
      // 
      // *   **AIMediaAudit**: automated review
      // *   **AIImage**: smart thumbnail
      shared_ptr<string> templateType_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->templateInfoList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAITemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // templateInfoList Field Functions 
    bool hasTemplateInfoList() const { return this->templateInfoList_ != nullptr;};
    void deleteTemplateInfoList() { this->templateInfoList_ = nullptr;};
    inline const vector<ListAITemplateResponseBody::TemplateInfoList> & getTemplateInfoList() const { DARABONBA_PTR_GET_CONST(templateInfoList_, vector<ListAITemplateResponseBody::TemplateInfoList>) };
    inline vector<ListAITemplateResponseBody::TemplateInfoList> getTemplateInfoList() { DARABONBA_PTR_GET(templateInfoList_, vector<ListAITemplateResponseBody::TemplateInfoList>) };
    inline ListAITemplateResponseBody& setTemplateInfoList(const vector<ListAITemplateResponseBody::TemplateInfoList> & templateInfoList) { DARABONBA_PTR_SET_VALUE(templateInfoList_, templateInfoList) };
    inline ListAITemplateResponseBody& setTemplateInfoList(vector<ListAITemplateResponseBody::TemplateInfoList> && templateInfoList) { DARABONBA_PTR_SET_RVALUE(templateInfoList_, templateInfoList) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The information about the AI templates.
    shared_ptr<vector<ListAITemplateResponseBody::TemplateInfoList>> templateInfoList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
