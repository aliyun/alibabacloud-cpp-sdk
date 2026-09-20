// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20190101
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
          DARABONBA_PTR_TO_JSON(MasterResources, masterResources_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(SupportedEngines, supportedEngines_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, AvailableZone& obj) { 
          DARABONBA_PTR_FROM_JSON(MasterResources, masterResources_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(SupportedEngines, supportedEngines_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
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
              DARABONBA_PTR_TO_JSON(SupportedEngineVersions, supportedEngineVersions_);
            };
            friend void from_json(const Darabonba::Json& j, SupportedEngine& obj) { 
              DARABONBA_PTR_FROM_JSON(Engine, engine_);
              DARABONBA_PTR_FROM_JSON(SupportedEngineVersions, supportedEngineVersions_);
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
                  DARABONBA_PTR_TO_JSON(SupportedCategories, supportedCategories_);
                  DARABONBA_PTR_TO_JSON(Version, version_);
                };
                friend void from_json(const Darabonba::Json& j, SupportedEngineVersion& obj) { 
                  DARABONBA_PTR_FROM_JSON(SupportedCategories, supportedCategories_);
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
                class SupportedCategories : public Darabonba::Model {
                public:
                  friend void to_json(Darabonba::Json& j, const SupportedCategories& obj) { 
                    DARABONBA_PTR_TO_JSON(SupportedCategories, supportedCategories_);
                  };
                  friend void from_json(const Darabonba::Json& j, SupportedCategories& obj) { 
                    DARABONBA_PTR_FROM_JSON(SupportedCategories, supportedCategories_);
                  };
                  SupportedCategories() = default ;
                  SupportedCategories(const SupportedCategories &) = default ;
                  SupportedCategories(SupportedCategories &&) = default ;
                  SupportedCategories(const Darabonba::Json & obj) { from_json(obj, *this); };
                  virtual ~SupportedCategories() = default ;
                  SupportedCategories& operator=(const SupportedCategories &) = default ;
                  SupportedCategories& operator=(SupportedCategories &&) = default ;
                  virtual void validate() const override {
                  };
                  virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                  virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                  class SupportedCategoriesItem : public Darabonba::Model {
                  public:
                    friend void to_json(Darabonba::Json& j, const SupportedCategoriesItem& obj) { 
                      DARABONBA_PTR_TO_JSON(Category, category_);
                      DARABONBA_PTR_TO_JSON(SupportedStorageTypes, supportedStorageTypes_);
                    };
                    friend void from_json(const Darabonba::Json& j, SupportedCategoriesItem& obj) { 
                      DARABONBA_PTR_FROM_JSON(Category, category_);
                      DARABONBA_PTR_FROM_JSON(SupportedStorageTypes, supportedStorageTypes_);
                    };
                    SupportedCategoriesItem() = default ;
                    SupportedCategoriesItem(const SupportedCategoriesItem &) = default ;
                    SupportedCategoriesItem(SupportedCategoriesItem &&) = default ;
                    SupportedCategoriesItem(const Darabonba::Json & obj) { from_json(obj, *this); };
                    virtual ~SupportedCategoriesItem() = default ;
                    SupportedCategoriesItem& operator=(const SupportedCategoriesItem &) = default ;
                    SupportedCategoriesItem& operator=(SupportedCategoriesItem &&) = default ;
                    virtual void validate() const override {
                    };
                    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                    class SupportedStorageTypes : public Darabonba::Model {
                    public:
                      friend void to_json(Darabonba::Json& j, const SupportedStorageTypes& obj) { 
                        DARABONBA_PTR_TO_JSON(SupportedStorageType, supportedStorageType_);
                      };
                      friend void from_json(const Darabonba::Json& j, SupportedStorageTypes& obj) { 
                        DARABONBA_PTR_FROM_JSON(SupportedStorageType, supportedStorageType_);
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
                      class SupportedStorageType : public Darabonba::Model {
                      public:
                        friend void to_json(Darabonba::Json& j, const SupportedStorageType& obj) { 
                          DARABONBA_PTR_TO_JSON(CoreResources, coreResources_);
                          DARABONBA_PTR_TO_JSON(StorageType, storageType_);
                        };
                        friend void from_json(const Darabonba::Json& j, SupportedStorageType& obj) { 
                          DARABONBA_PTR_FROM_JSON(CoreResources, coreResources_);
                          DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
                        };
                        SupportedStorageType() = default ;
                        SupportedStorageType(const SupportedStorageType &) = default ;
                        SupportedStorageType(SupportedStorageType &&) = default ;
                        SupportedStorageType(const Darabonba::Json & obj) { from_json(obj, *this); };
                        virtual ~SupportedStorageType() = default ;
                        SupportedStorageType& operator=(const SupportedStorageType &) = default ;
                        SupportedStorageType& operator=(SupportedStorageType &&) = default ;
                        virtual void validate() const override {
                        };
                        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                        class CoreResources : public Darabonba::Model {
                        public:
                          friend void to_json(Darabonba::Json& j, const CoreResources& obj) { 
                            DARABONBA_PTR_TO_JSON(CoreResource, coreResource_);
                          };
                          friend void from_json(const Darabonba::Json& j, CoreResources& obj) { 
                            DARABONBA_PTR_FROM_JSON(CoreResource, coreResource_);
                          };
                          CoreResources() = default ;
                          CoreResources(const CoreResources &) = default ;
                          CoreResources(CoreResources &&) = default ;
                          CoreResources(const Darabonba::Json & obj) { from_json(obj, *this); };
                          virtual ~CoreResources() = default ;
                          CoreResources& operator=(const CoreResources &) = default ;
                          CoreResources& operator=(CoreResources &&) = default ;
                          virtual void validate() const override {
                          };
                          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                          class CoreResource : public Darabonba::Model {
                          public:
                            friend void to_json(Darabonba::Json& j, const CoreResource& obj) { 
                              DARABONBA_PTR_TO_JSON(DBInstanceStorageRange, DBInstanceStorageRange_);
                              DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
                              DARABONBA_PTR_TO_JSON(InstanceTypeDetail, instanceTypeDetail_);
                              DARABONBA_PTR_TO_JSON(MaxCoreCount, maxCoreCount_);
                            };
                            friend void from_json(const Darabonba::Json& j, CoreResource& obj) { 
                              DARABONBA_PTR_FROM_JSON(DBInstanceStorageRange, DBInstanceStorageRange_);
                              DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
                              DARABONBA_PTR_FROM_JSON(InstanceTypeDetail, instanceTypeDetail_);
                              DARABONBA_PTR_FROM_JSON(MaxCoreCount, maxCoreCount_);
                            };
                            CoreResource() = default ;
                            CoreResource(const CoreResource &) = default ;
                            CoreResource(CoreResource &&) = default ;
                            CoreResource(const Darabonba::Json & obj) { from_json(obj, *this); };
                            virtual ~CoreResource() = default ;
                            CoreResource& operator=(const CoreResource &) = default ;
                            CoreResource& operator=(CoreResource &&) = default ;
                            virtual void validate() const override {
                            };
                            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                            class InstanceTypeDetail : public Darabonba::Model {
                            public:
                              friend void to_json(Darabonba::Json& j, const InstanceTypeDetail& obj) { 
                                DARABONBA_PTR_TO_JSON(Cpu, cpu_);
                                DARABONBA_PTR_TO_JSON(Mem, mem_);
                              };
                              friend void from_json(const Darabonba::Json& j, InstanceTypeDetail& obj) { 
                                DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
                                DARABONBA_PTR_FROM_JSON(Mem, mem_);
                              };
                              InstanceTypeDetail() = default ;
                              InstanceTypeDetail(const InstanceTypeDetail &) = default ;
                              InstanceTypeDetail(InstanceTypeDetail &&) = default ;
                              InstanceTypeDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
                              virtual ~InstanceTypeDetail() = default ;
                              InstanceTypeDetail& operator=(const InstanceTypeDetail &) = default ;
                              InstanceTypeDetail& operator=(InstanceTypeDetail &&) = default ;
                              virtual void validate() const override {
                              };
                              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                              virtual bool empty() const override { return this->cpu_ == nullptr
        && this->mem_ == nullptr; };
                              // cpu Field Functions 
                              bool hasCpu() const { return this->cpu_ != nullptr;};
                              void deleteCpu() { this->cpu_ = nullptr;};
                              inline int32_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
                              inline InstanceTypeDetail& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


                              // mem Field Functions 
                              bool hasMem() const { return this->mem_ != nullptr;};
                              void deleteMem() { this->mem_ = nullptr;};
                              inline int32_t getMem() const { DARABONBA_PTR_GET_DEFAULT(mem_, 0) };
                              inline InstanceTypeDetail& setMem(int32_t mem) { DARABONBA_PTR_SET_VALUE(mem_, mem) };


                            protected:
                              shared_ptr<int32_t> cpu_ {};
                              shared_ptr<int32_t> mem_ {};
                            };

                            class DBInstanceStorageRange : public Darabonba::Model {
                            public:
                              friend void to_json(Darabonba::Json& j, const DBInstanceStorageRange& obj) { 
                                DARABONBA_PTR_TO_JSON(MaxSize, maxSize_);
                                DARABONBA_PTR_TO_JSON(MinSize, minSize_);
                                DARABONBA_PTR_TO_JSON(StepSize, stepSize_);
                              };
                              friend void from_json(const Darabonba::Json& j, DBInstanceStorageRange& obj) { 
                                DARABONBA_PTR_FROM_JSON(MaxSize, maxSize_);
                                DARABONBA_PTR_FROM_JSON(MinSize, minSize_);
                                DARABONBA_PTR_FROM_JSON(StepSize, stepSize_);
                              };
                              DBInstanceStorageRange() = default ;
                              DBInstanceStorageRange(const DBInstanceStorageRange &) = default ;
                              DBInstanceStorageRange(DBInstanceStorageRange &&) = default ;
                              DBInstanceStorageRange(const Darabonba::Json & obj) { from_json(obj, *this); };
                              virtual ~DBInstanceStorageRange() = default ;
                              DBInstanceStorageRange& operator=(const DBInstanceStorageRange &) = default ;
                              DBInstanceStorageRange& operator=(DBInstanceStorageRange &&) = default ;
                              virtual void validate() const override {
                              };
                              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                              virtual bool empty() const override { return this->maxSize_ == nullptr
        && this->minSize_ == nullptr && this->stepSize_ == nullptr; };
                              // maxSize Field Functions 
                              bool hasMaxSize() const { return this->maxSize_ != nullptr;};
                              void deleteMaxSize() { this->maxSize_ = nullptr;};
                              inline int32_t getMaxSize() const { DARABONBA_PTR_GET_DEFAULT(maxSize_, 0) };
                              inline DBInstanceStorageRange& setMaxSize(int32_t maxSize) { DARABONBA_PTR_SET_VALUE(maxSize_, maxSize) };


                              // minSize Field Functions 
                              bool hasMinSize() const { return this->minSize_ != nullptr;};
                              void deleteMinSize() { this->minSize_ = nullptr;};
                              inline int32_t getMinSize() const { DARABONBA_PTR_GET_DEFAULT(minSize_, 0) };
                              inline DBInstanceStorageRange& setMinSize(int32_t minSize) { DARABONBA_PTR_SET_VALUE(minSize_, minSize) };


                              // stepSize Field Functions 
                              bool hasStepSize() const { return this->stepSize_ != nullptr;};
                              void deleteStepSize() { this->stepSize_ = nullptr;};
                              inline int32_t getStepSize() const { DARABONBA_PTR_GET_DEFAULT(stepSize_, 0) };
                              inline DBInstanceStorageRange& setStepSize(int32_t stepSize) { DARABONBA_PTR_SET_VALUE(stepSize_, stepSize) };


                            protected:
                              shared_ptr<int32_t> maxSize_ {};
                              shared_ptr<int32_t> minSize_ {};
                              shared_ptr<int32_t> stepSize_ {};
                            };

                            virtual bool empty() const override { return this->DBInstanceStorageRange_ == nullptr
        && this->instanceType_ == nullptr && this->instanceTypeDetail_ == nullptr && this->maxCoreCount_ == nullptr; };
                            // DBInstanceStorageRange Field Functions 
                            bool hasDBInstanceStorageRange() const { return this->DBInstanceStorageRange_ != nullptr;};
                            void deleteDBInstanceStorageRange() { this->DBInstanceStorageRange_ = nullptr;};
                            inline const CoreResource::DBInstanceStorageRange & getDBInstanceStorageRange() const { DARABONBA_PTR_GET_CONST(DBInstanceStorageRange_, CoreResource::DBInstanceStorageRange) };
                            inline CoreResource::DBInstanceStorageRange getDBInstanceStorageRange() { DARABONBA_PTR_GET(DBInstanceStorageRange_, CoreResource::DBInstanceStorageRange) };
                            inline CoreResource& setDBInstanceStorageRange(const CoreResource::DBInstanceStorageRange & dBInstanceStorageRange) { DARABONBA_PTR_SET_VALUE(DBInstanceStorageRange_, dBInstanceStorageRange) };
                            inline CoreResource& setDBInstanceStorageRange(CoreResource::DBInstanceStorageRange && dBInstanceStorageRange) { DARABONBA_PTR_SET_RVALUE(DBInstanceStorageRange_, dBInstanceStorageRange) };


                            // instanceType Field Functions 
                            bool hasInstanceType() const { return this->instanceType_ != nullptr;};
                            void deleteInstanceType() { this->instanceType_ = nullptr;};
                            inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
                            inline CoreResource& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


                            // instanceTypeDetail Field Functions 
                            bool hasInstanceTypeDetail() const { return this->instanceTypeDetail_ != nullptr;};
                            void deleteInstanceTypeDetail() { this->instanceTypeDetail_ = nullptr;};
                            inline const CoreResource::InstanceTypeDetail & getInstanceTypeDetail() const { DARABONBA_PTR_GET_CONST(instanceTypeDetail_, CoreResource::InstanceTypeDetail) };
                            inline CoreResource::InstanceTypeDetail getInstanceTypeDetail() { DARABONBA_PTR_GET(instanceTypeDetail_, CoreResource::InstanceTypeDetail) };
                            inline CoreResource& setInstanceTypeDetail(const CoreResource::InstanceTypeDetail & instanceTypeDetail) { DARABONBA_PTR_SET_VALUE(instanceTypeDetail_, instanceTypeDetail) };
                            inline CoreResource& setInstanceTypeDetail(CoreResource::InstanceTypeDetail && instanceTypeDetail) { DARABONBA_PTR_SET_RVALUE(instanceTypeDetail_, instanceTypeDetail) };


                            // maxCoreCount Field Functions 
                            bool hasMaxCoreCount() const { return this->maxCoreCount_ != nullptr;};
                            void deleteMaxCoreCount() { this->maxCoreCount_ = nullptr;};
                            inline int32_t getMaxCoreCount() const { DARABONBA_PTR_GET_DEFAULT(maxCoreCount_, 0) };
                            inline CoreResource& setMaxCoreCount(int32_t maxCoreCount) { DARABONBA_PTR_SET_VALUE(maxCoreCount_, maxCoreCount) };


                          protected:
                            shared_ptr<CoreResource::DBInstanceStorageRange> DBInstanceStorageRange_ {};
                            shared_ptr<string> instanceType_ {};
                            shared_ptr<CoreResource::InstanceTypeDetail> instanceTypeDetail_ {};
                            shared_ptr<int32_t> maxCoreCount_ {};
                          };

                          virtual bool empty() const override { return this->coreResource_ == nullptr; };
                          // coreResource Field Functions 
                          bool hasCoreResource() const { return this->coreResource_ != nullptr;};
                          void deleteCoreResource() { this->coreResource_ = nullptr;};
                          inline const vector<CoreResources::CoreResource> & getCoreResource() const { DARABONBA_PTR_GET_CONST(coreResource_, vector<CoreResources::CoreResource>) };
                          inline vector<CoreResources::CoreResource> getCoreResource() { DARABONBA_PTR_GET(coreResource_, vector<CoreResources::CoreResource>) };
                          inline CoreResources& setCoreResource(const vector<CoreResources::CoreResource> & coreResource) { DARABONBA_PTR_SET_VALUE(coreResource_, coreResource) };
                          inline CoreResources& setCoreResource(vector<CoreResources::CoreResource> && coreResource) { DARABONBA_PTR_SET_RVALUE(coreResource_, coreResource) };


                        protected:
                          shared_ptr<vector<CoreResources::CoreResource>> coreResource_ {};
                        };

                        virtual bool empty() const override { return this->coreResources_ == nullptr
        && this->storageType_ == nullptr; };
                        // coreResources Field Functions 
                        bool hasCoreResources() const { return this->coreResources_ != nullptr;};
                        void deleteCoreResources() { this->coreResources_ = nullptr;};
                        inline const SupportedStorageType::CoreResources & getCoreResources() const { DARABONBA_PTR_GET_CONST(coreResources_, SupportedStorageType::CoreResources) };
                        inline SupportedStorageType::CoreResources getCoreResources() { DARABONBA_PTR_GET(coreResources_, SupportedStorageType::CoreResources) };
                        inline SupportedStorageType& setCoreResources(const SupportedStorageType::CoreResources & coreResources) { DARABONBA_PTR_SET_VALUE(coreResources_, coreResources) };
                        inline SupportedStorageType& setCoreResources(SupportedStorageType::CoreResources && coreResources) { DARABONBA_PTR_SET_RVALUE(coreResources_, coreResources) };


                        // storageType Field Functions 
                        bool hasStorageType() const { return this->storageType_ != nullptr;};
                        void deleteStorageType() { this->storageType_ = nullptr;};
                        inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
                        inline SupportedStorageType& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


                      protected:
                        shared_ptr<SupportedStorageType::CoreResources> coreResources_ {};
                        shared_ptr<string> storageType_ {};
                      };

                      virtual bool empty() const override { return this->supportedStorageType_ == nullptr; };
                      // supportedStorageType Field Functions 
                      bool hasSupportedStorageType() const { return this->supportedStorageType_ != nullptr;};
                      void deleteSupportedStorageType() { this->supportedStorageType_ = nullptr;};
                      inline const vector<SupportedStorageTypes::SupportedStorageType> & getSupportedStorageType() const { DARABONBA_PTR_GET_CONST(supportedStorageType_, vector<SupportedStorageTypes::SupportedStorageType>) };
                      inline vector<SupportedStorageTypes::SupportedStorageType> getSupportedStorageType() { DARABONBA_PTR_GET(supportedStorageType_, vector<SupportedStorageTypes::SupportedStorageType>) };
                      inline SupportedStorageTypes& setSupportedStorageType(const vector<SupportedStorageTypes::SupportedStorageType> & supportedStorageType) { DARABONBA_PTR_SET_VALUE(supportedStorageType_, supportedStorageType) };
                      inline SupportedStorageTypes& setSupportedStorageType(vector<SupportedStorageTypes::SupportedStorageType> && supportedStorageType) { DARABONBA_PTR_SET_RVALUE(supportedStorageType_, supportedStorageType) };


                    protected:
                      shared_ptr<vector<SupportedStorageTypes::SupportedStorageType>> supportedStorageType_ {};
                    };

                    virtual bool empty() const override { return this->category_ == nullptr
        && this->supportedStorageTypes_ == nullptr; };
                    // category Field Functions 
                    bool hasCategory() const { return this->category_ != nullptr;};
                    void deleteCategory() { this->category_ = nullptr;};
                    inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
                    inline SupportedCategoriesItem& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


                    // supportedStorageTypes Field Functions 
                    bool hasSupportedStorageTypes() const { return this->supportedStorageTypes_ != nullptr;};
                    void deleteSupportedStorageTypes() { this->supportedStorageTypes_ = nullptr;};
                    inline const SupportedCategoriesItem::SupportedStorageTypes & getSupportedStorageTypes() const { DARABONBA_PTR_GET_CONST(supportedStorageTypes_, SupportedCategoriesItem::SupportedStorageTypes) };
                    inline SupportedCategoriesItem::SupportedStorageTypes getSupportedStorageTypes() { DARABONBA_PTR_GET(supportedStorageTypes_, SupportedCategoriesItem::SupportedStorageTypes) };
                    inline SupportedCategoriesItem& setSupportedStorageTypes(const SupportedCategoriesItem::SupportedStorageTypes & supportedStorageTypes) { DARABONBA_PTR_SET_VALUE(supportedStorageTypes_, supportedStorageTypes) };
                    inline SupportedCategoriesItem& setSupportedStorageTypes(SupportedCategoriesItem::SupportedStorageTypes && supportedStorageTypes) { DARABONBA_PTR_SET_RVALUE(supportedStorageTypes_, supportedStorageTypes) };


                  protected:
                    shared_ptr<string> category_ {};
                    shared_ptr<SupportedCategoriesItem::SupportedStorageTypes> supportedStorageTypes_ {};
                  };

                  virtual bool empty() const override { return this->supportedCategories_ == nullptr; };
                  // supportedCategories Field Functions 
                  bool hasSupportedCategories() const { return this->supportedCategories_ != nullptr;};
                  void deleteSupportedCategories() { this->supportedCategories_ = nullptr;};
                  inline const vector<SupportedCategories::SupportedCategoriesItem> & getSupportedCategories() const { DARABONBA_PTR_GET_CONST(supportedCategories_, vector<SupportedCategories::SupportedCategoriesItem>) };
                  inline vector<SupportedCategories::SupportedCategoriesItem> getSupportedCategories() { DARABONBA_PTR_GET(supportedCategories_, vector<SupportedCategories::SupportedCategoriesItem>) };
                  inline SupportedCategories& setSupportedCategories(const vector<SupportedCategories::SupportedCategoriesItem> & supportedCategories) { DARABONBA_PTR_SET_VALUE(supportedCategories_, supportedCategories) };
                  inline SupportedCategories& setSupportedCategories(vector<SupportedCategories::SupportedCategoriesItem> && supportedCategories) { DARABONBA_PTR_SET_RVALUE(supportedCategories_, supportedCategories) };


                protected:
                  shared_ptr<vector<SupportedCategories::SupportedCategoriesItem>> supportedCategories_ {};
                };

                virtual bool empty() const override { return this->supportedCategories_ == nullptr
        && this->version_ == nullptr; };
                // supportedCategories Field Functions 
                bool hasSupportedCategories() const { return this->supportedCategories_ != nullptr;};
                void deleteSupportedCategories() { this->supportedCategories_ = nullptr;};
                inline const SupportedEngineVersion::SupportedCategories & getSupportedCategories() const { DARABONBA_PTR_GET_CONST(supportedCategories_, SupportedEngineVersion::SupportedCategories) };
                inline SupportedEngineVersion::SupportedCategories getSupportedCategories() { DARABONBA_PTR_GET(supportedCategories_, SupportedEngineVersion::SupportedCategories) };
                inline SupportedEngineVersion& setSupportedCategories(const SupportedEngineVersion::SupportedCategories & supportedCategories) { DARABONBA_PTR_SET_VALUE(supportedCategories_, supportedCategories) };
                inline SupportedEngineVersion& setSupportedCategories(SupportedEngineVersion::SupportedCategories && supportedCategories) { DARABONBA_PTR_SET_RVALUE(supportedCategories_, supportedCategories) };


                // version Field Functions 
                bool hasVersion() const { return this->version_ != nullptr;};
                void deleteVersion() { this->version_ = nullptr;};
                inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
                inline SupportedEngineVersion& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


              protected:
                shared_ptr<SupportedEngineVersion::SupportedCategories> supportedCategories_ {};
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

            virtual bool empty() const override { return this->engine_ == nullptr
        && this->supportedEngineVersions_ == nullptr; };
            // engine Field Functions 
            bool hasEngine() const { return this->engine_ != nullptr;};
            void deleteEngine() { this->engine_ = nullptr;};
            inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
            inline SupportedEngine& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


            // supportedEngineVersions Field Functions 
            bool hasSupportedEngineVersions() const { return this->supportedEngineVersions_ != nullptr;};
            void deleteSupportedEngineVersions() { this->supportedEngineVersions_ = nullptr;};
            inline const SupportedEngine::SupportedEngineVersions & getSupportedEngineVersions() const { DARABONBA_PTR_GET_CONST(supportedEngineVersions_, SupportedEngine::SupportedEngineVersions) };
            inline SupportedEngine::SupportedEngineVersions getSupportedEngineVersions() { DARABONBA_PTR_GET(supportedEngineVersions_, SupportedEngine::SupportedEngineVersions) };
            inline SupportedEngine& setSupportedEngineVersions(const SupportedEngine::SupportedEngineVersions & supportedEngineVersions) { DARABONBA_PTR_SET_VALUE(supportedEngineVersions_, supportedEngineVersions) };
            inline SupportedEngine& setSupportedEngineVersions(SupportedEngine::SupportedEngineVersions && supportedEngineVersions) { DARABONBA_PTR_SET_RVALUE(supportedEngineVersions_, supportedEngineVersions) };


          protected:
            shared_ptr<string> engine_ {};
            shared_ptr<SupportedEngine::SupportedEngineVersions> supportedEngineVersions_ {};
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

        class MasterResources : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MasterResources& obj) { 
            DARABONBA_PTR_TO_JSON(MasterResource, masterResource_);
          };
          friend void from_json(const Darabonba::Json& j, MasterResources& obj) { 
            DARABONBA_PTR_FROM_JSON(MasterResource, masterResource_);
          };
          MasterResources() = default ;
          MasterResources(const MasterResources &) = default ;
          MasterResources(MasterResources &&) = default ;
          MasterResources(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~MasterResources() = default ;
          MasterResources& operator=(const MasterResources &) = default ;
          MasterResources& operator=(MasterResources &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class MasterResource : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const MasterResource& obj) { 
              DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
              DARABONBA_PTR_TO_JSON(InstanceTypeDetail, instanceTypeDetail_);
            };
            friend void from_json(const Darabonba::Json& j, MasterResource& obj) { 
              DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
              DARABONBA_PTR_FROM_JSON(InstanceTypeDetail, instanceTypeDetail_);
            };
            MasterResource() = default ;
            MasterResource(const MasterResource &) = default ;
            MasterResource(MasterResource &&) = default ;
            MasterResource(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~MasterResource() = default ;
            MasterResource& operator=(const MasterResource &) = default ;
            MasterResource& operator=(MasterResource &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class InstanceTypeDetail : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const InstanceTypeDetail& obj) { 
                DARABONBA_PTR_TO_JSON(Cpu, cpu_);
                DARABONBA_PTR_TO_JSON(Mem, mem_);
              };
              friend void from_json(const Darabonba::Json& j, InstanceTypeDetail& obj) { 
                DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
                DARABONBA_PTR_FROM_JSON(Mem, mem_);
              };
              InstanceTypeDetail() = default ;
              InstanceTypeDetail(const InstanceTypeDetail &) = default ;
              InstanceTypeDetail(InstanceTypeDetail &&) = default ;
              InstanceTypeDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~InstanceTypeDetail() = default ;
              InstanceTypeDetail& operator=(const InstanceTypeDetail &) = default ;
              InstanceTypeDetail& operator=(InstanceTypeDetail &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->cpu_ == nullptr
        && this->mem_ == nullptr; };
              // cpu Field Functions 
              bool hasCpu() const { return this->cpu_ != nullptr;};
              void deleteCpu() { this->cpu_ = nullptr;};
              inline int32_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
              inline InstanceTypeDetail& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


              // mem Field Functions 
              bool hasMem() const { return this->mem_ != nullptr;};
              void deleteMem() { this->mem_ = nullptr;};
              inline int32_t getMem() const { DARABONBA_PTR_GET_DEFAULT(mem_, 0) };
              inline InstanceTypeDetail& setMem(int32_t mem) { DARABONBA_PTR_SET_VALUE(mem_, mem) };


            protected:
              shared_ptr<int32_t> cpu_ {};
              shared_ptr<int32_t> mem_ {};
            };

            virtual bool empty() const override { return this->instanceType_ == nullptr
        && this->instanceTypeDetail_ == nullptr; };
            // instanceType Field Functions 
            bool hasInstanceType() const { return this->instanceType_ != nullptr;};
            void deleteInstanceType() { this->instanceType_ = nullptr;};
            inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
            inline MasterResource& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


            // instanceTypeDetail Field Functions 
            bool hasInstanceTypeDetail() const { return this->instanceTypeDetail_ != nullptr;};
            void deleteInstanceTypeDetail() { this->instanceTypeDetail_ = nullptr;};
            inline const MasterResource::InstanceTypeDetail & getInstanceTypeDetail() const { DARABONBA_PTR_GET_CONST(instanceTypeDetail_, MasterResource::InstanceTypeDetail) };
            inline MasterResource::InstanceTypeDetail getInstanceTypeDetail() { DARABONBA_PTR_GET(instanceTypeDetail_, MasterResource::InstanceTypeDetail) };
            inline MasterResource& setInstanceTypeDetail(const MasterResource::InstanceTypeDetail & instanceTypeDetail) { DARABONBA_PTR_SET_VALUE(instanceTypeDetail_, instanceTypeDetail) };
            inline MasterResource& setInstanceTypeDetail(MasterResource::InstanceTypeDetail && instanceTypeDetail) { DARABONBA_PTR_SET_RVALUE(instanceTypeDetail_, instanceTypeDetail) };


          protected:
            shared_ptr<string> instanceType_ {};
            shared_ptr<MasterResource::InstanceTypeDetail> instanceTypeDetail_ {};
          };

          virtual bool empty() const override { return this->masterResource_ == nullptr; };
          // masterResource Field Functions 
          bool hasMasterResource() const { return this->masterResource_ != nullptr;};
          void deleteMasterResource() { this->masterResource_ = nullptr;};
          inline const vector<MasterResources::MasterResource> & getMasterResource() const { DARABONBA_PTR_GET_CONST(masterResource_, vector<MasterResources::MasterResource>) };
          inline vector<MasterResources::MasterResource> getMasterResource() { DARABONBA_PTR_GET(masterResource_, vector<MasterResources::MasterResource>) };
          inline MasterResources& setMasterResource(const vector<MasterResources::MasterResource> & masterResource) { DARABONBA_PTR_SET_VALUE(masterResource_, masterResource) };
          inline MasterResources& setMasterResource(vector<MasterResources::MasterResource> && masterResource) { DARABONBA_PTR_SET_RVALUE(masterResource_, masterResource) };


        protected:
          shared_ptr<vector<MasterResources::MasterResource>> masterResource_ {};
        };

        virtual bool empty() const override { return this->masterResources_ == nullptr
        && this->regionId_ == nullptr && this->supportedEngines_ == nullptr && this->zoneId_ == nullptr; };
        // masterResources Field Functions 
        bool hasMasterResources() const { return this->masterResources_ != nullptr;};
        void deleteMasterResources() { this->masterResources_ = nullptr;};
        inline const AvailableZone::MasterResources & getMasterResources() const { DARABONBA_PTR_GET_CONST(masterResources_, AvailableZone::MasterResources) };
        inline AvailableZone::MasterResources getMasterResources() { DARABONBA_PTR_GET(masterResources_, AvailableZone::MasterResources) };
        inline AvailableZone& setMasterResources(const AvailableZone::MasterResources & masterResources) { DARABONBA_PTR_SET_VALUE(masterResources_, masterResources) };
        inline AvailableZone& setMasterResources(AvailableZone::MasterResources && masterResources) { DARABONBA_PTR_SET_RVALUE(masterResources_, masterResources) };


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


      protected:
        shared_ptr<AvailableZone::MasterResources> masterResources_ {};
        shared_ptr<string> regionId_ {};
        shared_ptr<AvailableZone::SupportedEngines> supportedEngines_ {};
        shared_ptr<string> zoneId_ {};
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
    shared_ptr<DescribeAvailableResourceResponseBody::AvailableZones> availableZones_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif
