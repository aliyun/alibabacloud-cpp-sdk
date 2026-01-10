// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEORDERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class CreateOrderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AttachmentKey, attachmentKey_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_ANY_TO_JSON(PluginParam, pluginParam_);
      DARABONBA_PTR_TO_JSON(PluginType, pluginType_);
      DARABONBA_PTR_TO_JSON(RealLoginUserUid, realLoginUserUid_);
      DARABONBA_PTR_TO_JSON(RelatedUserList, relatedUserList_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AttachmentKey, attachmentKey_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_ANY_FROM_JSON(PluginParam, pluginParam_);
      DARABONBA_PTR_FROM_JSON(PluginType, pluginType_);
      DARABONBA_PTR_FROM_JSON(RealLoginUserUid, realLoginUserUid_);
      DARABONBA_PTR_FROM_JSON(RelatedUserList, relatedUserList_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    CreateOrderRequest() = default ;
    CreateOrderRequest(const CreateOrderRequest &) = default ;
    CreateOrderRequest(CreateOrderRequest &&) = default ;
    CreateOrderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrderRequest() = default ;
    CreateOrderRequest& operator=(const CreateOrderRequest &) = default ;
    CreateOrderRequest& operator=(CreateOrderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attachmentKey_ == nullptr
        && this->comment_ == nullptr && this->pluginParam_ == nullptr && this->pluginType_ == nullptr && this->realLoginUserUid_ == nullptr && this->relatedUserList_ == nullptr
        && this->tid_ == nullptr; };
    // attachmentKey Field Functions 
    bool hasAttachmentKey() const { return this->attachmentKey_ != nullptr;};
    void deleteAttachmentKey() { this->attachmentKey_ = nullptr;};
    inline string getAttachmentKey() const { DARABONBA_PTR_GET_DEFAULT(attachmentKey_, "") };
    inline CreateOrderRequest& setAttachmentKey(string attachmentKey) { DARABONBA_PTR_SET_VALUE(attachmentKey_, attachmentKey) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline CreateOrderRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // pluginParam Field Functions 
    bool hasPluginParam() const { return this->pluginParam_ != nullptr;};
    void deletePluginParam() { this->pluginParam_ = nullptr;};
    inline     const Darabonba::Json & getPluginParam() const { DARABONBA_GET(pluginParam_) };
    Darabonba::Json & getPluginParam() { DARABONBA_GET(pluginParam_) };
    inline CreateOrderRequest& setPluginParam(const Darabonba::Json & pluginParam) { DARABONBA_SET_VALUE(pluginParam_, pluginParam) };
    inline CreateOrderRequest& setPluginParam(Darabonba::Json && pluginParam) { DARABONBA_SET_RVALUE(pluginParam_, pluginParam) };


    // pluginType Field Functions 
    bool hasPluginType() const { return this->pluginType_ != nullptr;};
    void deletePluginType() { this->pluginType_ = nullptr;};
    inline string getPluginType() const { DARABONBA_PTR_GET_DEFAULT(pluginType_, "") };
    inline CreateOrderRequest& setPluginType(string pluginType) { DARABONBA_PTR_SET_VALUE(pluginType_, pluginType) };


    // realLoginUserUid Field Functions 
    bool hasRealLoginUserUid() const { return this->realLoginUserUid_ != nullptr;};
    void deleteRealLoginUserUid() { this->realLoginUserUid_ = nullptr;};
    inline string getRealLoginUserUid() const { DARABONBA_PTR_GET_DEFAULT(realLoginUserUid_, "") };
    inline CreateOrderRequest& setRealLoginUserUid(string realLoginUserUid) { DARABONBA_PTR_SET_VALUE(realLoginUserUid_, realLoginUserUid) };


    // relatedUserList Field Functions 
    bool hasRelatedUserList() const { return this->relatedUserList_ != nullptr;};
    void deleteRelatedUserList() { this->relatedUserList_ = nullptr;};
    inline string getRelatedUserList() const { DARABONBA_PTR_GET_DEFAULT(relatedUserList_, "") };
    inline CreateOrderRequest& setRelatedUserList(string relatedUserList) { DARABONBA_PTR_SET_VALUE(relatedUserList_, relatedUserList) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline CreateOrderRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The key of an attachment that is returned after the attachment is uploaded. You can call the [GetUserUploadFileJob](https://help.aliyun.com/document_detail/206069.html) operation to query the key of the attachment.
    shared_ptr<string> attachmentKey_ {};
    // The description of the ticket to be created.
    // 
    // This parameter is required.
    shared_ptr<string> comment_ {};
    // The ticket creation parameter. The value is a JSON string. The value of this parameter differs based on the type of the ticket. For more information, see the **PluginParam parameter** section in this topic.
    // 
    // This parameter is required.
    Darabonba::Json pluginParam_ {};
    // The type of the ticket. For more information, see [PluginType parameter](https://help.aliyun.com/document_detail/429109.html).
    // 
    // This parameter is required.
    shared_ptr<string> pluginType_ {};
    shared_ptr<string> realLoginUserUid_ {};
    // The IDs of the stakeholders that are involved in the ticket. Separate multiple IDs with commas (,).
    shared_ptr<string> relatedUserList_ {};
    // The ID of the tenant. You can call the [GetUserActiveTenant](https://help.aliyun.com/document_detail/198073.html) or [ListUserTenants](https://help.aliyun.com/document_detail/198074.html) operation to obtain the tenant ID.
    shared_ptr<int64_t> tid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
