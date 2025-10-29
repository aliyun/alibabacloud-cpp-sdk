// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYLIVEREALTIMELOGDELIVERYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYLIVEREALTIMELOGDELIVERYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ModifyLiveRealtimeLogDeliveryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyLiveRealtimeLogDeliveryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Logstore, logstore_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Project, project_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyLiveRealtimeLogDeliveryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Logstore, logstore_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Project, project_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyLiveRealtimeLogDeliveryRequest() = default ;
    ModifyLiveRealtimeLogDeliveryRequest(const ModifyLiveRealtimeLogDeliveryRequest &) = default ;
    ModifyLiveRealtimeLogDeliveryRequest(ModifyLiveRealtimeLogDeliveryRequest &&) = default ;
    ModifyLiveRealtimeLogDeliveryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyLiveRealtimeLogDeliveryRequest() = default ;
    ModifyLiveRealtimeLogDeliveryRequest& operator=(const ModifyLiveRealtimeLogDeliveryRequest &) = default ;
    ModifyLiveRealtimeLogDeliveryRequest& operator=(ModifyLiveRealtimeLogDeliveryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && return this->logstore_ == nullptr && return this->ownerId_ == nullptr && return this->project_ == nullptr && return this->region_ == nullptr && return this->regionId_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline ModifyLiveRealtimeLogDeliveryRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // logstore Field Functions 
    bool hasLogstore() const { return this->logstore_ != nullptr;};
    void deleteLogstore() { this->logstore_ = nullptr;};
    inline string logstore() const { DARABONBA_PTR_GET_DEFAULT(logstore_, "") };
    inline ModifyLiveRealtimeLogDeliveryRequest& setLogstore(string logstore) { DARABONBA_PTR_SET_VALUE(logstore_, logstore) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyLiveRealtimeLogDeliveryRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline string project() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
    inline ModifyLiveRealtimeLogDeliveryRequest& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ModifyLiveRealtimeLogDeliveryRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyLiveRealtimeLogDeliveryRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The main streaming domain for which you want to modify the configuration of real-time log delivery.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    // The name of the Logstore to which log entries are delivered.
    // 
    // This parameter is required.
    std::shared_ptr<string> logstore_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The name of the Log Service project that is used for real-time log delivery.
    // 
    // This parameter is required.
    std::shared_ptr<string> project_ = nullptr;
    // The ID of the region where the Log Service project is deployed.
    // 
    // This parameter is required.
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
