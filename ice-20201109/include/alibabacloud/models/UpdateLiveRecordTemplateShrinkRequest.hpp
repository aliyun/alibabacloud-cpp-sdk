// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELIVERECORDTEMPLATESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELIVERECORDTEMPLATESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class UpdateLiveRecordTemplateShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLiveRecordTemplateShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RecordFormat, recordFormatShrink_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLiveRecordTemplateShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RecordFormat, recordFormatShrink_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    UpdateLiveRecordTemplateShrinkRequest() = default ;
    UpdateLiveRecordTemplateShrinkRequest(const UpdateLiveRecordTemplateShrinkRequest &) = default ;
    UpdateLiveRecordTemplateShrinkRequest(UpdateLiveRecordTemplateShrinkRequest &&) = default ;
    UpdateLiveRecordTemplateShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLiveRecordTemplateShrinkRequest() = default ;
    UpdateLiveRecordTemplateShrinkRequest& operator=(const UpdateLiveRecordTemplateShrinkRequest &) = default ;
    UpdateLiveRecordTemplateShrinkRequest& operator=(UpdateLiveRecordTemplateShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->recordFormatShrink_ != nullptr && this->templateId_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateLiveRecordTemplateShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // recordFormatShrink Field Functions 
    bool hasRecordFormatShrink() const { return this->recordFormatShrink_ != nullptr;};
    void deleteRecordFormatShrink() { this->recordFormatShrink_ = nullptr;};
    inline string recordFormatShrink() const { DARABONBA_PTR_GET_DEFAULT(recordFormatShrink_, "") };
    inline UpdateLiveRecordTemplateShrinkRequest& setRecordFormatShrink(string recordFormatShrink) { DARABONBA_PTR_SET_VALUE(recordFormatShrink_, recordFormatShrink) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline UpdateLiveRecordTemplateShrinkRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // The template name.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The list of recording formats.
    // 
    // This parameter is required.
    std::shared_ptr<string> recordFormatShrink_ = nullptr;
    // The template ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> templateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
