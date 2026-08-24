// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTKVCACHESTOREAVAILABLEHPNZONESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTKVCACHESTOREAVAILABLEHPNZONESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kvcachestore20260617
{
namespace Models
{
  class ListKVCacheStoreAvailableHpnZonesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListKVCacheStoreAvailableHpnZonesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceHpnZones, instanceHpnZones_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListKVCacheStoreAvailableHpnZonesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceHpnZones, instanceHpnZones_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListKVCacheStoreAvailableHpnZonesResponseBody() = default ;
    ListKVCacheStoreAvailableHpnZonesResponseBody(const ListKVCacheStoreAvailableHpnZonesResponseBody &) = default ;
    ListKVCacheStoreAvailableHpnZonesResponseBody(ListKVCacheStoreAvailableHpnZonesResponseBody &&) = default ;
    ListKVCacheStoreAvailableHpnZonesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListKVCacheStoreAvailableHpnZonesResponseBody() = default ;
    ListKVCacheStoreAvailableHpnZonesResponseBody& operator=(const ListKVCacheStoreAvailableHpnZonesResponseBody &) = default ;
    ListKVCacheStoreAvailableHpnZonesResponseBody& operator=(ListKVCacheStoreAvailableHpnZonesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceHpnZones : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceHpnZones& obj) { 
        DARABONBA_PTR_TO_JSON(AvailableHpnZones, availableHpnZones_);
        DARABONBA_PTR_TO_JSON(KvcsId, kvcsId_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceHpnZones& obj) { 
        DARABONBA_PTR_FROM_JSON(AvailableHpnZones, availableHpnZones_);
        DARABONBA_PTR_FROM_JSON(KvcsId, kvcsId_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      };
      InstanceHpnZones() = default ;
      InstanceHpnZones(const InstanceHpnZones &) = default ;
      InstanceHpnZones(InstanceHpnZones &&) = default ;
      InstanceHpnZones(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceHpnZones() = default ;
      InstanceHpnZones& operator=(const InstanceHpnZones &) = default ;
      InstanceHpnZones& operator=(InstanceHpnZones &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AvailableHpnZones : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AvailableHpnZones& obj) { 
          DARABONBA_PTR_TO_JSON(HpnZone, hpnZone_);
        };
        friend void from_json(const Darabonba::Json& j, AvailableHpnZones& obj) { 
          DARABONBA_PTR_FROM_JSON(HpnZone, hpnZone_);
        };
        AvailableHpnZones() = default ;
        AvailableHpnZones(const AvailableHpnZones &) = default ;
        AvailableHpnZones(AvailableHpnZones &&) = default ;
        AvailableHpnZones(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AvailableHpnZones() = default ;
        AvailableHpnZones& operator=(const AvailableHpnZones &) = default ;
        AvailableHpnZones& operator=(AvailableHpnZones &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->hpnZone_ == nullptr; };
        // hpnZone Field Functions 
        bool hasHpnZone() const { return this->hpnZone_ != nullptr;};
        void deleteHpnZone() { this->hpnZone_ = nullptr;};
        inline string getHpnZone() const { DARABONBA_PTR_GET_DEFAULT(hpnZone_, "") };
        inline AvailableHpnZones& setHpnZone(string hpnZone) { DARABONBA_PTR_SET_VALUE(hpnZone_, hpnZone) };


      protected:
        shared_ptr<string> hpnZone_ {};
      };

      virtual bool empty() const override { return this->availableHpnZones_ == nullptr
        && this->kvcsId_ == nullptr && this->zoneId_ == nullptr; };
      // availableHpnZones Field Functions 
      bool hasAvailableHpnZones() const { return this->availableHpnZones_ != nullptr;};
      void deleteAvailableHpnZones() { this->availableHpnZones_ = nullptr;};
      inline const vector<InstanceHpnZones::AvailableHpnZones> & getAvailableHpnZones() const { DARABONBA_PTR_GET_CONST(availableHpnZones_, vector<InstanceHpnZones::AvailableHpnZones>) };
      inline vector<InstanceHpnZones::AvailableHpnZones> getAvailableHpnZones() { DARABONBA_PTR_GET(availableHpnZones_, vector<InstanceHpnZones::AvailableHpnZones>) };
      inline InstanceHpnZones& setAvailableHpnZones(const vector<InstanceHpnZones::AvailableHpnZones> & availableHpnZones) { DARABONBA_PTR_SET_VALUE(availableHpnZones_, availableHpnZones) };
      inline InstanceHpnZones& setAvailableHpnZones(vector<InstanceHpnZones::AvailableHpnZones> && availableHpnZones) { DARABONBA_PTR_SET_RVALUE(availableHpnZones_, availableHpnZones) };


      // kvcsId Field Functions 
      bool hasKvcsId() const { return this->kvcsId_ != nullptr;};
      void deleteKvcsId() { this->kvcsId_ = nullptr;};
      inline string getKvcsId() const { DARABONBA_PTR_GET_DEFAULT(kvcsId_, "") };
      inline InstanceHpnZones& setKvcsId(string kvcsId) { DARABONBA_PTR_SET_VALUE(kvcsId_, kvcsId) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline InstanceHpnZones& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      shared_ptr<vector<InstanceHpnZones::AvailableHpnZones>> availableHpnZones_ {};
      shared_ptr<string> kvcsId_ {};
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->instanceHpnZones_ == nullptr
        && this->requestId_ == nullptr; };
    // instanceHpnZones Field Functions 
    bool hasInstanceHpnZones() const { return this->instanceHpnZones_ != nullptr;};
    void deleteInstanceHpnZones() { this->instanceHpnZones_ = nullptr;};
    inline const vector<ListKVCacheStoreAvailableHpnZonesResponseBody::InstanceHpnZones> & getInstanceHpnZones() const { DARABONBA_PTR_GET_CONST(instanceHpnZones_, vector<ListKVCacheStoreAvailableHpnZonesResponseBody::InstanceHpnZones>) };
    inline vector<ListKVCacheStoreAvailableHpnZonesResponseBody::InstanceHpnZones> getInstanceHpnZones() { DARABONBA_PTR_GET(instanceHpnZones_, vector<ListKVCacheStoreAvailableHpnZonesResponseBody::InstanceHpnZones>) };
    inline ListKVCacheStoreAvailableHpnZonesResponseBody& setInstanceHpnZones(const vector<ListKVCacheStoreAvailableHpnZonesResponseBody::InstanceHpnZones> & instanceHpnZones) { DARABONBA_PTR_SET_VALUE(instanceHpnZones_, instanceHpnZones) };
    inline ListKVCacheStoreAvailableHpnZonesResponseBody& setInstanceHpnZones(vector<ListKVCacheStoreAvailableHpnZonesResponseBody::InstanceHpnZones> && instanceHpnZones) { DARABONBA_PTR_SET_RVALUE(instanceHpnZones_, instanceHpnZones) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListKVCacheStoreAvailableHpnZonesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ListKVCacheStoreAvailableHpnZonesResponseBody::InstanceHpnZones>> instanceHpnZones_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kvcachestore20260617
#endif
