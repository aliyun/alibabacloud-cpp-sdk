// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class DescribeAvailableResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAvailableResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SupportedDBTypes, supportedDBTypes_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAvailableResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SupportedDBTypes, supportedDBTypes_);
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
    class SupportedDBTypes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SupportedDBTypes& obj) { 
        DARABONBA_PTR_TO_JSON(SupportedDBType, supportedDBType_);
      };
      friend void from_json(const Darabonba::Json& j, SupportedDBTypes& obj) { 
        DARABONBA_PTR_FROM_JSON(SupportedDBType, supportedDBType_);
      };
      SupportedDBTypes() = default ;
      SupportedDBTypes(const SupportedDBTypes &) = default ;
      SupportedDBTypes(SupportedDBTypes &&) = default ;
      SupportedDBTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SupportedDBTypes() = default ;
      SupportedDBTypes& operator=(const SupportedDBTypes &) = default ;
      SupportedDBTypes& operator=(SupportedDBTypes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SupportedDBType : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SupportedDBType& obj) { 
          DARABONBA_PTR_TO_JSON(AvailableZones, availableZones_);
          DARABONBA_PTR_TO_JSON(DbType, dbType_);
        };
        friend void from_json(const Darabonba::Json& j, SupportedDBType& obj) { 
          DARABONBA_PTR_FROM_JSON(AvailableZones, availableZones_);
          DARABONBA_PTR_FROM_JSON(DbType, dbType_);
        };
        SupportedDBType() = default ;
        SupportedDBType(const SupportedDBType &) = default ;
        SupportedDBType(SupportedDBType &&) = default ;
        SupportedDBType(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SupportedDBType() = default ;
        SupportedDBType& operator=(const SupportedDBType &) = default ;
        SupportedDBType& operator=(SupportedDBType &&) = default ;
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
              DARABONBA_PTR_TO_JSON(RegionId, regionId_);
              DARABONBA_PTR_TO_JSON(SupportedEngineVersions, supportedEngineVersions_);
              DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
            };
            friend void from_json(const Darabonba::Json& j, AvailableZone& obj) { 
              DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
              DARABONBA_PTR_FROM_JSON(SupportedEngineVersions, supportedEngineVersions_);
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
                  DARABONBA_PTR_TO_JSON(SupportedEngines, supportedEngines_);
                  DARABONBA_PTR_TO_JSON(Version, version_);
                };
                friend void from_json(const Darabonba::Json& j, SupportedEngineVersion& obj) { 
                  DARABONBA_PTR_FROM_JSON(SupportedEngines, supportedEngines_);
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
                      DARABONBA_PTR_TO_JSON(SupportedNodeTypes, supportedNodeTypes_);
                    };
                    friend void from_json(const Darabonba::Json& j, SupportedEngine& obj) { 
                      DARABONBA_PTR_FROM_JSON(Engine, engine_);
                      DARABONBA_PTR_FROM_JSON(SupportedNodeTypes, supportedNodeTypes_);
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
                          DARABONBA_PTR_TO_JSON(NetworkTypes, networkTypes_);
                          DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
                        };
                        friend void from_json(const Darabonba::Json& j, SupportedNodeType& obj) { 
                          DARABONBA_PTR_FROM_JSON(AvailableResources, availableResources_);
                          DARABONBA_PTR_FROM_JSON(NetworkTypes, networkTypes_);
                          DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
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
                              DARABONBA_PTR_TO_JSON(DBInstanceStorageRange, DBInstanceStorageRange_);
                              DARABONBA_PTR_TO_JSON(InstanceClass, instanceClass_);
                              DARABONBA_PTR_TO_JSON(InstanceClassRemark, instanceClassRemark_);
                            };
                            friend void from_json(const Darabonba::Json& j, AvailableResource& obj) { 
                              DARABONBA_PTR_FROM_JSON(DBInstanceStorageRange, DBInstanceStorageRange_);
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
                            class DBInstanceStorageRange : public Darabonba::Model {
                            public:
                              friend void to_json(Darabonba::Json& j, const DBInstanceStorageRange& obj) { 
                                DARABONBA_PTR_TO_JSON(Max, max_);
                                DARABONBA_PTR_TO_JSON(Min, min_);
                                DARABONBA_PTR_TO_JSON(Step, step_);
                              };
                              friend void from_json(const Darabonba::Json& j, DBInstanceStorageRange& obj) { 
                                DARABONBA_PTR_FROM_JSON(Max, max_);
                                DARABONBA_PTR_FROM_JSON(Min, min_);
                                DARABONBA_PTR_FROM_JSON(Step, step_);
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
                              virtual bool empty() const override { return this->max_ == nullptr
        && this->min_ == nullptr && this->step_ == nullptr; };
                              // max Field Functions 
                              bool hasMax() const { return this->max_ != nullptr;};
                              void deleteMax() { this->max_ = nullptr;};
                              inline int32_t getMax() const { DARABONBA_PTR_GET_DEFAULT(max_, 0) };
                              inline DBInstanceStorageRange& setMax(int32_t max) { DARABONBA_PTR_SET_VALUE(max_, max) };


                              // min Field Functions 
                              bool hasMin() const { return this->min_ != nullptr;};
                              void deleteMin() { this->min_ = nullptr;};
                              inline int32_t getMin() const { DARABONBA_PTR_GET_DEFAULT(min_, 0) };
                              inline DBInstanceStorageRange& setMin(int32_t min) { DARABONBA_PTR_SET_VALUE(min_, min) };


                              // step Field Functions 
                              bool hasStep() const { return this->step_ != nullptr;};
                              void deleteStep() { this->step_ = nullptr;};
                              inline int32_t getStep() const { DARABONBA_PTR_GET_DEFAULT(step_, 0) };
                              inline DBInstanceStorageRange& setStep(int32_t step) { DARABONBA_PTR_SET_VALUE(step_, step) };


                            protected:
                              // The maximum storage capacity. Unit: GB.
                              shared_ptr<int32_t> max_ {};
                              // The minimum storage capacity. Unit: GB.
                              shared_ptr<int32_t> min_ {};
                              // The step size for adjusting the storage capacity. Unit: GB.
                              shared_ptr<int32_t> step_ {};
                            };

                            virtual bool empty() const override { return this->DBInstanceStorageRange_ == nullptr
        && this->instanceClass_ == nullptr && this->instanceClassRemark_ == nullptr; };
                            // DBInstanceStorageRange Field Functions 
                            bool hasDBInstanceStorageRange() const { return this->DBInstanceStorageRange_ != nullptr;};
                            void deleteDBInstanceStorageRange() { this->DBInstanceStorageRange_ = nullptr;};
                            inline const AvailableResource::DBInstanceStorageRange & getDBInstanceStorageRange() const { DARABONBA_PTR_GET_CONST(DBInstanceStorageRange_, AvailableResource::DBInstanceStorageRange) };
                            inline AvailableResource::DBInstanceStorageRange getDBInstanceStorageRange() { DARABONBA_PTR_GET(DBInstanceStorageRange_, AvailableResource::DBInstanceStorageRange) };
                            inline AvailableResource& setDBInstanceStorageRange(const AvailableResource::DBInstanceStorageRange & dBInstanceStorageRange) { DARABONBA_PTR_SET_VALUE(DBInstanceStorageRange_, dBInstanceStorageRange) };
                            inline AvailableResource& setDBInstanceStorageRange(AvailableResource::DBInstanceStorageRange && dBInstanceStorageRange) { DARABONBA_PTR_SET_RVALUE(DBInstanceStorageRange_, dBInstanceStorageRange) };


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
                            // The storage capacity range of the instance.
                            shared_ptr<AvailableResource::DBInstanceStorageRange> DBInstanceStorageRange_ {};
                            // The instance family.
                            shared_ptr<string> instanceClass_ {};
                            // The type of the instance.
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
        && this->networkTypes_ == nullptr && this->nodeType_ == nullptr; };
                        // availableResources Field Functions 
                        bool hasAvailableResources() const { return this->availableResources_ != nullptr;};
                        void deleteAvailableResources() { this->availableResources_ = nullptr;};
                        inline const SupportedNodeType::AvailableResources & getAvailableResources() const { DARABONBA_PTR_GET_CONST(availableResources_, SupportedNodeType::AvailableResources) };
                        inline SupportedNodeType::AvailableResources getAvailableResources() { DARABONBA_PTR_GET(availableResources_, SupportedNodeType::AvailableResources) };
                        inline SupportedNodeType& setAvailableResources(const SupportedNodeType::AvailableResources & availableResources) { DARABONBA_PTR_SET_VALUE(availableResources_, availableResources) };
                        inline SupportedNodeType& setAvailableResources(SupportedNodeType::AvailableResources && availableResources) { DARABONBA_PTR_SET_RVALUE(availableResources_, availableResources) };


                        // networkTypes Field Functions 
                        bool hasNetworkTypes() const { return this->networkTypes_ != nullptr;};
                        void deleteNetworkTypes() { this->networkTypes_ = nullptr;};
                        inline string getNetworkTypes() const { DARABONBA_PTR_GET_DEFAULT(networkTypes_, "") };
                        inline SupportedNodeType& setNetworkTypes(string networkTypes) { DARABONBA_PTR_SET_VALUE(networkTypes_, networkTypes) };


                        // nodeType Field Functions 
                        bool hasNodeType() const { return this->nodeType_ != nullptr;};
                        void deleteNodeType() { this->nodeType_ = nullptr;};
                        inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
                        inline SupportedNodeType& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


                      protected:
                        // The details of the available resources.
                        shared_ptr<SupportedNodeType::AvailableResources> availableResources_ {};
                        // The network type of the instance.
                        shared_ptr<string> networkTypes_ {};
                        // The number of nodes in the instance.
                        shared_ptr<string> nodeType_ {};
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

                    virtual bool empty() const override { return this->engine_ == nullptr
        && this->supportedNodeTypes_ == nullptr; };
                    // engine Field Functions 
                    bool hasEngine() const { return this->engine_ != nullptr;};
                    void deleteEngine() { this->engine_ = nullptr;};
                    inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
                    inline SupportedEngine& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


                    // supportedNodeTypes Field Functions 
                    bool hasSupportedNodeTypes() const { return this->supportedNodeTypes_ != nullptr;};
                    void deleteSupportedNodeTypes() { this->supportedNodeTypes_ = nullptr;};
                    inline const SupportedEngine::SupportedNodeTypes & getSupportedNodeTypes() const { DARABONBA_PTR_GET_CONST(supportedNodeTypes_, SupportedEngine::SupportedNodeTypes) };
                    inline SupportedEngine::SupportedNodeTypes getSupportedNodeTypes() { DARABONBA_PTR_GET(supportedNodeTypes_, SupportedEngine::SupportedNodeTypes) };
                    inline SupportedEngine& setSupportedNodeTypes(const SupportedEngine::SupportedNodeTypes & supportedNodeTypes) { DARABONBA_PTR_SET_VALUE(supportedNodeTypes_, supportedNodeTypes) };
                    inline SupportedEngine& setSupportedNodeTypes(SupportedEngine::SupportedNodeTypes && supportedNodeTypes) { DARABONBA_PTR_SET_RVALUE(supportedNodeTypes_, supportedNodeTypes) };


                  protected:
                    // The storage engine of the instance.
                    shared_ptr<string> engine_ {};
                    // The supported instance types.
                    shared_ptr<SupportedEngine::SupportedNodeTypes> supportedNodeTypes_ {};
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

                virtual bool empty() const override { return this->supportedEngines_ == nullptr
        && this->version_ == nullptr; };
                // supportedEngines Field Functions 
                bool hasSupportedEngines() const { return this->supportedEngines_ != nullptr;};
                void deleteSupportedEngines() { this->supportedEngines_ = nullptr;};
                inline const SupportedEngineVersion::SupportedEngines & getSupportedEngines() const { DARABONBA_PTR_GET_CONST(supportedEngines_, SupportedEngineVersion::SupportedEngines) };
                inline SupportedEngineVersion::SupportedEngines getSupportedEngines() { DARABONBA_PTR_GET(supportedEngines_, SupportedEngineVersion::SupportedEngines) };
                inline SupportedEngineVersion& setSupportedEngines(const SupportedEngineVersion::SupportedEngines & supportedEngines) { DARABONBA_PTR_SET_VALUE(supportedEngines_, supportedEngines) };
                inline SupportedEngineVersion& setSupportedEngines(SupportedEngineVersion::SupportedEngines && supportedEngines) { DARABONBA_PTR_SET_RVALUE(supportedEngines_, supportedEngines) };


                // version Field Functions 
                bool hasVersion() const { return this->version_ != nullptr;};
                void deleteVersion() { this->version_ = nullptr;};
                inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
                inline SupportedEngineVersion& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


              protected:
                // The supported storage engines.
                shared_ptr<SupportedEngineVersion::SupportedEngines> supportedEngines_ {};
                // The database engine version of the instance.
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

            virtual bool empty() const override { return this->regionId_ == nullptr
        && this->supportedEngineVersions_ == nullptr && this->zoneId_ == nullptr; };
            // regionId Field Functions 
            bool hasRegionId() const { return this->regionId_ != nullptr;};
            void deleteRegionId() { this->regionId_ = nullptr;};
            inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
            inline AvailableZone& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


            // supportedEngineVersions Field Functions 
            bool hasSupportedEngineVersions() const { return this->supportedEngineVersions_ != nullptr;};
            void deleteSupportedEngineVersions() { this->supportedEngineVersions_ = nullptr;};
            inline const AvailableZone::SupportedEngineVersions & getSupportedEngineVersions() const { DARABONBA_PTR_GET_CONST(supportedEngineVersions_, AvailableZone::SupportedEngineVersions) };
            inline AvailableZone::SupportedEngineVersions getSupportedEngineVersions() { DARABONBA_PTR_GET(supportedEngineVersions_, AvailableZone::SupportedEngineVersions) };
            inline AvailableZone& setSupportedEngineVersions(const AvailableZone::SupportedEngineVersions & supportedEngineVersions) { DARABONBA_PTR_SET_VALUE(supportedEngineVersions_, supportedEngineVersions) };
            inline AvailableZone& setSupportedEngineVersions(AvailableZone::SupportedEngineVersions && supportedEngineVersions) { DARABONBA_PTR_SET_RVALUE(supportedEngineVersions_, supportedEngineVersions) };


            // zoneId Field Functions 
            bool hasZoneId() const { return this->zoneId_ != nullptr;};
            void deleteZoneId() { this->zoneId_ = nullptr;};
            inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
            inline AvailableZone& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


          protected:
            // The ID of the region.
            shared_ptr<string> regionId_ {};
            // The supported storage engine versions.
            shared_ptr<AvailableZone::SupportedEngineVersions> supportedEngineVersions_ {};
            // The ID of the zone.
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
        && this->dbType_ == nullptr; };
        // availableZones Field Functions 
        bool hasAvailableZones() const { return this->availableZones_ != nullptr;};
        void deleteAvailableZones() { this->availableZones_ = nullptr;};
        inline const SupportedDBType::AvailableZones & getAvailableZones() const { DARABONBA_PTR_GET_CONST(availableZones_, SupportedDBType::AvailableZones) };
        inline SupportedDBType::AvailableZones getAvailableZones() { DARABONBA_PTR_GET(availableZones_, SupportedDBType::AvailableZones) };
        inline SupportedDBType& setAvailableZones(const SupportedDBType::AvailableZones & availableZones) { DARABONBA_PTR_SET_VALUE(availableZones_, availableZones) };
        inline SupportedDBType& setAvailableZones(SupportedDBType::AvailableZones && availableZones) { DARABONBA_PTR_SET_RVALUE(availableZones_, availableZones) };


        // dbType Field Functions 
        bool hasDbType() const { return this->dbType_ != nullptr;};
        void deleteDbType() { this->dbType_ = nullptr;};
        inline string getDbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
        inline SupportedDBType& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


      protected:
        // The available zones.
        shared_ptr<SupportedDBType::AvailableZones> availableZones_ {};
        // The architecture of the instance. Valid values:
        // 
        // *   **normal**: replica set instance
        // *   **sharding**: sharded cluster instance
        shared_ptr<string> dbType_ {};
      };

      virtual bool empty() const override { return this->supportedDBType_ == nullptr; };
      // supportedDBType Field Functions 
      bool hasSupportedDBType() const { return this->supportedDBType_ != nullptr;};
      void deleteSupportedDBType() { this->supportedDBType_ = nullptr;};
      inline const vector<SupportedDBTypes::SupportedDBType> & getSupportedDBType() const { DARABONBA_PTR_GET_CONST(supportedDBType_, vector<SupportedDBTypes::SupportedDBType>) };
      inline vector<SupportedDBTypes::SupportedDBType> getSupportedDBType() { DARABONBA_PTR_GET(supportedDBType_, vector<SupportedDBTypes::SupportedDBType>) };
      inline SupportedDBTypes& setSupportedDBType(const vector<SupportedDBTypes::SupportedDBType> & supportedDBType) { DARABONBA_PTR_SET_VALUE(supportedDBType_, supportedDBType) };
      inline SupportedDBTypes& setSupportedDBType(vector<SupportedDBTypes::SupportedDBType> && supportedDBType) { DARABONBA_PTR_SET_RVALUE(supportedDBType_, supportedDBType) };


    protected:
      shared_ptr<vector<SupportedDBTypes::SupportedDBType>> supportedDBType_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->supportedDBTypes_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAvailableResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // supportedDBTypes Field Functions 
    bool hasSupportedDBTypes() const { return this->supportedDBTypes_ != nullptr;};
    void deleteSupportedDBTypes() { this->supportedDBTypes_ = nullptr;};
    inline const DescribeAvailableResourceResponseBody::SupportedDBTypes & getSupportedDBTypes() const { DARABONBA_PTR_GET_CONST(supportedDBTypes_, DescribeAvailableResourceResponseBody::SupportedDBTypes) };
    inline DescribeAvailableResourceResponseBody::SupportedDBTypes getSupportedDBTypes() { DARABONBA_PTR_GET(supportedDBTypes_, DescribeAvailableResourceResponseBody::SupportedDBTypes) };
    inline DescribeAvailableResourceResponseBody& setSupportedDBTypes(const DescribeAvailableResourceResponseBody::SupportedDBTypes & supportedDBTypes) { DARABONBA_PTR_SET_VALUE(supportedDBTypes_, supportedDBTypes) };
    inline DescribeAvailableResourceResponseBody& setSupportedDBTypes(DescribeAvailableResourceResponseBody::SupportedDBTypes && supportedDBTypes) { DARABONBA_PTR_SET_RVALUE(supportedDBTypes_, supportedDBTypes) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The supported database types.
    shared_ptr<DescribeAvailableResourceResponseBody::SupportedDBTypes> supportedDBTypes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
