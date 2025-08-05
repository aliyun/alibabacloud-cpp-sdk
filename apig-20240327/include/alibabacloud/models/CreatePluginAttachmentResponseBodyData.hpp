// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPLUGINATTACHMENTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEPLUGINATTACHMENTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class CreatePluginAttachmentResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePluginAttachmentResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(pluginAttachmentId, pluginAttachmentId_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePluginAttachmentResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(pluginAttachmentId, pluginAttachmentId_);
    };
    CreatePluginAttachmentResponseBodyData() = default ;
    CreatePluginAttachmentResponseBodyData(const CreatePluginAttachmentResponseBodyData &) = default ;
    CreatePluginAttachmentResponseBodyData(CreatePluginAttachmentResponseBodyData &&) = default ;
    CreatePluginAttachmentResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePluginAttachmentResponseBodyData() = default ;
    CreatePluginAttachmentResponseBodyData& operator=(const CreatePluginAttachmentResponseBodyData &) = default ;
    CreatePluginAttachmentResponseBodyData& operator=(CreatePluginAttachmentResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pluginAttachmentId_ != nullptr; };
    // pluginAttachmentId Field Functions 
    bool hasPluginAttachmentId() const { return this->pluginAttachmentId_ != nullptr;};
    void deletePluginAttachmentId() { this->pluginAttachmentId_ = nullptr;};
    inline string pluginAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(pluginAttachmentId_, "") };
    inline CreatePluginAttachmentResponseBodyData& setPluginAttachmentId(string pluginAttachmentId) { DARABONBA_PTR_SET_VALUE(pluginAttachmentId_, pluginAttachmentId) };


  protected:
    std::shared_ptr<string> pluginAttachmentId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
