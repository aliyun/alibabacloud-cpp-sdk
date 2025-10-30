// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWMEMBEDTASKREQUESTAUDIOCONTROL_HPP_
#define ALIBABACLOUD_MODELS_CREATEWMEMBEDTASKREQUESTAUDIOCONTROL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateWmEmbedTaskRequestAudioControlMetadataControl.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CreateWmEmbedTaskRequestAudioControl : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWmEmbedTaskRequestAudioControl& obj) { 
      DARABONBA_PTR_TO_JSON(MetadataControl, metadataControl_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWmEmbedTaskRequestAudioControl& obj) { 
      DARABONBA_PTR_FROM_JSON(MetadataControl, metadataControl_);
    };
    CreateWmEmbedTaskRequestAudioControl() = default ;
    CreateWmEmbedTaskRequestAudioControl(const CreateWmEmbedTaskRequestAudioControl &) = default ;
    CreateWmEmbedTaskRequestAudioControl(CreateWmEmbedTaskRequestAudioControl &&) = default ;
    CreateWmEmbedTaskRequestAudioControl(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWmEmbedTaskRequestAudioControl() = default ;
    CreateWmEmbedTaskRequestAudioControl& operator=(const CreateWmEmbedTaskRequestAudioControl &) = default ;
    CreateWmEmbedTaskRequestAudioControl& operator=(CreateWmEmbedTaskRequestAudioControl &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->metadataControl_ == nullptr; };
    // metadataControl Field Functions 
    bool hasMetadataControl() const { return this->metadataControl_ != nullptr;};
    void deleteMetadataControl() { this->metadataControl_ = nullptr;};
    inline const Models::CreateWmEmbedTaskRequestAudioControlMetadataControl & metadataControl() const { DARABONBA_PTR_GET_CONST(metadataControl_, Models::CreateWmEmbedTaskRequestAudioControlMetadataControl) };
    inline Models::CreateWmEmbedTaskRequestAudioControlMetadataControl metadataControl() { DARABONBA_PTR_GET(metadataControl_, Models::CreateWmEmbedTaskRequestAudioControlMetadataControl) };
    inline CreateWmEmbedTaskRequestAudioControl& setMetadataControl(const Models::CreateWmEmbedTaskRequestAudioControlMetadataControl & metadataControl) { DARABONBA_PTR_SET_VALUE(metadataControl_, metadataControl) };
    inline CreateWmEmbedTaskRequestAudioControl& setMetadataControl(Models::CreateWmEmbedTaskRequestAudioControlMetadataControl && metadataControl) { DARABONBA_PTR_SET_RVALUE(metadataControl_, metadataControl) };


  protected:
    std::shared_ptr<Models::CreateWmEmbedTaskRequestAudioControlMetadataControl> metadataControl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
