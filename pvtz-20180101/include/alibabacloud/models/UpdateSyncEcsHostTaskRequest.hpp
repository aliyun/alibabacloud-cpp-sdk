// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESYNCECSHOSTTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESYNCECSHOSTTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Pvtz20180101
{
namespace Models
{
  class UpdateSyncEcsHostTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSyncEcsHostTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSyncEcsHostTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    UpdateSyncEcsHostTaskRequest() = default ;
    UpdateSyncEcsHostTaskRequest(const UpdateSyncEcsHostTaskRequest &) = default ;
    UpdateSyncEcsHostTaskRequest(UpdateSyncEcsHostTaskRequest &&) = default ;
    UpdateSyncEcsHostTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSyncEcsHostTaskRequest() = default ;
    UpdateSyncEcsHostTaskRequest& operator=(const UpdateSyncEcsHostTaskRequest &) = default ;
    UpdateSyncEcsHostTaskRequest& operator=(UpdateSyncEcsHostTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Region : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Region& obj) { 
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, Region& obj) { 
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      Region() = default ;
      Region(const Region &) = default ;
      Region(Region &&) = default ;
      Region(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Region() = default ;
      Region& operator=(const Region &) = default ;
      Region& operator=(Region &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->regionId_ == nullptr
        && this->userId_ == nullptr; };
      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Region& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
      inline Region& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The user ID to which the region belongs. This parameter is used in cross-account synchronization scenarios.
      shared_ptr<int64_t> userId_ {};
    };

    virtual bool empty() const override { return this->lang_ == nullptr
        && this->region_ == nullptr && this->status_ == nullptr && this->zoneId_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdateSyncEcsHostTaskRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline const vector<UpdateSyncEcsHostTaskRequest::Region> & getRegion() const { DARABONBA_PTR_GET_CONST(region_, vector<UpdateSyncEcsHostTaskRequest::Region>) };
    inline vector<UpdateSyncEcsHostTaskRequest::Region> getRegion() { DARABONBA_PTR_GET(region_, vector<UpdateSyncEcsHostTaskRequest::Region>) };
    inline UpdateSyncEcsHostTaskRequest& setRegion(const vector<UpdateSyncEcsHostTaskRequest::Region> & region) { DARABONBA_PTR_SET_VALUE(region_, region) };
    inline UpdateSyncEcsHostTaskRequest& setRegion(vector<UpdateSyncEcsHostTaskRequest::Region> && region) { DARABONBA_PTR_SET_RVALUE(region_, region) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateSyncEcsHostTaskRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline UpdateSyncEcsHostTaskRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    // 
    // Default value: en.
    shared_ptr<string> lang_ {};
    // The regions to be synchronized.
    // 
    // This parameter is required.
    shared_ptr<vector<UpdateSyncEcsHostTaskRequest::Region>> region_ {};
    // The state of the hostname synchronization task. Valid values:
    // 
    // *   ON: The task is started.
    // *   OFF: The task is ended.
    // 
    // This parameter is required.
    shared_ptr<string> status_ {};
    // The zone ID. This ID uniquely identifies the zone.
    // 
    // This parameter is required.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Pvtz20180101
#endif
