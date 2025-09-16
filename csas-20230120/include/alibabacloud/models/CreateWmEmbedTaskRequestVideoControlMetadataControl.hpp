// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWMEMBEDTASKREQUESTVIDEOCONTROLMETADATACONTROL_HPP_
#define ALIBABACLOUD_MODELS_CREATEWMEMBEDTASKREQUESTVIDEOCONTROLMETADATACONTROL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CreateWmEmbedTaskRequestVideoControlMetadataControl : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWmEmbedTaskRequestVideoControlMetadataControl& obj) { 
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(XmpKvBase64, xmpKvBase64_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWmEmbedTaskRequestVideoControlMetadataControl& obj) { 
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(XmpKvBase64, xmpKvBase64_);
    };
    CreateWmEmbedTaskRequestVideoControlMetadataControl() = default ;
    CreateWmEmbedTaskRequestVideoControlMetadataControl(const CreateWmEmbedTaskRequestVideoControlMetadataControl &) = default ;
    CreateWmEmbedTaskRequestVideoControlMetadataControl(CreateWmEmbedTaskRequestVideoControlMetadataControl &&) = default ;
    CreateWmEmbedTaskRequestVideoControlMetadataControl(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWmEmbedTaskRequestVideoControlMetadataControl() = default ;
    CreateWmEmbedTaskRequestVideoControlMetadataControl& operator=(const CreateWmEmbedTaskRequestVideoControlMetadataControl &) = default ;
    CreateWmEmbedTaskRequestVideoControlMetadataControl& operator=(CreateWmEmbedTaskRequestVideoControlMetadataControl &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enable_ != nullptr
        && this->xmpKvBase64_ != nullptr; };
    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline CreateWmEmbedTaskRequestVideoControlMetadataControl& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // xmpKvBase64 Field Functions 
    bool hasXmpKvBase64() const { return this->xmpKvBase64_ != nullptr;};
    void deleteXmpKvBase64() { this->xmpKvBase64_ = nullptr;};
    inline string xmpKvBase64() const { DARABONBA_PTR_GET_DEFAULT(xmpKvBase64_, "") };
    inline CreateWmEmbedTaskRequestVideoControlMetadataControl& setXmpKvBase64(string xmpKvBase64) { DARABONBA_PTR_SET_VALUE(xmpKvBase64_, xmpKvBase64) };


  protected:
    std::shared_ptr<bool> enable_ = nullptr;
    std::shared_ptr<string> xmpKvBase64_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
