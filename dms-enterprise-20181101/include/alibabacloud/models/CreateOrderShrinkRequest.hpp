// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORDERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEORDERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class CreateOrderShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrderShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AttachmentKey, attachmentKey_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(PluginParam, pluginParamShrink_);
      DARABONBA_PTR_TO_JSON(PluginType, pluginType_);
      DARABONBA_PTR_TO_JSON(RelatedUserList, relatedUserList_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrderShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AttachmentKey, attachmentKey_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(PluginParam, pluginParamShrink_);
      DARABONBA_PTR_FROM_JSON(PluginType, pluginType_);
      DARABONBA_PTR_FROM_JSON(RelatedUserList, relatedUserList_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    CreateOrderShrinkRequest() = default ;
    CreateOrderShrinkRequest(const CreateOrderShrinkRequest &) = default ;
    CreateOrderShrinkRequest(CreateOrderShrinkRequest &&) = default ;
    CreateOrderShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrderShrinkRequest() = default ;
    CreateOrderShrinkRequest& operator=(const CreateOrderShrinkRequest &) = default ;
    CreateOrderShrinkRequest& operator=(CreateOrderShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attachmentKey_ == nullptr
        && return this->comment_ == nullptr && return this->pluginParamShrink_ == nullptr && return this->pluginType_ == nullptr && return this->relatedUserList_ == nullptr && return this->tid_ == nullptr; };
    // attachmentKey Field Functions 
    bool hasAttachmentKey() const { return this->attachmentKey_ != nullptr;};
    void deleteAttachmentKey() { this->attachmentKey_ = nullptr;};
    inline string attachmentKey() const { DARABONBA_PTR_GET_DEFAULT(attachmentKey_, "") };
    inline CreateOrderShrinkRequest& setAttachmentKey(string attachmentKey) { DARABONBA_PTR_SET_VALUE(attachmentKey_, attachmentKey) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline CreateOrderShrinkRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // pluginParamShrink Field Functions 
    bool hasPluginParamShrink() const { return this->pluginParamShrink_ != nullptr;};
    void deletePluginParamShrink() { this->pluginParamShrink_ = nullptr;};
    inline string pluginParamShrink() const { DARABONBA_PTR_GET_DEFAULT(pluginParamShrink_, "") };
    inline CreateOrderShrinkRequest& setPluginParamShrink(string pluginParamShrink) { DARABONBA_PTR_SET_VALUE(pluginParamShrink_, pluginParamShrink) };


    // pluginType Field Functions 
    bool hasPluginType() const { return this->pluginType_ != nullptr;};
    void deletePluginType() { this->pluginType_ = nullptr;};
    inline string pluginType() const { DARABONBA_PTR_GET_DEFAULT(pluginType_, "") };
    inline CreateOrderShrinkRequest& setPluginType(string pluginType) { DARABONBA_PTR_SET_VALUE(pluginType_, pluginType) };


    // relatedUserList Field Functions 
    bool hasRelatedUserList() const { return this->relatedUserList_ != nullptr;};
    void deleteRelatedUserList() { this->relatedUserList_ = nullptr;};
    inline string relatedUserList() const { DARABONBA_PTR_GET_DEFAULT(relatedUserList_, "") };
    inline CreateOrderShrinkRequest& setRelatedUserList(string relatedUserList) { DARABONBA_PTR_SET_VALUE(relatedUserList_, relatedUserList) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline CreateOrderShrinkRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The key of an attachment that is returned after the attachment is uploaded. You can call the [GetUserUploadFileJob](https://help.aliyun.com/document_detail/206069.html) operation to query the key of the attachment.
    std::shared_ptr<string> attachmentKey_ = nullptr;
    // The description of the ticket to be created.
    // 
    // This parameter is required.
    std::shared_ptr<string> comment_ = nullptr;
    // The ticket creation parameter. The value is a JSON string. The value of this parameter differs based on the type of the ticket. For more information, see the **PluginParam parameter** section in this topic.
    // 
    // This parameter is required.
    std::shared_ptr<string> pluginParamShrink_ = nullptr;
    // The type of the ticket. For more information, see [PluginType parameter](https://help.aliyun.com/document_detail/429109.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> pluginType_ = nullptr;
    // The IDs of the stakeholders that are involved in the ticket. Separate multiple IDs with commas (,).
    std::shared_ptr<string> relatedUserList_ = nullptr;
    // The ID of the tenant. You can call the [GetUserActiveTenant](https://help.aliyun.com/document_detail/198073.html) or [ListUserTenants](https://help.aliyun.com/document_detail/198074.html) operation to obtain the tenant ID.
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
