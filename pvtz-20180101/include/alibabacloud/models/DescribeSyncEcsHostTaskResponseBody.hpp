// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYNCECSHOSTTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYNCECSHOSTTASKRESPONSEBODY_HPP_
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
  class DescribeSyncEcsHostTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSyncEcsHostTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EcsRegions, ecsRegions_);
      DARABONBA_PTR_TO_JSON(Regions, regions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSyncEcsHostTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EcsRegions, ecsRegions_);
      DARABONBA_PTR_FROM_JSON(Regions, regions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeSyncEcsHostTaskResponseBody() = default ;
    DescribeSyncEcsHostTaskResponseBody(const DescribeSyncEcsHostTaskResponseBody &) = default ;
    DescribeSyncEcsHostTaskResponseBody(DescribeSyncEcsHostTaskResponseBody &&) = default ;
    DescribeSyncEcsHostTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSyncEcsHostTaskResponseBody() = default ;
    DescribeSyncEcsHostTaskResponseBody& operator=(const DescribeSyncEcsHostTaskResponseBody &) = default ;
    DescribeSyncEcsHostTaskResponseBody& operator=(DescribeSyncEcsHostTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Regions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Regions& obj) { 
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      };
      friend void from_json(const Darabonba::Json& j, Regions& obj) { 
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      };
      Regions() = default ;
      Regions(const Regions &) = default ;
      Regions(Regions &&) = default ;
      Regions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Regions() = default ;
      Regions& operator=(const Regions &) = default ;
      Regions& operator=(Regions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->regionId_ == nullptr; };
      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline const vector<string> & getRegionId() const { DARABONBA_PTR_GET_CONST(regionId_, vector<string>) };
      inline vector<string> getRegionId() { DARABONBA_PTR_GET(regionId_, vector<string>) };
      inline Regions& setRegionId(const vector<string> & regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };
      inline Regions& setRegionId(vector<string> && regionId) { DARABONBA_PTR_SET_RVALUE(regionId_, regionId) };


    protected:
      shared_ptr<vector<string>> regionId_ {};
    };

    class EcsRegions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EcsRegions& obj) { 
        DARABONBA_PTR_TO_JSON(EcsRegion, ecsRegion_);
      };
      friend void from_json(const Darabonba::Json& j, EcsRegions& obj) { 
        DARABONBA_PTR_FROM_JSON(EcsRegion, ecsRegion_);
      };
      EcsRegions() = default ;
      EcsRegions(const EcsRegions &) = default ;
      EcsRegions(EcsRegions &&) = default ;
      EcsRegions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EcsRegions() = default ;
      EcsRegions& operator=(const EcsRegions &) = default ;
      EcsRegions& operator=(EcsRegions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class EcsRegion : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EcsRegion& obj) { 
          DARABONBA_PTR_TO_JSON(RegionIds, regionIds_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, EcsRegion& obj) { 
          DARABONBA_PTR_FROM_JSON(RegionIds, regionIds_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
        };
        EcsRegion() = default ;
        EcsRegion(const EcsRegion &) = default ;
        EcsRegion(EcsRegion &&) = default ;
        EcsRegion(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EcsRegion() = default ;
        EcsRegion& operator=(const EcsRegion &) = default ;
        EcsRegion& operator=(EcsRegion &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RegionIds : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RegionIds& obj) { 
            DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          };
          friend void from_json(const Darabonba::Json& j, RegionIds& obj) { 
            DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          };
          RegionIds() = default ;
          RegionIds(const RegionIds &) = default ;
          RegionIds(RegionIds &&) = default ;
          RegionIds(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RegionIds() = default ;
          RegionIds& operator=(const RegionIds &) = default ;
          RegionIds& operator=(RegionIds &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->regionId_ == nullptr; };
          // regionId Field Functions 
          bool hasRegionId() const { return this->regionId_ != nullptr;};
          void deleteRegionId() { this->regionId_ = nullptr;};
          inline const vector<string> & getRegionId() const { DARABONBA_PTR_GET_CONST(regionId_, vector<string>) };
          inline vector<string> getRegionId() { DARABONBA_PTR_GET(regionId_, vector<string>) };
          inline RegionIds& setRegionId(const vector<string> & regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };
          inline RegionIds& setRegionId(vector<string> && regionId) { DARABONBA_PTR_SET_RVALUE(regionId_, regionId) };


        protected:
          shared_ptr<vector<string>> regionId_ {};
        };

        virtual bool empty() const override { return this->regionIds_ == nullptr
        && this->userId_ == nullptr; };
        // regionIds Field Functions 
        bool hasRegionIds() const { return this->regionIds_ != nullptr;};
        void deleteRegionIds() { this->regionIds_ = nullptr;};
        inline const EcsRegion::RegionIds & getRegionIds() const { DARABONBA_PTR_GET_CONST(regionIds_, EcsRegion::RegionIds) };
        inline EcsRegion::RegionIds getRegionIds() { DARABONBA_PTR_GET(regionIds_, EcsRegion::RegionIds) };
        inline EcsRegion& setRegionIds(const EcsRegion::RegionIds & regionIds) { DARABONBA_PTR_SET_VALUE(regionIds_, regionIds) };
        inline EcsRegion& setRegionIds(EcsRegion::RegionIds && regionIds) { DARABONBA_PTR_SET_RVALUE(regionIds_, regionIds) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
        inline EcsRegion& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        // The synchronized region IDs.
        shared_ptr<EcsRegion::RegionIds> regionIds_ {};
        // The user ID to which the region belongs. This parameter is used in cross-account synchronization scenarios.
        shared_ptr<int64_t> userId_ {};
      };

      virtual bool empty() const override { return this->ecsRegion_ == nullptr; };
      // ecsRegion Field Functions 
      bool hasEcsRegion() const { return this->ecsRegion_ != nullptr;};
      void deleteEcsRegion() { this->ecsRegion_ = nullptr;};
      inline const vector<EcsRegions::EcsRegion> & getEcsRegion() const { DARABONBA_PTR_GET_CONST(ecsRegion_, vector<EcsRegions::EcsRegion>) };
      inline vector<EcsRegions::EcsRegion> getEcsRegion() { DARABONBA_PTR_GET(ecsRegion_, vector<EcsRegions::EcsRegion>) };
      inline EcsRegions& setEcsRegion(const vector<EcsRegions::EcsRegion> & ecsRegion) { DARABONBA_PTR_SET_VALUE(ecsRegion_, ecsRegion) };
      inline EcsRegions& setEcsRegion(vector<EcsRegions::EcsRegion> && ecsRegion) { DARABONBA_PTR_SET_RVALUE(ecsRegion_, ecsRegion) };


    protected:
      shared_ptr<vector<EcsRegions::EcsRegion>> ecsRegion_ {};
    };

    virtual bool empty() const override { return this->ecsRegions_ == nullptr
        && this->regions_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr && this->success_ == nullptr && this->zoneId_ == nullptr; };
    // ecsRegions Field Functions 
    bool hasEcsRegions() const { return this->ecsRegions_ != nullptr;};
    void deleteEcsRegions() { this->ecsRegions_ = nullptr;};
    inline const DescribeSyncEcsHostTaskResponseBody::EcsRegions & getEcsRegions() const { DARABONBA_PTR_GET_CONST(ecsRegions_, DescribeSyncEcsHostTaskResponseBody::EcsRegions) };
    inline DescribeSyncEcsHostTaskResponseBody::EcsRegions getEcsRegions() { DARABONBA_PTR_GET(ecsRegions_, DescribeSyncEcsHostTaskResponseBody::EcsRegions) };
    inline DescribeSyncEcsHostTaskResponseBody& setEcsRegions(const DescribeSyncEcsHostTaskResponseBody::EcsRegions & ecsRegions) { DARABONBA_PTR_SET_VALUE(ecsRegions_, ecsRegions) };
    inline DescribeSyncEcsHostTaskResponseBody& setEcsRegions(DescribeSyncEcsHostTaskResponseBody::EcsRegions && ecsRegions) { DARABONBA_PTR_SET_RVALUE(ecsRegions_, ecsRegions) };


    // regions Field Functions 
    bool hasRegions() const { return this->regions_ != nullptr;};
    void deleteRegions() { this->regions_ = nullptr;};
    inline const DescribeSyncEcsHostTaskResponseBody::Regions & getRegions() const { DARABONBA_PTR_GET_CONST(regions_, DescribeSyncEcsHostTaskResponseBody::Regions) };
    inline DescribeSyncEcsHostTaskResponseBody::Regions getRegions() { DARABONBA_PTR_GET(regions_, DescribeSyncEcsHostTaskResponseBody::Regions) };
    inline DescribeSyncEcsHostTaskResponseBody& setRegions(const DescribeSyncEcsHostTaskResponseBody::Regions & regions) { DARABONBA_PTR_SET_VALUE(regions_, regions) };
    inline DescribeSyncEcsHostTaskResponseBody& setRegions(DescribeSyncEcsHostTaskResponseBody::Regions && regions) { DARABONBA_PTR_SET_RVALUE(regions_, regions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSyncEcsHostTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeSyncEcsHostTaskResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeSyncEcsHostTaskResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeSyncEcsHostTaskResponseBody& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The synchronized regions where the ECS instances are deployed.
    shared_ptr<DescribeSyncEcsHostTaskResponseBody::EcsRegions> ecsRegions_ {};
    // The synchronized region IDs of the ECS instances.
    shared_ptr<DescribeSyncEcsHostTaskResponseBody::Regions> regions_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether hostname automatic synchronization is enabled. Valid values:
    // 
    // *   ON: Hostname automatic synchronization is enabled. After this feature is enabled, the system automatically reads the hostnames of the Elastic Compute Service (ECS) instances in the specified regions and updates Domain Name System (DNS) records at an interval of 1 minute.
    // *   OFF: Hostname automatic synchronization is disabled.
    shared_ptr<string> status_ {};
    // Indicates whether the task was successful. Valid values:
    // 
    // *   True
    // *   False
    shared_ptr<bool> success_ {};
    // The zone ID. This ID uniquely identifies the zone.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Pvtz20180101
#endif
