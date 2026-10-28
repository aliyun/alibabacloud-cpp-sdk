// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYQUOTATEMPLATESERVICESTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYQUOTATEMPLATESERVICESTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
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
    class TemplateServiceStatus : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TemplateServiceStatus& obj) { 
        DARABONBA_PTR_TO_JSON(ResourceDirectoryId, resourceDirectoryId_);
        DARABONBA_PTR_TO_JSON(ServiceStatus, serviceStatus_);
      };
      friend void from_json(const Darabonba::Json& j, TemplateServiceStatus& obj) { 
        DARABONBA_PTR_FROM_JSON(ResourceDirectoryId, resourceDirectoryId_);
        DARABONBA_PTR_FROM_JSON(ServiceStatus, serviceStatus_);
      };
      TemplateServiceStatus() = default ;
      TemplateServiceStatus(const TemplateServiceStatus &) = default ;
      TemplateServiceStatus(TemplateServiceStatus &&) = default ;
      TemplateServiceStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TemplateServiceStatus() = default ;
      TemplateServiceStatus& operator=(const TemplateServiceStatus &) = default ;
      TemplateServiceStatus& operator=(TemplateServiceStatus &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->resourceDirectoryId_ == nullptr
        && this->serviceStatus_ == nullptr; };
      // resourceDirectoryId Field Functions 
      bool hasResourceDirectoryId() const { return this->resourceDirectoryId_ != nullptr;};
      void deleteResourceDirectoryId() { this->resourceDirectoryId_ = nullptr;};
      inline string getResourceDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryId_, "") };
      inline TemplateServiceStatus& setResourceDirectoryId(string resourceDirectoryId) { DARABONBA_PTR_SET_VALUE(resourceDirectoryId_, resourceDirectoryId) };


      // serviceStatus Field Functions 
      bool hasServiceStatus() const { return this->serviceStatus_ != nullptr;};
      void deleteServiceStatus() { this->serviceStatus_ = nullptr;};
      inline int32_t getServiceStatus() const { DARABONBA_PTR_GET_DEFAULT(serviceStatus_, 0) };
      inline TemplateServiceStatus& setServiceStatus(int32_t serviceStatus) { DARABONBA_PTR_SET_VALUE(serviceStatus_, serviceStatus) };


    protected:
      // The ID of the resource directory.
      shared_ptr<string> resourceDirectoryId_ {};
      // The status of the quota template. Valid values:
      // 
      // - -1: The quota template is disabled.
      // 
      // - 1: The quota template is enabled.
      shared_ptr<int32_t> serviceStatus_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->templateServiceStatus_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyQuotaTemplateServiceStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // templateServiceStatus Field Functions 
    bool hasTemplateServiceStatus() const { return this->templateServiceStatus_ != nullptr;};
    void deleteTemplateServiceStatus() { this->templateServiceStatus_ = nullptr;};
    inline const ModifyQuotaTemplateServiceStatusResponseBody::TemplateServiceStatus & getTemplateServiceStatus() const { DARABONBA_PTR_GET_CONST(templateServiceStatus_, ModifyQuotaTemplateServiceStatusResponseBody::TemplateServiceStatus) };
    inline ModifyQuotaTemplateServiceStatusResponseBody::TemplateServiceStatus getTemplateServiceStatus() { DARABONBA_PTR_GET(templateServiceStatus_, ModifyQuotaTemplateServiceStatusResponseBody::TemplateServiceStatus) };
    inline ModifyQuotaTemplateServiceStatusResponseBody& setTemplateServiceStatus(const ModifyQuotaTemplateServiceStatusResponseBody::TemplateServiceStatus & templateServiceStatus) { DARABONBA_PTR_SET_VALUE(templateServiceStatus_, templateServiceStatus) };
    inline ModifyQuotaTemplateServiceStatusResponseBody& setTemplateServiceStatus(ModifyQuotaTemplateServiceStatusResponseBody::TemplateServiceStatus && templateServiceStatus) { DARABONBA_PTR_SET_RVALUE(templateServiceStatus_, templateServiceStatus) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The status of the quota template.
    shared_ptr<ModifyQuotaTemplateServiceStatusResponseBody::TemplateServiceStatus> templateServiceStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
