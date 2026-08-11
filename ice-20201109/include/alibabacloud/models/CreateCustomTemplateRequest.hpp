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
    virtual bool empty() const override { return this->name_ == nullptr
        && this->subtype_ == nullptr && this->templateConfig_ == nullptr && this->type_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateCustomTemplateRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // subtype Field Functions 
    bool hasSubtype() const { return this->subtype_ != nullptr;};
    void deleteSubtype() { this->subtype_ = nullptr;};
    inline int32_t getSubtype() const { DARABONBA_PTR_GET_DEFAULT(subtype_, 0) };
    inline CreateCustomTemplateRequest& setSubtype(int32_t subtype) { DARABONBA_PTR_SET_VALUE(subtype_, subtype) };


    // templateConfig Field Functions 
    bool hasTemplateConfig() const { return this->templateConfig_ != nullptr;};
    void deleteTemplateConfig() { this->templateConfig_ = nullptr;};
    inline string getTemplateConfig() const { DARABONBA_PTR_GET_DEFAULT(templateConfig_, "") };
    inline CreateCustomTemplateRequest& setTemplateConfig(string templateConfig) { DARABONBA_PTR_SET_VALUE(templateConfig_, templateConfig) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline CreateCustomTemplateRequest& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The template name.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The template subtype.
    // 
    // Transcoding template subtypes:
    // - 1: normal transcoding template (Normal)
    // - 2: audio transcoding template (AudioTranscode)
    // - 3: container format conversion (Remux)
    // - 4: Narrowband HD 1.0 (NarrowBandV1)
    // - 5: Narrowband HD 2.0 (NarrowBandV2)
    // 
    // Snapshot template subtypes:
    // - 1: normal snapshot/static snapshot (Normal)
    // - 2: sprite snapshot (Sprite)
    // - 3: WebVTT snapshot (WebVtt)
    // 
    // AI review template subtypes:
    // - 1: video review (Video) 
    // - 2: audio review (Audio)
    // - 3: image review (Image)
    // 
    // AI intelligent erasure template subtypes:
    // - 1: logo erasure (VideoDelogo)
    // - 2: subtitle erasure (VideoDetext)
    shared_ptr<int32_t> subtype_ {};
    // The template configuration. For detailed metric description, see [Template parameters](https://help.aliyun.com/document_detail/448291.html).
    // 
    // This parameter is required.
    shared_ptr<string> templateConfig_ {};
    // The templatetype. Valid values:
    // - 1: transcoding template
    // - 2: snapshot template
    // - 3: animated image template
    // - 4: image watermark template
    // - 5: text watermark template
    // - 6: subtitle template
    // - 7: AI intelligent review
    // - 8: AI intelligent cover
    // - 9: AI intelligent erasure
    // - 10: AI intelligent DNA template
    // - 11: AI intelligent label template
    // 
    // This parameter is required.
    shared_ptr<int32_t> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
