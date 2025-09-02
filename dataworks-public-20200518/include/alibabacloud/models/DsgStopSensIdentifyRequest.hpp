// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DSGSTOPSENSIDENTIFYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DSGSTOPSENSIDENTIFYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class DsgStopSensIdentifyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DsgStopSensIdentifyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, DsgStopSensIdentifyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
    };
    DsgStopSensIdentifyRequest() = default ;
    DsgStopSensIdentifyRequest(const DsgStopSensIdentifyRequest &) = default ;
    DsgStopSensIdentifyRequest(DsgStopSensIdentifyRequest &&) = default ;
    DsgStopSensIdentifyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DsgStopSensIdentifyRequest() = default ;
    DsgStopSensIdentifyRequest& operator=(const DsgStopSensIdentifyRequest &) = default ;
    DsgStopSensIdentifyRequest& operator=(DsgStopSensIdentifyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->jobId_ != nullptr
        && this->tenantId_ != nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline int64_t jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, 0L) };
    inline DsgStopSensIdentifyRequest& setJobId(int64_t jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline DsgStopSensIdentifyRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The ID of the sensitive data identification task. You can call the [DsgRunSensIdentify](https://help.aliyun.com/document_detail/2744039.html) operation to obtain the task ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> jobId_ = nullptr;
    // The tenant ID. To obtain the tenant ID, perform the following steps: Log on to the [DataWorks console](https://workbench.data.aliyun.com/console). Find your workspace and go to the DataStudio page. On the DataStudio page, click the logon username in the upper-right corner and click User Info in the Menu section.
    // 
    // This parameter is required.
    std::shared_ptr<string> tenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
