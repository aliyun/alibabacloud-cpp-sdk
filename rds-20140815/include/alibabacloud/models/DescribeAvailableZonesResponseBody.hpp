// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAVAILABLEZONESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAVAILABLEZONESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeAvailableZonesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAvailableZonesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableZones, availableZones_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAvailableZonesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableZones, availableZones_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAvailableZonesResponseBody() = default ;
    DescribeAvailableZonesResponseBody(const DescribeAvailableZonesResponseBody &) = default ;
    DescribeAvailableZonesResponseBody(DescribeAvailableZonesResponseBody &&) = default ;
    DescribeAvailableZonesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAvailableZonesResponseBody() = default ;
    DescribeAvailableZonesResponseBody& operator=(const DescribeAvailableZonesResponseBody &) = default ;
    DescribeAvailableZonesResponseBody& operator=(DescribeAvailableZonesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AvailableZones : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AvailableZones& obj) { 
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(SupportedEngines, supportedEngines_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, AvailableZones& obj) { 
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(SupportedEngines, supportedEngines_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      };
      AvailableZones() = default ;
      AvailableZones(const AvailableZones &) = default ;
      AvailableZones(AvailableZones &&) = default ;
      AvailableZones(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AvailableZones() = default ;
      AvailableZones& operator=(const AvailableZones &) = default ;
      AvailableZones& operator=(AvailableZones &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SupportedEngines : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SupportedEngines& obj) { 
          DARABONBA_PTR_TO_JSON(Engine, engine_);
          DARABONBA_PTR_TO_JSON(SupportedEngineVersions, supportedEngineVersions_);
        };
        friend void from_json(const Darabonba::Json& j, SupportedEngines& obj) { 
          DARABONBA_PTR_FROM_JSON(Engine, engine_);
          DARABONBA_PTR_FROM_JSON(SupportedEngineVersions, supportedEngineVersions_);
        };
        SupportedEngines() = default ;
        SupportedEngines(const SupportedEngines &) = default ;
        SupportedEngines(SupportedEngines &&) = default ;
        SupportedEngines(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SupportedEngines() = default ;
        SupportedEngines& operator=(const SupportedEngines &) = default ;
        SupportedEngines& operator=(SupportedEngines &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SupportedEngineVersions : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SupportedEngineVersions& obj) { 
            DARABONBA_PTR_TO_JSON(SupportedCategorys, supportedCategorys_);
            DARABONBA_PTR_TO_JSON(Version, version_);
          };
          friend void from_json(const Darabonba::Json& j, SupportedEngineVersions& obj) { 
            DARABONBA_PTR_FROM_JSON(SupportedCategorys, supportedCategorys_);
            DARABONBA_PTR_FROM_JSON(Version, version_);
          };
          SupportedEngineVersions() = default ;
          SupportedEngineVersions(const SupportedEngineVersions &) = default ;
          SupportedEngineVersions(SupportedEngineVersions &&) = default ;
          SupportedEngineVersions(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SupportedEngineVersions() = default ;
          SupportedEngineVersions& operator=(const SupportedEngineVersions &) = default ;
          SupportedEngineVersions& operator=(SupportedEngineVersions &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class SupportedCategorys : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const SupportedCategorys& obj) { 
              DARABONBA_PTR_TO_JSON(Category, category_);
              DARABONBA_PTR_TO_JSON(SupportedStorageTypes, supportedStorageTypes_);
            };
            friend void from_json(const Darabonba::Json& j, SupportedCategorys& obj) { 
              DARABONBA_PTR_FROM_JSON(Category, category_);
              DARABONBA_PTR_FROM_JSON(SupportedStorageTypes, supportedStorageTypes_);
            };
            SupportedCategorys() = default ;
            SupportedCategorys(const SupportedCategorys &) = default ;
            SupportedCategorys(SupportedCategorys &&) = default ;
            SupportedCategorys(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~SupportedCategorys() = default ;
            SupportedCategorys& operator=(const SupportedCategorys &) = default ;
            SupportedCategorys& operator=(SupportedCategorys &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class SupportedStorageTypes : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const SupportedStorageTypes& obj) { 
                DARABONBA_PTR_TO_JSON(StorageType, storageType_);
              };
              friend void from_json(const Darabonba::Json& j, SupportedStorageTypes& obj) { 
                DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
              };
              SupportedStorageTypes() = default ;
              SupportedStorageTypes(const SupportedStorageTypes &) = default ;
              SupportedStorageTypes(SupportedStorageTypes &&) = default ;
              SupportedStorageTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~SupportedStorageTypes() = default ;
              SupportedStorageTypes& operator=(const SupportedStorageTypes &) = default ;
              SupportedStorageTypes& operator=(SupportedStorageTypes &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->storageType_ == nullptr; };
              // storageType Field Functions 
              bool hasStorageType() const { return this->storageType_ != nullptr;};
              void deleteStorageType() { this->storageType_ = nullptr;};
              inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
              inline SupportedStorageTypes& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


            protected:
              // The storage type of the instance.
              shared_ptr<string> storageType_ {};
            };

            virtual bool empty() const override { return this->category_ == nullptr
        && this->supportedStorageTypes_ == nullptr; };
            // category Field Functions 
            bool hasCategory() const { return this->category_ != nullptr;};
            void deleteCategory() { this->category_ = nullptr;};
            inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
            inline SupportedCategorys& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


            // supportedStorageTypes Field Functions 
            bool hasSupportedStorageTypes() const { return this->supportedStorageTypes_ != nullptr;};
            void deleteSupportedStorageTypes() { this->supportedStorageTypes_ = nullptr;};
            inline const vector<SupportedCategorys::SupportedStorageTypes> & getSupportedStorageTypes() const { DARABONBA_PTR_GET_CONST(supportedStorageTypes_, vector<SupportedCategorys::SupportedStorageTypes>) };
            inline vector<SupportedCategorys::SupportedStorageTypes> getSupportedStorageTypes() { DARABONBA_PTR_GET(supportedStorageTypes_, vector<SupportedCategorys::SupportedStorageTypes>) };
            inline SupportedCategorys& setSupportedStorageTypes(const vector<SupportedCategorys::SupportedStorageTypes> & supportedStorageTypes) { DARABONBA_PTR_SET_VALUE(supportedStorageTypes_, supportedStorageTypes) };
            inline SupportedCategorys& setSupportedStorageTypes(vector<SupportedCategorys::SupportedStorageTypes> && supportedStorageTypes) { DARABONBA_PTR_SET_RVALUE(supportedStorageTypes_, supportedStorageTypes) };


          protected:
            // The RDS edition of the instance.
            shared_ptr<string> category_ {};
            // The storage types that are available for purchase.
            shared_ptr<vector<SupportedCategorys::SupportedStorageTypes>> supportedStorageTypes_ {};
          };

          virtual bool empty() const override { return this->supportedCategorys_ == nullptr
        && this->version_ == nullptr; };
          // supportedCategorys Field Functions 
          bool hasSupportedCategorys() const { return this->supportedCategorys_ != nullptr;};
          void deleteSupportedCategorys() { this->supportedCategorys_ = nullptr;};
          inline const vector<SupportedEngineVersions::SupportedCategorys> & getSupportedCategorys() const { DARABONBA_PTR_GET_CONST(supportedCategorys_, vector<SupportedEngineVersions::SupportedCategorys>) };
          inline vector<SupportedEngineVersions::SupportedCategorys> getSupportedCategorys() { DARABONBA_PTR_GET(supportedCategorys_, vector<SupportedEngineVersions::SupportedCategorys>) };
          inline SupportedEngineVersions& setSupportedCategorys(const vector<SupportedEngineVersions::SupportedCategorys> & supportedCategorys) { DARABONBA_PTR_SET_VALUE(supportedCategorys_, supportedCategorys) };
          inline SupportedEngineVersions& setSupportedCategorys(vector<SupportedEngineVersions::SupportedCategorys> && supportedCategorys) { DARABONBA_PTR_SET_RVALUE(supportedCategorys_, supportedCategorys) };


          // version Field Functions 
          bool hasVersion() const { return this->version_ != nullptr;};
          void deleteVersion() { this->version_ = nullptr;};
          inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
          inline SupportedEngineVersions& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


        protected:
          // The RDS editions that are available that are available for purchase.
          shared_ptr<vector<SupportedEngineVersions::SupportedCategorys>> supportedCategorys_ {};
          // The database engine version.
          shared_ptr<string> version_ {};
        };

        virtual bool empty() const override { return this->engine_ == nullptr
        && this->supportedEngineVersions_ == nullptr; };
        // engine Field Functions 
        bool hasEngine() const { return this->engine_ != nullptr;};
        void deleteEngine() { this->engine_ = nullptr;};
        inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
        inline SupportedEngines& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


        // supportedEngineVersions Field Functions 
        bool hasSupportedEngineVersions() const { return this->supportedEngineVersions_ != nullptr;};
        void deleteSupportedEngineVersions() { this->supportedEngineVersions_ = nullptr;};
        inline const vector<SupportedEngines::SupportedEngineVersions> & getSupportedEngineVersions() const { DARABONBA_PTR_GET_CONST(supportedEngineVersions_, vector<SupportedEngines::SupportedEngineVersions>) };
        inline vector<SupportedEngines::SupportedEngineVersions> getSupportedEngineVersions() { DARABONBA_PTR_GET(supportedEngineVersions_, vector<SupportedEngines::SupportedEngineVersions>) };
        inline SupportedEngines& setSupportedEngineVersions(const vector<SupportedEngines::SupportedEngineVersions> & supportedEngineVersions) { DARABONBA_PTR_SET_VALUE(supportedEngineVersions_, supportedEngineVersions) };
        inline SupportedEngines& setSupportedEngineVersions(vector<SupportedEngines::SupportedEngineVersions> && supportedEngineVersions) { DARABONBA_PTR_SET_RVALUE(supportedEngineVersions_, supportedEngineVersions) };


      protected:
        // The database engine of the instance.
        shared_ptr<string> engine_ {};
        // The database engine versions that are available for purchase.
        shared_ptr<vector<SupportedEngines::SupportedEngineVersions>> supportedEngineVersions_ {};
      };

      virtual bool empty() const override { return this->regionId_ == nullptr
        && this->supportedEngines_ == nullptr && this->zoneId_ == nullptr; };
      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline AvailableZones& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // supportedEngines Field Functions 
      bool hasSupportedEngines() const { return this->supportedEngines_ != nullptr;};
      void deleteSupportedEngines() { this->supportedEngines_ = nullptr;};
      inline const vector<AvailableZones::SupportedEngines> & getSupportedEngines() const { DARABONBA_PTR_GET_CONST(supportedEngines_, vector<AvailableZones::SupportedEngines>) };
      inline vector<AvailableZones::SupportedEngines> getSupportedEngines() { DARABONBA_PTR_GET(supportedEngines_, vector<AvailableZones::SupportedEngines>) };
      inline AvailableZones& setSupportedEngines(const vector<AvailableZones::SupportedEngines> & supportedEngines) { DARABONBA_PTR_SET_VALUE(supportedEngines_, supportedEngines) };
      inline AvailableZones& setSupportedEngines(vector<AvailableZones::SupportedEngines> && supportedEngines) { DARABONBA_PTR_SET_RVALUE(supportedEngines_, supportedEngines) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline AvailableZones& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The database engines that are available for purchase.
      shared_ptr<vector<AvailableZones::SupportedEngines>> supportedEngines_ {};
      // The zone ID.
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->availableZones_ == nullptr
        && this->requestId_ == nullptr; };
    // availableZones Field Functions 
    bool hasAvailableZones() const { return this->availableZones_ != nullptr;};
    void deleteAvailableZones() { this->availableZones_ = nullptr;};
    inline const vector<DescribeAvailableZonesResponseBody::AvailableZones> & getAvailableZones() const { DARABONBA_PTR_GET_CONST(availableZones_, vector<DescribeAvailableZonesResponseBody::AvailableZones>) };
    inline vector<DescribeAvailableZonesResponseBody::AvailableZones> getAvailableZones() { DARABONBA_PTR_GET(availableZones_, vector<DescribeAvailableZonesResponseBody::AvailableZones>) };
    inline DescribeAvailableZonesResponseBody& setAvailableZones(const vector<DescribeAvailableZonesResponseBody::AvailableZones> & availableZones) { DARABONBA_PTR_SET_VALUE(availableZones_, availableZones) };
    inline DescribeAvailableZonesResponseBody& setAvailableZones(vector<DescribeAvailableZonesResponseBody::AvailableZones> && availableZones) { DARABONBA_PTR_SET_RVALUE(availableZones_, availableZones) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAvailableZonesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The available zones in the region.
    shared_ptr<vector<DescribeAvailableZonesResponseBody::AvailableZones>> availableZones_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
