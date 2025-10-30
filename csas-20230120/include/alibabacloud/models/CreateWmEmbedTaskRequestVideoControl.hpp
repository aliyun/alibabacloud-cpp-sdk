// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWMEMBEDTASKREQUESTVIDEOCONTROL_HPP_
#define ALIBABACLOUD_MODELS_CREATEWMEMBEDTASKREQUESTVIDEOCONTROL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateWmEmbedTaskRequestVideoControlMetadataControl.hpp>
#include <alibabacloud/models/CreateWmEmbedTaskRequestVideoControlTextVisibleControl.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CreateWmEmbedTaskRequestVideoControl : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWmEmbedTaskRequestVideoControl& obj) { 
      DARABONBA_PTR_TO_JSON(MetadataControl, metadataControl_);
      DARABONBA_PTR_TO_JSON(TextVisibleControl, textVisibleControl_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWmEmbedTaskRequestVideoControl& obj) { 
      DARABONBA_PTR_FROM_JSON(MetadataControl, metadataControl_);
      DARABONBA_PTR_FROM_JSON(TextVisibleControl, textVisibleControl_);
    };
    CreateWmEmbedTaskRequestVideoControl() = default ;
    CreateWmEmbedTaskRequestVideoControl(const CreateWmEmbedTaskRequestVideoControl &) = default ;
    CreateWmEmbedTaskRequestVideoControl(CreateWmEmbedTaskRequestVideoControl &&) = default ;
    CreateWmEmbedTaskRequestVideoControl(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWmEmbedTaskRequestVideoControl() = default ;
    CreateWmEmbedTaskRequestVideoControl& operator=(const CreateWmEmbedTaskRequestVideoControl &) = default ;
    CreateWmEmbedTaskRequestVideoControl& operator=(CreateWmEmbedTaskRequestVideoControl &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->metadataControl_ == nullptr
        && return this->textVisibleControl_ == nullptr; };
    // metadataControl Field Functions 
    bool hasMetadataControl() const { return this->metadataControl_ != nullptr;};
    void deleteMetadataControl() { this->metadataControl_ = nullptr;};
    inline const Models::CreateWmEmbedTaskRequestVideoControlMetadataControl & metadataControl() const { DARABONBA_PTR_GET_CONST(metadataControl_, Models::CreateWmEmbedTaskRequestVideoControlMetadataControl) };
    inline Models::CreateWmEmbedTaskRequestVideoControlMetadataControl metadataControl() { DARABONBA_PTR_GET(metadataControl_, Models::CreateWmEmbedTaskRequestVideoControlMetadataControl) };
    inline CreateWmEmbedTaskRequestVideoControl& setMetadataControl(const Models::CreateWmEmbedTaskRequestVideoControlMetadataControl & metadataControl) { DARABONBA_PTR_SET_VALUE(metadataControl_, metadataControl) };
    inline CreateWmEmbedTaskRequestVideoControl& setMetadataControl(Models::CreateWmEmbedTaskRequestVideoControlMetadataControl && metadataControl) { DARABONBA_PTR_SET_RVALUE(metadataControl_, metadataControl) };


    // textVisibleControl Field Functions 
    bool hasTextVisibleControl() const { return this->textVisibleControl_ != nullptr;};
    void deleteTextVisibleControl() { this->textVisibleControl_ = nullptr;};
    inline const Models::CreateWmEmbedTaskRequestVideoControlTextVisibleControl & textVisibleControl() const { DARABONBA_PTR_GET_CONST(textVisibleControl_, Models::CreateWmEmbedTaskRequestVideoControlTextVisibleControl) };
    inline Models::CreateWmEmbedTaskRequestVideoControlTextVisibleControl textVisibleControl() { DARABONBA_PTR_GET(textVisibleControl_, Models::CreateWmEmbedTaskRequestVideoControlTextVisibleControl) };
    inline CreateWmEmbedTaskRequestVideoControl& setTextVisibleControl(const Models::CreateWmEmbedTaskRequestVideoControlTextVisibleControl & textVisibleControl) { DARABONBA_PTR_SET_VALUE(textVisibleControl_, textVisibleControl) };
    inline CreateWmEmbedTaskRequestVideoControl& setTextVisibleControl(Models::CreateWmEmbedTaskRequestVideoControlTextVisibleControl && textVisibleControl) { DARABONBA_PTR_SET_RVALUE(textVisibleControl_, textVisibleControl) };


  protected:
    std::shared_ptr<Models::CreateWmEmbedTaskRequestVideoControlMetadataControl> metadataControl_ = nullptr;
    std::shared_ptr<Models::CreateWmEmbedTaskRequestVideoControlTextVisibleControl> textVisibleControl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
