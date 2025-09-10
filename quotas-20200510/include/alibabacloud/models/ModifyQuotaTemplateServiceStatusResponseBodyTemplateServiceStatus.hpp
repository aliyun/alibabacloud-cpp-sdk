// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYQUOTATEMPLATESERVICESTATUSRESPONSEBODYTEMPLATESERVICESTATUS_HPP_
#define ALIBABACLOUD_MODELS_MODIFYQUOTATEMPLATESERVICESTATUSRESPONSEBODYTEMPLATESERVICESTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Quotas20200510
{
namespace Models
{
  class ModifyQuotaTemplateServiceStatusResponseBodyTemplateServiceStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyQuotaTemplateServiceStatusResponseBodyTemplateServiceStatus& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceDirectoryId, resourceDirectoryId_);
      DARABONBA_PTR_TO_JSON(ServiceStatus, serviceStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyQuotaTemplateServiceStatusResponseBodyTemplateServiceStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceDirectoryId, resourceDirectoryId_);
      DARABONBA_PTR_FROM_JSON(ServiceStatus, serviceStatus_);
    };
    ModifyQuotaTemplateServiceStatusResponseBodyTemplateServiceStatus() = default ;
    ModifyQuotaTemplateServiceStatusResponseBodyTemplateServiceStatus(const ModifyQuotaTemplateServiceStatusResponseBodyTemplateServiceStatus &) = default ;
    ModifyQuotaTemplateServiceStatusResponseBodyTemplateServiceStatus(ModifyQuotaTemplateServiceStatusResponseBodyTemplateServiceStatus &&) = default ;
    ModifyQuotaTemplateServiceStatusResponseBodyTemplateServiceStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyQuotaTemplateServiceStatusResponseBodyTemplateServiceStatus() = default ;
    ModifyQuotaTemplateServiceStatusResponseBodyTemplateServiceStatus& operator=(const ModifyQuotaTemplateServiceStatusResponseBodyTemplateServiceStatus &) = default ;
    ModifyQuotaTemplateServiceStatusResponseBodyTemplateServiceStatus& operator=(ModifyQuotaTemplateServiceStatusResponseBodyTemplateServiceStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resourceDirectoryId_ != nullptr
        && this->serviceStatus_ != nullptr; };
    // resourceDirectoryId Field Functions 
    bool hasResourceDirectoryId() const { return this->resourceDirectoryId_ != nullptr;};
    void deleteResourceDirectoryId() { this->resourceDirectoryId_ = nullptr;};
    inline string resourceDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryId_, "") };
    inline ModifyQuotaTemplateServiceStatusResponseBodyTemplateServiceStatus& setResourceDirectoryId(string resourceDirectoryId) { DARABONBA_PTR_SET_VALUE(resourceDirectoryId_, resourceDirectoryId) };


    // serviceStatus Field Functions 
    bool hasServiceStatus() const { return this->serviceStatus_ != nullptr;};
    void deleteServiceStatus() { this->serviceStatus_ = nullptr;};
    inline int32_t serviceStatus() const { DARABONBA_PTR_GET_DEFAULT(serviceStatus_, 0) };
    inline ModifyQuotaTemplateServiceStatusResponseBodyTemplateServiceStatus& setServiceStatus(int32_t serviceStatus) { DARABONBA_PTR_SET_VALUE(serviceStatus_, serviceStatus) };


  protected:
    // The ID of the resource directory.
    std::shared_ptr<string> resourceDirectoryId_ = nullptr;
    // The status of the quota template. Valid values:
    // 
    // *   \\-1: The quota template is disabled.
    // *   1: The quota template is enabled.
    std::shared_ptr<int32_t> serviceStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
