// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REVOKETEMPLATEAUTHORITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REVOKETEMPLATEAUTHORITYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class RevokeTemplateAuthorityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RevokeTemplateAuthorityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
      DARABONBA_PTR_TO_JSON(UserIds, userIds_);
    };
    friend void from_json(const Darabonba::Json& j, RevokeTemplateAuthorityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
      DARABONBA_PTR_FROM_JSON(UserIds, userIds_);
    };
    RevokeTemplateAuthorityRequest() = default ;
    RevokeTemplateAuthorityRequest(const RevokeTemplateAuthorityRequest &) = default ;
    RevokeTemplateAuthorityRequest(RevokeTemplateAuthorityRequest &&) = default ;
    RevokeTemplateAuthorityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RevokeTemplateAuthorityRequest() = default ;
    RevokeTemplateAuthorityRequest& operator=(const RevokeTemplateAuthorityRequest &) = default ;
    RevokeTemplateAuthorityRequest& operator=(RevokeTemplateAuthorityRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->templateId_ == nullptr
        && this->tid_ == nullptr && this->userIds_ == nullptr; };
    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
    inline RevokeTemplateAuthorityRequest& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline RevokeTemplateAuthorityRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


    // userIds Field Functions 
    bool hasUserIds() const { return this->userIds_ != nullptr;};
    void deleteUserIds() { this->userIds_ = nullptr;};
    inline string getUserIds() const { DARABONBA_PTR_GET_DEFAULT(userIds_, "") };
    inline RevokeTemplateAuthorityRequest& setUserIds(string userIds) { DARABONBA_PTR_SET_VALUE(userIds_, userIds) };


  protected:
    // The ID of the permission template.
    // 
    // This parameter is required.
    shared_ptr<int64_t> templateId_ {};
    // The ID of the tenant. You can call the [GetUserActiveTenant](https://help.aliyun.com/document_detail/198073.html) or [ListUserTenants](https://help.aliyun.com/document_detail/198074.html) operation to query the tenant ID.
    shared_ptr<int64_t> tid_ {};
    // The IDs of users from whom you want to revoke permissions by using a permission template.
    // 
    // This parameter is required.
    shared_ptr<string> userIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
