// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYQUOTATEMPLATESERVICESTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYQUOTATEMPLATESERVICESTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyQuotaTemplateServiceStatusResponseBodyTemplateServiceStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Quotas20200510
{
namespace Models
{
  class ModifyQuotaTemplateServiceStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyQuotaTemplateServiceStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TemplateServiceStatus, templateServiceStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyQuotaTemplateServiceStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TemplateServiceStatus, templateServiceStatus_);
    };
    ModifyQuotaTemplateServiceStatusResponseBody() = default ;
    ModifyQuotaTemplateServiceStatusResponseBody(const ModifyQuotaTemplateServiceStatusResponseBody &) = default ;
    ModifyQuotaTemplateServiceStatusResponseBody(ModifyQuotaTemplateServiceStatusResponseBody &&) = default ;
    ModifyQuotaTemplateServiceStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyQuotaTemplateServiceStatusResponseBody() = default ;
    ModifyQuotaTemplateServiceStatusResponseBody& operator=(const ModifyQuotaTemplateServiceStatusResponseBody &) = default ;
    ModifyQuotaTemplateServiceStatusResponseBody& operator=(ModifyQuotaTemplateServiceStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->templateServiceStatus_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyQuotaTemplateServiceStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // templateServiceStatus Field Functions 
    bool hasTemplateServiceStatus() const { return this->templateServiceStatus_ != nullptr;};
    void deleteTemplateServiceStatus() { this->templateServiceStatus_ = nullptr;};
    inline const ModifyQuotaTemplateServiceStatusResponseBodyTemplateServiceStatus & templateServiceStatus() const { DARABONBA_PTR_GET_CONST(templateServiceStatus_, ModifyQuotaTemplateServiceStatusResponseBodyTemplateServiceStatus) };
    inline ModifyQuotaTemplateServiceStatusResponseBodyTemplateServiceStatus templateServiceStatus() { DARABONBA_PTR_GET(templateServiceStatus_, ModifyQuotaTemplateServiceStatusResponseBodyTemplateServiceStatus) };
    inline ModifyQuotaTemplateServiceStatusResponseBody& setTemplateServiceStatus(const ModifyQuotaTemplateServiceStatusResponseBodyTemplateServiceStatus & templateServiceStatus) { DARABONBA_PTR_SET_VALUE(templateServiceStatus_, templateServiceStatus) };
    inline ModifyQuotaTemplateServiceStatusResponseBody& setTemplateServiceStatus(ModifyQuotaTemplateServiceStatusResponseBodyTemplateServiceStatus && templateServiceStatus) { DARABONBA_PTR_SET_RVALUE(templateServiceStatus_, templateServiceStatus) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The status of the quota template.
    std::shared_ptr<ModifyQuotaTemplateServiceStatusResponseBodyTemplateServiceStatus> templateServiceStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
