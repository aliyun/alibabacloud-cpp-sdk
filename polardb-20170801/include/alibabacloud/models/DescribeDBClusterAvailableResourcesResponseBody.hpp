// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERAVAILABLERESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERAVAILABLERESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBClusterAvailableResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterAvailableResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableZones, availableZones_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterAvailableResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableZones, availableZones_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDBClusterAvailableResourcesResponseBody() = default ;
    DescribeDBClusterAvailableResourcesResponseBody(const DescribeDBClusterAvailableResourcesResponseBody &) = default ;
    DescribeDBClusterAvailableResourcesResponseBody(DescribeDBClusterAvailableResourcesResponseBody &&) = default ;
    DescribeDBClusterAvailableResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterAvailableResourcesResponseBody() = default ;
    DescribeDBClusterAvailableResourcesResponseBody& operator=(const DescribeDBClusterAvailableResourcesResponseBody &) = default ;
    DescribeDBClusterAvailableResourcesResponseBody& operator=(DescribeDBClusterAvailableResourcesResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(AvailableResources, availableResources_);
          DARABONBA_PTR_TO_JSON(Engine, engine_);
        };
        friend void from_json(const Darabonba::Json& j, SupportedEngines& obj) { 
          DARABONBA_PTR_FROM_JSON(AvailableResources, availableResources_);
          DARABONBA_PTR_FROM_JSON(Engine, engine_);
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
        class AvailableResources : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AvailableResources& obj) { 
            DARABONBA_PTR_TO_JSON(Category, category_);
            DARABONBA_PTR_TO_JSON(DBNodeClass, DBNodeClass_);
          };
          friend void from_json(const Darabonba::Json& j, AvailableResources& obj) { 
            DARABONBA_PTR_FROM_JSON(Category, category_);
            DARABONBA_PTR_FROM_JSON(DBNodeClass, DBNodeClass_);
          };
          AvailableResources() = default ;
          AvailableResources(const AvailableResources &) = default ;
          AvailableResources(AvailableResources &&) = default ;
          AvailableResources(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AvailableResources() = default ;
          AvailableResources& operator=(const AvailableResources &) = default ;
          AvailableResources& operator=(AvailableResources &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->category_ == nullptr
        && this->DBNodeClass_ == nullptr; };
          // category Field Functions 
          bool hasCategory() const { return this->category_ != nullptr;};
          void deleteCategory() { this->category_ = nullptr;};
          inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
          inline AvailableResources& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


          // DBNodeClass Field Functions 
          bool hasDBNodeClass() const { return this->DBNodeClass_ != nullptr;};
          void deleteDBNodeClass() { this->DBNodeClass_ = nullptr;};
          inline string getDBNodeClass() const { DARABONBA_PTR_GET_DEFAULT(DBNodeClass_, "") };
          inline AvailableResources& setDBNodeClass(string DBNodeClass) { DARABONBA_PTR_SET_VALUE(DBNodeClass_, DBNodeClass) };


        protected:
          // The edition of the cluster. Valid values:
          // 
          // *   **Normal**: Cluster Edition.
          // *   **Basic**: Single Node Edition.
          // *   **ArchiveNormal**: X-Engine.
          // *   **NormalMultimaster**: Multi-master Cluster (Database/Table) Edition.
          // *   **SENormal**: Standard Edition.
          // 
          // >- Only PolarDB for MySQL supports Single Node Edition.
          // >- Only PolarDB for MySQL 8.0 supports X-Engine Edition and Multi-master Cluster (Database/Table) Edition.
          shared_ptr<string> category_ {};
          // The specifications of the node.
          shared_ptr<string> DBNodeClass_ {};
        };

        virtual bool empty() const override { return this->availableResources_ == nullptr
        && this->engine_ == nullptr; };
        // availableResources Field Functions 
        bool hasAvailableResources() const { return this->availableResources_ != nullptr;};
        void deleteAvailableResources() { this->availableResources_ = nullptr;};
        inline const vector<SupportedEngines::AvailableResources> & getAvailableResources() const { DARABONBA_PTR_GET_CONST(availableResources_, vector<SupportedEngines::AvailableResources>) };
        inline vector<SupportedEngines::AvailableResources> getAvailableResources() { DARABONBA_PTR_GET(availableResources_, vector<SupportedEngines::AvailableResources>) };
        inline SupportedEngines& setAvailableResources(const vector<SupportedEngines::AvailableResources> & availableResources) { DARABONBA_PTR_SET_VALUE(availableResources_, availableResources) };
        inline SupportedEngines& setAvailableResources(vector<SupportedEngines::AvailableResources> && availableResources) { DARABONBA_PTR_SET_RVALUE(availableResources_, availableResources) };


        // engine Field Functions 
        bool hasEngine() const { return this->engine_ != nullptr;};
        void deleteEngine() { this->engine_ = nullptr;};
        inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
        inline SupportedEngines& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


      protected:
        // The available resources.
        shared_ptr<vector<SupportedEngines::AvailableResources>> availableResources_ {};
        // The version of the database engine.
        shared_ptr<string> engine_ {};
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
      // The region ID of the cluster.
      shared_ptr<string> regionId_ {};
      // The database engines that the available resources support.
      shared_ptr<vector<AvailableZones::SupportedEngines>> supportedEngines_ {};
      // The zone ID of the cluster.
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->availableZones_ == nullptr
        && this->requestId_ == nullptr; };
    // availableZones Field Functions 
    bool hasAvailableZones() const { return this->availableZones_ != nullptr;};
    void deleteAvailableZones() { this->availableZones_ = nullptr;};
    inline const vector<DescribeDBClusterAvailableResourcesResponseBody::AvailableZones> & getAvailableZones() const { DARABONBA_PTR_GET_CONST(availableZones_, vector<DescribeDBClusterAvailableResourcesResponseBody::AvailableZones>) };
    inline vector<DescribeDBClusterAvailableResourcesResponseBody::AvailableZones> getAvailableZones() { DARABONBA_PTR_GET(availableZones_, vector<DescribeDBClusterAvailableResourcesResponseBody::AvailableZones>) };
    inline DescribeDBClusterAvailableResourcesResponseBody& setAvailableZones(const vector<DescribeDBClusterAvailableResourcesResponseBody::AvailableZones> & availableZones) { DARABONBA_PTR_SET_VALUE(availableZones_, availableZones) };
    inline DescribeDBClusterAvailableResourcesResponseBody& setAvailableZones(vector<DescribeDBClusterAvailableResourcesResponseBody::AvailableZones> && availableZones) { DARABONBA_PTR_SET_RVALUE(availableZones_, availableZones) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBClusterAvailableResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The available zones of the cluster.
    shared_ptr<vector<DescribeDBClusterAvailableResourcesResponseBody::AvailableZones>> availableZones_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
