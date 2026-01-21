// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYHYBRIDMONITORSLSGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYHYBRIDMONITORSLSGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class ModifyHybridMonitorSLSGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyHybridMonitorSLSGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SLSGroupConfig, SLSGroupConfig_);
      DARABONBA_PTR_TO_JSON(SLSGroupDescription, SLSGroupDescription_);
      DARABONBA_PTR_TO_JSON(SLSGroupName, SLSGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyHybridMonitorSLSGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SLSGroupConfig, SLSGroupConfig_);
      DARABONBA_PTR_FROM_JSON(SLSGroupDescription, SLSGroupDescription_);
      DARABONBA_PTR_FROM_JSON(SLSGroupName, SLSGroupName_);
    };
    ModifyHybridMonitorSLSGroupRequest() = default ;
    ModifyHybridMonitorSLSGroupRequest(const ModifyHybridMonitorSLSGroupRequest &) = default ;
    ModifyHybridMonitorSLSGroupRequest(ModifyHybridMonitorSLSGroupRequest &&) = default ;
    ModifyHybridMonitorSLSGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyHybridMonitorSLSGroupRequest() = default ;
    ModifyHybridMonitorSLSGroupRequest& operator=(const ModifyHybridMonitorSLSGroupRequest &) = default ;
    ModifyHybridMonitorSLSGroupRequest& operator=(ModifyHybridMonitorSLSGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SLSGroupConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SLSGroupConfig& obj) { 
        DARABONBA_PTR_TO_JSON(SLSLogstore, SLSLogstore_);
        DARABONBA_PTR_TO_JSON(SLSProject, SLSProject_);
        DARABONBA_PTR_TO_JSON(SLSRegion, SLSRegion_);
        DARABONBA_PTR_TO_JSON(SLSUserId, SLSUserId_);
      };
      friend void from_json(const Darabonba::Json& j, SLSGroupConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(SLSLogstore, SLSLogstore_);
        DARABONBA_PTR_FROM_JSON(SLSProject, SLSProject_);
        DARABONBA_PTR_FROM_JSON(SLSRegion, SLSRegion_);
        DARABONBA_PTR_FROM_JSON(SLSUserId, SLSUserId_);
      };
      SLSGroupConfig() = default ;
      SLSGroupConfig(const SLSGroupConfig &) = default ;
      SLSGroupConfig(SLSGroupConfig &&) = default ;
      SLSGroupConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SLSGroupConfig() = default ;
      SLSGroupConfig& operator=(const SLSGroupConfig &) = default ;
      SLSGroupConfig& operator=(SLSGroupConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->SLSLogstore_ == nullptr
        && this->SLSProject_ == nullptr && this->SLSRegion_ == nullptr && this->SLSUserId_ == nullptr; };
      // SLSLogstore Field Functions 
      bool hasSLSLogstore() const { return this->SLSLogstore_ != nullptr;};
      void deleteSLSLogstore() { this->SLSLogstore_ = nullptr;};
      inline string getSLSLogstore() const { DARABONBA_PTR_GET_DEFAULT(SLSLogstore_, "") };
      inline SLSGroupConfig& setSLSLogstore(string SLSLogstore) { DARABONBA_PTR_SET_VALUE(SLSLogstore_, SLSLogstore) };


      // SLSProject Field Functions 
      bool hasSLSProject() const { return this->SLSProject_ != nullptr;};
      void deleteSLSProject() { this->SLSProject_ = nullptr;};
      inline string getSLSProject() const { DARABONBA_PTR_GET_DEFAULT(SLSProject_, "") };
      inline SLSGroupConfig& setSLSProject(string SLSProject) { DARABONBA_PTR_SET_VALUE(SLSProject_, SLSProject) };


      // SLSRegion Field Functions 
      bool hasSLSRegion() const { return this->SLSRegion_ != nullptr;};
      void deleteSLSRegion() { this->SLSRegion_ = nullptr;};
      inline string getSLSRegion() const { DARABONBA_PTR_GET_DEFAULT(SLSRegion_, "") };
      inline SLSGroupConfig& setSLSRegion(string SLSRegion) { DARABONBA_PTR_SET_VALUE(SLSRegion_, SLSRegion) };


      // SLSUserId Field Functions 
      bool hasSLSUserId() const { return this->SLSUserId_ != nullptr;};
      void deleteSLSUserId() { this->SLSUserId_ = nullptr;};
      inline string getSLSUserId() const { DARABONBA_PTR_GET_DEFAULT(SLSUserId_, "") };
      inline SLSGroupConfig& setSLSUserId(string SLSUserId) { DARABONBA_PTR_SET_VALUE(SLSUserId_, SLSUserId) };


    protected:
      // The Logstore.
      // 
      // Valid values of N: 1 to 25.
      // 
      // This parameter is required.
      shared_ptr<string> SLSLogstore_ {};
      // The Simple Log Service project.
      // 
      // Valid values of N: 1 to 25.
      // 
      // This parameter is required.
      shared_ptr<string> SLSProject_ {};
      // The region ID.
      // 
      // Valid values of N: 1 to 25.
      // 
      // This parameter is required.
      shared_ptr<string> SLSRegion_ {};
      // The member ID.
      // 
      // Valid values of N: 1 to 25.
      // 
      // If you call this operation by using the management account of a resource directory, you can connect the Alibaba Cloud services that are activated for all members in the resource directory to Hybrid Cloud Monitoring. You can use the resource directory to monitor Alibaba Cloud services across enterprise accounts.
      // 
      // > If a member uses CloudMonitor for the first time, you must make sure that the service-linked role AliyunServiceRoleForCloudMonitor is attached to the member. For more information, see [Manage the service-linked role for CloudMonitor](https://help.aliyun.com/document_detail/170423.html).
      shared_ptr<string> SLSUserId_ {};
    };

    virtual bool empty() const override { return this->regionId_ == nullptr
        && this->SLSGroupConfig_ == nullptr && this->SLSGroupDescription_ == nullptr && this->SLSGroupName_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyHybridMonitorSLSGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // SLSGroupConfig Field Functions 
    bool hasSLSGroupConfig() const { return this->SLSGroupConfig_ != nullptr;};
    void deleteSLSGroupConfig() { this->SLSGroupConfig_ = nullptr;};
    inline const vector<ModifyHybridMonitorSLSGroupRequest::SLSGroupConfig> & getSLSGroupConfig() const { DARABONBA_PTR_GET_CONST(SLSGroupConfig_, vector<ModifyHybridMonitorSLSGroupRequest::SLSGroupConfig>) };
    inline vector<ModifyHybridMonitorSLSGroupRequest::SLSGroupConfig> getSLSGroupConfig() { DARABONBA_PTR_GET(SLSGroupConfig_, vector<ModifyHybridMonitorSLSGroupRequest::SLSGroupConfig>) };
    inline ModifyHybridMonitorSLSGroupRequest& setSLSGroupConfig(const vector<ModifyHybridMonitorSLSGroupRequest::SLSGroupConfig> & sLSGroupConfig) { DARABONBA_PTR_SET_VALUE(SLSGroupConfig_, sLSGroupConfig) };
    inline ModifyHybridMonitorSLSGroupRequest& setSLSGroupConfig(vector<ModifyHybridMonitorSLSGroupRequest::SLSGroupConfig> && sLSGroupConfig) { DARABONBA_PTR_SET_RVALUE(SLSGroupConfig_, sLSGroupConfig) };


    // SLSGroupDescription Field Functions 
    bool hasSLSGroupDescription() const { return this->SLSGroupDescription_ != nullptr;};
    void deleteSLSGroupDescription() { this->SLSGroupDescription_ = nullptr;};
    inline string getSLSGroupDescription() const { DARABONBA_PTR_GET_DEFAULT(SLSGroupDescription_, "") };
    inline ModifyHybridMonitorSLSGroupRequest& setSLSGroupDescription(string SLSGroupDescription) { DARABONBA_PTR_SET_VALUE(SLSGroupDescription_, SLSGroupDescription) };


    // SLSGroupName Field Functions 
    bool hasSLSGroupName() const { return this->SLSGroupName_ != nullptr;};
    void deleteSLSGroupName() { this->SLSGroupName_ = nullptr;};
    inline string getSLSGroupName() const { DARABONBA_PTR_GET_DEFAULT(SLSGroupName_, "") };
    inline ModifyHybridMonitorSLSGroupRequest& setSLSGroupName(string SLSGroupName) { DARABONBA_PTR_SET_VALUE(SLSGroupName_, SLSGroupName) };


  protected:
    shared_ptr<string> regionId_ {};
    // The configurations of the Logstore group.
    // 
    // Valid values of N: 1 to 25.
    // 
    // This parameter is required.
    shared_ptr<vector<ModifyHybridMonitorSLSGroupRequest::SLSGroupConfig>> SLSGroupConfig_ {};
    // The description of the Logstore group.
    shared_ptr<string> SLSGroupDescription_ {};
    // The name of the Logstore group.
    // 
    // For information about how to obtain the name of a Logstore group, see [DescribeHybridMonitorSLSGroup](https://help.aliyun.com/document_detail/429526.html).
    // 
    // This parameter is required.
    shared_ptr<string> SLSGroupName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
