// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWMEMBEDTASKREQUESTDOCUMENTCONTROL_HPP_
#define ALIBABACLOUD_MODELS_CREATEWMEMBEDTASKREQUESTDOCUMENTCONTROL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateWmEmbedTaskRequestDocumentControlBackgroundControl.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CreateWmEmbedTaskRequestDocumentControl : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWmEmbedTaskRequestDocumentControl& obj) { 
      DARABONBA_PTR_TO_JSON(BackgroundControl, backgroundControl_);
      DARABONBA_PTR_TO_JSON(InvisibleAntiAllCopy, invisibleAntiAllCopy_);
      DARABONBA_PTR_TO_JSON(InvisibleAntiTextCopy, invisibleAntiTextCopy_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWmEmbedTaskRequestDocumentControl& obj) { 
      DARABONBA_PTR_FROM_JSON(BackgroundControl, backgroundControl_);
      DARABONBA_PTR_FROM_JSON(InvisibleAntiAllCopy, invisibleAntiAllCopy_);
      DARABONBA_PTR_FROM_JSON(InvisibleAntiTextCopy, invisibleAntiTextCopy_);
    };
    CreateWmEmbedTaskRequestDocumentControl() = default ;
    CreateWmEmbedTaskRequestDocumentControl(const CreateWmEmbedTaskRequestDocumentControl &) = default ;
    CreateWmEmbedTaskRequestDocumentControl(CreateWmEmbedTaskRequestDocumentControl &&) = default ;
    CreateWmEmbedTaskRequestDocumentControl(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWmEmbedTaskRequestDocumentControl() = default ;
    CreateWmEmbedTaskRequestDocumentControl& operator=(const CreateWmEmbedTaskRequestDocumentControl &) = default ;
    CreateWmEmbedTaskRequestDocumentControl& operator=(CreateWmEmbedTaskRequestDocumentControl &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->backgroundControl_ != nullptr
        && this->invisibleAntiAllCopy_ != nullptr && this->invisibleAntiTextCopy_ != nullptr; };
    // backgroundControl Field Functions 
    bool hasBackgroundControl() const { return this->backgroundControl_ != nullptr;};
    void deleteBackgroundControl() { this->backgroundControl_ = nullptr;};
    inline const Models::CreateWmEmbedTaskRequestDocumentControlBackgroundControl & backgroundControl() const { DARABONBA_PTR_GET_CONST(backgroundControl_, Models::CreateWmEmbedTaskRequestDocumentControlBackgroundControl) };
    inline Models::CreateWmEmbedTaskRequestDocumentControlBackgroundControl backgroundControl() { DARABONBA_PTR_GET(backgroundControl_, Models::CreateWmEmbedTaskRequestDocumentControlBackgroundControl) };
    inline CreateWmEmbedTaskRequestDocumentControl& setBackgroundControl(const Models::CreateWmEmbedTaskRequestDocumentControlBackgroundControl & backgroundControl) { DARABONBA_PTR_SET_VALUE(backgroundControl_, backgroundControl) };
    inline CreateWmEmbedTaskRequestDocumentControl& setBackgroundControl(Models::CreateWmEmbedTaskRequestDocumentControlBackgroundControl && backgroundControl) { DARABONBA_PTR_SET_RVALUE(backgroundControl_, backgroundControl) };


    // invisibleAntiAllCopy Field Functions 
    bool hasInvisibleAntiAllCopy() const { return this->invisibleAntiAllCopy_ != nullptr;};
    void deleteInvisibleAntiAllCopy() { this->invisibleAntiAllCopy_ = nullptr;};
    inline bool invisibleAntiAllCopy() const { DARABONBA_PTR_GET_DEFAULT(invisibleAntiAllCopy_, false) };
    inline CreateWmEmbedTaskRequestDocumentControl& setInvisibleAntiAllCopy(bool invisibleAntiAllCopy) { DARABONBA_PTR_SET_VALUE(invisibleAntiAllCopy_, invisibleAntiAllCopy) };


    // invisibleAntiTextCopy Field Functions 
    bool hasInvisibleAntiTextCopy() const { return this->invisibleAntiTextCopy_ != nullptr;};
    void deleteInvisibleAntiTextCopy() { this->invisibleAntiTextCopy_ = nullptr;};
    inline bool invisibleAntiTextCopy() const { DARABONBA_PTR_GET_DEFAULT(invisibleAntiTextCopy_, false) };
    inline CreateWmEmbedTaskRequestDocumentControl& setInvisibleAntiTextCopy(bool invisibleAntiTextCopy) { DARABONBA_PTR_SET_VALUE(invisibleAntiTextCopy_, invisibleAntiTextCopy) };


  protected:
    std::shared_ptr<Models::CreateWmEmbedTaskRequestDocumentControlBackgroundControl> backgroundControl_ = nullptr;
    std::shared_ptr<bool> invisibleAntiAllCopy_ = nullptr;
    std::shared_ptr<bool> invisibleAntiTextCopy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
