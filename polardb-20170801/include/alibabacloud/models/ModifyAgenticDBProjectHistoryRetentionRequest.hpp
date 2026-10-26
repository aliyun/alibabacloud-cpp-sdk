// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAGENTICDBPROJECTHISTORYRETENTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAGENTICDBPROJECTHISTORYRETENTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifyAgenticDBProjectHistoryRetentionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAgenticDBProjectHistoryRetentionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(HistoryRetentionSeconds, historyRetentionSeconds_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAgenticDBProjectHistoryRetentionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(HistoryRetentionSeconds, historyRetentionSeconds_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
    };
    ModifyAgenticDBProjectHistoryRetentionRequest() = default ;
    ModifyAgenticDBProjectHistoryRetentionRequest(const ModifyAgenticDBProjectHistoryRetentionRequest &) = default ;
    ModifyAgenticDBProjectHistoryRetentionRequest(ModifyAgenticDBProjectHistoryRetentionRequest &&) = default ;
    ModifyAgenticDBProjectHistoryRetentionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAgenticDBProjectHistoryRetentionRequest() = default ;
    ModifyAgenticDBProjectHistoryRetentionRequest& operator=(const ModifyAgenticDBProjectHistoryRetentionRequest &) = default ;
    ModifyAgenticDBProjectHistoryRetentionRequest& operator=(ModifyAgenticDBProjectHistoryRetentionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->historyRetentionSeconds_ == nullptr && this->projectId_ == nullptr && this->regionId_ == nullptr && this->tenantId_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyAgenticDBProjectHistoryRetentionRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // historyRetentionSeconds Field Functions 
    bool hasHistoryRetentionSeconds() const { return this->historyRetentionSeconds_ != nullptr;};
    void deleteHistoryRetentionSeconds() { this->historyRetentionSeconds_ = nullptr;};
    inline int64_t getHistoryRetentionSeconds() const { DARABONBA_PTR_GET_DEFAULT(historyRetentionSeconds_, 0L) };
    inline ModifyAgenticDBProjectHistoryRetentionRequest& setHistoryRetentionSeconds(int64_t historyRetentionSeconds) { DARABONBA_PTR_SET_VALUE(historyRetentionSeconds_, historyRetentionSeconds) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline ModifyAgenticDBProjectHistoryRetentionRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyAgenticDBProjectHistoryRetentionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ModifyAgenticDBProjectHistoryRetentionRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The AgenticDB cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The default valid range is 3,600 to 2,592,000 seconds (1 hour to 30 days), inclusive, subject to service configurations. Shortening the duration may clear historical data. Extending the duration does not restore cleared data.
    // 
    // This parameter is required.
    shared_ptr<int64_t> historyRetentionSeconds_ {};
    // The ID of the target project.
    // 
    // This parameter is required.
    shared_ptr<string> projectId_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
