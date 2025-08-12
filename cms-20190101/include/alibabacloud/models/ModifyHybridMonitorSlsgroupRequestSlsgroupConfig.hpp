// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYHYBRIDMONITORSLSGROUPREQUESTSLSGROUPCONFIG_HPP_
#define ALIBABACLOUD_MODELS_MODIFYHYBRIDMONITORSLSGROUPREQUESTSLSGROUPCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class ModifyHybridMonitorSLSGroupRequestSLSGroupConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyHybridMonitorSLSGroupRequestSLSGroupConfig& obj) { 
      DARABONBA_PTR_TO_JSON(SLSLogstore, SLSLogstore_);
      DARABONBA_PTR_TO_JSON(SLSProject, SLSProject_);
      DARABONBA_PTR_TO_JSON(SLSRegion, SLSRegion_);
      DARABONBA_PTR_TO_JSON(SLSUserId, SLSUserId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyHybridMonitorSLSGroupRequestSLSGroupConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(SLSLogstore, SLSLogstore_);
      DARABONBA_PTR_FROM_JSON(SLSProject, SLSProject_);
      DARABONBA_PTR_FROM_JSON(SLSRegion, SLSRegion_);
      DARABONBA_PTR_FROM_JSON(SLSUserId, SLSUserId_);
    };
    ModifyHybridMonitorSLSGroupRequestSLSGroupConfig() = default ;
    ModifyHybridMonitorSLSGroupRequestSLSGroupConfig(const ModifyHybridMonitorSLSGroupRequestSLSGroupConfig &) = default ;
    ModifyHybridMonitorSLSGroupRequestSLSGroupConfig(ModifyHybridMonitorSLSGroupRequestSLSGroupConfig &&) = default ;
    ModifyHybridMonitorSLSGroupRequestSLSGroupConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyHybridMonitorSLSGroupRequestSLSGroupConfig() = default ;
    ModifyHybridMonitorSLSGroupRequestSLSGroupConfig& operator=(const ModifyHybridMonitorSLSGroupRequestSLSGroupConfig &) = default ;
    ModifyHybridMonitorSLSGroupRequestSLSGroupConfig& operator=(ModifyHybridMonitorSLSGroupRequestSLSGroupConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->SLSLogstore_ != nullptr
        && this->SLSProject_ != nullptr && this->SLSRegion_ != nullptr && this->SLSUserId_ != nullptr; };
    // SLSLogstore Field Functions 
    bool hasSLSLogstore() const { return this->SLSLogstore_ != nullptr;};
    void deleteSLSLogstore() { this->SLSLogstore_ = nullptr;};
    inline string SLSLogstore() const { DARABONBA_PTR_GET_DEFAULT(SLSLogstore_, "") };
    inline ModifyHybridMonitorSLSGroupRequestSLSGroupConfig& setSLSLogstore(string SLSLogstore) { DARABONBA_PTR_SET_VALUE(SLSLogstore_, SLSLogstore) };


    // SLSProject Field Functions 
    bool hasSLSProject() const { return this->SLSProject_ != nullptr;};
    void deleteSLSProject() { this->SLSProject_ = nullptr;};
    inline string SLSProject() const { DARABONBA_PTR_GET_DEFAULT(SLSProject_, "") };
    inline ModifyHybridMonitorSLSGroupRequestSLSGroupConfig& setSLSProject(string SLSProject) { DARABONBA_PTR_SET_VALUE(SLSProject_, SLSProject) };


    // SLSRegion Field Functions 
    bool hasSLSRegion() const { return this->SLSRegion_ != nullptr;};
    void deleteSLSRegion() { this->SLSRegion_ = nullptr;};
    inline string SLSRegion() const { DARABONBA_PTR_GET_DEFAULT(SLSRegion_, "") };
    inline ModifyHybridMonitorSLSGroupRequestSLSGroupConfig& setSLSRegion(string SLSRegion) { DARABONBA_PTR_SET_VALUE(SLSRegion_, SLSRegion) };


    // SLSUserId Field Functions 
    bool hasSLSUserId() const { return this->SLSUserId_ != nullptr;};
    void deleteSLSUserId() { this->SLSUserId_ = nullptr;};
    inline string SLSUserId() const { DARABONBA_PTR_GET_DEFAULT(SLSUserId_, "") };
    inline ModifyHybridMonitorSLSGroupRequestSLSGroupConfig& setSLSUserId(string SLSUserId) { DARABONBA_PTR_SET_VALUE(SLSUserId_, SLSUserId) };


  protected:
    // The Logstore.
    // 
    // Valid values of N: 1 to 25.
    // 
    // This parameter is required.
    std::shared_ptr<string> SLSLogstore_ = nullptr;
    // The Simple Log Service project.
    // 
    // Valid values of N: 1 to 25.
    // 
    // This parameter is required.
    std::shared_ptr<string> SLSProject_ = nullptr;
    // The region ID.
    // 
    // Valid values of N: 1 to 25.
    // 
    // This parameter is required.
    std::shared_ptr<string> SLSRegion_ = nullptr;
    // The member ID.
    // 
    // Valid values of N: 1 to 25.
    // 
    // If you call this operation by using the management account of a resource directory, you can connect the Alibaba Cloud services that are activated for all members in the resource directory to Hybrid Cloud Monitoring. You can use the resource directory to monitor Alibaba Cloud services across enterprise accounts.
    // 
    // > If a member uses CloudMonitor for the first time, you must make sure that the service-linked role AliyunServiceRoleForCloudMonitor is attached to the member. For more information, see [Manage the service-linked role for CloudMonitor](https://help.aliyun.com/document_detail/170423.html).
    std::shared_ptr<string> SLSUserId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
