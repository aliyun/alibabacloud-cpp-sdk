// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETEMPLATEQUOTAITEMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATETEMPLATEQUOTAITEMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Quotas20200510
{
namespace Models
{
  class CreateTemplateQuotaItemResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTemplateQuotaItemResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTemplateQuotaItemResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateTemplateQuotaItemResponseBody() = default ;
    CreateTemplateQuotaItemResponseBody(const CreateTemplateQuotaItemResponseBody &) = default ;
    CreateTemplateQuotaItemResponseBody(CreateTemplateQuotaItemResponseBody &&) = default ;
    CreateTemplateQuotaItemResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTemplateQuotaItemResponseBody() = default ;
    CreateTemplateQuotaItemResponseBody& operator=(const CreateTemplateQuotaItemResponseBody &) = default ;
    CreateTemplateQuotaItemResponseBody& operator=(CreateTemplateQuotaItemResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->requestId_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline CreateTemplateQuotaItemResponseBody& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateTemplateQuotaItemResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the quota template.
    std::shared_ptr<string> id_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
