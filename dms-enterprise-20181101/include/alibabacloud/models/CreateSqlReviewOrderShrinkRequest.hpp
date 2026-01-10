// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESQLREVIEWORDERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESQLREVIEWORDERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class CreateSQLReviewOrderShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSQLReviewOrderShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(Param, paramShrink_);
      DARABONBA_PTR_TO_JSON(RelatedUserList, relatedUserListShrink_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSQLReviewOrderShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(Param, paramShrink_);
      DARABONBA_PTR_FROM_JSON(RelatedUserList, relatedUserListShrink_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    CreateSQLReviewOrderShrinkRequest() = default ;
    CreateSQLReviewOrderShrinkRequest(const CreateSQLReviewOrderShrinkRequest &) = default ;
    CreateSQLReviewOrderShrinkRequest(CreateSQLReviewOrderShrinkRequest &&) = default ;
    CreateSQLReviewOrderShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSQLReviewOrderShrinkRequest() = default ;
    CreateSQLReviewOrderShrinkRequest& operator=(const CreateSQLReviewOrderShrinkRequest &) = default ;
    CreateSQLReviewOrderShrinkRequest& operator=(CreateSQLReviewOrderShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && this->paramShrink_ == nullptr && this->relatedUserListShrink_ == nullptr && this->tid_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline CreateSQLReviewOrderShrinkRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // paramShrink Field Functions 
    bool hasParamShrink() const { return this->paramShrink_ != nullptr;};
    void deleteParamShrink() { this->paramShrink_ = nullptr;};
    inline string getParamShrink() const { DARABONBA_PTR_GET_DEFAULT(paramShrink_, "") };
    inline CreateSQLReviewOrderShrinkRequest& setParamShrink(string paramShrink) { DARABONBA_PTR_SET_VALUE(paramShrink_, paramShrink) };


    // relatedUserListShrink Field Functions 
    bool hasRelatedUserListShrink() const { return this->relatedUserListShrink_ != nullptr;};
    void deleteRelatedUserListShrink() { this->relatedUserListShrink_ = nullptr;};
    inline string getRelatedUserListShrink() const { DARABONBA_PTR_GET_DEFAULT(relatedUserListShrink_, "") };
    inline CreateSQLReviewOrderShrinkRequest& setRelatedUserListShrink(string relatedUserListShrink) { DARABONBA_PTR_SET_VALUE(relatedUserListShrink_, relatedUserListShrink) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline CreateSQLReviewOrderShrinkRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The purpose or objective of the SQL review. This reduces unnecessary communication.
    // 
    // This parameter is required.
    shared_ptr<string> comment_ {};
    // The parameters of the ticket.
    // 
    // This parameter is required.
    shared_ptr<string> paramShrink_ {};
    // The stakeholders involved in this operation. All the specified stakeholders can view the ticket details and take part in the approval process. Irrelevant users other than DMS administrators and database administrators (DBAs) are not allowed to view the ticket details.
    shared_ptr<string> relatedUserListShrink_ {};
    // The ID of the tenant. You can call the [GetUserActiveTenant](https://help.aliyun.com/document_detail/198073.html) or [ListUserTenants](https://help.aliyun.com/document_detail/198074.html) operation to obtain the tenant ID.
    shared_ptr<int64_t> tid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
