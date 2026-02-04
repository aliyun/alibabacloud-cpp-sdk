// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCERESPONSEBODY_HPP_
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
  class DescribeAvailableResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAvailableResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableZones, availableZones_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAvailableResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableZones, availableZones_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAvailableResourceResponseBody() = default ;
    DescribeAvailableResourceResponseBody(const DescribeAvailableResourceResponseBody &) = default ;
    DescribeAvailableResourceResponseBody(DescribeAvailableResourceResponseBody &&) = default ;
    DescribeAvailableResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAvailableResourceResponseBody() = default ;
    DescribeAvailableResourceResponseBody& operator=(const DescribeAvailableResourceResponseBody &) = default ;
    DescribeAvailableResourceResponseBody& operator=(DescribeAvailableResourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AvailableZones : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AvailableZones& obj) { 
        DARABONBA_PTR_TO_JSON(AvailableZone, availableZone_);
      };
      friend void from_json(const Darabonba::Json& j, AvailableZones& obj) { 
        DARABONBA_PTR_FROM_JSON(AvailableZone, availableZone_);
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
      class AvailableZone : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AvailableZone& obj) { 
          DARABONBA_PTR_TO_JSON(IsMainSale, isMainSale_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(SupportedEngines, supportedEngines_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
          DARABONBA_PTR_TO_JSON(ZoneName, zoneName_);
        };
        friend void from_json(const Darabonba::Json& j, AvailableZone& obj) { 
          DARABONBA_PTR_FROM_JSON(IsMainSale, isMainSale_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(SupportedEngines, supportedEngines_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
          DARABONBA_PTR_FROM_JSON(ZoneName, zoneName_);
        };
        AvailableZone() = default ;
        AvailableZone(const AvailableZone &) = default ;
        AvailableZone(AvailableZone &&) = default ;
        AvailableZone(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AvailableZone() = default ;
        AvailableZone& operator=(const AvailableZone &) = default ;
        AvailableZone& operator=(AvailableZone &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SupportedEngines : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SupportedEngines& obj) { 
            DARABONBA_PTR_TO_JSON(SupportedEngine, supportedEngine_);
          };
          friend void from_json(const Darabonba::Json& j, SupportedEngines& obj) { 
            DARABONBA_PTR_FROM_JSON(SupportedEngine, supportedEngine_);
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
          class SupportedEngine : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const SupportedEngine& obj) { 
              DARABONBA_PTR_TO_JSON(Engine, engine_);
              DARABONBA_PTR_TO_JSON(SupportedEditionTypes, supportedEditionTypes_);
            };
            friend void from_json(const Darabonba::Json& j, SupportedEngine& obj) { 
              DARABONBA_PTR_FROM_JSON(Engine, engine_);
              DARABONBA_PTR_FROM_JSON(SupportedEditionTypes, supportedEditionTypes_);
            };
            SupportedEngine() = default ;
            SupportedEngine(const SupportedEngine &) = default ;
            SupportedEngine(SupportedEngine &&) = default ;
            SupportedEngine(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~SupportedEngine() = default ;
            SupportedEngine& operator=(const SupportedEngine &) = default ;
            SupportedEngine& operator=(SupportedEngine &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class SupportedEditionTypes : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const SupportedEditionTypes& obj) { 
                DARABONBA_PTR_TO_JSON(SupportedEditionType, supportedEditionType_);
              };
              friend void from_json(const Darabonba::Json& j, SupportedEditionTypes& obj) { 
                DARABONBA_PTR_FROM_JSON(SupportedEditionType, supportedEditionType_);
              };
              SupportedEditionTypes() = default ;
              SupportedEditionTypes(const SupportedEditionTypes &) = default ;
              SupportedEditionTypes(SupportedEditionTypes &&) = default ;
              SupportedEditionTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~SupportedEditionTypes() = default ;
              SupportedEditionTypes& operator=(const SupportedEditionTypes &) = default ;
              SupportedEditionTypes& operator=(SupportedEditionTypes &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class SupportedEditionType : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const SupportedEditionType& obj) { 
                  DARABONBA_PTR_TO_JSON(EditionType, editionType_);
                  DARABONBA_PTR_TO_JSON(SupportedSeriesTypes, supportedSeriesTypes_);
                };
                friend void from_json(const Darabonba::Json& j, SupportedEditionType& obj) { 
                  DARABONBA_PTR_FROM_JSON(EditionType, editionType_);
                  DARABONBA_PTR_FROM_JSON(SupportedSeriesTypes, supportedSeriesTypes_);
                };
                SupportedEditionType() = default ;
                SupportedEditionType(const SupportedEditionType &) = default ;
                SupportedEditionType(SupportedEditionType &&) = default ;
                SupportedEditionType(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~SupportedEditionType() = default ;
                SupportedEditionType& operator=(const SupportedEditionType &) = default ;
                SupportedEditionType& operator=(SupportedEditionType &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                class SupportedSeriesTypes : public Darabonba::Model {
                public:
                  friend void to_json(Darabonba::Json& j, const SupportedSeriesTypes& obj) { 
                    DARABONBA_PTR_TO_JSON(SupportedSeriesType, supportedSeriesType_);
                  };
                  friend void from_json(const Darabonba::Json& j, SupportedSeriesTypes& obj) { 
                    DARABONBA_PTR_FROM_JSON(SupportedSeriesType, supportedSeriesType_);
                  };
                  SupportedSeriesTypes() = default ;
                  SupportedSeriesTypes(const SupportedSeriesTypes &) = default ;
                  SupportedSeriesTypes(SupportedSeriesTypes &&) = default ;
                  SupportedSeriesTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
                  virtual ~SupportedSeriesTypes() = default ;
                  SupportedSeriesTypes& operator=(const SupportedSeriesTypes &) = default ;
                  SupportedSeriesTypes& operator=(SupportedSeriesTypes &&) = default ;
                  virtual void validate() const override {
                  };
                  virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                  virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                  class SupportedSeriesType : public Darabonba::Model {
                  public:
                    friend void to_json(Darabonba::Json& j, const SupportedSeriesType& obj) { 
                      DARABONBA_PTR_TO_JSON(SeriesType, seriesType_);
                      DARABONBA_PTR_TO_JSON(SupportedEngineVersions, supportedEngineVersions_);
                    };
                    friend void from_json(const Darabonba::Json& j, SupportedSeriesType& obj) { 
                      DARABONBA_PTR_FROM_JSON(SeriesType, seriesType_);
                      DARABONBA_PTR_FROM_JSON(SupportedEngineVersions, supportedEngineVersions_);
                    };
                    SupportedSeriesType() = default ;
                    SupportedSeriesType(const SupportedSeriesType &) = default ;
                    SupportedSeriesType(SupportedSeriesType &&) = default ;
                    SupportedSeriesType(const Darabonba::Json & obj) { from_json(obj, *this); };
                    virtual ~SupportedSeriesType() = default ;
                    SupportedSeriesType& operator=(const SupportedSeriesType &) = default ;
                    SupportedSeriesType& operator=(SupportedSeriesType &&) = default ;
                    virtual void validate() const override {
                    };
                    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                    class SupportedEngineVersions : public Darabonba::Model {
                    public:
                      friend void to_json(Darabonba::Json& j, const SupportedEngineVersions& obj) { 
                        DARABONBA_PTR_TO_JSON(SupportedEngineVersion, supportedEngineVersion_);
                      };
                      friend void from_json(const Darabonba::Json& j, SupportedEngineVersions& obj) { 
                        DARABONBA_PTR_FROM_JSON(SupportedEngineVersion, supportedEngineVersion_);
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
                      class SupportedEngineVersion : public Darabonba::Model {
                      public:
                        friend void to_json(Darabonba::Json& j, const SupportedEngineVersion& obj) { 
                          DARABONBA_PTR_TO_JSON(SupportedArchitectureTypes, supportedArchitectureTypes_);
                          DARABONBA_PTR_TO_JSON(Version, version_);
                        };
                        friend void from_json(const Darabonba::Json& j, SupportedEngineVersion& obj) { 
                          DARABONBA_PTR_FROM_JSON(SupportedArchitectureTypes, supportedArchitectureTypes_);
                          DARABONBA_PTR_FROM_JSON(Version, version_);
                        };
                        SupportedEngineVersion() = default ;
                        SupportedEngineVersion(const SupportedEngineVersion &) = default ;
                        SupportedEngineVersion(SupportedEngineVersion &&) = default ;
                        SupportedEngineVersion(const Darabonba::Json & obj) { from_json(obj, *this); };
                        virtual ~SupportedEngineVersion() = default ;
                        SupportedEngineVersion& operator=(const SupportedEngineVersion &) = default ;
                        SupportedEngineVersion& operator=(SupportedEngineVersion &&) = default ;
                        virtual void validate() const override {
                        };
                        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                        class SupportedArchitectureTypes : public Darabonba::Model {
                        public:
                          friend void to_json(Darabonba::Json& j, const SupportedArchitectureTypes& obj) { 
                            DARABONBA_PTR_TO_JSON(SupportedArchitectureType, supportedArchitectureType_);
                          };
                          friend void from_json(const Darabonba::Json& j, SupportedArchitectureTypes& obj) { 
                            DARABONBA_PTR_FROM_JSON(SupportedArchitectureType, supportedArchitectureType_);
                          };
                          SupportedArchitectureTypes() = default ;
                          SupportedArchitectureTypes(const SupportedArchitectureTypes &) = default ;
                          SupportedArchitectureTypes(SupportedArchitectureTypes &&) = default ;
                          SupportedArchitectureTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
                          virtual ~SupportedArchitectureTypes() = default ;
                          SupportedArchitectureTypes& operator=(const SupportedArchitectureTypes &) = default ;
                          SupportedArchitectureTypes& operator=(SupportedArchitectureTypes &&) = default ;
                          virtual void validate() const override {
                          };
                          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                          class SupportedArchitectureType : public Darabonba::Model {
                          public:
                            friend void to_json(Darabonba::Json& j, const SupportedArchitectureType& obj) { 
                              DARABONBA_PTR_TO_JSON(Architecture, architecture_);
                              DARABONBA_PTR_TO_JSON(SupportedShardNumbers, supportedShardNumbers_);
                            };
                            friend void from_json(const Darabonba::Json& j, SupportedArchitectureType& obj) { 
                              DARABONBA_PTR_FROM_JSON(Architecture, architecture_);
                              DARABONBA_PTR_FROM_JSON(SupportedShardNumbers, supportedShardNumbers_);
                            };
                            SupportedArchitectureType() = default ;
                            SupportedArchitectureType(const SupportedArchitectureType &) = default ;
                            SupportedArchitectureType(SupportedArchitectureType &&) = default ;
                            SupportedArchitectureType(const Darabonba::Json & obj) { from_json(obj, *this); };
                            virtual ~SupportedArchitectureType() = default ;
                            SupportedArchitectureType& operator=(const SupportedArchitectureType &) = default ;
                            SupportedArchitectureType& operator=(SupportedArchitectureType &&) = default ;
                            virtual void validate() const override {
                            };
                            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                            class SupportedShardNumbers : public Darabonba::Model {
                            public:
                              friend void to_json(Darabonba::Json& j, const SupportedShardNumbers& obj) { 
                                DARABONBA_PTR_TO_JSON(SupportedShardNumber, supportedShardNumber_);
                              };
                              friend void from_json(const Darabonba::Json& j, SupportedShardNumbers& obj) { 
                                DARABONBA_PTR_FROM_JSON(SupportedShardNumber, supportedShardNumber_);
                              };
                              SupportedShardNumbers() = default ;
                              SupportedShardNumbers(const SupportedShardNumbers &) = default ;
                              SupportedShardNumbers(SupportedShardNumbers &&) = default ;
                              SupportedShardNumbers(const Darabonba::Json & obj) { from_json(obj, *this); };
                              virtual ~SupportedShardNumbers() = default ;
                              SupportedShardNumbers& operator=(const SupportedShardNumbers &) = default ;
                              SupportedShardNumbers& operator=(SupportedShardNumbers &&) = default ;
                              virtual void validate() const override {
                              };
                              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                              class SupportedShardNumber : public Darabonba::Model {
                              public:
                                friend void to_json(Darabonba::Json& j, const SupportedShardNumber& obj) { 
                                  DARABONBA_PTR_TO_JSON(ShardNumber, shardNumber_);
                                  DARABONBA_PTR_TO_JSON(SupportedNodeTypes, supportedNodeTypes_);
                                };
                                friend void from_json(const Darabonba::Json& j, SupportedShardNumber& obj) { 
                                  DARABONBA_PTR_FROM_JSON(ShardNumber, shardNumber_);
                                  DARABONBA_PTR_FROM_JSON(SupportedNodeTypes, supportedNodeTypes_);
                                };
                                SupportedShardNumber() = default ;
                                SupportedShardNumber(const SupportedShardNumber &) = default ;
                                SupportedShardNumber(SupportedShardNumber &&) = default ;
                                SupportedShardNumber(const Darabonba::Json & obj) { from_json(obj, *this); };
                                virtual ~SupportedShardNumber() = default ;
                                SupportedShardNumber& operator=(const SupportedShardNumber &) = default ;
                                SupportedShardNumber& operator=(SupportedShardNumber &&) = default ;
                                virtual void validate() const override {
                                };
                                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                                class SupportedNodeTypes : public Darabonba::Model {
                                public:
                                  friend void to_json(Darabonba::Json& j, const SupportedNodeTypes& obj) { 
                                    DARABONBA_PTR_TO_JSON(SupportedNodeType, supportedNodeType_);
                                  };
                                  friend void from_json(const Darabonba::Json& j, SupportedNodeTypes& obj) { 
                                    DARABONBA_PTR_FROM_JSON(SupportedNodeType, supportedNodeType_);
                                  };
                                  SupportedNodeTypes() = default ;
                                  SupportedNodeTypes(const SupportedNodeTypes &) = default ;
                                  SupportedNodeTypes(SupportedNodeTypes &&) = default ;
                                  SupportedNodeTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
                                  virtual ~SupportedNodeTypes() = default ;
                                  SupportedNodeTypes& operator=(const SupportedNodeTypes &) = default ;
                                  SupportedNodeTypes& operator=(SupportedNodeTypes &&) = default ;
                                  virtual void validate() const override {
                                  };
                                  virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                                  virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                                  class SupportedNodeType : public Darabonba::Model {
                                  public:
                                    friend void to_json(Darabonba::Json& j, const SupportedNodeType& obj) { 
                                      DARABONBA_PTR_TO_JSON(AvailableResources, availableResources_);
                                      DARABONBA_PTR_TO_JSON(SupportedNodeType, supportedNodeType_);
                                    };
                                    friend void from_json(const Darabonba::Json& j, SupportedNodeType& obj) { 
                                      DARABONBA_PTR_FROM_JSON(AvailableResources, availableResources_);
                                      DARABONBA_PTR_FROM_JSON(SupportedNodeType, supportedNodeType_);
                                    };
                                    SupportedNodeType() = default ;
                                    SupportedNodeType(const SupportedNodeType &) = default ;
                                    SupportedNodeType(SupportedNodeType &&) = default ;
                                    SupportedNodeType(const Darabonba::Json & obj) { from_json(obj, *this); };
                                    virtual ~SupportedNodeType() = default ;
                                    SupportedNodeType& operator=(const SupportedNodeType &) = default ;
                                    SupportedNodeType& operator=(SupportedNodeType &&) = default ;
                                    virtual void validate() const override {
                                    };
                                    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                                    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                                    class AvailableResources : public Darabonba::Model {
                                    public:
                                      friend void to_json(Darabonba::Json& j, const AvailableResources& obj) { 
                                        DARABONBA_PTR_TO_JSON(AvailableResource, availableResource_);
                                      };
                                      friend void from_json(const Darabonba::Json& j, AvailableResources& obj) { 
                                        DARABONBA_PTR_FROM_JSON(AvailableResource, availableResource_);
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
                                      class AvailableResource : public Darabonba::Model {
                                      public:
                                        friend void to_json(Darabonba::Json& j, const AvailableResource& obj) { 
                                          DARABONBA_PTR_TO_JSON(Capacity, capacity_);
                                          DARABONBA_PTR_TO_JSON(InstanceClass, instanceClass_);
                                          DARABONBA_PTR_TO_JSON(InstanceClassRemark, instanceClassRemark_);
                                        };
                                        friend void from_json(const Darabonba::Json& j, AvailableResource& obj) { 
                                          DARABONBA_PTR_FROM_JSON(Capacity, capacity_);
                                          DARABONBA_PTR_FROM_JSON(InstanceClass, instanceClass_);
                                          DARABONBA_PTR_FROM_JSON(InstanceClassRemark, instanceClassRemark_);
                                        };
                                        AvailableResource() = default ;
                                        AvailableResource(const AvailableResource &) = default ;
                                        AvailableResource(AvailableResource &&) = default ;
                                        AvailableResource(const Darabonba::Json & obj) { from_json(obj, *this); };
                                        virtual ~AvailableResource() = default ;
                                        AvailableResource& operator=(const AvailableResource &) = default ;
                                        AvailableResource& operator=(AvailableResource &&) = default ;
                                        virtual void validate() const override {
                                        };
                                        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                                        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                                        virtual bool empty() const override { return this->capacity_ == nullptr
        && this->instanceClass_ == nullptr && this->instanceClassRemark_ == nullptr; };
                                        // capacity Field Functions 
                                        bool hasCapacity() const { return this->capacity_ != nullptr;};
                                        void deleteCapacity() { this->capacity_ = nullptr;};
                                        inline int64_t getCapacity() const { DARABONBA_PTR_GET_DEFAULT(capacity_, 0L) };
                                        inline AvailableResource& setCapacity(int64_t capacity) { DARABONBA_PTR_SET_VALUE(capacity_, capacity) };


                                        // instanceClass Field Functions 
                                        bool hasInstanceClass() const { return this->instanceClass_ != nullptr;};
                                        void deleteInstanceClass() { this->instanceClass_ = nullptr;};
                                        inline string getInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(instanceClass_, "") };
                                        inline AvailableResource& setInstanceClass(string instanceClass) { DARABONBA_PTR_SET_VALUE(instanceClass_, instanceClass) };


                                        // instanceClassRemark Field Functions 
                                        bool hasInstanceClassRemark() const { return this->instanceClassRemark_ != nullptr;};
                                        void deleteInstanceClassRemark() { this->instanceClassRemark_ = nullptr;};
                                        inline string getInstanceClassRemark() const { DARABONBA_PTR_GET_DEFAULT(instanceClassRemark_, "") };
                                        inline AvailableResource& setInstanceClassRemark(string instanceClassRemark) { DARABONBA_PTR_SET_VALUE(instanceClassRemark_, instanceClassRemark) };


                                      protected:
                                        // The memory size of the instance. Unit: MB.
                                        shared_ptr<int64_t> capacity_ {};
                                        // The code of the instance type. If you want to view the code of an instance type, you can search for the code of the instance type in Help Center.
                                        shared_ptr<string> instanceClass_ {};
                                        // The description of the instance type.
                                        shared_ptr<string> instanceClassRemark_ {};
                                      };

                                      virtual bool empty() const override { return this->availableResource_ == nullptr; };
                                      // availableResource Field Functions 
                                      bool hasAvailableResource() const { return this->availableResource_ != nullptr;};
                                      void deleteAvailableResource() { this->availableResource_ = nullptr;};
                                      inline const vector<AvailableResources::AvailableResource> & getAvailableResource() const { DARABONBA_PTR_GET_CONST(availableResource_, vector<AvailableResources::AvailableResource>) };
                                      inline vector<AvailableResources::AvailableResource> getAvailableResource() { DARABONBA_PTR_GET(availableResource_, vector<AvailableResources::AvailableResource>) };
                                      inline AvailableResources& setAvailableResource(const vector<AvailableResources::AvailableResource> & availableResource) { DARABONBA_PTR_SET_VALUE(availableResource_, availableResource) };
                                      inline AvailableResources& setAvailableResource(vector<AvailableResources::AvailableResource> && availableResource) { DARABONBA_PTR_SET_RVALUE(availableResource_, availableResource) };


                                    protected:
                                      shared_ptr<vector<AvailableResources::AvailableResource>> availableResource_ {};
                                    };

                                    virtual bool empty() const override { return this->availableResources_ == nullptr
        && this->supportedNodeType_ == nullptr; };
                                    // availableResources Field Functions 
                                    bool hasAvailableResources() const { return this->availableResources_ != nullptr;};
                                    void deleteAvailableResources() { this->availableResources_ = nullptr;};
                                    inline const SupportedNodeType::AvailableResources & getAvailableResources() const { DARABONBA_PTR_GET_CONST(availableResources_, SupportedNodeType::AvailableResources) };
                                    inline SupportedNodeType::AvailableResources getAvailableResources() { DARABONBA_PTR_GET(availableResources_, SupportedNodeType::AvailableResources) };
                                    inline SupportedNodeType& setAvailableResources(const SupportedNodeType::AvailableResources & availableResources) { DARABONBA_PTR_SET_VALUE(availableResources_, availableResources) };
                                    inline SupportedNodeType& setAvailableResources(SupportedNodeType::AvailableResources && availableResources) { DARABONBA_PTR_SET_RVALUE(availableResources_, availableResources) };


                                    // supportedNodeType Field Functions 
                                    bool hasSupportedNodeType() const { return this->supportedNodeType_ != nullptr;};
                                    void deleteSupportedNodeType() { this->supportedNodeType_ = nullptr;};
                                    inline string getSupportedNodeType() const { DARABONBA_PTR_GET_DEFAULT(supportedNodeType_, "") };
                                    inline SupportedNodeType& setSupportedNodeType(string supportedNodeType) { DARABONBA_PTR_SET_VALUE(supportedNodeType_, supportedNodeType) };


                                  protected:
                                    // The available instance types.
                                    shared_ptr<SupportedNodeType::AvailableResources> availableResources_ {};
                                    // The node type of the instance. Valid values:
                                    // 
                                    // *   **single**: standalone
                                    // *   **double**: master-replica
                                    shared_ptr<string> supportedNodeType_ {};
                                  };

                                  virtual bool empty() const override { return this->supportedNodeType_ == nullptr; };
                                  // supportedNodeType Field Functions 
                                  bool hasSupportedNodeType() const { return this->supportedNodeType_ != nullptr;};
                                  void deleteSupportedNodeType() { this->supportedNodeType_ = nullptr;};
                                  inline const vector<SupportedNodeTypes::SupportedNodeType> & getSupportedNodeType() const { DARABONBA_PTR_GET_CONST(supportedNodeType_, vector<SupportedNodeTypes::SupportedNodeType>) };
                                  inline vector<SupportedNodeTypes::SupportedNodeType> getSupportedNodeType() { DARABONBA_PTR_GET(supportedNodeType_, vector<SupportedNodeTypes::SupportedNodeType>) };
                                  inline SupportedNodeTypes& setSupportedNodeType(const vector<SupportedNodeTypes::SupportedNodeType> & supportedNodeType) { DARABONBA_PTR_SET_VALUE(supportedNodeType_, supportedNodeType) };
                                  inline SupportedNodeTypes& setSupportedNodeType(vector<SupportedNodeTypes::SupportedNodeType> && supportedNodeType) { DARABONBA_PTR_SET_RVALUE(supportedNodeType_, supportedNodeType) };


                                protected:
                                  shared_ptr<vector<SupportedNodeTypes::SupportedNodeType>> supportedNodeType_ {};
                                };

                                virtual bool empty() const override { return this->shardNumber_ == nullptr
        && this->supportedNodeTypes_ == nullptr; };
                                // shardNumber Field Functions 
                                bool hasShardNumber() const { return this->shardNumber_ != nullptr;};
                                void deleteShardNumber() { this->shardNumber_ = nullptr;};
                                inline string getShardNumber() const { DARABONBA_PTR_GET_DEFAULT(shardNumber_, "") };
                                inline SupportedShardNumber& setShardNumber(string shardNumber) { DARABONBA_PTR_SET_VALUE(shardNumber_, shardNumber) };


                                // supportedNodeTypes Field Functions 
                                bool hasSupportedNodeTypes() const { return this->supportedNodeTypes_ != nullptr;};
                                void deleteSupportedNodeTypes() { this->supportedNodeTypes_ = nullptr;};
                                inline const SupportedShardNumber::SupportedNodeTypes & getSupportedNodeTypes() const { DARABONBA_PTR_GET_CONST(supportedNodeTypes_, SupportedShardNumber::SupportedNodeTypes) };
                                inline SupportedShardNumber::SupportedNodeTypes getSupportedNodeTypes() { DARABONBA_PTR_GET(supportedNodeTypes_, SupportedShardNumber::SupportedNodeTypes) };
                                inline SupportedShardNumber& setSupportedNodeTypes(const SupportedShardNumber::SupportedNodeTypes & supportedNodeTypes) { DARABONBA_PTR_SET_VALUE(supportedNodeTypes_, supportedNodeTypes) };
                                inline SupportedShardNumber& setSupportedNodeTypes(SupportedShardNumber::SupportedNodeTypes && supportedNodeTypes) { DARABONBA_PTR_SET_RVALUE(supportedNodeTypes_, supportedNodeTypes) };


                              protected:
                                // The number of shards.
                                shared_ptr<string> shardNumber_ {};
                                // The supported node types.
                                shared_ptr<SupportedShardNumber::SupportedNodeTypes> supportedNodeTypes_ {};
                              };

                              virtual bool empty() const override { return this->supportedShardNumber_ == nullptr; };
                              // supportedShardNumber Field Functions 
                              bool hasSupportedShardNumber() const { return this->supportedShardNumber_ != nullptr;};
                              void deleteSupportedShardNumber() { this->supportedShardNumber_ = nullptr;};
                              inline const vector<SupportedShardNumbers::SupportedShardNumber> & getSupportedShardNumber() const { DARABONBA_PTR_GET_CONST(supportedShardNumber_, vector<SupportedShardNumbers::SupportedShardNumber>) };
                              inline vector<SupportedShardNumbers::SupportedShardNumber> getSupportedShardNumber() { DARABONBA_PTR_GET(supportedShardNumber_, vector<SupportedShardNumbers::SupportedShardNumber>) };
                              inline SupportedShardNumbers& setSupportedShardNumber(const vector<SupportedShardNumbers::SupportedShardNumber> & supportedShardNumber) { DARABONBA_PTR_SET_VALUE(supportedShardNumber_, supportedShardNumber) };
                              inline SupportedShardNumbers& setSupportedShardNumber(vector<SupportedShardNumbers::SupportedShardNumber> && supportedShardNumber) { DARABONBA_PTR_SET_RVALUE(supportedShardNumber_, supportedShardNumber) };


                            protected:
                              shared_ptr<vector<SupportedShardNumbers::SupportedShardNumber>> supportedShardNumber_ {};
                            };

                            virtual bool empty() const override { return this->architecture_ == nullptr
        && this->supportedShardNumbers_ == nullptr; };
                            // architecture Field Functions 
                            bool hasArchitecture() const { return this->architecture_ != nullptr;};
                            void deleteArchitecture() { this->architecture_ = nullptr;};
                            inline string getArchitecture() const { DARABONBA_PTR_GET_DEFAULT(architecture_, "") };
                            inline SupportedArchitectureType& setArchitecture(string architecture) { DARABONBA_PTR_SET_VALUE(architecture_, architecture) };


                            // supportedShardNumbers Field Functions 
                            bool hasSupportedShardNumbers() const { return this->supportedShardNumbers_ != nullptr;};
                            void deleteSupportedShardNumbers() { this->supportedShardNumbers_ = nullptr;};
                            inline const SupportedArchitectureType::SupportedShardNumbers & getSupportedShardNumbers() const { DARABONBA_PTR_GET_CONST(supportedShardNumbers_, SupportedArchitectureType::SupportedShardNumbers) };
                            inline SupportedArchitectureType::SupportedShardNumbers getSupportedShardNumbers() { DARABONBA_PTR_GET(supportedShardNumbers_, SupportedArchitectureType::SupportedShardNumbers) };
                            inline SupportedArchitectureType& setSupportedShardNumbers(const SupportedArchitectureType::SupportedShardNumbers & supportedShardNumbers) { DARABONBA_PTR_SET_VALUE(supportedShardNumbers_, supportedShardNumbers) };
                            inline SupportedArchitectureType& setSupportedShardNumbers(SupportedArchitectureType::SupportedShardNumbers && supportedShardNumbers) { DARABONBA_PTR_SET_RVALUE(supportedShardNumbers_, supportedShardNumbers) };


                          protected:
                            // The architecture of the instance. Valid values:
                            // 
                            // *   **standard**: standard architecture
                            // *   **cluster**: cluster architecture
                            // *   **rwsplit**: read/write splitting architecture
                            shared_ptr<string> architecture_ {};
                            // The numbers of available shards.
                            shared_ptr<SupportedArchitectureType::SupportedShardNumbers> supportedShardNumbers_ {};
                          };

                          virtual bool empty() const override { return this->supportedArchitectureType_ == nullptr; };
                          // supportedArchitectureType Field Functions 
                          bool hasSupportedArchitectureType() const { return this->supportedArchitectureType_ != nullptr;};
                          void deleteSupportedArchitectureType() { this->supportedArchitectureType_ = nullptr;};
                          inline const vector<SupportedArchitectureTypes::SupportedArchitectureType> & getSupportedArchitectureType() const { DARABONBA_PTR_GET_CONST(supportedArchitectureType_, vector<SupportedArchitectureTypes::SupportedArchitectureType>) };
                          inline vector<SupportedArchitectureTypes::SupportedArchitectureType> getSupportedArchitectureType() { DARABONBA_PTR_GET(supportedArchitectureType_, vector<SupportedArchitectureTypes::SupportedArchitectureType>) };
                          inline SupportedArchitectureTypes& setSupportedArchitectureType(const vector<SupportedArchitectureTypes::SupportedArchitectureType> & supportedArchitectureType) { DARABONBA_PTR_SET_VALUE(supportedArchitectureType_, supportedArchitectureType) };
                          inline SupportedArchitectureTypes& setSupportedArchitectureType(vector<SupportedArchitectureTypes::SupportedArchitectureType> && supportedArchitectureType) { DARABONBA_PTR_SET_RVALUE(supportedArchitectureType_, supportedArchitectureType) };


                        protected:
                          shared_ptr<vector<SupportedArchitectureTypes::SupportedArchitectureType>> supportedArchitectureType_ {};
                        };

                        virtual bool empty() const override { return this->supportedArchitectureTypes_ == nullptr
        && this->version_ == nullptr; };
                        // supportedArchitectureTypes Field Functions 
                        bool hasSupportedArchitectureTypes() const { return this->supportedArchitectureTypes_ != nullptr;};
                        void deleteSupportedArchitectureTypes() { this->supportedArchitectureTypes_ = nullptr;};
                        inline const SupportedEngineVersion::SupportedArchitectureTypes & getSupportedArchitectureTypes() const { DARABONBA_PTR_GET_CONST(supportedArchitectureTypes_, SupportedEngineVersion::SupportedArchitectureTypes) };
                        inline SupportedEngineVersion::SupportedArchitectureTypes getSupportedArchitectureTypes() { DARABONBA_PTR_GET(supportedArchitectureTypes_, SupportedEngineVersion::SupportedArchitectureTypes) };
                        inline SupportedEngineVersion& setSupportedArchitectureTypes(const SupportedEngineVersion::SupportedArchitectureTypes & supportedArchitectureTypes) { DARABONBA_PTR_SET_VALUE(supportedArchitectureTypes_, supportedArchitectureTypes) };
                        inline SupportedEngineVersion& setSupportedArchitectureTypes(SupportedEngineVersion::SupportedArchitectureTypes && supportedArchitectureTypes) { DARABONBA_PTR_SET_RVALUE(supportedArchitectureTypes_, supportedArchitectureTypes) };


                        // version Field Functions 
                        bool hasVersion() const { return this->version_ != nullptr;};
                        void deleteVersion() { this->version_ = nullptr;};
                        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
                        inline SupportedEngineVersion& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


                      protected:
                        // The available architectures.
                        shared_ptr<SupportedEngineVersion::SupportedArchitectureTypes> supportedArchitectureTypes_ {};
                        // The engine version of the instance.
                        shared_ptr<string> version_ {};
                      };

                      virtual bool empty() const override { return this->supportedEngineVersion_ == nullptr; };
                      // supportedEngineVersion Field Functions 
                      bool hasSupportedEngineVersion() const { return this->supportedEngineVersion_ != nullptr;};
                      void deleteSupportedEngineVersion() { this->supportedEngineVersion_ = nullptr;};
                      inline const vector<SupportedEngineVersions::SupportedEngineVersion> & getSupportedEngineVersion() const { DARABONBA_PTR_GET_CONST(supportedEngineVersion_, vector<SupportedEngineVersions::SupportedEngineVersion>) };
                      inline vector<SupportedEngineVersions::SupportedEngineVersion> getSupportedEngineVersion() { DARABONBA_PTR_GET(supportedEngineVersion_, vector<SupportedEngineVersions::SupportedEngineVersion>) };
                      inline SupportedEngineVersions& setSupportedEngineVersion(const vector<SupportedEngineVersions::SupportedEngineVersion> & supportedEngineVersion) { DARABONBA_PTR_SET_VALUE(supportedEngineVersion_, supportedEngineVersion) };
                      inline SupportedEngineVersions& setSupportedEngineVersion(vector<SupportedEngineVersions::SupportedEngineVersion> && supportedEngineVersion) { DARABONBA_PTR_SET_RVALUE(supportedEngineVersion_, supportedEngineVersion) };


                    protected:
                      shared_ptr<vector<SupportedEngineVersions::SupportedEngineVersion>> supportedEngineVersion_ {};
                    };

                    virtual bool empty() const override { return this->seriesType_ == nullptr
        && this->supportedEngineVersions_ == nullptr; };
                    // seriesType Field Functions 
                    bool hasSeriesType() const { return this->seriesType_ != nullptr;};
                    void deleteSeriesType() { this->seriesType_ = nullptr;};
                    inline string getSeriesType() const { DARABONBA_PTR_GET_DEFAULT(seriesType_, "") };
                    inline SupportedSeriesType& setSeriesType(string seriesType) { DARABONBA_PTR_SET_VALUE(seriesType_, seriesType) };


                    // supportedEngineVersions Field Functions 
                    bool hasSupportedEngineVersions() const { return this->supportedEngineVersions_ != nullptr;};
                    void deleteSupportedEngineVersions() { this->supportedEngineVersions_ = nullptr;};
                    inline const SupportedSeriesType::SupportedEngineVersions & getSupportedEngineVersions() const { DARABONBA_PTR_GET_CONST(supportedEngineVersions_, SupportedSeriesType::SupportedEngineVersions) };
                    inline SupportedSeriesType::SupportedEngineVersions getSupportedEngineVersions() { DARABONBA_PTR_GET(supportedEngineVersions_, SupportedSeriesType::SupportedEngineVersions) };
                    inline SupportedSeriesType& setSupportedEngineVersions(const SupportedSeriesType::SupportedEngineVersions & supportedEngineVersions) { DARABONBA_PTR_SET_VALUE(supportedEngineVersions_, supportedEngineVersions) };
                    inline SupportedSeriesType& setSupportedEngineVersions(SupportedSeriesType::SupportedEngineVersions && supportedEngineVersions) { DARABONBA_PTR_SET_RVALUE(supportedEngineVersions_, supportedEngineVersions) };


                  protected:
                    // The instance series. Valid values:
                    // 
                    // *   **enhanced_performance_type**: Tair (Enterprise Edition) DRAM-based instance
                    // *   **hybrid_storage**: Redis Open-Source Edition hybrid-storage instance
                    shared_ptr<string> seriesType_ {};
                    // The available engine versions.
                    shared_ptr<SupportedSeriesType::SupportedEngineVersions> supportedEngineVersions_ {};
                  };

                  virtual bool empty() const override { return this->supportedSeriesType_ == nullptr; };
                  // supportedSeriesType Field Functions 
                  bool hasSupportedSeriesType() const { return this->supportedSeriesType_ != nullptr;};
                  void deleteSupportedSeriesType() { this->supportedSeriesType_ = nullptr;};
                  inline const vector<SupportedSeriesTypes::SupportedSeriesType> & getSupportedSeriesType() const { DARABONBA_PTR_GET_CONST(supportedSeriesType_, vector<SupportedSeriesTypes::SupportedSeriesType>) };
                  inline vector<SupportedSeriesTypes::SupportedSeriesType> getSupportedSeriesType() { DARABONBA_PTR_GET(supportedSeriesType_, vector<SupportedSeriesTypes::SupportedSeriesType>) };
                  inline SupportedSeriesTypes& setSupportedSeriesType(const vector<SupportedSeriesTypes::SupportedSeriesType> & supportedSeriesType) { DARABONBA_PTR_SET_VALUE(supportedSeriesType_, supportedSeriesType) };
                  inline SupportedSeriesTypes& setSupportedSeriesType(vector<SupportedSeriesTypes::SupportedSeriesType> && supportedSeriesType) { DARABONBA_PTR_SET_RVALUE(supportedSeriesType_, supportedSeriesType) };


                protected:
                  shared_ptr<vector<SupportedSeriesTypes::SupportedSeriesType>> supportedSeriesType_ {};
                };

                virtual bool empty() const override { return this->editionType_ == nullptr
        && this->supportedSeriesTypes_ == nullptr; };
                // editionType Field Functions 
                bool hasEditionType() const { return this->editionType_ != nullptr;};
                void deleteEditionType() { this->editionType_ = nullptr;};
                inline string getEditionType() const { DARABONBA_PTR_GET_DEFAULT(editionType_, "") };
                inline SupportedEditionType& setEditionType(string editionType) { DARABONBA_PTR_SET_VALUE(editionType_, editionType) };


                // supportedSeriesTypes Field Functions 
                bool hasSupportedSeriesTypes() const { return this->supportedSeriesTypes_ != nullptr;};
                void deleteSupportedSeriesTypes() { this->supportedSeriesTypes_ = nullptr;};
                inline const SupportedEditionType::SupportedSeriesTypes & getSupportedSeriesTypes() const { DARABONBA_PTR_GET_CONST(supportedSeriesTypes_, SupportedEditionType::SupportedSeriesTypes) };
                inline SupportedEditionType::SupportedSeriesTypes getSupportedSeriesTypes() { DARABONBA_PTR_GET(supportedSeriesTypes_, SupportedEditionType::SupportedSeriesTypes) };
                inline SupportedEditionType& setSupportedSeriesTypes(const SupportedEditionType::SupportedSeriesTypes & supportedSeriesTypes) { DARABONBA_PTR_SET_VALUE(supportedSeriesTypes_, supportedSeriesTypes) };
                inline SupportedEditionType& setSupportedSeriesTypes(SupportedEditionType::SupportedSeriesTypes && supportedSeriesTypes) { DARABONBA_PTR_SET_RVALUE(supportedSeriesTypes_, supportedSeriesTypes) };


              protected:
                // The edition of the instance. Valid values:
                // 
                // *   **Community**: Community Edition
                // *   **Enterprise**: Enhanced Edition (Tair)
                shared_ptr<string> editionType_ {};
                // The instance series types.
                shared_ptr<SupportedEditionType::SupportedSeriesTypes> supportedSeriesTypes_ {};
              };

              virtual bool empty() const override { return this->supportedEditionType_ == nullptr; };
              // supportedEditionType Field Functions 
              bool hasSupportedEditionType() const { return this->supportedEditionType_ != nullptr;};
              void deleteSupportedEditionType() { this->supportedEditionType_ = nullptr;};
              inline const vector<SupportedEditionTypes::SupportedEditionType> & getSupportedEditionType() const { DARABONBA_PTR_GET_CONST(supportedEditionType_, vector<SupportedEditionTypes::SupportedEditionType>) };
              inline vector<SupportedEditionTypes::SupportedEditionType> getSupportedEditionType() { DARABONBA_PTR_GET(supportedEditionType_, vector<SupportedEditionTypes::SupportedEditionType>) };
              inline SupportedEditionTypes& setSupportedEditionType(const vector<SupportedEditionTypes::SupportedEditionType> & supportedEditionType) { DARABONBA_PTR_SET_VALUE(supportedEditionType_, supportedEditionType) };
              inline SupportedEditionTypes& setSupportedEditionType(vector<SupportedEditionTypes::SupportedEditionType> && supportedEditionType) { DARABONBA_PTR_SET_RVALUE(supportedEditionType_, supportedEditionType) };


            protected:
              shared_ptr<vector<SupportedEditionTypes::SupportedEditionType>> supportedEditionType_ {};
            };

            virtual bool empty() const override { return this->engine_ == nullptr
        && this->supportedEditionTypes_ == nullptr; };
            // engine Field Functions 
            bool hasEngine() const { return this->engine_ != nullptr;};
            void deleteEngine() { this->engine_ = nullptr;};
            inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
            inline SupportedEngine& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


            // supportedEditionTypes Field Functions 
            bool hasSupportedEditionTypes() const { return this->supportedEditionTypes_ != nullptr;};
            void deleteSupportedEditionTypes() { this->supportedEditionTypes_ = nullptr;};
            inline const SupportedEngine::SupportedEditionTypes & getSupportedEditionTypes() const { DARABONBA_PTR_GET_CONST(supportedEditionTypes_, SupportedEngine::SupportedEditionTypes) };
            inline SupportedEngine::SupportedEditionTypes getSupportedEditionTypes() { DARABONBA_PTR_GET(supportedEditionTypes_, SupportedEngine::SupportedEditionTypes) };
            inline SupportedEngine& setSupportedEditionTypes(const SupportedEngine::SupportedEditionTypes & supportedEditionTypes) { DARABONBA_PTR_SET_VALUE(supportedEditionTypes_, supportedEditionTypes) };
            inline SupportedEngine& setSupportedEditionTypes(SupportedEngine::SupportedEditionTypes && supportedEditionTypes) { DARABONBA_PTR_SET_RVALUE(supportedEditionTypes_, supportedEditionTypes) };


          protected:
            // The database engine of the instance.
            shared_ptr<string> engine_ {};
            // The instance edition types.
            shared_ptr<SupportedEngine::SupportedEditionTypes> supportedEditionTypes_ {};
          };

          virtual bool empty() const override { return this->supportedEngine_ == nullptr; };
          // supportedEngine Field Functions 
          bool hasSupportedEngine() const { return this->supportedEngine_ != nullptr;};
          void deleteSupportedEngine() { this->supportedEngine_ = nullptr;};
          inline const vector<SupportedEngines::SupportedEngine> & getSupportedEngine() const { DARABONBA_PTR_GET_CONST(supportedEngine_, vector<SupportedEngines::SupportedEngine>) };
          inline vector<SupportedEngines::SupportedEngine> getSupportedEngine() { DARABONBA_PTR_GET(supportedEngine_, vector<SupportedEngines::SupportedEngine>) };
          inline SupportedEngines& setSupportedEngine(const vector<SupportedEngines::SupportedEngine> & supportedEngine) { DARABONBA_PTR_SET_VALUE(supportedEngine_, supportedEngine) };
          inline SupportedEngines& setSupportedEngine(vector<SupportedEngines::SupportedEngine> && supportedEngine) { DARABONBA_PTR_SET_RVALUE(supportedEngine_, supportedEngine) };


        protected:
          shared_ptr<vector<SupportedEngines::SupportedEngine>> supportedEngine_ {};
        };

        virtual bool empty() const override { return this->isMainSale_ == nullptr
        && this->regionId_ == nullptr && this->supportedEngines_ == nullptr && this->zoneId_ == nullptr && this->zoneName_ == nullptr; };
        // isMainSale Field Functions 
        bool hasIsMainSale() const { return this->isMainSale_ != nullptr;};
        void deleteIsMainSale() { this->isMainSale_ = nullptr;};
        inline bool getIsMainSale() const { DARABONBA_PTR_GET_DEFAULT(isMainSale_, false) };
        inline AvailableZone& setIsMainSale(bool isMainSale) { DARABONBA_PTR_SET_VALUE(isMainSale_, isMainSale) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline AvailableZone& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // supportedEngines Field Functions 
        bool hasSupportedEngines() const { return this->supportedEngines_ != nullptr;};
        void deleteSupportedEngines() { this->supportedEngines_ = nullptr;};
        inline const AvailableZone::SupportedEngines & getSupportedEngines() const { DARABONBA_PTR_GET_CONST(supportedEngines_, AvailableZone::SupportedEngines) };
        inline AvailableZone::SupportedEngines getSupportedEngines() { DARABONBA_PTR_GET(supportedEngines_, AvailableZone::SupportedEngines) };
        inline AvailableZone& setSupportedEngines(const AvailableZone::SupportedEngines & supportedEngines) { DARABONBA_PTR_SET_VALUE(supportedEngines_, supportedEngines) };
        inline AvailableZone& setSupportedEngines(AvailableZone::SupportedEngines && supportedEngines) { DARABONBA_PTR_SET_RVALUE(supportedEngines_, supportedEngines) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline AvailableZone& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


        // zoneName Field Functions 
        bool hasZoneName() const { return this->zoneName_ != nullptr;};
        void deleteZoneName() { this->zoneName_ = nullptr;};
        inline string getZoneName() const { DARABONBA_PTR_GET_DEFAULT(zoneName_, "") };
        inline AvailableZone& setZoneName(string zoneName) { DARABONBA_PTR_SET_VALUE(zoneName_, zoneName) };


      protected:
        // An internal parameter.
        shared_ptr<bool> isMainSale_ {};
        // The ID of the region.
        shared_ptr<string> regionId_ {};
        // The supported engines.
        shared_ptr<AvailableZone::SupportedEngines> supportedEngines_ {};
        // The ID of the zone in which the instance is located.
        shared_ptr<string> zoneId_ {};
        // The name of the zone.
        shared_ptr<string> zoneName_ {};
      };

      virtual bool empty() const override { return this->availableZone_ == nullptr; };
      // availableZone Field Functions 
      bool hasAvailableZone() const { return this->availableZone_ != nullptr;};
      void deleteAvailableZone() { this->availableZone_ = nullptr;};
      inline const vector<AvailableZones::AvailableZone> & getAvailableZone() const { DARABONBA_PTR_GET_CONST(availableZone_, vector<AvailableZones::AvailableZone>) };
      inline vector<AvailableZones::AvailableZone> getAvailableZone() { DARABONBA_PTR_GET(availableZone_, vector<AvailableZones::AvailableZone>) };
      inline AvailableZones& setAvailableZone(const vector<AvailableZones::AvailableZone> & availableZone) { DARABONBA_PTR_SET_VALUE(availableZone_, availableZone) };
      inline AvailableZones& setAvailableZone(vector<AvailableZones::AvailableZone> && availableZone) { DARABONBA_PTR_SET_RVALUE(availableZone_, availableZone) };


    protected:
      shared_ptr<vector<AvailableZones::AvailableZone>> availableZone_ {};
    };

    virtual bool empty() const override { return this->availableZones_ == nullptr
        && this->requestId_ == nullptr; };
    // availableZones Field Functions 
    bool hasAvailableZones() const { return this->availableZones_ != nullptr;};
    void deleteAvailableZones() { this->availableZones_ = nullptr;};
    inline const DescribeAvailableResourceResponseBody::AvailableZones & getAvailableZones() const { DARABONBA_PTR_GET_CONST(availableZones_, DescribeAvailableResourceResponseBody::AvailableZones) };
    inline DescribeAvailableResourceResponseBody::AvailableZones getAvailableZones() { DARABONBA_PTR_GET(availableZones_, DescribeAvailableResourceResponseBody::AvailableZones) };
    inline DescribeAvailableResourceResponseBody& setAvailableZones(const DescribeAvailableResourceResponseBody::AvailableZones & availableZones) { DARABONBA_PTR_SET_VALUE(availableZones_, availableZones) };
    inline DescribeAvailableResourceResponseBody& setAvailableZones(DescribeAvailableResourceResponseBody::AvailableZones && availableZones) { DARABONBA_PTR_SET_RVALUE(availableZones_, availableZones) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAvailableResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details about the zones.
    shared_ptr<DescribeAvailableResourceResponseBody::AvailableZones> availableZones_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
