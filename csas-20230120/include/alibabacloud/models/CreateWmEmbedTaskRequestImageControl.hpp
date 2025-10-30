// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWMEMBEDTASKREQUESTIMAGECONTROL_HPP_
#define ALIBABACLOUD_MODELS_CREATEWMEMBEDTASKREQUESTIMAGECONTROL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateWmEmbedTaskRequestImageControlLogoVisibleControl.hpp>
#include <alibabacloud/models/CreateWmEmbedTaskRequestImageControlMetadataControl.hpp>
#include <alibabacloud/models/CreateWmEmbedTaskRequestImageControlTextVisibleControl.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CreateWmEmbedTaskRequestImageControl : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWmEmbedTaskRequestImageControl& obj) { 
      DARABONBA_PTR_TO_JSON(LogoVisibleControl, logoVisibleControl_);
      DARABONBA_PTR_TO_JSON(MetadataControl, metadataControl_);
      DARABONBA_PTR_TO_JSON(TextVisibleControl, textVisibleControl_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWmEmbedTaskRequestImageControl& obj) { 
      DARABONBA_PTR_FROM_JSON(LogoVisibleControl, logoVisibleControl_);
      DARABONBA_PTR_FROM_JSON(MetadataControl, metadataControl_);
      DARABONBA_PTR_FROM_JSON(TextVisibleControl, textVisibleControl_);
    };
    CreateWmEmbedTaskRequestImageControl() = default ;
    CreateWmEmbedTaskRequestImageControl(const CreateWmEmbedTaskRequestImageControl &) = default ;
    CreateWmEmbedTaskRequestImageControl(CreateWmEmbedTaskRequestImageControl &&) = default ;
    CreateWmEmbedTaskRequestImageControl(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWmEmbedTaskRequestImageControl() = default ;
    CreateWmEmbedTaskRequestImageControl& operator=(const CreateWmEmbedTaskRequestImageControl &) = default ;
    CreateWmEmbedTaskRequestImageControl& operator=(CreateWmEmbedTaskRequestImageControl &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logoVisibleControl_ == nullptr
        && return this->metadataControl_ == nullptr && return this->textVisibleControl_ == nullptr; };
    // logoVisibleControl Field Functions 
    bool hasLogoVisibleControl() const { return this->logoVisibleControl_ != nullptr;};
    void deleteLogoVisibleControl() { this->logoVisibleControl_ = nullptr;};
    inline const Models::CreateWmEmbedTaskRequestImageControlLogoVisibleControl & logoVisibleControl() const { DARABONBA_PTR_GET_CONST(logoVisibleControl_, Models::CreateWmEmbedTaskRequestImageControlLogoVisibleControl) };
    inline Models::CreateWmEmbedTaskRequestImageControlLogoVisibleControl logoVisibleControl() { DARABONBA_PTR_GET(logoVisibleControl_, Models::CreateWmEmbedTaskRequestImageControlLogoVisibleControl) };
    inline CreateWmEmbedTaskRequestImageControl& setLogoVisibleControl(const Models::CreateWmEmbedTaskRequestImageControlLogoVisibleControl & logoVisibleControl) { DARABONBA_PTR_SET_VALUE(logoVisibleControl_, logoVisibleControl) };
    inline CreateWmEmbedTaskRequestImageControl& setLogoVisibleControl(Models::CreateWmEmbedTaskRequestImageControlLogoVisibleControl && logoVisibleControl) { DARABONBA_PTR_SET_RVALUE(logoVisibleControl_, logoVisibleControl) };


    // metadataControl Field Functions 
    bool hasMetadataControl() const { return this->metadataControl_ != nullptr;};
    void deleteMetadataControl() { this->metadataControl_ = nullptr;};
    inline const Models::CreateWmEmbedTaskRequestImageControlMetadataControl & metadataControl() const { DARABONBA_PTR_GET_CONST(metadataControl_, Models::CreateWmEmbedTaskRequestImageControlMetadataControl) };
    inline Models::CreateWmEmbedTaskRequestImageControlMetadataControl metadataControl() { DARABONBA_PTR_GET(metadataControl_, Models::CreateWmEmbedTaskRequestImageControlMetadataControl) };
    inline CreateWmEmbedTaskRequestImageControl& setMetadataControl(const Models::CreateWmEmbedTaskRequestImageControlMetadataControl & metadataControl) { DARABONBA_PTR_SET_VALUE(metadataControl_, metadataControl) };
    inline CreateWmEmbedTaskRequestImageControl& setMetadataControl(Models::CreateWmEmbedTaskRequestImageControlMetadataControl && metadataControl) { DARABONBA_PTR_SET_RVALUE(metadataControl_, metadataControl) };


    // textVisibleControl Field Functions 
    bool hasTextVisibleControl() const { return this->textVisibleControl_ != nullptr;};
    void deleteTextVisibleControl() { this->textVisibleControl_ = nullptr;};
    inline const Models::CreateWmEmbedTaskRequestImageControlTextVisibleControl & textVisibleControl() const { DARABONBA_PTR_GET_CONST(textVisibleControl_, Models::CreateWmEmbedTaskRequestImageControlTextVisibleControl) };
    inline Models::CreateWmEmbedTaskRequestImageControlTextVisibleControl textVisibleControl() { DARABONBA_PTR_GET(textVisibleControl_, Models::CreateWmEmbedTaskRequestImageControlTextVisibleControl) };
    inline CreateWmEmbedTaskRequestImageControl& setTextVisibleControl(const Models::CreateWmEmbedTaskRequestImageControlTextVisibleControl & textVisibleControl) { DARABONBA_PTR_SET_VALUE(textVisibleControl_, textVisibleControl) };
    inline CreateWmEmbedTaskRequestImageControl& setTextVisibleControl(Models::CreateWmEmbedTaskRequestImageControlTextVisibleControl && textVisibleControl) { DARABONBA_PTR_SET_RVALUE(textVisibleControl_, textVisibleControl) };


  protected:
    std::shared_ptr<Models::CreateWmEmbedTaskRequestImageControlLogoVisibleControl> logoVisibleControl_ = nullptr;
    std::shared_ptr<Models::CreateWmEmbedTaskRequestImageControlMetadataControl> metadataControl_ = nullptr;
    std::shared_ptr<Models::CreateWmEmbedTaskRequestImageControlTextVisibleControl> textVisibleControl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
