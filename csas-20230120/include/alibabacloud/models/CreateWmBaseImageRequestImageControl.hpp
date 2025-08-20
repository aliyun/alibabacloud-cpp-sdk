// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWMBASEIMAGEREQUESTIMAGECONTROL_HPP_
#define ALIBABACLOUD_MODELS_CREATEWMBASEIMAGEREQUESTIMAGECONTROL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateWmBaseImageRequestImageControlLogoVisibleControl.hpp>
#include <alibabacloud/models/CreateWmBaseImageRequestImageControlTextVisibleControl.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CreateWmBaseImageRequestImageControl : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWmBaseImageRequestImageControl& obj) { 
      DARABONBA_PTR_TO_JSON(LogoVisibleControl, logoVisibleControl_);
      DARABONBA_PTR_TO_JSON(TextVisibleControl, textVisibleControl_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWmBaseImageRequestImageControl& obj) { 
      DARABONBA_PTR_FROM_JSON(LogoVisibleControl, logoVisibleControl_);
      DARABONBA_PTR_FROM_JSON(TextVisibleControl, textVisibleControl_);
    };
    CreateWmBaseImageRequestImageControl() = default ;
    CreateWmBaseImageRequestImageControl(const CreateWmBaseImageRequestImageControl &) = default ;
    CreateWmBaseImageRequestImageControl(CreateWmBaseImageRequestImageControl &&) = default ;
    CreateWmBaseImageRequestImageControl(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWmBaseImageRequestImageControl() = default ;
    CreateWmBaseImageRequestImageControl& operator=(const CreateWmBaseImageRequestImageControl &) = default ;
    CreateWmBaseImageRequestImageControl& operator=(CreateWmBaseImageRequestImageControl &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->logoVisibleControl_ != nullptr
        && this->textVisibleControl_ != nullptr; };
    // logoVisibleControl Field Functions 
    bool hasLogoVisibleControl() const { return this->logoVisibleControl_ != nullptr;};
    void deleteLogoVisibleControl() { this->logoVisibleControl_ = nullptr;};
    inline const Models::CreateWmBaseImageRequestImageControlLogoVisibleControl & logoVisibleControl() const { DARABONBA_PTR_GET_CONST(logoVisibleControl_, Models::CreateWmBaseImageRequestImageControlLogoVisibleControl) };
    inline Models::CreateWmBaseImageRequestImageControlLogoVisibleControl logoVisibleControl() { DARABONBA_PTR_GET(logoVisibleControl_, Models::CreateWmBaseImageRequestImageControlLogoVisibleControl) };
    inline CreateWmBaseImageRequestImageControl& setLogoVisibleControl(const Models::CreateWmBaseImageRequestImageControlLogoVisibleControl & logoVisibleControl) { DARABONBA_PTR_SET_VALUE(logoVisibleControl_, logoVisibleControl) };
    inline CreateWmBaseImageRequestImageControl& setLogoVisibleControl(Models::CreateWmBaseImageRequestImageControlLogoVisibleControl && logoVisibleControl) { DARABONBA_PTR_SET_RVALUE(logoVisibleControl_, logoVisibleControl) };


    // textVisibleControl Field Functions 
    bool hasTextVisibleControl() const { return this->textVisibleControl_ != nullptr;};
    void deleteTextVisibleControl() { this->textVisibleControl_ = nullptr;};
    inline const Models::CreateWmBaseImageRequestImageControlTextVisibleControl & textVisibleControl() const { DARABONBA_PTR_GET_CONST(textVisibleControl_, Models::CreateWmBaseImageRequestImageControlTextVisibleControl) };
    inline Models::CreateWmBaseImageRequestImageControlTextVisibleControl textVisibleControl() { DARABONBA_PTR_GET(textVisibleControl_, Models::CreateWmBaseImageRequestImageControlTextVisibleControl) };
    inline CreateWmBaseImageRequestImageControl& setTextVisibleControl(const Models::CreateWmBaseImageRequestImageControlTextVisibleControl & textVisibleControl) { DARABONBA_PTR_SET_VALUE(textVisibleControl_, textVisibleControl) };
    inline CreateWmBaseImageRequestImageControl& setTextVisibleControl(Models::CreateWmBaseImageRequestImageControlTextVisibleControl && textVisibleControl) { DARABONBA_PTR_SET_RVALUE(textVisibleControl_, textVisibleControl) };


  protected:
    std::shared_ptr<Models::CreateWmBaseImageRequestImageControlLogoVisibleControl> logoVisibleControl_ = nullptr;
    std::shared_ptr<Models::CreateWmBaseImageRequestImageControlTextVisibleControl> textVisibleControl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
