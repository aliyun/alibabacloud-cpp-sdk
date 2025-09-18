// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHDEVICENOTIFICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUSHDEVICENOTIFICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PushDeviceNotificationRequestTenantInfo.hpp>
#include <alibabacloud/models/PushDeviceNotificationRequestBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieoauth2_1_0
{
namespace Models
{
  class PushDeviceNotificationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushDeviceNotificationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TenantInfo, tenantInfo_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, PushDeviceNotificationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TenantInfo, tenantInfo_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    PushDeviceNotificationRequest() = default ;
    PushDeviceNotificationRequest(const PushDeviceNotificationRequest &) = default ;
    PushDeviceNotificationRequest(PushDeviceNotificationRequest &&) = default ;
    PushDeviceNotificationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushDeviceNotificationRequest() = default ;
    PushDeviceNotificationRequest& operator=(const PushDeviceNotificationRequest &) = default ;
    PushDeviceNotificationRequest& operator=(PushDeviceNotificationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tenantInfo_ != nullptr
        && this->body_ != nullptr; };
    // tenantInfo Field Functions 
    bool hasTenantInfo() const { return this->tenantInfo_ != nullptr;};
    void deleteTenantInfo() { this->tenantInfo_ = nullptr;};
    inline const PushDeviceNotificationRequestTenantInfo & tenantInfo() const { DARABONBA_PTR_GET_CONST(tenantInfo_, PushDeviceNotificationRequestTenantInfo) };
    inline PushDeviceNotificationRequestTenantInfo tenantInfo() { DARABONBA_PTR_GET(tenantInfo_, PushDeviceNotificationRequestTenantInfo) };
    inline PushDeviceNotificationRequest& setTenantInfo(const PushDeviceNotificationRequestTenantInfo & tenantInfo) { DARABONBA_PTR_SET_VALUE(tenantInfo_, tenantInfo) };
    inline PushDeviceNotificationRequest& setTenantInfo(PushDeviceNotificationRequestTenantInfo && tenantInfo) { DARABONBA_PTR_SET_RVALUE(tenantInfo_, tenantInfo) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const PushDeviceNotificationRequestBody & body() const { DARABONBA_PTR_GET_CONST(body_, PushDeviceNotificationRequestBody) };
    inline PushDeviceNotificationRequestBody body() { DARABONBA_PTR_GET(body_, PushDeviceNotificationRequestBody) };
    inline PushDeviceNotificationRequest& setBody(const PushDeviceNotificationRequestBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline PushDeviceNotificationRequest& setBody(PushDeviceNotificationRequestBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<PushDeviceNotificationRequestTenantInfo> tenantInfo_ = nullptr;
    std::shared_ptr<PushDeviceNotificationRequestBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieoauth2_1_0
#endif
