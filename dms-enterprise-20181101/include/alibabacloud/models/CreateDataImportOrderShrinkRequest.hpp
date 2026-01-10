// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATAIMPORTORDERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATAIMPORTORDERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class CreateDataImportOrderShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataImportOrderShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AttachmentKey, attachmentKey_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(Param, paramShrink_);
      DARABONBA_PTR_TO_JSON(RealLoginUserUid, realLoginUserUid_);
      DARABONBA_PTR_TO_JSON(RelatedUserList, relatedUserListShrink_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataImportOrderShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AttachmentKey, attachmentKey_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(Param, paramShrink_);
      DARABONBA_PTR_FROM_JSON(RealLoginUserUid, realLoginUserUid_);
      DARABONBA_PTR_FROM_JSON(RelatedUserList, relatedUserListShrink_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    CreateDataImportOrderShrinkRequest() = default ;
    CreateDataImportOrderShrinkRequest(const CreateDataImportOrderShrinkRequest &) = default ;
    CreateDataImportOrderShrinkRequest(CreateDataImportOrderShrinkRequest &&) = default ;
    CreateDataImportOrderShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataImportOrderShrinkRequest() = default ;
    CreateDataImportOrderShrinkRequest& operator=(const CreateDataImportOrderShrinkRequest &) = default ;
    CreateDataImportOrderShrinkRequest& operator=(CreateDataImportOrderShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attachmentKey_ == nullptr
        && this->comment_ == nullptr && this->paramShrink_ == nullptr && this->realLoginUserUid_ == nullptr && this->relatedUserListShrink_ == nullptr && this->tid_ == nullptr; };
    // attachmentKey Field Functions 
    bool hasAttachmentKey() const { return this->attachmentKey_ != nullptr;};
    void deleteAttachmentKey() { this->attachmentKey_ = nullptr;};
    inline string getAttachmentKey() const { DARABONBA_PTR_GET_DEFAULT(attachmentKey_, "") };
    inline CreateDataImportOrderShrinkRequest& setAttachmentKey(string attachmentKey) { DARABONBA_PTR_SET_VALUE(attachmentKey_, attachmentKey) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline CreateDataImportOrderShrinkRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // paramShrink Field Functions 
    bool hasParamShrink() const { return this->paramShrink_ != nullptr;};
    void deleteParamShrink() { this->paramShrink_ = nullptr;};
    inline string getParamShrink() const { DARABONBA_PTR_GET_DEFAULT(paramShrink_, "") };
    inline CreateDataImportOrderShrinkRequest& setParamShrink(string paramShrink) { DARABONBA_PTR_SET_VALUE(paramShrink_, paramShrink) };


    // realLoginUserUid Field Functions 
    bool hasRealLoginUserUid() const { return this->realLoginUserUid_ != nullptr;};
    void deleteRealLoginUserUid() { this->realLoginUserUid_ = nullptr;};
    inline string getRealLoginUserUid() const { DARABONBA_PTR_GET_DEFAULT(realLoginUserUid_, "") };
    inline CreateDataImportOrderShrinkRequest& setRealLoginUserUid(string realLoginUserUid) { DARABONBA_PTR_SET_VALUE(realLoginUserUid_, realLoginUserUid) };


    // relatedUserListShrink Field Functions 
    bool hasRelatedUserListShrink() const { return this->relatedUserListShrink_ != nullptr;};
    void deleteRelatedUserListShrink() { this->relatedUserListShrink_ = nullptr;};
    inline string getRelatedUserListShrink() const { DARABONBA_PTR_GET_DEFAULT(relatedUserListShrink_, "") };
    inline CreateDataImportOrderShrinkRequest& setRelatedUserListShrink(string relatedUserListShrink) { DARABONBA_PTR_SET_VALUE(relatedUserListShrink_, relatedUserListShrink) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline CreateDataImportOrderShrinkRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The key of the attachment that provides more instructions for the ticket. You can call the [GetUserUploadFileJob](https://help.aliyun.com/document_detail/206069.html) operation to obtain the attachment key from the value of the AttachmentKey parameter.
    shared_ptr<string> attachmentKey_ {};
    // The purpose or objective of the data import. This parameter is used to help reduce unnecessary communication.
    // 
    // This parameter is required.
    shared_ptr<string> comment_ {};
    // The parameters of the ticket.
    // 
    // This parameter is required.
    shared_ptr<string> paramShrink_ {};
    shared_ptr<string> realLoginUserUid_ {};
    // The stakeholders of the data import. All stakeholders can view the ticket details and assist in the approval process. Irrelevant users other than DMS administrators and database administrators (DBAs) are not allowed to view the ticket details.
    shared_ptr<string> relatedUserListShrink_ {};
    // The ID of the tenant. You can call the [GetUserActiveTenant](https://help.aliyun.com/document_detail/198073.html) or [ListUserTenants](https://help.aliyun.com/document_detail/198074.html) operation to obtain the tenant ID.
    shared_ptr<int64_t> tid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
