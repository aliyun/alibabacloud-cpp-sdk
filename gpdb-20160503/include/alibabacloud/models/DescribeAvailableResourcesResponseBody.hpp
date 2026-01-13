// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeAvailableResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAvailableResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAvailableResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
    };
    DescribeAvailableResourcesResponseBody() = default ;
    DescribeAvailableResourcesResponseBody(const DescribeAvailableResourcesResponseBody &) = default ;
    DescribeAvailableResourcesResponseBody(DescribeAvailableResourcesResponseBody &&) = default ;
    DescribeAvailableResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAvailableResourcesResponseBody() = default ;
    DescribeAvailableResourcesResponseBody& operator=(const DescribeAvailableResourcesResponseBody &) = default ;
    DescribeAvailableResourcesResponseBody& operator=(DescribeAvailableResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Resources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Resources& obj) { 
        DARABONBA_PTR_TO_JSON(SupportedEngines, supportedEngines_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, Resources& obj) { 
        DARABONBA_PTR_FROM_JSON(SupportedEngines, supportedEngines_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      };
      Resources() = default ;
      Resources(const Resources &) = default ;
      Resources(Resources &&) = default ;
      Resources(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Resources() = default ;
      Resources& operator=(const Resources &) = default ;
      Resources& operator=(Resources &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SupportedEngines : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SupportedEngines& obj) { 
          DARABONBA_PTR_TO_JSON(Mode, mode_);
          DARABONBA_PTR_TO_JSON(SupportedEngineVersion, supportedEngineVersion_);
          DARABONBA_PTR_TO_JSON(SupportedInstanceClasses, supportedInstanceClasses_);
        };
        friend void from_json(const Darabonba::Json& j, SupportedEngines& obj) { 
          DARABONBA_PTR_FROM_JSON(Mode, mode_);
          DARABONBA_PTR_FROM_JSON(SupportedEngineVersion, supportedEngineVersion_);
          DARABONBA_PTR_FROM_JSON(SupportedInstanceClasses, supportedInstanceClasses_);
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
        class SupportedInstanceClasses : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SupportedInstanceClasses& obj) { 
            DARABONBA_PTR_TO_JSON(Category, category_);
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(DisplayClass, displayClass_);
            DARABONBA_PTR_TO_JSON(InstanceClass, instanceClass_);
            DARABONBA_PTR_TO_JSON(NodeCount, nodeCount_);
            DARABONBA_PTR_TO_JSON(StorageSize, storageSize_);
            DARABONBA_PTR_TO_JSON(StorageType, storageType_);
          };
          friend void from_json(const Darabonba::Json& j, SupportedInstanceClasses& obj) { 
            DARABONBA_PTR_FROM_JSON(Category, category_);
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(DisplayClass, displayClass_);
            DARABONBA_PTR_FROM_JSON(InstanceClass, instanceClass_);
            DARABONBA_PTR_FROM_JSON(NodeCount, nodeCount_);
            DARABONBA_PTR_FROM_JSON(StorageSize, storageSize_);
            DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
          };
          SupportedInstanceClasses() = default ;
          SupportedInstanceClasses(const SupportedInstanceClasses &) = default ;
          SupportedInstanceClasses(SupportedInstanceClasses &&) = default ;
          SupportedInstanceClasses(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SupportedInstanceClasses() = default ;
          SupportedInstanceClasses& operator=(const SupportedInstanceClasses &) = default ;
          SupportedInstanceClasses& operator=(SupportedInstanceClasses &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class StorageSize : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const StorageSize& obj) { 
              DARABONBA_PTR_TO_JSON(MaxCount, maxCount_);
              DARABONBA_PTR_TO_JSON(MinCount, minCount_);
              DARABONBA_PTR_TO_JSON(Step, step_);
            };
            friend void from_json(const Darabonba::Json& j, StorageSize& obj) { 
              DARABONBA_PTR_FROM_JSON(MaxCount, maxCount_);
              DARABONBA_PTR_FROM_JSON(MinCount, minCount_);
              DARABONBA_PTR_FROM_JSON(Step, step_);
            };
            StorageSize() = default ;
            StorageSize(const StorageSize &) = default ;
            StorageSize(StorageSize &&) = default ;
            StorageSize(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~StorageSize() = default ;
            StorageSize& operator=(const StorageSize &) = default ;
            StorageSize& operator=(StorageSize &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->maxCount_ == nullptr
        && this->minCount_ == nullptr && this->step_ == nullptr; };
            // maxCount Field Functions 
            bool hasMaxCount() const { return this->maxCount_ != nullptr;};
            void deleteMaxCount() { this->maxCount_ = nullptr;};
            inline string getMaxCount() const { DARABONBA_PTR_GET_DEFAULT(maxCount_, "") };
            inline StorageSize& setMaxCount(string maxCount) { DARABONBA_PTR_SET_VALUE(maxCount_, maxCount) };


            // minCount Field Functions 
            bool hasMinCount() const { return this->minCount_ != nullptr;};
            void deleteMinCount() { this->minCount_ = nullptr;};
            inline string getMinCount() const { DARABONBA_PTR_GET_DEFAULT(minCount_, "") };
            inline StorageSize& setMinCount(string minCount) { DARABONBA_PTR_SET_VALUE(minCount_, minCount) };


            // step Field Functions 
            bool hasStep() const { return this->step_ != nullptr;};
            void deleteStep() { this->step_ = nullptr;};
            inline string getStep() const { DARABONBA_PTR_GET_DEFAULT(step_, "") };
            inline StorageSize& setStep(string step) { DARABONBA_PTR_SET_VALUE(step_, step) };


          protected:
            // The maximum storage capacity of each compute node.
            shared_ptr<string> maxCount_ {};
            // The minimum storage capacity of each compute node.
            shared_ptr<string> minCount_ {};
            // The step size for adding storage capacity for compute nodes.
            shared_ptr<string> step_ {};
          };

          class NodeCount : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const NodeCount& obj) { 
              DARABONBA_PTR_TO_JSON(MaxCount, maxCount_);
              DARABONBA_PTR_TO_JSON(MinCount, minCount_);
              DARABONBA_PTR_TO_JSON(Step, step_);
            };
            friend void from_json(const Darabonba::Json& j, NodeCount& obj) { 
              DARABONBA_PTR_FROM_JSON(MaxCount, maxCount_);
              DARABONBA_PTR_FROM_JSON(MinCount, minCount_);
              DARABONBA_PTR_FROM_JSON(Step, step_);
            };
            NodeCount() = default ;
            NodeCount(const NodeCount &) = default ;
            NodeCount(NodeCount &&) = default ;
            NodeCount(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~NodeCount() = default ;
            NodeCount& operator=(const NodeCount &) = default ;
            NodeCount& operator=(NodeCount &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->maxCount_ == nullptr
        && this->minCount_ == nullptr && this->step_ == nullptr; };
            // maxCount Field Functions 
            bool hasMaxCount() const { return this->maxCount_ != nullptr;};
            void deleteMaxCount() { this->maxCount_ = nullptr;};
            inline string getMaxCount() const { DARABONBA_PTR_GET_DEFAULT(maxCount_, "") };
            inline NodeCount& setMaxCount(string maxCount) { DARABONBA_PTR_SET_VALUE(maxCount_, maxCount) };


            // minCount Field Functions 
            bool hasMinCount() const { return this->minCount_ != nullptr;};
            void deleteMinCount() { this->minCount_ = nullptr;};
            inline string getMinCount() const { DARABONBA_PTR_GET_DEFAULT(minCount_, "") };
            inline NodeCount& setMinCount(string minCount) { DARABONBA_PTR_SET_VALUE(minCount_, minCount) };


            // step Field Functions 
            bool hasStep() const { return this->step_ != nullptr;};
            void deleteStep() { this->step_ = nullptr;};
            inline string getStep() const { DARABONBA_PTR_GET_DEFAULT(step_, "") };
            inline NodeCount& setStep(string step) { DARABONBA_PTR_SET_VALUE(step_, step) };


          protected:
            // The maximum number of compute nodes.
            shared_ptr<string> maxCount_ {};
            // The minimum number of compute nodes.
            shared_ptr<string> minCount_ {};
            // The step size for adding compute nodes.
            // 
            // For example, if the value of this parameter is 4, compute nodes must be added by multiples of 4.
            shared_ptr<string> step_ {};
          };

          virtual bool empty() const override { return this->category_ == nullptr
        && this->description_ == nullptr && this->displayClass_ == nullptr && this->instanceClass_ == nullptr && this->nodeCount_ == nullptr && this->storageSize_ == nullptr
        && this->storageType_ == nullptr; };
          // category Field Functions 
          bool hasCategory() const { return this->category_ != nullptr;};
          void deleteCategory() { this->category_ = nullptr;};
          inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
          inline SupportedInstanceClasses& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline SupportedInstanceClasses& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // displayClass Field Functions 
          bool hasDisplayClass() const { return this->displayClass_ != nullptr;};
          void deleteDisplayClass() { this->displayClass_ = nullptr;};
          inline string getDisplayClass() const { DARABONBA_PTR_GET_DEFAULT(displayClass_, "") };
          inline SupportedInstanceClasses& setDisplayClass(string displayClass) { DARABONBA_PTR_SET_VALUE(displayClass_, displayClass) };


          // instanceClass Field Functions 
          bool hasInstanceClass() const { return this->instanceClass_ != nullptr;};
          void deleteInstanceClass() { this->instanceClass_ = nullptr;};
          inline string getInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(instanceClass_, "") };
          inline SupportedInstanceClasses& setInstanceClass(string instanceClass) { DARABONBA_PTR_SET_VALUE(instanceClass_, instanceClass) };


          // nodeCount Field Functions 
          bool hasNodeCount() const { return this->nodeCount_ != nullptr;};
          void deleteNodeCount() { this->nodeCount_ = nullptr;};
          inline const SupportedInstanceClasses::NodeCount & getNodeCount() const { DARABONBA_PTR_GET_CONST(nodeCount_, SupportedInstanceClasses::NodeCount) };
          inline SupportedInstanceClasses::NodeCount getNodeCount() { DARABONBA_PTR_GET(nodeCount_, SupportedInstanceClasses::NodeCount) };
          inline SupportedInstanceClasses& setNodeCount(const SupportedInstanceClasses::NodeCount & nodeCount) { DARABONBA_PTR_SET_VALUE(nodeCount_, nodeCount) };
          inline SupportedInstanceClasses& setNodeCount(SupportedInstanceClasses::NodeCount && nodeCount) { DARABONBA_PTR_SET_RVALUE(nodeCount_, nodeCount) };


          // storageSize Field Functions 
          bool hasStorageSize() const { return this->storageSize_ != nullptr;};
          void deleteStorageSize() { this->storageSize_ = nullptr;};
          inline const SupportedInstanceClasses::StorageSize & getStorageSize() const { DARABONBA_PTR_GET_CONST(storageSize_, SupportedInstanceClasses::StorageSize) };
          inline SupportedInstanceClasses::StorageSize getStorageSize() { DARABONBA_PTR_GET(storageSize_, SupportedInstanceClasses::StorageSize) };
          inline SupportedInstanceClasses& setStorageSize(const SupportedInstanceClasses::StorageSize & storageSize) { DARABONBA_PTR_SET_VALUE(storageSize_, storageSize) };
          inline SupportedInstanceClasses& setStorageSize(SupportedInstanceClasses::StorageSize && storageSize) { DARABONBA_PTR_SET_RVALUE(storageSize_, storageSize) };


          // storageType Field Functions 
          bool hasStorageType() const { return this->storageType_ != nullptr;};
          void deleteStorageType() { this->storageType_ = nullptr;};
          inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
          inline SupportedInstanceClasses& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


        protected:
          // The instance edition. Valid values:
          // 
          // *   **HighAvailability**: High-availability Edition
          // *   **Basic**: Basic Edition
          shared_ptr<string> category_ {};
          // The description of compute node specifications.
          shared_ptr<string> description_ {};
          // The specifications of each compute node.
          shared_ptr<string> displayClass_ {};
          // The specifications of each compute node.
          shared_ptr<string> instanceClass_ {};
          // Details about the compute nodes.
          shared_ptr<SupportedInstanceClasses::NodeCount> nodeCount_ {};
          // Details about the storage capacity of compute nodes.
          shared_ptr<SupportedInstanceClasses::StorageSize> storageSize_ {};
          // The storage type. Valid values:
          // 
          // *   **cloud_essd**: enhanced SSD (ESSD)
          // *   **cloud_efficiency**: ultra disk
          // *   **oss**: Object Storage Service (OSS)
          shared_ptr<string> storageType_ {};
        };

        virtual bool empty() const override { return this->mode_ == nullptr
        && this->supportedEngineVersion_ == nullptr && this->supportedInstanceClasses_ == nullptr; };
        // mode Field Functions 
        bool hasMode() const { return this->mode_ != nullptr;};
        void deleteMode() { this->mode_ = nullptr;};
        inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
        inline SupportedEngines& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


        // supportedEngineVersion Field Functions 
        bool hasSupportedEngineVersion() const { return this->supportedEngineVersion_ != nullptr;};
        void deleteSupportedEngineVersion() { this->supportedEngineVersion_ = nullptr;};
        inline string getSupportedEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(supportedEngineVersion_, "") };
        inline SupportedEngines& setSupportedEngineVersion(string supportedEngineVersion) { DARABONBA_PTR_SET_VALUE(supportedEngineVersion_, supportedEngineVersion) };


        // supportedInstanceClasses Field Functions 
        bool hasSupportedInstanceClasses() const { return this->supportedInstanceClasses_ != nullptr;};
        void deleteSupportedInstanceClasses() { this->supportedInstanceClasses_ = nullptr;};
        inline const vector<SupportedEngines::SupportedInstanceClasses> & getSupportedInstanceClasses() const { DARABONBA_PTR_GET_CONST(supportedInstanceClasses_, vector<SupportedEngines::SupportedInstanceClasses>) };
        inline vector<SupportedEngines::SupportedInstanceClasses> getSupportedInstanceClasses() { DARABONBA_PTR_GET(supportedInstanceClasses_, vector<SupportedEngines::SupportedInstanceClasses>) };
        inline SupportedEngines& setSupportedInstanceClasses(const vector<SupportedEngines::SupportedInstanceClasses> & supportedInstanceClasses) { DARABONBA_PTR_SET_VALUE(supportedInstanceClasses_, supportedInstanceClasses) };
        inline SupportedEngines& setSupportedInstanceClasses(vector<SupportedEngines::SupportedInstanceClasses> && supportedInstanceClasses) { DARABONBA_PTR_SET_RVALUE(supportedInstanceClasses_, supportedInstanceClasses) };


      protected:
        // The instance resource type. Valid values:
        // 
        // *   **ecs**: elastic storage mode
        // *   **serverless**: Serverless mode
        shared_ptr<string> mode_ {};
        // The available engine version.
        shared_ptr<string> supportedEngineVersion_ {};
        // The available specifications.
        shared_ptr<vector<SupportedEngines::SupportedInstanceClasses>> supportedInstanceClasses_ {};
      };

      virtual bool empty() const override { return this->supportedEngines_ == nullptr
        && this->zoneId_ == nullptr; };
      // supportedEngines Field Functions 
      bool hasSupportedEngines() const { return this->supportedEngines_ != nullptr;};
      void deleteSupportedEngines() { this->supportedEngines_ = nullptr;};
      inline const vector<Resources::SupportedEngines> & getSupportedEngines() const { DARABONBA_PTR_GET_CONST(supportedEngines_, vector<Resources::SupportedEngines>) };
      inline vector<Resources::SupportedEngines> getSupportedEngines() { DARABONBA_PTR_GET(supportedEngines_, vector<Resources::SupportedEngines>) };
      inline Resources& setSupportedEngines(const vector<Resources::SupportedEngines> & supportedEngines) { DARABONBA_PTR_SET_VALUE(supportedEngines_, supportedEngines) };
      inline Resources& setSupportedEngines(vector<Resources::SupportedEngines> && supportedEngines) { DARABONBA_PTR_SET_RVALUE(supportedEngines_, supportedEngines) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline Resources& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      // The available engine version and specifications.
      shared_ptr<vector<Resources::SupportedEngines>> supportedEngines_ {};
      // The ID of the zone.
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->regionId_ == nullptr
        && this->requestId_ == nullptr && this->resources_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeAvailableResourcesResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAvailableResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const vector<DescribeAvailableResourcesResponseBody::Resources> & getResources() const { DARABONBA_PTR_GET_CONST(resources_, vector<DescribeAvailableResourcesResponseBody::Resources>) };
    inline vector<DescribeAvailableResourcesResponseBody::Resources> getResources() { DARABONBA_PTR_GET(resources_, vector<DescribeAvailableResourcesResponseBody::Resources>) };
    inline DescribeAvailableResourcesResponseBody& setResources(const vector<DescribeAvailableResourcesResponseBody::Resources> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline DescribeAvailableResourcesResponseBody& setResources(vector<DescribeAvailableResourcesResponseBody::Resources> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


  protected:
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The zone ID.
    shared_ptr<vector<DescribeAvailableResourcesResponseBody::Resources>> resources_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
