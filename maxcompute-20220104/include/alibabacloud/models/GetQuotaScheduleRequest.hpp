// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUOTASCHEDULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETQUOTASCHEDULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetQuotaScheduleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQuotaScheduleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(displayTimezone, displayTimezone_);
      DARABONBA_PTR_TO_JSON(region, region_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, GetQuotaScheduleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(displayTimezone, displayTimezone_);
      DARABONBA_PTR_FROM_JSON(region, region_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    GetQuotaScheduleRequest() = default ;
    GetQuotaScheduleRequest(const GetQuotaScheduleRequest &) = default ;
    GetQuotaScheduleRequest(GetQuotaScheduleRequest &&) = default ;
    GetQuotaScheduleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQuotaScheduleRequest() = default ;
    GetQuotaScheduleRequest& operator=(const GetQuotaScheduleRequest &) = default ;
    GetQuotaScheduleRequest& operator=(GetQuotaScheduleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->displayTimezone_ != nullptr
        && this->region_ != nullptr && this->tenantId_ != nullptr; };
    // displayTimezone Field Functions 
    bool hasDisplayTimezone() const { return this->displayTimezone_ != nullptr;};
    void deleteDisplayTimezone() { this->displayTimezone_ = nullptr;};
    inline string displayTimezone() const { DARABONBA_PTR_GET_DEFAULT(displayTimezone_, "") };
    inline GetQuotaScheduleRequest& setDisplayTimezone(string displayTimezone) { DARABONBA_PTR_SET_VALUE(displayTimezone_, displayTimezone) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline GetQuotaScheduleRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline GetQuotaScheduleRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The time zone.
    std::shared_ptr<string> displayTimezone_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> region_ = nullptr;
    // The ID of the tenant.
    std::shared_ptr<string> tenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
