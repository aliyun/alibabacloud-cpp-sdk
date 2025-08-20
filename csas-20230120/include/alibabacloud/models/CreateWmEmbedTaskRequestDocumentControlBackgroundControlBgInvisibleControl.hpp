// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWMEMBEDTASKREQUESTDOCUMENTCONTROLBACKGROUNDCONTROLBGINVISIBLECONTROL_HPP_
#define ALIBABACLOUD_MODELS_CREATEWMEMBEDTASKREQUESTDOCUMENTCONTROLBACKGROUNDCONTROLBGINVISIBLECONTROL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CreateWmEmbedTaskRequestDocumentControlBackgroundControlBgInvisibleControl : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWmEmbedTaskRequestDocumentControlBackgroundControlBgInvisibleControl& obj) { 
      DARABONBA_PTR_TO_JSON(Opacity, opacity_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWmEmbedTaskRequestDocumentControlBackgroundControlBgInvisibleControl& obj) { 
      DARABONBA_PTR_FROM_JSON(Opacity, opacity_);
    };
    CreateWmEmbedTaskRequestDocumentControlBackgroundControlBgInvisibleControl() = default ;
    CreateWmEmbedTaskRequestDocumentControlBackgroundControlBgInvisibleControl(const CreateWmEmbedTaskRequestDocumentControlBackgroundControlBgInvisibleControl &) = default ;
    CreateWmEmbedTaskRequestDocumentControlBackgroundControlBgInvisibleControl(CreateWmEmbedTaskRequestDocumentControlBackgroundControlBgInvisibleControl &&) = default ;
    CreateWmEmbedTaskRequestDocumentControlBackgroundControlBgInvisibleControl(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWmEmbedTaskRequestDocumentControlBackgroundControlBgInvisibleControl() = default ;
    CreateWmEmbedTaskRequestDocumentControlBackgroundControlBgInvisibleControl& operator=(const CreateWmEmbedTaskRequestDocumentControlBackgroundControlBgInvisibleControl &) = default ;
    CreateWmEmbedTaskRequestDocumentControlBackgroundControlBgInvisibleControl& operator=(CreateWmEmbedTaskRequestDocumentControlBackgroundControlBgInvisibleControl &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->opacity_ != nullptr; };
    // opacity Field Functions 
    bool hasOpacity() const { return this->opacity_ != nullptr;};
    void deleteOpacity() { this->opacity_ = nullptr;};
    inline int64_t opacity() const { DARABONBA_PTR_GET_DEFAULT(opacity_, 0L) };
    inline CreateWmEmbedTaskRequestDocumentControlBackgroundControlBgInvisibleControl& setOpacity(int64_t opacity) { DARABONBA_PTR_SET_VALUE(opacity_, opacity) };


  protected:
    std::shared_ptr<int64_t> opacity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
