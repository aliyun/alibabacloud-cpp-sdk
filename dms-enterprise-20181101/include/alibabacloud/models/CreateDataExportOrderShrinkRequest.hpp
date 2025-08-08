// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATAEXPORTORDERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATAEXPORTORDERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class CreateDataExportOrderShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataExportOrderShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AttachmentKey, attachmentKey_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(ParentId, parentId_);
      DARABONBA_PTR_TO_JSON(PluginParam, pluginParamShrink_);
      DARABONBA_PTR_TO_JSON(RealLoginUserUid, realLoginUserUid_);
      DARABONBA_PTR_TO_JSON(RelatedUserList, relatedUserListShrink_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataExportOrderShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AttachmentKey, attachmentKey_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
      DARABONBA_PTR_FROM_JSON(PluginParam, pluginParamShrink_);
      DARABONBA_PTR_FROM_JSON(RealLoginUserUid, realLoginUserUid_);
      DARABONBA_PTR_FROM_JSON(RelatedUserList, relatedUserListShrink_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    CreateDataExportOrderShrinkRequest() = default ;
    CreateDataExportOrderShrinkRequest(const CreateDataExportOrderShrinkRequest &) = default ;
    CreateDataExportOrderShrinkRequest(CreateDataExportOrderShrinkRequest &&) = default ;
    CreateDataExportOrderShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataExportOrderShrinkRequest() = default ;
    CreateDataExportOrderShrinkRequest& operator=(const CreateDataExportOrderShrinkRequest &) = default ;
    CreateDataExportOrderShrinkRequest& operator=(CreateDataExportOrderShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attachmentKey_ != nullptr
        && this->comment_ != nullptr && this->parentId_ != nullptr && this->pluginParamShrink_ != nullptr && this->realLoginUserUid_ != nullptr && this->relatedUserListShrink_ != nullptr
        && this->tid_ != nullptr; };
    // attachmentKey Field Functions 
    bool hasAttachmentKey() const { return this->attachmentKey_ != nullptr;};
    void deleteAttachmentKey() { this->attachmentKey_ = nullptr;};
    inline string attachmentKey() const { DARABONBA_PTR_GET_DEFAULT(attachmentKey_, "") };
    inline CreateDataExportOrderShrinkRequest& setAttachmentKey(string attachmentKey) { DARABONBA_PTR_SET_VALUE(attachmentKey_, attachmentKey) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline CreateDataExportOrderShrinkRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline int64_t parentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, 0L) };
    inline CreateDataExportOrderShrinkRequest& setParentId(int64_t parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


    // pluginParamShrink Field Functions 
    bool hasPluginParamShrink() const { return this->pluginParamShrink_ != nullptr;};
    void deletePluginParamShrink() { this->pluginParamShrink_ = nullptr;};
    inline string pluginParamShrink() const { DARABONBA_PTR_GET_DEFAULT(pluginParamShrink_, "") };
    inline CreateDataExportOrderShrinkRequest& setPluginParamShrink(string pluginParamShrink) { DARABONBA_PTR_SET_VALUE(pluginParamShrink_, pluginParamShrink) };


    // realLoginUserUid Field Functions 
    bool hasRealLoginUserUid() const { return this->realLoginUserUid_ != nullptr;};
    void deleteRealLoginUserUid() { this->realLoginUserUid_ = nullptr;};
    inline string realLoginUserUid() const { DARABONBA_PTR_GET_DEFAULT(realLoginUserUid_, "") };
    inline CreateDataExportOrderShrinkRequest& setRealLoginUserUid(string realLoginUserUid) { DARABONBA_PTR_SET_VALUE(realLoginUserUid_, realLoginUserUid) };


    // relatedUserListShrink Field Functions 
    bool hasRelatedUserListShrink() const { return this->relatedUserListShrink_ != nullptr;};
    void deleteRelatedUserListShrink() { this->relatedUserListShrink_ = nullptr;};
    inline string relatedUserListShrink() const { DARABONBA_PTR_GET_DEFAULT(relatedUserListShrink_, "") };
    inline CreateDataExportOrderShrinkRequest& setRelatedUserListShrink(string relatedUserListShrink) { DARABONBA_PTR_SET_VALUE(relatedUserListShrink_, relatedUserListShrink) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline CreateDataExportOrderShrinkRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The key of the attachment that provides more instructions for the ticket. You can call the [GetUserUploadFileJob](https://help.aliyun.com/document_detail/206069.html) operation to obtain the attachment key.
    std::shared_ptr<string> attachmentKey_ = nullptr;
    // The purpose or objective of the ticket. This parameter helps reduce unnecessary communication.
    // 
    // This parameter is required.
    std::shared_ptr<string> comment_ = nullptr;
    // The ID of the parent ticket.
    std::shared_ptr<int64_t> parentId_ = nullptr;
    // The parameters of the ticket.
    // 
    // This parameter is required.
    std::shared_ptr<string> pluginParamShrink_ = nullptr;
    // The UID of the Alibaba Cloud account that actually calls the API.
    std::shared_ptr<string> realLoginUserUid_ = nullptr;
    // The stakeholders involved in this operation.
    std::shared_ptr<string> relatedUserListShrink_ = nullptr;
    // The tenant ID.
    // 
    // > To view the ID of the tenant, move the pointer over the profile picture in the upper-right corner of the DMS console. For more information, see the [View information about the current tenant](https://help.aliyun.com/document_detail/181330.html) section of the "Manage DMS tenants" topic.
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
