// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATACRONCLEARORDERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATACRONCLEARORDERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class CreateDataCronClearOrderShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataCronClearOrderShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AttachmentKey, attachmentKey_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(Param, paramShrink_);
      DARABONBA_PTR_TO_JSON(RelatedUserList, relatedUserListShrink_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataCronClearOrderShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AttachmentKey, attachmentKey_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(Param, paramShrink_);
      DARABONBA_PTR_FROM_JSON(RelatedUserList, relatedUserListShrink_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    CreateDataCronClearOrderShrinkRequest() = default ;
    CreateDataCronClearOrderShrinkRequest(const CreateDataCronClearOrderShrinkRequest &) = default ;
    CreateDataCronClearOrderShrinkRequest(CreateDataCronClearOrderShrinkRequest &&) = default ;
    CreateDataCronClearOrderShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataCronClearOrderShrinkRequest() = default ;
    CreateDataCronClearOrderShrinkRequest& operator=(const CreateDataCronClearOrderShrinkRequest &) = default ;
    CreateDataCronClearOrderShrinkRequest& operator=(CreateDataCronClearOrderShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attachmentKey_ != nullptr
        && this->comment_ != nullptr && this->paramShrink_ != nullptr && this->relatedUserListShrink_ != nullptr && this->tid_ != nullptr; };
    // attachmentKey Field Functions 
    bool hasAttachmentKey() const { return this->attachmentKey_ != nullptr;};
    void deleteAttachmentKey() { this->attachmentKey_ = nullptr;};
    inline string attachmentKey() const { DARABONBA_PTR_GET_DEFAULT(attachmentKey_, "") };
    inline CreateDataCronClearOrderShrinkRequest& setAttachmentKey(string attachmentKey) { DARABONBA_PTR_SET_VALUE(attachmentKey_, attachmentKey) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline CreateDataCronClearOrderShrinkRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // paramShrink Field Functions 
    bool hasParamShrink() const { return this->paramShrink_ != nullptr;};
    void deleteParamShrink() { this->paramShrink_ = nullptr;};
    inline string paramShrink() const { DARABONBA_PTR_GET_DEFAULT(paramShrink_, "") };
    inline CreateDataCronClearOrderShrinkRequest& setParamShrink(string paramShrink) { DARABONBA_PTR_SET_VALUE(paramShrink_, paramShrink) };


    // relatedUserListShrink Field Functions 
    bool hasRelatedUserListShrink() const { return this->relatedUserListShrink_ != nullptr;};
    void deleteRelatedUserListShrink() { this->relatedUserListShrink_ = nullptr;};
    inline string relatedUserListShrink() const { DARABONBA_PTR_GET_DEFAULT(relatedUserListShrink_, "") };
    inline CreateDataCronClearOrderShrinkRequest& setRelatedUserListShrink(string relatedUserListShrink) { DARABONBA_PTR_SET_VALUE(relatedUserListShrink_, relatedUserListShrink) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline CreateDataCronClearOrderShrinkRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The key of the attachment for the ticket. The attachment provides more instructions for this operation.
    // 
    // You can call the [GetUserUploadFileJob](https://help.aliyun.com/document_detail/206069.html) operation to query the key of the attachment.
    std::shared_ptr<string> attachmentKey_ = nullptr;
    // The purpose or objective of the data change. This reduces unnecessary communication.
    // 
    // This parameter is required.
    std::shared_ptr<string> comment_ = nullptr;
    // The parameters of the ticket.
    // 
    // This parameter is required.
    std::shared_ptr<string> paramShrink_ = nullptr;
    // The stakeholders of this operation. All stakeholders can view the ticket details and assist in the approval process. Irrelevant users other than Data Management (DMS) administrators and database administrators (DBAs) are not allowed to view the ticket details.
    std::shared_ptr<string> relatedUserListShrink_ = nullptr;
    // The ID of the tenant.
    // 
    // >  The ID of the tenant is displayed when you move the pointer over the profile picture in the upper-right corner of the DMS console. For more information, see the [View information about the current tenant](https://help.aliyun.com/document_detail/181330.html) section of the Manage DMS tenants topic.
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
