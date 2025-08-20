// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWMEMBEDTASKREQUESTDOCUMENTCONTROLBACKGROUNDCONTROL_HPP_
#define ALIBABACLOUD_MODELS_CREATEWMEMBEDTASKREQUESTDOCUMENTCONTROLBACKGROUNDCONTROL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateWmEmbedTaskRequestDocumentControlBackgroundControlBgInvisibleControl.hpp>
#include <alibabacloud/models/CreateWmEmbedTaskRequestDocumentControlBackgroundControlBgVisibleControl.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CreateWmEmbedTaskRequestDocumentControlBackgroundControl : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWmEmbedTaskRequestDocumentControlBackgroundControl& obj) { 
      DARABONBA_PTR_TO_JSON(BgAddInvisible, bgAddInvisible_);
      DARABONBA_PTR_TO_JSON(BgAddVisible, bgAddVisible_);
      DARABONBA_PTR_TO_JSON(BgInvisibleControl, bgInvisibleControl_);
      DARABONBA_PTR_TO_JSON(BgVisibleControl, bgVisibleControl_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWmEmbedTaskRequestDocumentControlBackgroundControl& obj) { 
      DARABONBA_PTR_FROM_JSON(BgAddInvisible, bgAddInvisible_);
      DARABONBA_PTR_FROM_JSON(BgAddVisible, bgAddVisible_);
      DARABONBA_PTR_FROM_JSON(BgInvisibleControl, bgInvisibleControl_);
      DARABONBA_PTR_FROM_JSON(BgVisibleControl, bgVisibleControl_);
    };
    CreateWmEmbedTaskRequestDocumentControlBackgroundControl() = default ;
    CreateWmEmbedTaskRequestDocumentControlBackgroundControl(const CreateWmEmbedTaskRequestDocumentControlBackgroundControl &) = default ;
    CreateWmEmbedTaskRequestDocumentControlBackgroundControl(CreateWmEmbedTaskRequestDocumentControlBackgroundControl &&) = default ;
    CreateWmEmbedTaskRequestDocumentControlBackgroundControl(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWmEmbedTaskRequestDocumentControlBackgroundControl() = default ;
    CreateWmEmbedTaskRequestDocumentControlBackgroundControl& operator=(const CreateWmEmbedTaskRequestDocumentControlBackgroundControl &) = default ;
    CreateWmEmbedTaskRequestDocumentControlBackgroundControl& operator=(CreateWmEmbedTaskRequestDocumentControlBackgroundControl &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bgAddInvisible_ != nullptr
        && this->bgAddVisible_ != nullptr && this->bgInvisibleControl_ != nullptr && this->bgVisibleControl_ != nullptr; };
    // bgAddInvisible Field Functions 
    bool hasBgAddInvisible() const { return this->bgAddInvisible_ != nullptr;};
    void deleteBgAddInvisible() { this->bgAddInvisible_ = nullptr;};
    inline bool bgAddInvisible() const { DARABONBA_PTR_GET_DEFAULT(bgAddInvisible_, false) };
    inline CreateWmEmbedTaskRequestDocumentControlBackgroundControl& setBgAddInvisible(bool bgAddInvisible) { DARABONBA_PTR_SET_VALUE(bgAddInvisible_, bgAddInvisible) };


    // bgAddVisible Field Functions 
    bool hasBgAddVisible() const { return this->bgAddVisible_ != nullptr;};
    void deleteBgAddVisible() { this->bgAddVisible_ = nullptr;};
    inline bool bgAddVisible() const { DARABONBA_PTR_GET_DEFAULT(bgAddVisible_, false) };
    inline CreateWmEmbedTaskRequestDocumentControlBackgroundControl& setBgAddVisible(bool bgAddVisible) { DARABONBA_PTR_SET_VALUE(bgAddVisible_, bgAddVisible) };


    // bgInvisibleControl Field Functions 
    bool hasBgInvisibleControl() const { return this->bgInvisibleControl_ != nullptr;};
    void deleteBgInvisibleControl() { this->bgInvisibleControl_ = nullptr;};
    inline const Models::CreateWmEmbedTaskRequestDocumentControlBackgroundControlBgInvisibleControl & bgInvisibleControl() const { DARABONBA_PTR_GET_CONST(bgInvisibleControl_, Models::CreateWmEmbedTaskRequestDocumentControlBackgroundControlBgInvisibleControl) };
    inline Models::CreateWmEmbedTaskRequestDocumentControlBackgroundControlBgInvisibleControl bgInvisibleControl() { DARABONBA_PTR_GET(bgInvisibleControl_, Models::CreateWmEmbedTaskRequestDocumentControlBackgroundControlBgInvisibleControl) };
    inline CreateWmEmbedTaskRequestDocumentControlBackgroundControl& setBgInvisibleControl(const Models::CreateWmEmbedTaskRequestDocumentControlBackgroundControlBgInvisibleControl & bgInvisibleControl) { DARABONBA_PTR_SET_VALUE(bgInvisibleControl_, bgInvisibleControl) };
    inline CreateWmEmbedTaskRequestDocumentControlBackgroundControl& setBgInvisibleControl(Models::CreateWmEmbedTaskRequestDocumentControlBackgroundControlBgInvisibleControl && bgInvisibleControl) { DARABONBA_PTR_SET_RVALUE(bgInvisibleControl_, bgInvisibleControl) };


    // bgVisibleControl Field Functions 
    bool hasBgVisibleControl() const { return this->bgVisibleControl_ != nullptr;};
    void deleteBgVisibleControl() { this->bgVisibleControl_ = nullptr;};
    inline const Models::CreateWmEmbedTaskRequestDocumentControlBackgroundControlBgVisibleControl & bgVisibleControl() const { DARABONBA_PTR_GET_CONST(bgVisibleControl_, Models::CreateWmEmbedTaskRequestDocumentControlBackgroundControlBgVisibleControl) };
    inline Models::CreateWmEmbedTaskRequestDocumentControlBackgroundControlBgVisibleControl bgVisibleControl() { DARABONBA_PTR_GET(bgVisibleControl_, Models::CreateWmEmbedTaskRequestDocumentControlBackgroundControlBgVisibleControl) };
    inline CreateWmEmbedTaskRequestDocumentControlBackgroundControl& setBgVisibleControl(const Models::CreateWmEmbedTaskRequestDocumentControlBackgroundControlBgVisibleControl & bgVisibleControl) { DARABONBA_PTR_SET_VALUE(bgVisibleControl_, bgVisibleControl) };
    inline CreateWmEmbedTaskRequestDocumentControlBackgroundControl& setBgVisibleControl(Models::CreateWmEmbedTaskRequestDocumentControlBackgroundControlBgVisibleControl && bgVisibleControl) { DARABONBA_PTR_SET_RVALUE(bgVisibleControl_, bgVisibleControl) };


  protected:
    std::shared_ptr<bool> bgAddInvisible_ = nullptr;
    std::shared_ptr<bool> bgAddVisible_ = nullptr;
    std::shared_ptr<Models::CreateWmEmbedTaskRequestDocumentControlBackgroundControlBgInvisibleControl> bgInvisibleControl_ = nullptr;
    std::shared_ptr<Models::CreateWmEmbedTaskRequestDocumentControlBackgroundControlBgVisibleControl> bgVisibleControl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
