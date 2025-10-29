// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPLUGINSRESPONSEBODYDATAITEMSATTACHMENTINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTPLUGINSRESPONSEBODYDATAITEMSATTACHMENTINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ListPluginsResponseBodyDataItemsAttachmentInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPluginsResponseBodyDataItemsAttachmentInfo& obj) { 
      DARABONBA_PTR_TO_JSON(enable, enable_);
      DARABONBA_PTR_TO_JSON(pluginAttachmentId, pluginAttachmentId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPluginsResponseBodyDataItemsAttachmentInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(enable, enable_);
      DARABONBA_PTR_FROM_JSON(pluginAttachmentId, pluginAttachmentId_);
    };
    ListPluginsResponseBodyDataItemsAttachmentInfo() = default ;
    ListPluginsResponseBodyDataItemsAttachmentInfo(const ListPluginsResponseBodyDataItemsAttachmentInfo &) = default ;
    ListPluginsResponseBodyDataItemsAttachmentInfo(ListPluginsResponseBodyDataItemsAttachmentInfo &&) = default ;
    ListPluginsResponseBodyDataItemsAttachmentInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPluginsResponseBodyDataItemsAttachmentInfo() = default ;
    ListPluginsResponseBodyDataItemsAttachmentInfo& operator=(const ListPluginsResponseBodyDataItemsAttachmentInfo &) = default ;
    ListPluginsResponseBodyDataItemsAttachmentInfo& operator=(ListPluginsResponseBodyDataItemsAttachmentInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enable_ == nullptr
        && return this->pluginAttachmentId_ == nullptr; };
    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline string enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, "") };
    inline ListPluginsResponseBodyDataItemsAttachmentInfo& setEnable(string enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // pluginAttachmentId Field Functions 
    bool hasPluginAttachmentId() const { return this->pluginAttachmentId_ != nullptr;};
    void deletePluginAttachmentId() { this->pluginAttachmentId_ = nullptr;};
    inline string pluginAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(pluginAttachmentId_, "") };
    inline ListPluginsResponseBodyDataItemsAttachmentInfo& setPluginAttachmentId(string pluginAttachmentId) { DARABONBA_PTR_SET_VALUE(pluginAttachmentId_, pluginAttachmentId) };


  protected:
    std::shared_ptr<string> enable_ = nullptr;
    std::shared_ptr<string> pluginAttachmentId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
