// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEJOBTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEJOBTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class UpdateJobTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateJobTemplateRequest& obj) { 
      DARABONBA_ANY_TO_JSON(Constraints, constraints_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_ANY_TO_JSON(Metadata, metadata_);
      DARABONBA_PTR_TO_JSON(SetAsDefault, setAsDefault_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateJobTemplateRequest& obj) { 
      DARABONBA_ANY_FROM_JSON(Constraints, constraints_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_ANY_FROM_JSON(Metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(SetAsDefault, setAsDefault_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    UpdateJobTemplateRequest() = default ;
    UpdateJobTemplateRequest(const UpdateJobTemplateRequest &) = default ;
    UpdateJobTemplateRequest(UpdateJobTemplateRequest &&) = default ;
    UpdateJobTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateJobTemplateRequest() = default ;
    UpdateJobTemplateRequest& operator=(const UpdateJobTemplateRequest &) = default ;
    UpdateJobTemplateRequest& operator=(UpdateJobTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->constraints_ == nullptr
        && this->content_ == nullptr && this->description_ == nullptr && this->metadata_ == nullptr && this->setAsDefault_ == nullptr && this->templateName_ == nullptr
        && this->version_ == nullptr; };
    // constraints Field Functions 
    bool hasConstraints() const { return this->constraints_ != nullptr;};
    void deleteConstraints() { this->constraints_ = nullptr;};
    inline     const Darabonba::Json & getConstraints() const { DARABONBA_GET(constraints_) };
    Darabonba::Json & getConstraints() { DARABONBA_GET(constraints_) };
    inline UpdateJobTemplateRequest& setConstraints(const Darabonba::Json & constraints) { DARABONBA_SET_VALUE(constraints_, constraints) };
    inline UpdateJobTemplateRequest& setConstraints(Darabonba::Json && constraints) { DARABONBA_SET_RVALUE(constraints_, constraints) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline UpdateJobTemplateRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateJobTemplateRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline     const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
    Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
    inline UpdateJobTemplateRequest& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
    inline UpdateJobTemplateRequest& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


    // setAsDefault Field Functions 
    bool hasSetAsDefault() const { return this->setAsDefault_ != nullptr;};
    void deleteSetAsDefault() { this->setAsDefault_ = nullptr;};
    inline bool getSetAsDefault() const { DARABONBA_PTR_GET_DEFAULT(setAsDefault_, false) };
    inline UpdateJobTemplateRequest& setSetAsDefault(bool setAsDefault) { DARABONBA_PTR_SET_VALUE(setAsDefault_, setAsDefault) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline UpdateJobTemplateRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int32_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
    inline UpdateJobTemplateRequest& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // 字段约束规则。Key 为 JSONPath 表达式，Value 为约束类型：locked（锁定不可覆盖）、overridable（可覆盖）、required（必填）。需与 Content 同时提供，不允许单独更新。
    Darabonba::Json constraints_ {};
    // 任务模板的配置内容，支持 CreateJob 接口的所有参数字段，以 JSON 格式传入。提供时会创建新版本。
    shared_ptr<string> content_ {};
    shared_ptr<string> description_ {};
    // 用户自定义的键值对元数据，用于存储模板的附加信息。
    Darabonba::Json metadata_ {};
    // 当创建了新版本时，是否将新版本设为默认版本。
    shared_ptr<bool> setAsDefault_ {};
    shared_ptr<string> templateName_ {};
    shared_ptr<int32_t> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
