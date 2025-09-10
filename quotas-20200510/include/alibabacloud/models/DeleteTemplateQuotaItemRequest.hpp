// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETETEMPLATEQUOTAITEMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETETEMPLATEQUOTAITEMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Quotas20200510
{
namespace Models
{
  class DeleteTemplateQuotaItemRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteTemplateQuotaItemRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteTemplateQuotaItemRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    DeleteTemplateQuotaItemRequest() = default ;
    DeleteTemplateQuotaItemRequest(const DeleteTemplateQuotaItemRequest &) = default ;
    DeleteTemplateQuotaItemRequest(DeleteTemplateQuotaItemRequest &&) = default ;
    DeleteTemplateQuotaItemRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteTemplateQuotaItemRequest() = default ;
    DeleteTemplateQuotaItemRequest& operator=(const DeleteTemplateQuotaItemRequest &) = default ;
    DeleteTemplateQuotaItemRequest& operator=(DeleteTemplateQuotaItemRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DeleteTemplateQuotaItemRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    // The ID of the quota template.
    // 
    // You can call the [ListQuotaApplicationTemplates](https://help.aliyun.com/document_detail/450403.html) operation to obtain the ID of a quota template.
    // 
    // This parameter is required.
    std::shared_ptr<string> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
