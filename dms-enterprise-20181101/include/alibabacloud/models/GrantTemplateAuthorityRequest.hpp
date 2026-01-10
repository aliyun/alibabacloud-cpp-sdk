// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GRANTTEMPLATEAUTHORITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GRANTTEMPLATEAUTHORITYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GrantTemplateAuthorityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GrantTemplateAuthorityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(ExpireDate, expireDate_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
      DARABONBA_PTR_TO_JSON(UserIds, userIds_);
    };
    friend void from_json(const Darabonba::Json& j, GrantTemplateAuthorityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(ExpireDate, expireDate_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
      DARABONBA_PTR_FROM_JSON(UserIds, userIds_);
    };
    GrantTemplateAuthorityRequest() = default ;
    GrantTemplateAuthorityRequest(const GrantTemplateAuthorityRequest &) = default ;
    GrantTemplateAuthorityRequest(GrantTemplateAuthorityRequest &&) = default ;
    GrantTemplateAuthorityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GrantTemplateAuthorityRequest() = default ;
    GrantTemplateAuthorityRequest& operator=(const GrantTemplateAuthorityRequest &) = default ;
    GrantTemplateAuthorityRequest& operator=(GrantTemplateAuthorityRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && this->expireDate_ == nullptr && this->templateId_ == nullptr && this->tid_ == nullptr && this->userIds_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline GrantTemplateAuthorityRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // expireDate Field Functions 
    bool hasExpireDate() const { return this->expireDate_ != nullptr;};
    void deleteExpireDate() { this->expireDate_ = nullptr;};
    inline string getExpireDate() const { DARABONBA_PTR_GET_DEFAULT(expireDate_, "") };
    inline GrantTemplateAuthorityRequest& setExpireDate(string expireDate) { DARABONBA_PTR_SET_VALUE(expireDate_, expireDate) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
    inline GrantTemplateAuthorityRequest& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline GrantTemplateAuthorityRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


    // userIds Field Functions 
    bool hasUserIds() const { return this->userIds_ != nullptr;};
    void deleteUserIds() { this->userIds_ = nullptr;};
    inline string getUserIds() const { DARABONBA_PTR_GET_DEFAULT(userIds_, "") };
    inline GrantTemplateAuthorityRequest& setUserIds(string userIds) { DARABONBA_PTR_SET_VALUE(userIds_, userIds) };


  protected:
    // The reason why you want to grant permissions on resources to the users by using the permission template.
    shared_ptr<string> comment_ {};
    // The time when the permission expires. Specify the time in the yyyy-MM-DD HH:mm:ss format.
    // 
    // This parameter is required.
    shared_ptr<string> expireDate_ {};
    // The ID of the permission template.
    // 
    // This parameter is required.
    shared_ptr<int64_t> templateId_ {};
    // The ID of the tenant. You can call the [GetUserActiveTenant](https://help.aliyun.com/document_detail/198073.html) or [ListUserTenants](https://help.aliyun.com/document_detail/198074.html) operation to query the tenant ID.
    shared_ptr<int64_t> tid_ {};
    // The IDs of users to which you want to grant permissions on resources by using the permission template.
    // 
    // This parameter is required.
    shared_ptr<string> userIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
