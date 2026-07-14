// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ARCHIVECHATAPPTEMPLATESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ARCHIVECHATAPPTEMPLATESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class ArchiveChatappTemplateShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ArchiveChatappTemplateShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ArchiveType, archiveType_);
      DARABONBA_PTR_TO_JSON(ChannelType, channelType_);
      DARABONBA_PTR_TO_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_PTR_TO_JSON(TemplateList, templateListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ArchiveChatappTemplateShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ArchiveType, archiveType_);
      DARABONBA_PTR_FROM_JSON(ChannelType, channelType_);
      DARABONBA_PTR_FROM_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_PTR_FROM_JSON(TemplateList, templateListShrink_);
    };
    ArchiveChatappTemplateShrinkRequest() = default ;
    ArchiveChatappTemplateShrinkRequest(const ArchiveChatappTemplateShrinkRequest &) = default ;
    ArchiveChatappTemplateShrinkRequest(ArchiveChatappTemplateShrinkRequest &&) = default ;
    ArchiveChatappTemplateShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ArchiveChatappTemplateShrinkRequest() = default ;
    ArchiveChatappTemplateShrinkRequest& operator=(const ArchiveChatappTemplateShrinkRequest &) = default ;
    ArchiveChatappTemplateShrinkRequest& operator=(ArchiveChatappTemplateShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->archiveType_ == nullptr
        && this->channelType_ == nullptr && this->custSpaceId_ == nullptr && this->templateListShrink_ == nullptr; };
    // archiveType Field Functions 
    bool hasArchiveType() const { return this->archiveType_ != nullptr;};
    void deleteArchiveType() { this->archiveType_ = nullptr;};
    inline string getArchiveType() const { DARABONBA_PTR_GET_DEFAULT(archiveType_, "") };
    inline ArchiveChatappTemplateShrinkRequest& setArchiveType(string archiveType) { DARABONBA_PTR_SET_VALUE(archiveType_, archiveType) };


    // channelType Field Functions 
    bool hasChannelType() const { return this->channelType_ != nullptr;};
    void deleteChannelType() { this->channelType_ = nullptr;};
    inline string getChannelType() const { DARABONBA_PTR_GET_DEFAULT(channelType_, "") };
    inline ArchiveChatappTemplateShrinkRequest& setChannelType(string channelType) { DARABONBA_PTR_SET_VALUE(channelType_, channelType) };


    // custSpaceId Field Functions 
    bool hasCustSpaceId() const { return this->custSpaceId_ != nullptr;};
    void deleteCustSpaceId() { this->custSpaceId_ = nullptr;};
    inline string getCustSpaceId() const { DARABONBA_PTR_GET_DEFAULT(custSpaceId_, "") };
    inline ArchiveChatappTemplateShrinkRequest& setCustSpaceId(string custSpaceId) { DARABONBA_PTR_SET_VALUE(custSpaceId_, custSpaceId) };


    // templateListShrink Field Functions 
    bool hasTemplateListShrink() const { return this->templateListShrink_ != nullptr;};
    void deleteTemplateListShrink() { this->templateListShrink_ = nullptr;};
    inline string getTemplateListShrink() const { DARABONBA_PTR_GET_DEFAULT(templateListShrink_, "") };
    inline ArchiveChatappTemplateShrinkRequest& setTemplateListShrink(string templateListShrink) { DARABONBA_PTR_SET_VALUE(templateListShrink_, templateListShrink) };


  protected:
    // The archive type.
    // 
    // This parameter is required.
    shared_ptr<string> archiveType_ {};
    // The channel type. Valid values:
    // 
    // - **WHATSAPP**.
    // 
    // > Only the WhatsApp channel type is supported.
    // 
    // This parameter is required.
    shared_ptr<string> channelType_ {};
    // The space ID of the ISV sub-customer or the instance ID of the direct customer. You can view the Space ID on the <props="china">[Channel Management](https://chatapp.console.aliyun.com/ChannelsManagement)<props="intl">[Channel Management](https://chatapp.console.alibabacloud.com/CustomerList) page.
    // 
    // This parameter is required.
    shared_ptr<string> custSpaceId_ {};
    // The template list.
    // 
    // This parameter is required.
    shared_ptr<string> templateListShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
