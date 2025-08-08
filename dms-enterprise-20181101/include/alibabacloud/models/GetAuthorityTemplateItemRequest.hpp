// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUTHORITYTEMPLATEITEMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAUTHORITYTEMPLATEITEMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetAuthorityTemplateItemRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAuthorityTemplateItemRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, GetAuthorityTemplateItemRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    GetAuthorityTemplateItemRequest() = default ;
    GetAuthorityTemplateItemRequest(const GetAuthorityTemplateItemRequest &) = default ;
    GetAuthorityTemplateItemRequest(GetAuthorityTemplateItemRequest &&) = default ;
    GetAuthorityTemplateItemRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAuthorityTemplateItemRequest() = default ;
    GetAuthorityTemplateItemRequest& operator=(const GetAuthorityTemplateItemRequest &) = default ;
    GetAuthorityTemplateItemRequest& operator=(GetAuthorityTemplateItemRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->templateId_ != nullptr
        && this->tid_ != nullptr; };
    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int64_t templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
    inline GetAuthorityTemplateItemRequest& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline GetAuthorityTemplateItemRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The ID of the permission template.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> templateId_ = nullptr;
    // The ID of the tenant. You can call the [GetUserActiveTenant](https://help.aliyun.com/document_detail/198073.html) or [ListUserTenants](https://help.aliyun.com/document_detail/198074.html) operation to query the tenant ID.
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
