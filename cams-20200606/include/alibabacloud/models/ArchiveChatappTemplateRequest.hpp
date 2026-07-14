// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ARCHIVECHATAPPTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ARCHIVECHATAPPTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class ArchiveChatappTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ArchiveChatappTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ArchiveType, archiveType_);
      DARABONBA_PTR_TO_JSON(ChannelType, channelType_);
      DARABONBA_PTR_TO_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_PTR_TO_JSON(TemplateList, templateList_);
    };
    friend void from_json(const Darabonba::Json& j, ArchiveChatappTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ArchiveType, archiveType_);
      DARABONBA_PTR_FROM_JSON(ChannelType, channelType_);
      DARABONBA_PTR_FROM_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_PTR_FROM_JSON(TemplateList, templateList_);
    };
    ArchiveChatappTemplateRequest() = default ;
    ArchiveChatappTemplateRequest(const ArchiveChatappTemplateRequest &) = default ;
    ArchiveChatappTemplateRequest(ArchiveChatappTemplateRequest &&) = default ;
    ArchiveChatappTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ArchiveChatappTemplateRequest() = default ;
    ArchiveChatappTemplateRequest& operator=(const ArchiveChatappTemplateRequest &) = default ;
    ArchiveChatappTemplateRequest& operator=(ArchiveChatappTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TemplateList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TemplateList& obj) { 
        DARABONBA_PTR_TO_JSON(Language, language_);
        DARABONBA_PTR_TO_JSON(TemplateCode, templateCode_);
      };
      friend void from_json(const Darabonba::Json& j, TemplateList& obj) { 
        DARABONBA_PTR_FROM_JSON(Language, language_);
        DARABONBA_PTR_FROM_JSON(TemplateCode, templateCode_);
      };
      TemplateList() = default ;
      TemplateList(const TemplateList &) = default ;
      TemplateList(TemplateList &&) = default ;
      TemplateList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TemplateList() = default ;
      TemplateList& operator=(const TemplateList &) = default ;
      TemplateList& operator=(TemplateList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->language_ == nullptr
        && this->templateCode_ == nullptr; };
      // language Field Functions 
      bool hasLanguage() const { return this->language_ != nullptr;};
      void deleteLanguage() { this->language_ = nullptr;};
      inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
      inline TemplateList& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


      // templateCode Field Functions 
      bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
      void deleteTemplateCode() { this->templateCode_ = nullptr;};
      inline string getTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
      inline TemplateList& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


    protected:
      // The template language. For detailed language codes, see [Language codes](https://help.aliyun.com/document_detail/463420.html).
      // 
      // This parameter is required.
      shared_ptr<string> language_ {};
      // The template code. You can view the template code on the <props="china">[**Channel Management**](https://chatapp.console.aliyun.com/ChannelsManagement)<props="intl">[**Channel Management**](https://chatapp.console.alibabacloud.com/CustomerList) > **Management** > **Template Design** page.
      // 
      // This parameter is required.
      shared_ptr<string> templateCode_ {};
    };

    virtual bool empty() const override { return this->archiveType_ == nullptr
        && this->channelType_ == nullptr && this->custSpaceId_ == nullptr && this->templateList_ == nullptr; };
    // archiveType Field Functions 
    bool hasArchiveType() const { return this->archiveType_ != nullptr;};
    void deleteArchiveType() { this->archiveType_ = nullptr;};
    inline string getArchiveType() const { DARABONBA_PTR_GET_DEFAULT(archiveType_, "") };
    inline ArchiveChatappTemplateRequest& setArchiveType(string archiveType) { DARABONBA_PTR_SET_VALUE(archiveType_, archiveType) };


    // channelType Field Functions 
    bool hasChannelType() const { return this->channelType_ != nullptr;};
    void deleteChannelType() { this->channelType_ = nullptr;};
    inline string getChannelType() const { DARABONBA_PTR_GET_DEFAULT(channelType_, "") };
    inline ArchiveChatappTemplateRequest& setChannelType(string channelType) { DARABONBA_PTR_SET_VALUE(channelType_, channelType) };


    // custSpaceId Field Functions 
    bool hasCustSpaceId() const { return this->custSpaceId_ != nullptr;};
    void deleteCustSpaceId() { this->custSpaceId_ = nullptr;};
    inline string getCustSpaceId() const { DARABONBA_PTR_GET_DEFAULT(custSpaceId_, "") };
    inline ArchiveChatappTemplateRequest& setCustSpaceId(string custSpaceId) { DARABONBA_PTR_SET_VALUE(custSpaceId_, custSpaceId) };


    // templateList Field Functions 
    bool hasTemplateList() const { return this->templateList_ != nullptr;};
    void deleteTemplateList() { this->templateList_ = nullptr;};
    inline const vector<ArchiveChatappTemplateRequest::TemplateList> & getTemplateList() const { DARABONBA_PTR_GET_CONST(templateList_, vector<ArchiveChatappTemplateRequest::TemplateList>) };
    inline vector<ArchiveChatappTemplateRequest::TemplateList> getTemplateList() { DARABONBA_PTR_GET(templateList_, vector<ArchiveChatappTemplateRequest::TemplateList>) };
    inline ArchiveChatappTemplateRequest& setTemplateList(const vector<ArchiveChatappTemplateRequest::TemplateList> & templateList) { DARABONBA_PTR_SET_VALUE(templateList_, templateList) };
    inline ArchiveChatappTemplateRequest& setTemplateList(vector<ArchiveChatappTemplateRequest::TemplateList> && templateList) { DARABONBA_PTR_SET_RVALUE(templateList_, templateList) };


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
    shared_ptr<vector<ArchiveChatappTemplateRequest::TemplateList>> templateList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
