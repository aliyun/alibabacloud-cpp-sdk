// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TEMPLATELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TEMPLATELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20230516
{
namespace Models
{
  class TemplateListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TemplateListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, TemplateListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
    };
    TemplateListResponseBody() = default ;
    TemplateListResponseBody(const TemplateListResponseBody &) = default ;
    TemplateListResponseBody(TemplateListResponseBody &&) = default ;
    TemplateListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TemplateListResponseBody() = default ;
    TemplateListResponseBody& operator=(const TemplateListResponseBody &) = default ;
    TemplateListResponseBody& operator=(TemplateListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Model : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Model& obj) { 
        DARABONBA_PTR_TO_JSON(IntentTags, intentTags_);
        DARABONBA_PTR_TO_JSON(PersonalityTags, personalityTags_);
        DARABONBA_PTR_TO_JSON(Properties, properties_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
        DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
        DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
      };
      friend void from_json(const Darabonba::Json& j, Model& obj) { 
        DARABONBA_PTR_FROM_JSON(IntentTags, intentTags_);
        DARABONBA_PTR_FROM_JSON(PersonalityTags, personalityTags_);
        DARABONBA_PTR_FROM_JSON(Properties, properties_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
        DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
        DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
      };
      Model() = default ;
      Model(const Model &) = default ;
      Model(Model &&) = default ;
      Model(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Model() = default ;
      Model& operator=(const Model &) = default ;
      Model& operator=(Model &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->intentTags_ == nullptr
        && this->personalityTags_ == nullptr && this->properties_ == nullptr && this->templateId_ == nullptr && this->templateName_ == nullptr && this->templateType_ == nullptr; };
      // intentTags Field Functions 
      bool hasIntentTags() const { return this->intentTags_ != nullptr;};
      void deleteIntentTags() { this->intentTags_ = nullptr;};
      inline const vector<Darabonba::Json> & getIntentTags() const { DARABONBA_PTR_GET_CONST(intentTags_, vector<Darabonba::Json>) };
      inline vector<Darabonba::Json> getIntentTags() { DARABONBA_PTR_GET(intentTags_, vector<Darabonba::Json>) };
      inline Model& setIntentTags(const vector<Darabonba::Json> & intentTags) { DARABONBA_PTR_SET_VALUE(intentTags_, intentTags) };
      inline Model& setIntentTags(vector<Darabonba::Json> && intentTags) { DARABONBA_PTR_SET_RVALUE(intentTags_, intentTags) };


      // personalityTags Field Functions 
      bool hasPersonalityTags() const { return this->personalityTags_ != nullptr;};
      void deletePersonalityTags() { this->personalityTags_ = nullptr;};
      inline const vector<string> & getPersonalityTags() const { DARABONBA_PTR_GET_CONST(personalityTags_, vector<string>) };
      inline vector<string> getPersonalityTags() { DARABONBA_PTR_GET(personalityTags_, vector<string>) };
      inline Model& setPersonalityTags(const vector<string> & personalityTags) { DARABONBA_PTR_SET_VALUE(personalityTags_, personalityTags) };
      inline Model& setPersonalityTags(vector<string> && personalityTags) { DARABONBA_PTR_SET_RVALUE(personalityTags_, personalityTags) };


      // properties Field Functions 
      bool hasProperties() const { return this->properties_ != nullptr;};
      void deleteProperties() { this->properties_ = nullptr;};
      inline string getProperties() const { DARABONBA_PTR_GET_DEFAULT(properties_, "") };
      inline Model& setProperties(string properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
      inline Model& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      // templateName Field Functions 
      bool hasTemplateName() const { return this->templateName_ != nullptr;};
      void deleteTemplateName() { this->templateName_ = nullptr;};
      inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
      inline Model& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


      // templateType Field Functions 
      bool hasTemplateType() const { return this->templateType_ != nullptr;};
      void deleteTemplateType() { this->templateType_ = nullptr;};
      inline int64_t getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, 0L) };
      inline Model& setTemplateType(int64_t templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


    protected:
      // 意向标签
      shared_ptr<vector<Darabonba::Json>> intentTags_ {};
      // 个性标签
      shared_ptr<vector<string>> personalityTags_ {};
      // 话术所需参数
      shared_ptr<string> properties_ {};
      // AI话术ID
      shared_ptr<int64_t> templateId_ {};
      // 话术模板名称
      shared_ptr<string> templateName_ {};
      // 模板类型
      shared_ptr<int64_t> templateType_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->model_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->timestamp_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline TemplateListResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline TemplateListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline const vector<TemplateListResponseBody::Model> & getModel() const { DARABONBA_PTR_GET_CONST(model_, vector<TemplateListResponseBody::Model>) };
    inline vector<TemplateListResponseBody::Model> getModel() { DARABONBA_PTR_GET(model_, vector<TemplateListResponseBody::Model>) };
    inline TemplateListResponseBody& setModel(const vector<TemplateListResponseBody::Model> & model) { DARABONBA_PTR_SET_VALUE(model_, model) };
    inline TemplateListResponseBody& setModel(vector<TemplateListResponseBody::Model> && model) { DARABONBA_PTR_SET_RVALUE(model_, model) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TemplateListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline TemplateListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline TemplateListResponseBody& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    shared_ptr<int64_t> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<vector<TemplateListResponseBody::Model>> model_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int64_t> timestamp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20230516
#endif
