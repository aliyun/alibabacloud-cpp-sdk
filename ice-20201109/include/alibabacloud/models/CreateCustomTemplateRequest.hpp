// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECUSTOMTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECUSTOMTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreateCustomTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCustomTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Subtype, subtype_);
      DARABONBA_PTR_TO_JSON(TemplateConfig, templateConfig_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCustomTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Subtype, subtype_);
      DARABONBA_PTR_FROM_JSON(TemplateConfig, templateConfig_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateCustomTemplateRequest() = default ;
    CreateCustomTemplateRequest(const CreateCustomTemplateRequest &) = default ;
    CreateCustomTemplateRequest(CreateCustomTemplateRequest &&) = default ;
    CreateCustomTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCustomTemplateRequest() = default ;
    CreateCustomTemplateRequest& operator=(const CreateCustomTemplateRequest &) = default ;
    CreateCustomTemplateRequest& operator=(CreateCustomTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->subtype_ != nullptr && this->templateConfig_ != nullptr && this->type_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateCustomTemplateRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // subtype Field Functions 
    bool hasSubtype() const { return this->subtype_ != nullptr;};
    void deleteSubtype() { this->subtype_ = nullptr;};
    inline int32_t subtype() const { DARABONBA_PTR_GET_DEFAULT(subtype_, 0) };
    inline CreateCustomTemplateRequest& setSubtype(int32_t subtype) { DARABONBA_PTR_SET_VALUE(subtype_, subtype) };


    // templateConfig Field Functions 
    bool hasTemplateConfig() const { return this->templateConfig_ != nullptr;};
    void deleteTemplateConfig() { this->templateConfig_ = nullptr;};
    inline string templateConfig() const { DARABONBA_PTR_GET_DEFAULT(templateConfig_, "") };
    inline CreateCustomTemplateRequest& setTemplateConfig(string templateConfig) { DARABONBA_PTR_SET_VALUE(templateConfig_, templateConfig) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline CreateCustomTemplateRequest& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The template name.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The template subtype.
    // 
    // Valid values for transcoding templates:
    // 
    // *   1 (Normal): regular template.
    // *   2 (AudioTranscode): audio transcoding template.
    // *   3 (Remux): container format conversion template.
    // *   4 (NarrowBandV1): Narrowband HD 1.0 template.
    // *   5 (NarrowBandV2): Narrowband HD 2.0 template.
    // 
    // Valid values for snapshot templates:
    // 
    // *   1 (Normal): regular template.
    // *   2 (Sprite): sprite template.
    // *   3 (WebVtt): WebVTT template.
    // 
    // Valid values for AI-assisted content moderation templates:
    // 
    // *   1 (Video): video moderation template.
    // *   2 (Audio): audio moderation template.
    // *   3 (Image): image moderation template.
    // 
    // Valid values for AI-assisted intelligent erasure templates.
    // 
    // *   1 (VideoDelogo): logo erasure template.
    // *   2 (VideoDetext): subtitle erasure template.
    std::shared_ptr<int32_t> subtype_ = nullptr;
    // The template configurations. For more information, see [Template parameters](https://help.aliyun.com/document_detail/448291.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> templateConfig_ = nullptr;
    // The template type. Valid values:
    // 
    // *   1: transcoding template.
    // *   2: snapshot template.
    // *   3: animated image template.
    // *   4\\. image watermark template.
    // *   5: text watermark template.
    // *   6: subtitle template.
    // *   7: AI-assisted content moderation template.
    // *   8: AI-assisted intelligent thumbnail template.
    // *   9: AI-assisted intelligent erasure template.
    // *   10: AI-assisted media fingerprint analysis template.
    // *   11: AI-assisted smart tagging template.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
