// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREGIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREGIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RKvstore20150101
{
namespace Models
{
  class DescribeRegionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRegionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RegionIds, regionIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRegionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionIds, regionIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeRegionsResponseBody() = default ;
    DescribeRegionsResponseBody(const DescribeRegionsResponseBody &) = default ;
    DescribeRegionsResponseBody(DescribeRegionsResponseBody &&) = default ;
    DescribeRegionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRegionsResponseBody() = default ;
    DescribeRegionsResponseBody& operator=(const DescribeRegionsResponseBody &) = default ;
    DescribeRegionsResponseBody& operator=(DescribeRegionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RegionIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RegionIds& obj) { 
        DARABONBA_PTR_TO_JSON(KVStoreRegion, KVStoreRegion_);
      };
      friend void from_json(const Darabonba::Json& j, RegionIds& obj) { 
        DARABONBA_PTR_FROM_JSON(KVStoreRegion, KVStoreRegion_);
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
      class KVStoreRegion : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const KVStoreRegion& obj) { 
          DARABONBA_PTR_TO_JSON(LocalName, localName_);
          DARABONBA_PTR_TO_JSON(RegionEndpoint, regionEndpoint_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(ZoneIdList, zoneIdList_);
          DARABONBA_PTR_TO_JSON(ZoneIds, zoneIds_);
        };
        friend void from_json(const Darabonba::Json& j, KVStoreRegion& obj) { 
          DARABONBA_PTR_FROM_JSON(LocalName, localName_);
          DARABONBA_PTR_FROM_JSON(RegionEndpoint, regionEndpoint_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(ZoneIdList, zoneIdList_);
          DARABONBA_PTR_FROM_JSON(ZoneIds, zoneIds_);
        };
        KVStoreRegion() = default ;
        KVStoreRegion(const KVStoreRegion &) = default ;
        KVStoreRegion(KVStoreRegion &&) = default ;
        KVStoreRegion(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~KVStoreRegion() = default ;
        KVStoreRegion& operator=(const KVStoreRegion &) = default ;
        KVStoreRegion& operator=(KVStoreRegion &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ZoneIdList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ZoneIdList& obj) { 
            DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
          };
          friend void from_json(const Darabonba::Json& j, ZoneIdList& obj) { 
            DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
          };
          ZoneIdList() = default ;
          ZoneIdList(const ZoneIdList &) = default ;
          ZoneIdList(ZoneIdList &&) = default ;
          ZoneIdList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ZoneIdList() = default ;
          ZoneIdList& operator=(const ZoneIdList &) = default ;
          ZoneIdList& operator=(ZoneIdList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->zoneId_ == nullptr; };
          // zoneId Field Functions 
          bool hasZoneId() const { return this->zoneId_ != nullptr;};
          void deleteZoneId() { this->zoneId_ = nullptr;};
          inline const vector<string> & getZoneId() const { DARABONBA_PTR_GET_CONST(zoneId_, vector<string>) };
          inline vector<string> getZoneId() { DARABONBA_PTR_GET(zoneId_, vector<string>) };
          inline ZoneIdList& setZoneId(const vector<string> & zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };
          inline ZoneIdList& setZoneId(vector<string> && zoneId) { DARABONBA_PTR_SET_RVALUE(zoneId_, zoneId) };


        protected:
          shared_ptr<vector<string>> zoneId_ {};
        };

        virtual bool empty() const override { return this->localName_ == nullptr
        && this->regionEndpoint_ == nullptr && this->regionId_ == nullptr && this->zoneIdList_ == nullptr && this->zoneIds_ == nullptr; };
        // localName Field Functions 
        bool hasLocalName() const { return this->localName_ != nullptr;};
        void deleteLocalName() { this->localName_ = nullptr;};
        inline string getLocalName() const { DARABONBA_PTR_GET_DEFAULT(localName_, "") };
        inline KVStoreRegion& setLocalName(string localName) { DARABONBA_PTR_SET_VALUE(localName_, localName) };


        // regionEndpoint Field Functions 
        bool hasRegionEndpoint() const { return this->regionEndpoint_ != nullptr;};
        void deleteRegionEndpoint() { this->regionEndpoint_ = nullptr;};
        inline string getRegionEndpoint() const { DARABONBA_PTR_GET_DEFAULT(regionEndpoint_, "") };
        inline KVStoreRegion& setRegionEndpoint(string regionEndpoint) { DARABONBA_PTR_SET_VALUE(regionEndpoint_, regionEndpoint) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline KVStoreRegion& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // zoneIdList Field Functions 
        bool hasZoneIdList() const { return this->zoneIdList_ != nullptr;};
        void deleteZoneIdList() { this->zoneIdList_ = nullptr;};
        inline const KVStoreRegion::ZoneIdList & getZoneIdList() const { DARABONBA_PTR_GET_CONST(zoneIdList_, KVStoreRegion::ZoneIdList) };
        inline KVStoreRegion::ZoneIdList getZoneIdList() { DARABONBA_PTR_GET(zoneIdList_, KVStoreRegion::ZoneIdList) };
        inline KVStoreRegion& setZoneIdList(const KVStoreRegion::ZoneIdList & zoneIdList) { DARABONBA_PTR_SET_VALUE(zoneIdList_, zoneIdList) };
        inline KVStoreRegion& setZoneIdList(KVStoreRegion::ZoneIdList && zoneIdList) { DARABONBA_PTR_SET_RVALUE(zoneIdList_, zoneIdList) };


        // zoneIds Field Functions 
        bool hasZoneIds() const { return this->zoneIds_ != nullptr;};
        void deleteZoneIds() { this->zoneIds_ = nullptr;};
        inline string getZoneIds() const { DARABONBA_PTR_GET_DEFAULT(zoneIds_, "") };
        inline KVStoreRegion& setZoneIds(string zoneIds) { DARABONBA_PTR_SET_VALUE(zoneIds_, zoneIds) };


      protected:
        // The name of the region.
        shared_ptr<string> localName_ {};
        // The endpoint of the region.
        shared_ptr<string> regionEndpoint_ {};
        // The ID of the region.
        shared_ptr<string> regionId_ {};
        // The zone IDs.
        shared_ptr<KVStoreRegion::ZoneIdList> zoneIdList_ {};
        // The IDs of the zones in the region.
        shared_ptr<string> zoneIds_ {};
      };

      virtual bool empty() const override { return this->KVStoreRegion_ == nullptr; };
      // KVStoreRegion Field Functions 
      bool hasKVStoreRegion() const { return this->KVStoreRegion_ != nullptr;};
      void deleteKVStoreRegion() { this->KVStoreRegion_ = nullptr;};
      inline const vector<RegionIds::KVStoreRegion> & getKVStoreRegion() const { DARABONBA_PTR_GET_CONST(KVStoreRegion_, vector<RegionIds::KVStoreRegion>) };
      inline vector<RegionIds::KVStoreRegion> getKVStoreRegion() { DARABONBA_PTR_GET(KVStoreRegion_, vector<RegionIds::KVStoreRegion>) };
      inline RegionIds& setKVStoreRegion(const vector<RegionIds::KVStoreRegion> & kVStoreRegion) { DARABONBA_PTR_SET_VALUE(KVStoreRegion_, kVStoreRegion) };
      inline RegionIds& setKVStoreRegion(vector<RegionIds::KVStoreRegion> && kVStoreRegion) { DARABONBA_PTR_SET_RVALUE(KVStoreRegion_, kVStoreRegion) };


    protected:
      shared_ptr<vector<RegionIds::KVStoreRegion>> KVStoreRegion_ {};
    };

    virtual bool empty() const override { return this->regionIds_ == nullptr
        && this->requestId_ == nullptr; };
    // regionIds Field Functions 
    bool hasRegionIds() const { return this->regionIds_ != nullptr;};
    void deleteRegionIds() { this->regionIds_ = nullptr;};
    inline const DescribeRegionsResponseBody::RegionIds & getRegionIds() const { DARABONBA_PTR_GET_CONST(regionIds_, DescribeRegionsResponseBody::RegionIds) };
    inline DescribeRegionsResponseBody::RegionIds getRegionIds() { DARABONBA_PTR_GET(regionIds_, DescribeRegionsResponseBody::RegionIds) };
    inline DescribeRegionsResponseBody& setRegionIds(const DescribeRegionsResponseBody::RegionIds & regionIds) { DARABONBA_PTR_SET_VALUE(regionIds_, regionIds) };
    inline DescribeRegionsResponseBody& setRegionIds(DescribeRegionsResponseBody::RegionIds && regionIds) { DARABONBA_PTR_SET_RVALUE(regionIds_, regionIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRegionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The **region IDs**.
    shared_ptr<DescribeRegionsResponseBody::RegionIds> regionIds_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
