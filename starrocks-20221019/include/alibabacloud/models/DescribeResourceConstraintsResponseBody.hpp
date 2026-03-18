// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCECONSTRAINTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCECONSTRAINTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class DescribeResourceConstraintsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourceConstraintsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourceConstraintsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeResourceConstraintsResponseBody() = default ;
    DescribeResourceConstraintsResponseBody(const DescribeResourceConstraintsResponseBody &) = default ;
    DescribeResourceConstraintsResponseBody(DescribeResourceConstraintsResponseBody &&) = default ;
    DescribeResourceConstraintsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourceConstraintsResponseBody() = default ;
    DescribeResourceConstraintsResponseBody& operator=(const DescribeResourceConstraintsResponseBody &) = default ;
    DescribeResourceConstraintsResponseBody& operator=(DescribeResourceConstraintsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AgentCu, agentCu_);
        DARABONBA_PTR_TO_JSON(BeCu, beCu_);
        DARABONBA_PTR_TO_JSON(BeCuOnEcs, beCuOnEcs_);
        DARABONBA_PTR_TO_JSON(BeNumber, beNumber_);
        DARABONBA_PTR_TO_JSON(BeStorageConstraints, beStorageConstraints_);
        DARABONBA_PTR_TO_JSON(BigDataInstanceTypeConstraints, bigDataInstanceTypeConstraints_);
        DARABONBA_PTR_TO_JSON(FeCu, feCu_);
        DARABONBA_PTR_TO_JSON(FeCuOnEcs, feCuOnEcs_);
        DARABONBA_PTR_TO_JSON(FeNumber, feNumber_);
        DARABONBA_PTR_TO_JSON(FeSpecType, feSpecType_);
        DARABONBA_PTR_TO_JSON(FeStorage, feStorage_);
        DARABONBA_PTR_TO_JSON(HaFeResourceSpec, haFeResourceSpec_);
        DARABONBA_PTR_TO_JSON(LocalSSDInstanceTypeConstraints, localSSDInstanceTypeConstraints_);
        DARABONBA_PTR_TO_JSON(NormalFeResourceSpec, normalFeResourceSpec_);
        DARABONBA_PTR_TO_JSON(SpecType, specType_);
        DARABONBA_PTR_TO_JSON(SplitDiskThresholdMap, splitDiskThresholdMap_);
        DARABONBA_PTR_TO_JSON(VersionConstraint, versionConstraint_);
        DARABONBA_PTR_TO_JSON(ZoneSupportedEedTypes, zoneSupportedEedTypes_);
        DARABONBA_PTR_TO_JSON(ZoneSupportedSpecTypes, zoneSupportedSpecTypes_);
        DARABONBA_PTR_TO_JSON(compactionServiceCuConstraint, compactionServiceCuConstraint_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AgentCu, agentCu_);
        DARABONBA_PTR_FROM_JSON(BeCu, beCu_);
        DARABONBA_PTR_FROM_JSON(BeCuOnEcs, beCuOnEcs_);
        DARABONBA_PTR_FROM_JSON(BeNumber, beNumber_);
        DARABONBA_PTR_FROM_JSON(BeStorageConstraints, beStorageConstraints_);
        DARABONBA_PTR_FROM_JSON(BigDataInstanceTypeConstraints, bigDataInstanceTypeConstraints_);
        DARABONBA_PTR_FROM_JSON(FeCu, feCu_);
        DARABONBA_PTR_FROM_JSON(FeCuOnEcs, feCuOnEcs_);
        DARABONBA_PTR_FROM_JSON(FeNumber, feNumber_);
        DARABONBA_PTR_FROM_JSON(FeSpecType, feSpecType_);
        DARABONBA_PTR_FROM_JSON(FeStorage, feStorage_);
        DARABONBA_PTR_FROM_JSON(HaFeResourceSpec, haFeResourceSpec_);
        DARABONBA_PTR_FROM_JSON(LocalSSDInstanceTypeConstraints, localSSDInstanceTypeConstraints_);
        DARABONBA_PTR_FROM_JSON(NormalFeResourceSpec, normalFeResourceSpec_);
        DARABONBA_PTR_FROM_JSON(SpecType, specType_);
        DARABONBA_PTR_FROM_JSON(SplitDiskThresholdMap, splitDiskThresholdMap_);
        DARABONBA_PTR_FROM_JSON(VersionConstraint, versionConstraint_);
        DARABONBA_PTR_FROM_JSON(ZoneSupportedEedTypes, zoneSupportedEedTypes_);
        DARABONBA_PTR_FROM_JSON(ZoneSupportedSpecTypes, zoneSupportedSpecTypes_);
        DARABONBA_PTR_FROM_JSON(compactionServiceCuConstraint, compactionServiceCuConstraint_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CompactionServiceCuConstraint : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CompactionServiceCuConstraint& obj) { 
          DARABONBA_PTR_TO_JSON(def, def_);
          DARABONBA_PTR_TO_JSON(max, max_);
          DARABONBA_PTR_TO_JSON(min, min_);
          DARABONBA_PTR_TO_JSON(step, step_);
        };
        friend void from_json(const Darabonba::Json& j, CompactionServiceCuConstraint& obj) { 
          DARABONBA_PTR_FROM_JSON(def, def_);
          DARABONBA_PTR_FROM_JSON(max, max_);
          DARABONBA_PTR_FROM_JSON(min, min_);
          DARABONBA_PTR_FROM_JSON(step, step_);
        };
        CompactionServiceCuConstraint() = default ;
        CompactionServiceCuConstraint(const CompactionServiceCuConstraint &) = default ;
        CompactionServiceCuConstraint(CompactionServiceCuConstraint &&) = default ;
        CompactionServiceCuConstraint(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CompactionServiceCuConstraint() = default ;
        CompactionServiceCuConstraint& operator=(const CompactionServiceCuConstraint &) = default ;
        CompactionServiceCuConstraint& operator=(CompactionServiceCuConstraint &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->def_ == nullptr
        && this->max_ == nullptr && this->min_ == nullptr && this->step_ == nullptr; };
        // def Field Functions 
        bool hasDef() const { return this->def_ != nullptr;};
        void deleteDef() { this->def_ = nullptr;};
        inline int32_t getDef() const { DARABONBA_PTR_GET_DEFAULT(def_, 0) };
        inline CompactionServiceCuConstraint& setDef(int32_t def) { DARABONBA_PTR_SET_VALUE(def_, def) };


        // max Field Functions 
        bool hasMax() const { return this->max_ != nullptr;};
        void deleteMax() { this->max_ = nullptr;};
        inline int32_t getMax() const { DARABONBA_PTR_GET_DEFAULT(max_, 0) };
        inline CompactionServiceCuConstraint& setMax(int32_t max) { DARABONBA_PTR_SET_VALUE(max_, max) };


        // min Field Functions 
        bool hasMin() const { return this->min_ != nullptr;};
        void deleteMin() { this->min_ = nullptr;};
        inline int32_t getMin() const { DARABONBA_PTR_GET_DEFAULT(min_, 0) };
        inline CompactionServiceCuConstraint& setMin(int32_t min) { DARABONBA_PTR_SET_VALUE(min_, min) };


        // step Field Functions 
        bool hasStep() const { return this->step_ != nullptr;};
        void deleteStep() { this->step_ = nullptr;};
        inline int32_t getStep() const { DARABONBA_PTR_GET_DEFAULT(step_, 0) };
        inline CompactionServiceCuConstraint& setStep(int32_t step) { DARABONBA_PTR_SET_VALUE(step_, step) };


      protected:
        shared_ptr<int32_t> def_ {};
        shared_ptr<int32_t> max_ {};
        shared_ptr<int32_t> min_ {};
        shared_ptr<int32_t> step_ {};
      };

      class VersionConstraint : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VersionConstraint& obj) { 
          DARABONBA_PTR_TO_JSON(BetaVersions, betaVersions_);
          DARABONBA_PTR_TO_JSON(DefaultVersion, defaultVersion_);
          DARABONBA_PTR_TO_JSON(Versions, versions_);
        };
        friend void from_json(const Darabonba::Json& j, VersionConstraint& obj) { 
          DARABONBA_PTR_FROM_JSON(BetaVersions, betaVersions_);
          DARABONBA_PTR_FROM_JSON(DefaultVersion, defaultVersion_);
          DARABONBA_PTR_FROM_JSON(Versions, versions_);
        };
        VersionConstraint() = default ;
        VersionConstraint(const VersionConstraint &) = default ;
        VersionConstraint(VersionConstraint &&) = default ;
        VersionConstraint(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VersionConstraint() = default ;
        VersionConstraint& operator=(const VersionConstraint &) = default ;
        VersionConstraint& operator=(VersionConstraint &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->betaVersions_ == nullptr
        && this->defaultVersion_ == nullptr && this->versions_ == nullptr; };
        // betaVersions Field Functions 
        bool hasBetaVersions() const { return this->betaVersions_ != nullptr;};
        void deleteBetaVersions() { this->betaVersions_ = nullptr;};
        inline const vector<string> & getBetaVersions() const { DARABONBA_PTR_GET_CONST(betaVersions_, vector<string>) };
        inline vector<string> getBetaVersions() { DARABONBA_PTR_GET(betaVersions_, vector<string>) };
        inline VersionConstraint& setBetaVersions(const vector<string> & betaVersions) { DARABONBA_PTR_SET_VALUE(betaVersions_, betaVersions) };
        inline VersionConstraint& setBetaVersions(vector<string> && betaVersions) { DARABONBA_PTR_SET_RVALUE(betaVersions_, betaVersions) };


        // defaultVersion Field Functions 
        bool hasDefaultVersion() const { return this->defaultVersion_ != nullptr;};
        void deleteDefaultVersion() { this->defaultVersion_ = nullptr;};
        inline string getDefaultVersion() const { DARABONBA_PTR_GET_DEFAULT(defaultVersion_, "") };
        inline VersionConstraint& setDefaultVersion(string defaultVersion) { DARABONBA_PTR_SET_VALUE(defaultVersion_, defaultVersion) };


        // versions Field Functions 
        bool hasVersions() const { return this->versions_ != nullptr;};
        void deleteVersions() { this->versions_ = nullptr;};
        inline const vector<string> & getVersions() const { DARABONBA_PTR_GET_CONST(versions_, vector<string>) };
        inline vector<string> getVersions() { DARABONBA_PTR_GET(versions_, vector<string>) };
        inline VersionConstraint& setVersions(const vector<string> & versions) { DARABONBA_PTR_SET_VALUE(versions_, versions) };
        inline VersionConstraint& setVersions(vector<string> && versions) { DARABONBA_PTR_SET_RVALUE(versions_, versions) };


      protected:
        shared_ptr<vector<string>> betaVersions_ {};
        shared_ptr<string> defaultVersion_ {};
        shared_ptr<vector<string>> versions_ {};
      };

      class SpecType : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SpecType& obj) { 
          DARABONBA_PTR_TO_JSON(Display, display_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, SpecType& obj) { 
          DARABONBA_PTR_FROM_JSON(Display, display_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        SpecType() = default ;
        SpecType(const SpecType &) = default ;
        SpecType(SpecType &&) = default ;
        SpecType(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SpecType() = default ;
        SpecType& operator=(const SpecType &) = default ;
        SpecType& operator=(SpecType &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->display_ == nullptr
        && this->name_ == nullptr; };
        // display Field Functions 
        bool hasDisplay() const { return this->display_ != nullptr;};
        void deleteDisplay() { this->display_ = nullptr;};
        inline string getDisplay() const { DARABONBA_PTR_GET_DEFAULT(display_, "") };
        inline SpecType& setDisplay(string display) { DARABONBA_PTR_SET_VALUE(display_, display) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline SpecType& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<string> display_ {};
        shared_ptr<string> name_ {};
      };

      class NormalFeResourceSpec : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NormalFeResourceSpec& obj) { 
          DARABONBA_PTR_TO_JSON(Cu, cu_);
          DARABONBA_PTR_TO_JSON(NodeNumber, nodeNumber_);
          DARABONBA_PTR_TO_JSON(StorageSize, storageSize_);
        };
        friend void from_json(const Darabonba::Json& j, NormalFeResourceSpec& obj) { 
          DARABONBA_PTR_FROM_JSON(Cu, cu_);
          DARABONBA_PTR_FROM_JSON(NodeNumber, nodeNumber_);
          DARABONBA_PTR_FROM_JSON(StorageSize, storageSize_);
        };
        NormalFeResourceSpec() = default ;
        NormalFeResourceSpec(const NormalFeResourceSpec &) = default ;
        NormalFeResourceSpec(NormalFeResourceSpec &&) = default ;
        NormalFeResourceSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NormalFeResourceSpec() = default ;
        NormalFeResourceSpec& operator=(const NormalFeResourceSpec &) = default ;
        NormalFeResourceSpec& operator=(NormalFeResourceSpec &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cu_ == nullptr
        && this->nodeNumber_ == nullptr && this->storageSize_ == nullptr; };
        // cu Field Functions 
        bool hasCu() const { return this->cu_ != nullptr;};
        void deleteCu() { this->cu_ = nullptr;};
        inline int32_t getCu() const { DARABONBA_PTR_GET_DEFAULT(cu_, 0) };
        inline NormalFeResourceSpec& setCu(int32_t cu) { DARABONBA_PTR_SET_VALUE(cu_, cu) };


        // nodeNumber Field Functions 
        bool hasNodeNumber() const { return this->nodeNumber_ != nullptr;};
        void deleteNodeNumber() { this->nodeNumber_ = nullptr;};
        inline int32_t getNodeNumber() const { DARABONBA_PTR_GET_DEFAULT(nodeNumber_, 0) };
        inline NormalFeResourceSpec& setNodeNumber(int32_t nodeNumber) { DARABONBA_PTR_SET_VALUE(nodeNumber_, nodeNumber) };


        // storageSize Field Functions 
        bool hasStorageSize() const { return this->storageSize_ != nullptr;};
        void deleteStorageSize() { this->storageSize_ = nullptr;};
        inline int32_t getStorageSize() const { DARABONBA_PTR_GET_DEFAULT(storageSize_, 0) };
        inline NormalFeResourceSpec& setStorageSize(int32_t storageSize) { DARABONBA_PTR_SET_VALUE(storageSize_, storageSize) };


      protected:
        shared_ptr<int32_t> cu_ {};
        shared_ptr<int32_t> nodeNumber_ {};
        shared_ptr<int32_t> storageSize_ {};
      };

      class LocalSSDInstanceTypeConstraints : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LocalSSDInstanceTypeConstraints& obj) { 
          DARABONBA_PTR_TO_JSON(Cpu, cpu_);
          DARABONBA_PTR_TO_JSON(DiskNumber, diskNumber_);
          DARABONBA_PTR_TO_JSON(Display, display_);
          DARABONBA_PTR_TO_JSON(EcsInstanceType, ecsInstanceType_);
          DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
          DARABONBA_PTR_TO_JSON(Memory, memory_);
          DARABONBA_PTR_TO_JSON(StorageSize, storageSize_);
        };
        friend void from_json(const Darabonba::Json& j, LocalSSDInstanceTypeConstraints& obj) { 
          DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
          DARABONBA_PTR_FROM_JSON(DiskNumber, diskNumber_);
          DARABONBA_PTR_FROM_JSON(Display, display_);
          DARABONBA_PTR_FROM_JSON(EcsInstanceType, ecsInstanceType_);
          DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
          DARABONBA_PTR_FROM_JSON(Memory, memory_);
          DARABONBA_PTR_FROM_JSON(StorageSize, storageSize_);
        };
        LocalSSDInstanceTypeConstraints() = default ;
        LocalSSDInstanceTypeConstraints(const LocalSSDInstanceTypeConstraints &) = default ;
        LocalSSDInstanceTypeConstraints(LocalSSDInstanceTypeConstraints &&) = default ;
        LocalSSDInstanceTypeConstraints(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LocalSSDInstanceTypeConstraints() = default ;
        LocalSSDInstanceTypeConstraints& operator=(const LocalSSDInstanceTypeConstraints &) = default ;
        LocalSSDInstanceTypeConstraints& operator=(LocalSSDInstanceTypeConstraints &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cpu_ == nullptr
        && this->diskNumber_ == nullptr && this->display_ == nullptr && this->ecsInstanceType_ == nullptr && this->instanceType_ == nullptr && this->isDefault_ == nullptr
        && this->memory_ == nullptr && this->storageSize_ == nullptr; };
        // cpu Field Functions 
        bool hasCpu() const { return this->cpu_ != nullptr;};
        void deleteCpu() { this->cpu_ = nullptr;};
        inline int32_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
        inline LocalSSDInstanceTypeConstraints& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


        // diskNumber Field Functions 
        bool hasDiskNumber() const { return this->diskNumber_ != nullptr;};
        void deleteDiskNumber() { this->diskNumber_ = nullptr;};
        inline string getDiskNumber() const { DARABONBA_PTR_GET_DEFAULT(diskNumber_, "") };
        inline LocalSSDInstanceTypeConstraints& setDiskNumber(string diskNumber) { DARABONBA_PTR_SET_VALUE(diskNumber_, diskNumber) };


        // display Field Functions 
        bool hasDisplay() const { return this->display_ != nullptr;};
        void deleteDisplay() { this->display_ = nullptr;};
        inline string getDisplay() const { DARABONBA_PTR_GET_DEFAULT(display_, "") };
        inline LocalSSDInstanceTypeConstraints& setDisplay(string display) { DARABONBA_PTR_SET_VALUE(display_, display) };


        // ecsInstanceType Field Functions 
        bool hasEcsInstanceType() const { return this->ecsInstanceType_ != nullptr;};
        void deleteEcsInstanceType() { this->ecsInstanceType_ = nullptr;};
        inline string getEcsInstanceType() const { DARABONBA_PTR_GET_DEFAULT(ecsInstanceType_, "") };
        inline LocalSSDInstanceTypeConstraints& setEcsInstanceType(string ecsInstanceType) { DARABONBA_PTR_SET_VALUE(ecsInstanceType_, ecsInstanceType) };


        // instanceType Field Functions 
        bool hasInstanceType() const { return this->instanceType_ != nullptr;};
        void deleteInstanceType() { this->instanceType_ = nullptr;};
        inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
        inline LocalSSDInstanceTypeConstraints& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


        // isDefault Field Functions 
        bool hasIsDefault() const { return this->isDefault_ != nullptr;};
        void deleteIsDefault() { this->isDefault_ = nullptr;};
        inline string getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, "") };
        inline LocalSSDInstanceTypeConstraints& setIsDefault(string isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


        // memory Field Functions 
        bool hasMemory() const { return this->memory_ != nullptr;};
        void deleteMemory() { this->memory_ = nullptr;};
        inline int32_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
        inline LocalSSDInstanceTypeConstraints& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


        // storageSize Field Functions 
        bool hasStorageSize() const { return this->storageSize_ != nullptr;};
        void deleteStorageSize() { this->storageSize_ = nullptr;};
        inline string getStorageSize() const { DARABONBA_PTR_GET_DEFAULT(storageSize_, "") };
        inline LocalSSDInstanceTypeConstraints& setStorageSize(string storageSize) { DARABONBA_PTR_SET_VALUE(storageSize_, storageSize) };


      protected:
        shared_ptr<int32_t> cpu_ {};
        shared_ptr<string> diskNumber_ {};
        shared_ptr<string> display_ {};
        shared_ptr<string> ecsInstanceType_ {};
        shared_ptr<string> instanceType_ {};
        shared_ptr<string> isDefault_ {};
        shared_ptr<int32_t> memory_ {};
        shared_ptr<string> storageSize_ {};
      };

      class HaFeResourceSpec : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HaFeResourceSpec& obj) { 
          DARABONBA_PTR_TO_JSON(Cu, cu_);
          DARABONBA_PTR_TO_JSON(NodeNumber, nodeNumber_);
          DARABONBA_PTR_TO_JSON(StorageSize, storageSize_);
        };
        friend void from_json(const Darabonba::Json& j, HaFeResourceSpec& obj) { 
          DARABONBA_PTR_FROM_JSON(Cu, cu_);
          DARABONBA_PTR_FROM_JSON(NodeNumber, nodeNumber_);
          DARABONBA_PTR_FROM_JSON(StorageSize, storageSize_);
        };
        HaFeResourceSpec() = default ;
        HaFeResourceSpec(const HaFeResourceSpec &) = default ;
        HaFeResourceSpec(HaFeResourceSpec &&) = default ;
        HaFeResourceSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HaFeResourceSpec() = default ;
        HaFeResourceSpec& operator=(const HaFeResourceSpec &) = default ;
        HaFeResourceSpec& operator=(HaFeResourceSpec &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cu_ == nullptr
        && this->nodeNumber_ == nullptr && this->storageSize_ == nullptr; };
        // cu Field Functions 
        bool hasCu() const { return this->cu_ != nullptr;};
        void deleteCu() { this->cu_ = nullptr;};
        inline int32_t getCu() const { DARABONBA_PTR_GET_DEFAULT(cu_, 0) };
        inline HaFeResourceSpec& setCu(int32_t cu) { DARABONBA_PTR_SET_VALUE(cu_, cu) };


        // nodeNumber Field Functions 
        bool hasNodeNumber() const { return this->nodeNumber_ != nullptr;};
        void deleteNodeNumber() { this->nodeNumber_ = nullptr;};
        inline int32_t getNodeNumber() const { DARABONBA_PTR_GET_DEFAULT(nodeNumber_, 0) };
        inline HaFeResourceSpec& setNodeNumber(int32_t nodeNumber) { DARABONBA_PTR_SET_VALUE(nodeNumber_, nodeNumber) };


        // storageSize Field Functions 
        bool hasStorageSize() const { return this->storageSize_ != nullptr;};
        void deleteStorageSize() { this->storageSize_ = nullptr;};
        inline int32_t getStorageSize() const { DARABONBA_PTR_GET_DEFAULT(storageSize_, 0) };
        inline HaFeResourceSpec& setStorageSize(int32_t storageSize) { DARABONBA_PTR_SET_VALUE(storageSize_, storageSize) };


      protected:
        shared_ptr<int32_t> cu_ {};
        shared_ptr<int32_t> nodeNumber_ {};
        shared_ptr<int32_t> storageSize_ {};
      };

      class FeStorage : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FeStorage& obj) { 
          DARABONBA_PTR_TO_JSON(Default, default_);
          DARABONBA_PTR_TO_JSON(Max, max_);
          DARABONBA_PTR_TO_JSON(Min, min_);
          DARABONBA_PTR_TO_JSON(Step, step_);
        };
        friend void from_json(const Darabonba::Json& j, FeStorage& obj) { 
          DARABONBA_PTR_FROM_JSON(Default, default_);
          DARABONBA_PTR_FROM_JSON(Max, max_);
          DARABONBA_PTR_FROM_JSON(Min, min_);
          DARABONBA_PTR_FROM_JSON(Step, step_);
        };
        FeStorage() = default ;
        FeStorage(const FeStorage &) = default ;
        FeStorage(FeStorage &&) = default ;
        FeStorage(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FeStorage() = default ;
        FeStorage& operator=(const FeStorage &) = default ;
        FeStorage& operator=(FeStorage &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->default_ == nullptr
        && this->max_ == nullptr && this->min_ == nullptr && this->step_ == nullptr; };
        // default Field Functions 
        bool hasDefault() const { return this->default_ != nullptr;};
        void deleteDefault() { this->default_ = nullptr;};
        inline int32_t getDefault() const { DARABONBA_PTR_GET_DEFAULT(default_, 0) };
        inline FeStorage& setDefault(int32_t _default) { DARABONBA_PTR_SET_VALUE(default_, _default) };


        // max Field Functions 
        bool hasMax() const { return this->max_ != nullptr;};
        void deleteMax() { this->max_ = nullptr;};
        inline int32_t getMax() const { DARABONBA_PTR_GET_DEFAULT(max_, 0) };
        inline FeStorage& setMax(int32_t max) { DARABONBA_PTR_SET_VALUE(max_, max) };


        // min Field Functions 
        bool hasMin() const { return this->min_ != nullptr;};
        void deleteMin() { this->min_ = nullptr;};
        inline int32_t getMin() const { DARABONBA_PTR_GET_DEFAULT(min_, 0) };
        inline FeStorage& setMin(int32_t min) { DARABONBA_PTR_SET_VALUE(min_, min) };


        // step Field Functions 
        bool hasStep() const { return this->step_ != nullptr;};
        void deleteStep() { this->step_ = nullptr;};
        inline int32_t getStep() const { DARABONBA_PTR_GET_DEFAULT(step_, 0) };
        inline FeStorage& setStep(int32_t step) { DARABONBA_PTR_SET_VALUE(step_, step) };


      protected:
        shared_ptr<int32_t> default_ {};
        shared_ptr<int32_t> max_ {};
        shared_ptr<int32_t> min_ {};
        shared_ptr<int32_t> step_ {};
      };

      class FeSpecType : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FeSpecType& obj) { 
          DARABONBA_PTR_TO_JSON(Display, display_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, FeSpecType& obj) { 
          DARABONBA_PTR_FROM_JSON(Display, display_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        FeSpecType() = default ;
        FeSpecType(const FeSpecType &) = default ;
        FeSpecType(FeSpecType &&) = default ;
        FeSpecType(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FeSpecType() = default ;
        FeSpecType& operator=(const FeSpecType &) = default ;
        FeSpecType& operator=(FeSpecType &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->display_ == nullptr
        && this->name_ == nullptr; };
        // display Field Functions 
        bool hasDisplay() const { return this->display_ != nullptr;};
        void deleteDisplay() { this->display_ = nullptr;};
        inline string getDisplay() const { DARABONBA_PTR_GET_DEFAULT(display_, "") };
        inline FeSpecType& setDisplay(string display) { DARABONBA_PTR_SET_VALUE(display_, display) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline FeSpecType& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<string> display_ {};
        shared_ptr<string> name_ {};
      };

      class FeNumber : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FeNumber& obj) { 
          DARABONBA_PTR_TO_JSON(Default, default_);
          DARABONBA_PTR_TO_JSON(Max, max_);
          DARABONBA_PTR_TO_JSON(Min, min_);
          DARABONBA_PTR_TO_JSON(Step, step_);
        };
        friend void from_json(const Darabonba::Json& j, FeNumber& obj) { 
          DARABONBA_PTR_FROM_JSON(Default, default_);
          DARABONBA_PTR_FROM_JSON(Max, max_);
          DARABONBA_PTR_FROM_JSON(Min, min_);
          DARABONBA_PTR_FROM_JSON(Step, step_);
        };
        FeNumber() = default ;
        FeNumber(const FeNumber &) = default ;
        FeNumber(FeNumber &&) = default ;
        FeNumber(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FeNumber() = default ;
        FeNumber& operator=(const FeNumber &) = default ;
        FeNumber& operator=(FeNumber &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->default_ == nullptr
        && this->max_ == nullptr && this->min_ == nullptr && this->step_ == nullptr; };
        // default Field Functions 
        bool hasDefault() const { return this->default_ != nullptr;};
        void deleteDefault() { this->default_ = nullptr;};
        inline int32_t getDefault() const { DARABONBA_PTR_GET_DEFAULT(default_, 0) };
        inline FeNumber& setDefault(int32_t _default) { DARABONBA_PTR_SET_VALUE(default_, _default) };


        // max Field Functions 
        bool hasMax() const { return this->max_ != nullptr;};
        void deleteMax() { this->max_ = nullptr;};
        inline int32_t getMax() const { DARABONBA_PTR_GET_DEFAULT(max_, 0) };
        inline FeNumber& setMax(int32_t max) { DARABONBA_PTR_SET_VALUE(max_, max) };


        // min Field Functions 
        bool hasMin() const { return this->min_ != nullptr;};
        void deleteMin() { this->min_ = nullptr;};
        inline int32_t getMin() const { DARABONBA_PTR_GET_DEFAULT(min_, 0) };
        inline FeNumber& setMin(int32_t min) { DARABONBA_PTR_SET_VALUE(min_, min) };


        // step Field Functions 
        bool hasStep() const { return this->step_ != nullptr;};
        void deleteStep() { this->step_ = nullptr;};
        inline int32_t getStep() const { DARABONBA_PTR_GET_DEFAULT(step_, 0) };
        inline FeNumber& setStep(int32_t step) { DARABONBA_PTR_SET_VALUE(step_, step) };


      protected:
        shared_ptr<int32_t> default_ {};
        shared_ptr<int32_t> max_ {};
        shared_ptr<int32_t> min_ {};
        shared_ptr<int32_t> step_ {};
      };

      class BigDataInstanceTypeConstraints : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BigDataInstanceTypeConstraints& obj) { 
          DARABONBA_PTR_TO_JSON(Cpu, cpu_);
          DARABONBA_PTR_TO_JSON(DiskNumber, diskNumber_);
          DARABONBA_PTR_TO_JSON(Display, display_);
          DARABONBA_PTR_TO_JSON(EcsInstanceType, ecsInstanceType_);
          DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
          DARABONBA_PTR_TO_JSON(Memory, memory_);
          DARABONBA_PTR_TO_JSON(StorageSize, storageSize_);
        };
        friend void from_json(const Darabonba::Json& j, BigDataInstanceTypeConstraints& obj) { 
          DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
          DARABONBA_PTR_FROM_JSON(DiskNumber, diskNumber_);
          DARABONBA_PTR_FROM_JSON(Display, display_);
          DARABONBA_PTR_FROM_JSON(EcsInstanceType, ecsInstanceType_);
          DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
          DARABONBA_PTR_FROM_JSON(Memory, memory_);
          DARABONBA_PTR_FROM_JSON(StorageSize, storageSize_);
        };
        BigDataInstanceTypeConstraints() = default ;
        BigDataInstanceTypeConstraints(const BigDataInstanceTypeConstraints &) = default ;
        BigDataInstanceTypeConstraints(BigDataInstanceTypeConstraints &&) = default ;
        BigDataInstanceTypeConstraints(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BigDataInstanceTypeConstraints() = default ;
        BigDataInstanceTypeConstraints& operator=(const BigDataInstanceTypeConstraints &) = default ;
        BigDataInstanceTypeConstraints& operator=(BigDataInstanceTypeConstraints &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cpu_ == nullptr
        && this->diskNumber_ == nullptr && this->display_ == nullptr && this->ecsInstanceType_ == nullptr && this->instanceType_ == nullptr && this->isDefault_ == nullptr
        && this->memory_ == nullptr && this->storageSize_ == nullptr; };
        // cpu Field Functions 
        bool hasCpu() const { return this->cpu_ != nullptr;};
        void deleteCpu() { this->cpu_ = nullptr;};
        inline int32_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
        inline BigDataInstanceTypeConstraints& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


        // diskNumber Field Functions 
        bool hasDiskNumber() const { return this->diskNumber_ != nullptr;};
        void deleteDiskNumber() { this->diskNumber_ = nullptr;};
        inline string getDiskNumber() const { DARABONBA_PTR_GET_DEFAULT(diskNumber_, "") };
        inline BigDataInstanceTypeConstraints& setDiskNumber(string diskNumber) { DARABONBA_PTR_SET_VALUE(diskNumber_, diskNumber) };


        // display Field Functions 
        bool hasDisplay() const { return this->display_ != nullptr;};
        void deleteDisplay() { this->display_ = nullptr;};
        inline string getDisplay() const { DARABONBA_PTR_GET_DEFAULT(display_, "") };
        inline BigDataInstanceTypeConstraints& setDisplay(string display) { DARABONBA_PTR_SET_VALUE(display_, display) };


        // ecsInstanceType Field Functions 
        bool hasEcsInstanceType() const { return this->ecsInstanceType_ != nullptr;};
        void deleteEcsInstanceType() { this->ecsInstanceType_ = nullptr;};
        inline string getEcsInstanceType() const { DARABONBA_PTR_GET_DEFAULT(ecsInstanceType_, "") };
        inline BigDataInstanceTypeConstraints& setEcsInstanceType(string ecsInstanceType) { DARABONBA_PTR_SET_VALUE(ecsInstanceType_, ecsInstanceType) };


        // instanceType Field Functions 
        bool hasInstanceType() const { return this->instanceType_ != nullptr;};
        void deleteInstanceType() { this->instanceType_ = nullptr;};
        inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
        inline BigDataInstanceTypeConstraints& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


        // isDefault Field Functions 
        bool hasIsDefault() const { return this->isDefault_ != nullptr;};
        void deleteIsDefault() { this->isDefault_ = nullptr;};
        inline string getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, "") };
        inline BigDataInstanceTypeConstraints& setIsDefault(string isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


        // memory Field Functions 
        bool hasMemory() const { return this->memory_ != nullptr;};
        void deleteMemory() { this->memory_ = nullptr;};
        inline int32_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
        inline BigDataInstanceTypeConstraints& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


        // storageSize Field Functions 
        bool hasStorageSize() const { return this->storageSize_ != nullptr;};
        void deleteStorageSize() { this->storageSize_ = nullptr;};
        inline string getStorageSize() const { DARABONBA_PTR_GET_DEFAULT(storageSize_, "") };
        inline BigDataInstanceTypeConstraints& setStorageSize(string storageSize) { DARABONBA_PTR_SET_VALUE(storageSize_, storageSize) };


      protected:
        shared_ptr<int32_t> cpu_ {};
        shared_ptr<string> diskNumber_ {};
        shared_ptr<string> display_ {};
        shared_ptr<string> ecsInstanceType_ {};
        shared_ptr<string> instanceType_ {};
        shared_ptr<string> isDefault_ {};
        shared_ptr<int32_t> memory_ {};
        shared_ptr<string> storageSize_ {};
      };

      class BeStorageConstraints : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BeStorageConstraints& obj) { 
          DARABONBA_PTR_TO_JSON(Desc, desc_);
          DARABONBA_PTR_TO_JSON(DiskNumberConstraint, diskNumberConstraint_);
          DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
          DARABONBA_PTR_TO_JSON(Level, level_);
          DARABONBA_PTR_TO_JSON(ValueConstraint, valueConstraint_);
        };
        friend void from_json(const Darabonba::Json& j, BeStorageConstraints& obj) { 
          DARABONBA_PTR_FROM_JSON(Desc, desc_);
          DARABONBA_PTR_FROM_JSON(DiskNumberConstraint, diskNumberConstraint_);
          DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
          DARABONBA_PTR_FROM_JSON(Level, level_);
          DARABONBA_PTR_FROM_JSON(ValueConstraint, valueConstraint_);
        };
        BeStorageConstraints() = default ;
        BeStorageConstraints(const BeStorageConstraints &) = default ;
        BeStorageConstraints(BeStorageConstraints &&) = default ;
        BeStorageConstraints(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BeStorageConstraints() = default ;
        BeStorageConstraints& operator=(const BeStorageConstraints &) = default ;
        BeStorageConstraints& operator=(BeStorageConstraints &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ValueConstraint : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ValueConstraint& obj) { 
            DARABONBA_PTR_TO_JSON(Default, default_);
            DARABONBA_PTR_TO_JSON(Max, max_);
            DARABONBA_PTR_TO_JSON(Min, min_);
            DARABONBA_PTR_TO_JSON(Step, step_);
          };
          friend void from_json(const Darabonba::Json& j, ValueConstraint& obj) { 
            DARABONBA_PTR_FROM_JSON(Default, default_);
            DARABONBA_PTR_FROM_JSON(Max, max_);
            DARABONBA_PTR_FROM_JSON(Min, min_);
            DARABONBA_PTR_FROM_JSON(Step, step_);
          };
          ValueConstraint() = default ;
          ValueConstraint(const ValueConstraint &) = default ;
          ValueConstraint(ValueConstraint &&) = default ;
          ValueConstraint(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ValueConstraint() = default ;
          ValueConstraint& operator=(const ValueConstraint &) = default ;
          ValueConstraint& operator=(ValueConstraint &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->default_ == nullptr
        && this->max_ == nullptr && this->min_ == nullptr && this->step_ == nullptr; };
          // default Field Functions 
          bool hasDefault() const { return this->default_ != nullptr;};
          void deleteDefault() { this->default_ = nullptr;};
          inline int32_t getDefault() const { DARABONBA_PTR_GET_DEFAULT(default_, 0) };
          inline ValueConstraint& setDefault(int32_t _default) { DARABONBA_PTR_SET_VALUE(default_, _default) };


          // max Field Functions 
          bool hasMax() const { return this->max_ != nullptr;};
          void deleteMax() { this->max_ = nullptr;};
          inline int32_t getMax() const { DARABONBA_PTR_GET_DEFAULT(max_, 0) };
          inline ValueConstraint& setMax(int32_t max) { DARABONBA_PTR_SET_VALUE(max_, max) };


          // min Field Functions 
          bool hasMin() const { return this->min_ != nullptr;};
          void deleteMin() { this->min_ = nullptr;};
          inline int32_t getMin() const { DARABONBA_PTR_GET_DEFAULT(min_, 0) };
          inline ValueConstraint& setMin(int32_t min) { DARABONBA_PTR_SET_VALUE(min_, min) };


          // step Field Functions 
          bool hasStep() const { return this->step_ != nullptr;};
          void deleteStep() { this->step_ = nullptr;};
          inline int32_t getStep() const { DARABONBA_PTR_GET_DEFAULT(step_, 0) };
          inline ValueConstraint& setStep(int32_t step) { DARABONBA_PTR_SET_VALUE(step_, step) };


        protected:
          shared_ptr<int32_t> default_ {};
          shared_ptr<int32_t> max_ {};
          shared_ptr<int32_t> min_ {};
          shared_ptr<int32_t> step_ {};
        };

        class DiskNumberConstraint : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DiskNumberConstraint& obj) { 
            DARABONBA_PTR_TO_JSON(Default, default_);
            DARABONBA_PTR_TO_JSON(Max, max_);
            DARABONBA_PTR_TO_JSON(Min, min_);
            DARABONBA_PTR_TO_JSON(Step, step_);
          };
          friend void from_json(const Darabonba::Json& j, DiskNumberConstraint& obj) { 
            DARABONBA_PTR_FROM_JSON(Default, default_);
            DARABONBA_PTR_FROM_JSON(Max, max_);
            DARABONBA_PTR_FROM_JSON(Min, min_);
            DARABONBA_PTR_FROM_JSON(Step, step_);
          };
          DiskNumberConstraint() = default ;
          DiskNumberConstraint(const DiskNumberConstraint &) = default ;
          DiskNumberConstraint(DiskNumberConstraint &&) = default ;
          DiskNumberConstraint(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DiskNumberConstraint() = default ;
          DiskNumberConstraint& operator=(const DiskNumberConstraint &) = default ;
          DiskNumberConstraint& operator=(DiskNumberConstraint &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->default_ == nullptr
        && this->max_ == nullptr && this->min_ == nullptr && this->step_ == nullptr; };
          // default Field Functions 
          bool hasDefault() const { return this->default_ != nullptr;};
          void deleteDefault() { this->default_ = nullptr;};
          inline int32_t getDefault() const { DARABONBA_PTR_GET_DEFAULT(default_, 0) };
          inline DiskNumberConstraint& setDefault(int32_t _default) { DARABONBA_PTR_SET_VALUE(default_, _default) };


          // max Field Functions 
          bool hasMax() const { return this->max_ != nullptr;};
          void deleteMax() { this->max_ = nullptr;};
          inline int32_t getMax() const { DARABONBA_PTR_GET_DEFAULT(max_, 0) };
          inline DiskNumberConstraint& setMax(int32_t max) { DARABONBA_PTR_SET_VALUE(max_, max) };


          // min Field Functions 
          bool hasMin() const { return this->min_ != nullptr;};
          void deleteMin() { this->min_ = nullptr;};
          inline int32_t getMin() const { DARABONBA_PTR_GET_DEFAULT(min_, 0) };
          inline DiskNumberConstraint& setMin(int32_t min) { DARABONBA_PTR_SET_VALUE(min_, min) };


          // step Field Functions 
          bool hasStep() const { return this->step_ != nullptr;};
          void deleteStep() { this->step_ = nullptr;};
          inline int32_t getStep() const { DARABONBA_PTR_GET_DEFAULT(step_, 0) };
          inline DiskNumberConstraint& setStep(int32_t step) { DARABONBA_PTR_SET_VALUE(step_, step) };


        protected:
          shared_ptr<int32_t> default_ {};
          shared_ptr<int32_t> max_ {};
          shared_ptr<int32_t> min_ {};
          shared_ptr<int32_t> step_ {};
        };

        virtual bool empty() const override { return this->desc_ == nullptr
        && this->diskNumberConstraint_ == nullptr && this->isDefault_ == nullptr && this->level_ == nullptr && this->valueConstraint_ == nullptr; };
        // desc Field Functions 
        bool hasDesc() const { return this->desc_ != nullptr;};
        void deleteDesc() { this->desc_ = nullptr;};
        inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
        inline BeStorageConstraints& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


        // diskNumberConstraint Field Functions 
        bool hasDiskNumberConstraint() const { return this->diskNumberConstraint_ != nullptr;};
        void deleteDiskNumberConstraint() { this->diskNumberConstraint_ = nullptr;};
        inline const BeStorageConstraints::DiskNumberConstraint & getDiskNumberConstraint() const { DARABONBA_PTR_GET_CONST(diskNumberConstraint_, BeStorageConstraints::DiskNumberConstraint) };
        inline BeStorageConstraints::DiskNumberConstraint getDiskNumberConstraint() { DARABONBA_PTR_GET(diskNumberConstraint_, BeStorageConstraints::DiskNumberConstraint) };
        inline BeStorageConstraints& setDiskNumberConstraint(const BeStorageConstraints::DiskNumberConstraint & diskNumberConstraint) { DARABONBA_PTR_SET_VALUE(diskNumberConstraint_, diskNumberConstraint) };
        inline BeStorageConstraints& setDiskNumberConstraint(BeStorageConstraints::DiskNumberConstraint && diskNumberConstraint) { DARABONBA_PTR_SET_RVALUE(diskNumberConstraint_, diskNumberConstraint) };


        // isDefault Field Functions 
        bool hasIsDefault() const { return this->isDefault_ != nullptr;};
        void deleteIsDefault() { this->isDefault_ = nullptr;};
        inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
        inline BeStorageConstraints& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


        // level Field Functions 
        bool hasLevel() const { return this->level_ != nullptr;};
        void deleteLevel() { this->level_ = nullptr;};
        inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
        inline BeStorageConstraints& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


        // valueConstraint Field Functions 
        bool hasValueConstraint() const { return this->valueConstraint_ != nullptr;};
        void deleteValueConstraint() { this->valueConstraint_ = nullptr;};
        inline const BeStorageConstraints::ValueConstraint & getValueConstraint() const { DARABONBA_PTR_GET_CONST(valueConstraint_, BeStorageConstraints::ValueConstraint) };
        inline BeStorageConstraints::ValueConstraint getValueConstraint() { DARABONBA_PTR_GET(valueConstraint_, BeStorageConstraints::ValueConstraint) };
        inline BeStorageConstraints& setValueConstraint(const BeStorageConstraints::ValueConstraint & valueConstraint) { DARABONBA_PTR_SET_VALUE(valueConstraint_, valueConstraint) };
        inline BeStorageConstraints& setValueConstraint(BeStorageConstraints::ValueConstraint && valueConstraint) { DARABONBA_PTR_SET_RVALUE(valueConstraint_, valueConstraint) };


      protected:
        shared_ptr<string> desc_ {};
        shared_ptr<BeStorageConstraints::DiskNumberConstraint> diskNumberConstraint_ {};
        shared_ptr<bool> isDefault_ {};
        shared_ptr<string> level_ {};
        shared_ptr<BeStorageConstraints::ValueConstraint> valueConstraint_ {};
      };

      class BeNumber : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BeNumber& obj) { 
          DARABONBA_PTR_TO_JSON(Default, default_);
          DARABONBA_PTR_TO_JSON(Max, max_);
          DARABONBA_PTR_TO_JSON(Min, min_);
          DARABONBA_PTR_TO_JSON(Step, step_);
        };
        friend void from_json(const Darabonba::Json& j, BeNumber& obj) { 
          DARABONBA_PTR_FROM_JSON(Default, default_);
          DARABONBA_PTR_FROM_JSON(Max, max_);
          DARABONBA_PTR_FROM_JSON(Min, min_);
          DARABONBA_PTR_FROM_JSON(Step, step_);
        };
        BeNumber() = default ;
        BeNumber(const BeNumber &) = default ;
        BeNumber(BeNumber &&) = default ;
        BeNumber(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BeNumber() = default ;
        BeNumber& operator=(const BeNumber &) = default ;
        BeNumber& operator=(BeNumber &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->default_ == nullptr
        && this->max_ == nullptr && this->min_ == nullptr && this->step_ == nullptr; };
        // default Field Functions 
        bool hasDefault() const { return this->default_ != nullptr;};
        void deleteDefault() { this->default_ = nullptr;};
        inline int32_t getDefault() const { DARABONBA_PTR_GET_DEFAULT(default_, 0) };
        inline BeNumber& setDefault(int32_t _default) { DARABONBA_PTR_SET_VALUE(default_, _default) };


        // max Field Functions 
        bool hasMax() const { return this->max_ != nullptr;};
        void deleteMax() { this->max_ = nullptr;};
        inline int32_t getMax() const { DARABONBA_PTR_GET_DEFAULT(max_, 0) };
        inline BeNumber& setMax(int32_t max) { DARABONBA_PTR_SET_VALUE(max_, max) };


        // min Field Functions 
        bool hasMin() const { return this->min_ != nullptr;};
        void deleteMin() { this->min_ = nullptr;};
        inline int32_t getMin() const { DARABONBA_PTR_GET_DEFAULT(min_, 0) };
        inline BeNumber& setMin(int32_t min) { DARABONBA_PTR_SET_VALUE(min_, min) };


        // step Field Functions 
        bool hasStep() const { return this->step_ != nullptr;};
        void deleteStep() { this->step_ = nullptr;};
        inline int32_t getStep() const { DARABONBA_PTR_GET_DEFAULT(step_, 0) };
        inline BeNumber& setStep(int32_t step) { DARABONBA_PTR_SET_VALUE(step_, step) };


      protected:
        shared_ptr<int32_t> default_ {};
        shared_ptr<int32_t> max_ {};
        shared_ptr<int32_t> min_ {};
        shared_ptr<int32_t> step_ {};
      };

      virtual bool empty() const override { return this->agentCu_ == nullptr
        && this->beCu_ == nullptr && this->beCuOnEcs_ == nullptr && this->beNumber_ == nullptr && this->beStorageConstraints_ == nullptr && this->bigDataInstanceTypeConstraints_ == nullptr
        && this->feCu_ == nullptr && this->feCuOnEcs_ == nullptr && this->feNumber_ == nullptr && this->feSpecType_ == nullptr && this->feStorage_ == nullptr
        && this->haFeResourceSpec_ == nullptr && this->localSSDInstanceTypeConstraints_ == nullptr && this->normalFeResourceSpec_ == nullptr && this->specType_ == nullptr && this->splitDiskThresholdMap_ == nullptr
        && this->versionConstraint_ == nullptr && this->zoneSupportedEedTypes_ == nullptr && this->zoneSupportedSpecTypes_ == nullptr && this->compactionServiceCuConstraint_ == nullptr; };
      // agentCu Field Functions 
      bool hasAgentCu() const { return this->agentCu_ != nullptr;};
      void deleteAgentCu() { this->agentCu_ = nullptr;};
      inline const vector<int32_t> & getAgentCu() const { DARABONBA_PTR_GET_CONST(agentCu_, vector<int32_t>) };
      inline vector<int32_t> getAgentCu() { DARABONBA_PTR_GET(agentCu_, vector<int32_t>) };
      inline Data& setAgentCu(const vector<int32_t> & agentCu) { DARABONBA_PTR_SET_VALUE(agentCu_, agentCu) };
      inline Data& setAgentCu(vector<int32_t> && agentCu) { DARABONBA_PTR_SET_RVALUE(agentCu_, agentCu) };


      // beCu Field Functions 
      bool hasBeCu() const { return this->beCu_ != nullptr;};
      void deleteBeCu() { this->beCu_ = nullptr;};
      inline const vector<int32_t> & getBeCu() const { DARABONBA_PTR_GET_CONST(beCu_, vector<int32_t>) };
      inline vector<int32_t> getBeCu() { DARABONBA_PTR_GET(beCu_, vector<int32_t>) };
      inline Data& setBeCu(const vector<int32_t> & beCu) { DARABONBA_PTR_SET_VALUE(beCu_, beCu) };
      inline Data& setBeCu(vector<int32_t> && beCu) { DARABONBA_PTR_SET_RVALUE(beCu_, beCu) };


      // beCuOnEcs Field Functions 
      bool hasBeCuOnEcs() const { return this->beCuOnEcs_ != nullptr;};
      void deleteBeCuOnEcs() { this->beCuOnEcs_ = nullptr;};
      inline const vector<int32_t> & getBeCuOnEcs() const { DARABONBA_PTR_GET_CONST(beCuOnEcs_, vector<int32_t>) };
      inline vector<int32_t> getBeCuOnEcs() { DARABONBA_PTR_GET(beCuOnEcs_, vector<int32_t>) };
      inline Data& setBeCuOnEcs(const vector<int32_t> & beCuOnEcs) { DARABONBA_PTR_SET_VALUE(beCuOnEcs_, beCuOnEcs) };
      inline Data& setBeCuOnEcs(vector<int32_t> && beCuOnEcs) { DARABONBA_PTR_SET_RVALUE(beCuOnEcs_, beCuOnEcs) };


      // beNumber Field Functions 
      bool hasBeNumber() const { return this->beNumber_ != nullptr;};
      void deleteBeNumber() { this->beNumber_ = nullptr;};
      inline const Data::BeNumber & getBeNumber() const { DARABONBA_PTR_GET_CONST(beNumber_, Data::BeNumber) };
      inline Data::BeNumber getBeNumber() { DARABONBA_PTR_GET(beNumber_, Data::BeNumber) };
      inline Data& setBeNumber(const Data::BeNumber & beNumber) { DARABONBA_PTR_SET_VALUE(beNumber_, beNumber) };
      inline Data& setBeNumber(Data::BeNumber && beNumber) { DARABONBA_PTR_SET_RVALUE(beNumber_, beNumber) };


      // beStorageConstraints Field Functions 
      bool hasBeStorageConstraints() const { return this->beStorageConstraints_ != nullptr;};
      void deleteBeStorageConstraints() { this->beStorageConstraints_ = nullptr;};
      inline const vector<Data::BeStorageConstraints> & getBeStorageConstraints() const { DARABONBA_PTR_GET_CONST(beStorageConstraints_, vector<Data::BeStorageConstraints>) };
      inline vector<Data::BeStorageConstraints> getBeStorageConstraints() { DARABONBA_PTR_GET(beStorageConstraints_, vector<Data::BeStorageConstraints>) };
      inline Data& setBeStorageConstraints(const vector<Data::BeStorageConstraints> & beStorageConstraints) { DARABONBA_PTR_SET_VALUE(beStorageConstraints_, beStorageConstraints) };
      inline Data& setBeStorageConstraints(vector<Data::BeStorageConstraints> && beStorageConstraints) { DARABONBA_PTR_SET_RVALUE(beStorageConstraints_, beStorageConstraints) };


      // bigDataInstanceTypeConstraints Field Functions 
      bool hasBigDataInstanceTypeConstraints() const { return this->bigDataInstanceTypeConstraints_ != nullptr;};
      void deleteBigDataInstanceTypeConstraints() { this->bigDataInstanceTypeConstraints_ = nullptr;};
      inline const vector<Data::BigDataInstanceTypeConstraints> & getBigDataInstanceTypeConstraints() const { DARABONBA_PTR_GET_CONST(bigDataInstanceTypeConstraints_, vector<Data::BigDataInstanceTypeConstraints>) };
      inline vector<Data::BigDataInstanceTypeConstraints> getBigDataInstanceTypeConstraints() { DARABONBA_PTR_GET(bigDataInstanceTypeConstraints_, vector<Data::BigDataInstanceTypeConstraints>) };
      inline Data& setBigDataInstanceTypeConstraints(const vector<Data::BigDataInstanceTypeConstraints> & bigDataInstanceTypeConstraints) { DARABONBA_PTR_SET_VALUE(bigDataInstanceTypeConstraints_, bigDataInstanceTypeConstraints) };
      inline Data& setBigDataInstanceTypeConstraints(vector<Data::BigDataInstanceTypeConstraints> && bigDataInstanceTypeConstraints) { DARABONBA_PTR_SET_RVALUE(bigDataInstanceTypeConstraints_, bigDataInstanceTypeConstraints) };


      // feCu Field Functions 
      bool hasFeCu() const { return this->feCu_ != nullptr;};
      void deleteFeCu() { this->feCu_ = nullptr;};
      inline const vector<int32_t> & getFeCu() const { DARABONBA_PTR_GET_CONST(feCu_, vector<int32_t>) };
      inline vector<int32_t> getFeCu() { DARABONBA_PTR_GET(feCu_, vector<int32_t>) };
      inline Data& setFeCu(const vector<int32_t> & feCu) { DARABONBA_PTR_SET_VALUE(feCu_, feCu) };
      inline Data& setFeCu(vector<int32_t> && feCu) { DARABONBA_PTR_SET_RVALUE(feCu_, feCu) };


      // feCuOnEcs Field Functions 
      bool hasFeCuOnEcs() const { return this->feCuOnEcs_ != nullptr;};
      void deleteFeCuOnEcs() { this->feCuOnEcs_ = nullptr;};
      inline const vector<int32_t> & getFeCuOnEcs() const { DARABONBA_PTR_GET_CONST(feCuOnEcs_, vector<int32_t>) };
      inline vector<int32_t> getFeCuOnEcs() { DARABONBA_PTR_GET(feCuOnEcs_, vector<int32_t>) };
      inline Data& setFeCuOnEcs(const vector<int32_t> & feCuOnEcs) { DARABONBA_PTR_SET_VALUE(feCuOnEcs_, feCuOnEcs) };
      inline Data& setFeCuOnEcs(vector<int32_t> && feCuOnEcs) { DARABONBA_PTR_SET_RVALUE(feCuOnEcs_, feCuOnEcs) };


      // feNumber Field Functions 
      bool hasFeNumber() const { return this->feNumber_ != nullptr;};
      void deleteFeNumber() { this->feNumber_ = nullptr;};
      inline const Data::FeNumber & getFeNumber() const { DARABONBA_PTR_GET_CONST(feNumber_, Data::FeNumber) };
      inline Data::FeNumber getFeNumber() { DARABONBA_PTR_GET(feNumber_, Data::FeNumber) };
      inline Data& setFeNumber(const Data::FeNumber & feNumber) { DARABONBA_PTR_SET_VALUE(feNumber_, feNumber) };
      inline Data& setFeNumber(Data::FeNumber && feNumber) { DARABONBA_PTR_SET_RVALUE(feNumber_, feNumber) };


      // feSpecType Field Functions 
      bool hasFeSpecType() const { return this->feSpecType_ != nullptr;};
      void deleteFeSpecType() { this->feSpecType_ = nullptr;};
      inline const vector<Data::FeSpecType> & getFeSpecType() const { DARABONBA_PTR_GET_CONST(feSpecType_, vector<Data::FeSpecType>) };
      inline vector<Data::FeSpecType> getFeSpecType() { DARABONBA_PTR_GET(feSpecType_, vector<Data::FeSpecType>) };
      inline Data& setFeSpecType(const vector<Data::FeSpecType> & feSpecType) { DARABONBA_PTR_SET_VALUE(feSpecType_, feSpecType) };
      inline Data& setFeSpecType(vector<Data::FeSpecType> && feSpecType) { DARABONBA_PTR_SET_RVALUE(feSpecType_, feSpecType) };


      // feStorage Field Functions 
      bool hasFeStorage() const { return this->feStorage_ != nullptr;};
      void deleteFeStorage() { this->feStorage_ = nullptr;};
      inline const Data::FeStorage & getFeStorage() const { DARABONBA_PTR_GET_CONST(feStorage_, Data::FeStorage) };
      inline Data::FeStorage getFeStorage() { DARABONBA_PTR_GET(feStorage_, Data::FeStorage) };
      inline Data& setFeStorage(const Data::FeStorage & feStorage) { DARABONBA_PTR_SET_VALUE(feStorage_, feStorage) };
      inline Data& setFeStorage(Data::FeStorage && feStorage) { DARABONBA_PTR_SET_RVALUE(feStorage_, feStorage) };


      // haFeResourceSpec Field Functions 
      bool hasHaFeResourceSpec() const { return this->haFeResourceSpec_ != nullptr;};
      void deleteHaFeResourceSpec() { this->haFeResourceSpec_ = nullptr;};
      inline const Data::HaFeResourceSpec & getHaFeResourceSpec() const { DARABONBA_PTR_GET_CONST(haFeResourceSpec_, Data::HaFeResourceSpec) };
      inline Data::HaFeResourceSpec getHaFeResourceSpec() { DARABONBA_PTR_GET(haFeResourceSpec_, Data::HaFeResourceSpec) };
      inline Data& setHaFeResourceSpec(const Data::HaFeResourceSpec & haFeResourceSpec) { DARABONBA_PTR_SET_VALUE(haFeResourceSpec_, haFeResourceSpec) };
      inline Data& setHaFeResourceSpec(Data::HaFeResourceSpec && haFeResourceSpec) { DARABONBA_PTR_SET_RVALUE(haFeResourceSpec_, haFeResourceSpec) };


      // localSSDInstanceTypeConstraints Field Functions 
      bool hasLocalSSDInstanceTypeConstraints() const { return this->localSSDInstanceTypeConstraints_ != nullptr;};
      void deleteLocalSSDInstanceTypeConstraints() { this->localSSDInstanceTypeConstraints_ = nullptr;};
      inline const vector<Data::LocalSSDInstanceTypeConstraints> & getLocalSSDInstanceTypeConstraints() const { DARABONBA_PTR_GET_CONST(localSSDInstanceTypeConstraints_, vector<Data::LocalSSDInstanceTypeConstraints>) };
      inline vector<Data::LocalSSDInstanceTypeConstraints> getLocalSSDInstanceTypeConstraints() { DARABONBA_PTR_GET(localSSDInstanceTypeConstraints_, vector<Data::LocalSSDInstanceTypeConstraints>) };
      inline Data& setLocalSSDInstanceTypeConstraints(const vector<Data::LocalSSDInstanceTypeConstraints> & localSSDInstanceTypeConstraints) { DARABONBA_PTR_SET_VALUE(localSSDInstanceTypeConstraints_, localSSDInstanceTypeConstraints) };
      inline Data& setLocalSSDInstanceTypeConstraints(vector<Data::LocalSSDInstanceTypeConstraints> && localSSDInstanceTypeConstraints) { DARABONBA_PTR_SET_RVALUE(localSSDInstanceTypeConstraints_, localSSDInstanceTypeConstraints) };


      // normalFeResourceSpec Field Functions 
      bool hasNormalFeResourceSpec() const { return this->normalFeResourceSpec_ != nullptr;};
      void deleteNormalFeResourceSpec() { this->normalFeResourceSpec_ = nullptr;};
      inline const Data::NormalFeResourceSpec & getNormalFeResourceSpec() const { DARABONBA_PTR_GET_CONST(normalFeResourceSpec_, Data::NormalFeResourceSpec) };
      inline Data::NormalFeResourceSpec getNormalFeResourceSpec() { DARABONBA_PTR_GET(normalFeResourceSpec_, Data::NormalFeResourceSpec) };
      inline Data& setNormalFeResourceSpec(const Data::NormalFeResourceSpec & normalFeResourceSpec) { DARABONBA_PTR_SET_VALUE(normalFeResourceSpec_, normalFeResourceSpec) };
      inline Data& setNormalFeResourceSpec(Data::NormalFeResourceSpec && normalFeResourceSpec) { DARABONBA_PTR_SET_RVALUE(normalFeResourceSpec_, normalFeResourceSpec) };


      // specType Field Functions 
      bool hasSpecType() const { return this->specType_ != nullptr;};
      void deleteSpecType() { this->specType_ = nullptr;};
      inline const vector<Data::SpecType> & getSpecType() const { DARABONBA_PTR_GET_CONST(specType_, vector<Data::SpecType>) };
      inline vector<Data::SpecType> getSpecType() { DARABONBA_PTR_GET(specType_, vector<Data::SpecType>) };
      inline Data& setSpecType(const vector<Data::SpecType> & specType) { DARABONBA_PTR_SET_VALUE(specType_, specType) };
      inline Data& setSpecType(vector<Data::SpecType> && specType) { DARABONBA_PTR_SET_RVALUE(specType_, specType) };


      // splitDiskThresholdMap Field Functions 
      bool hasSplitDiskThresholdMap() const { return this->splitDiskThresholdMap_ != nullptr;};
      void deleteSplitDiskThresholdMap() { this->splitDiskThresholdMap_ = nullptr;};
      inline const map<string, Darabonba::Json> & getSplitDiskThresholdMap() const { DARABONBA_PTR_GET_CONST(splitDiskThresholdMap_, map<string, Darabonba::Json>) };
      inline map<string, Darabonba::Json> getSplitDiskThresholdMap() { DARABONBA_PTR_GET(splitDiskThresholdMap_, map<string, Darabonba::Json>) };
      inline Data& setSplitDiskThresholdMap(const map<string, Darabonba::Json> & splitDiskThresholdMap) { DARABONBA_PTR_SET_VALUE(splitDiskThresholdMap_, splitDiskThresholdMap) };
      inline Data& setSplitDiskThresholdMap(map<string, Darabonba::Json> && splitDiskThresholdMap) { DARABONBA_PTR_SET_RVALUE(splitDiskThresholdMap_, splitDiskThresholdMap) };


      // versionConstraint Field Functions 
      bool hasVersionConstraint() const { return this->versionConstraint_ != nullptr;};
      void deleteVersionConstraint() { this->versionConstraint_ = nullptr;};
      inline const Data::VersionConstraint & getVersionConstraint() const { DARABONBA_PTR_GET_CONST(versionConstraint_, Data::VersionConstraint) };
      inline Data::VersionConstraint getVersionConstraint() { DARABONBA_PTR_GET(versionConstraint_, Data::VersionConstraint) };
      inline Data& setVersionConstraint(const Data::VersionConstraint & versionConstraint) { DARABONBA_PTR_SET_VALUE(versionConstraint_, versionConstraint) };
      inline Data& setVersionConstraint(Data::VersionConstraint && versionConstraint) { DARABONBA_PTR_SET_RVALUE(versionConstraint_, versionConstraint) };


      // zoneSupportedEedTypes Field Functions 
      bool hasZoneSupportedEedTypes() const { return this->zoneSupportedEedTypes_ != nullptr;};
      void deleteZoneSupportedEedTypes() { this->zoneSupportedEedTypes_ = nullptr;};
      inline const map<string, vector<string>> & getZoneSupportedEedTypes() const { DARABONBA_PTR_GET_CONST(zoneSupportedEedTypes_, map<string, vector<string>>) };
      inline map<string, vector<string>> getZoneSupportedEedTypes() { DARABONBA_PTR_GET(zoneSupportedEedTypes_, map<string, vector<string>>) };
      inline Data& setZoneSupportedEedTypes(const map<string, vector<string>> & zoneSupportedEedTypes) { DARABONBA_PTR_SET_VALUE(zoneSupportedEedTypes_, zoneSupportedEedTypes) };
      inline Data& setZoneSupportedEedTypes(map<string, vector<string>> && zoneSupportedEedTypes) { DARABONBA_PTR_SET_RVALUE(zoneSupportedEedTypes_, zoneSupportedEedTypes) };


      // zoneSupportedSpecTypes Field Functions 
      bool hasZoneSupportedSpecTypes() const { return this->zoneSupportedSpecTypes_ != nullptr;};
      void deleteZoneSupportedSpecTypes() { this->zoneSupportedSpecTypes_ = nullptr;};
      inline const map<string, vector<string>> & getZoneSupportedSpecTypes() const { DARABONBA_PTR_GET_CONST(zoneSupportedSpecTypes_, map<string, vector<string>>) };
      inline map<string, vector<string>> getZoneSupportedSpecTypes() { DARABONBA_PTR_GET(zoneSupportedSpecTypes_, map<string, vector<string>>) };
      inline Data& setZoneSupportedSpecTypes(const map<string, vector<string>> & zoneSupportedSpecTypes) { DARABONBA_PTR_SET_VALUE(zoneSupportedSpecTypes_, zoneSupportedSpecTypes) };
      inline Data& setZoneSupportedSpecTypes(map<string, vector<string>> && zoneSupportedSpecTypes) { DARABONBA_PTR_SET_RVALUE(zoneSupportedSpecTypes_, zoneSupportedSpecTypes) };


      // compactionServiceCuConstraint Field Functions 
      bool hasCompactionServiceCuConstraint() const { return this->compactionServiceCuConstraint_ != nullptr;};
      void deleteCompactionServiceCuConstraint() { this->compactionServiceCuConstraint_ = nullptr;};
      inline const Data::CompactionServiceCuConstraint & getCompactionServiceCuConstraint() const { DARABONBA_PTR_GET_CONST(compactionServiceCuConstraint_, Data::CompactionServiceCuConstraint) };
      inline Data::CompactionServiceCuConstraint getCompactionServiceCuConstraint() { DARABONBA_PTR_GET(compactionServiceCuConstraint_, Data::CompactionServiceCuConstraint) };
      inline Data& setCompactionServiceCuConstraint(const Data::CompactionServiceCuConstraint & compactionServiceCuConstraint) { DARABONBA_PTR_SET_VALUE(compactionServiceCuConstraint_, compactionServiceCuConstraint) };
      inline Data& setCompactionServiceCuConstraint(Data::CompactionServiceCuConstraint && compactionServiceCuConstraint) { DARABONBA_PTR_SET_RVALUE(compactionServiceCuConstraint_, compactionServiceCuConstraint) };


    protected:
      shared_ptr<vector<int32_t>> agentCu_ {};
      shared_ptr<vector<int32_t>> beCu_ {};
      shared_ptr<vector<int32_t>> beCuOnEcs_ {};
      shared_ptr<Data::BeNumber> beNumber_ {};
      shared_ptr<vector<Data::BeStorageConstraints>> beStorageConstraints_ {};
      shared_ptr<vector<Data::BigDataInstanceTypeConstraints>> bigDataInstanceTypeConstraints_ {};
      shared_ptr<vector<int32_t>> feCu_ {};
      shared_ptr<vector<int32_t>> feCuOnEcs_ {};
      shared_ptr<Data::FeNumber> feNumber_ {};
      shared_ptr<vector<Data::FeSpecType>> feSpecType_ {};
      shared_ptr<Data::FeStorage> feStorage_ {};
      shared_ptr<Data::HaFeResourceSpec> haFeResourceSpec_ {};
      shared_ptr<vector<Data::LocalSSDInstanceTypeConstraints>> localSSDInstanceTypeConstraints_ {};
      shared_ptr<Data::NormalFeResourceSpec> normalFeResourceSpec_ {};
      shared_ptr<vector<Data::SpecType>> specType_ {};
      shared_ptr<map<string, Darabonba::Json>> splitDiskThresholdMap_ {};
      shared_ptr<Data::VersionConstraint> versionConstraint_ {};
      shared_ptr<map<string, vector<string>>> zoneSupportedEedTypes_ {};
      shared_ptr<map<string, vector<string>>> zoneSupportedSpecTypes_ {};
      shared_ptr<Data::CompactionServiceCuConstraint> compactionServiceCuConstraint_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->data_ == nullptr && this->errMessage_ == nullptr && this->errorCode_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline DescribeResourceConstraintsResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeResourceConstraintsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeResourceConstraintsResponseBody::Data) };
    inline DescribeResourceConstraintsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeResourceConstraintsResponseBody::Data) };
    inline DescribeResourceConstraintsResponseBody& setData(const DescribeResourceConstraintsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeResourceConstraintsResponseBody& setData(DescribeResourceConstraintsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeResourceConstraintsResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DescribeResourceConstraintsResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeResourceConstraintsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeResourceConstraintsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeResourceConstraintsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // AccessDeniedDetail
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<DescribeResourceConstraintsResponseBody::Data> data_ {};
    shared_ptr<string> errMessage_ {};
    shared_ptr<string> errorCode_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
