// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeAvailableResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAvailableResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableZoneList, availableZoneList_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAvailableResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableZoneList, availableZoneList_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
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
    class AvailableZoneList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AvailableZoneList& obj) { 
        DARABONBA_PTR_TO_JSON(SupportedComputeResource, supportedComputeResource_);
        DARABONBA_PTR_TO_JSON(SupportedMode, supportedMode_);
        DARABONBA_PTR_TO_JSON(SupportedStorageResource, supportedStorageResource_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        DARABONBA_PTR_TO_JSON(ZoneName, zoneName_);
      };
      friend void from_json(const Darabonba::Json& j, AvailableZoneList& obj) { 
        DARABONBA_PTR_FROM_JSON(SupportedComputeResource, supportedComputeResource_);
        DARABONBA_PTR_FROM_JSON(SupportedMode, supportedMode_);
        DARABONBA_PTR_FROM_JSON(SupportedStorageResource, supportedStorageResource_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
        DARABONBA_PTR_FROM_JSON(ZoneName, zoneName_);
      };
      AvailableZoneList() = default ;
      AvailableZoneList(const AvailableZoneList &) = default ;
      AvailableZoneList(AvailableZoneList &&) = default ;
      AvailableZoneList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AvailableZoneList() = default ;
      AvailableZoneList& operator=(const AvailableZoneList &) = default ;
      AvailableZoneList& operator=(AvailableZoneList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SupportedMode : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SupportedMode& obj) { 
          DARABONBA_PTR_TO_JSON(Mode, mode_);
          DARABONBA_PTR_TO_JSON(SupportedSerialList, supportedSerialList_);
        };
        friend void from_json(const Darabonba::Json& j, SupportedMode& obj) { 
          DARABONBA_PTR_FROM_JSON(Mode, mode_);
          DARABONBA_PTR_FROM_JSON(SupportedSerialList, supportedSerialList_);
        };
        SupportedMode() = default ;
        SupportedMode(const SupportedMode &) = default ;
        SupportedMode(SupportedMode &&) = default ;
        SupportedMode(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SupportedMode() = default ;
        SupportedMode& operator=(const SupportedMode &) = default ;
        SupportedMode& operator=(SupportedMode &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SupportedSerialList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SupportedSerialList& obj) { 
            DARABONBA_PTR_TO_JSON(Serial, serial_);
            DARABONBA_PTR_TO_JSON(SupportedFlexibleResource, supportedFlexibleResource_);
            DARABONBA_PTR_TO_JSON(SupportedInstanceClassList, supportedInstanceClassList_);
          };
          friend void from_json(const Darabonba::Json& j, SupportedSerialList& obj) { 
            DARABONBA_PTR_FROM_JSON(Serial, serial_);
            DARABONBA_PTR_FROM_JSON(SupportedFlexibleResource, supportedFlexibleResource_);
            DARABONBA_PTR_FROM_JSON(SupportedInstanceClassList, supportedInstanceClassList_);
          };
          SupportedSerialList() = default ;
          SupportedSerialList(const SupportedSerialList &) = default ;
          SupportedSerialList(SupportedSerialList &&) = default ;
          SupportedSerialList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SupportedSerialList() = default ;
          SupportedSerialList& operator=(const SupportedSerialList &) = default ;
          SupportedSerialList& operator=(SupportedSerialList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class SupportedInstanceClassList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const SupportedInstanceClassList& obj) { 
              DARABONBA_PTR_TO_JSON(InstanceClass, instanceClass_);
              DARABONBA_PTR_TO_JSON(SupportedExecutorList, supportedExecutorList_);
              DARABONBA_PTR_TO_JSON(SupportedNodeCountList, supportedNodeCountList_);
              DARABONBA_PTR_TO_JSON(Tips, tips_);
            };
            friend void from_json(const Darabonba::Json& j, SupportedInstanceClassList& obj) { 
              DARABONBA_PTR_FROM_JSON(InstanceClass, instanceClass_);
              DARABONBA_PTR_FROM_JSON(SupportedExecutorList, supportedExecutorList_);
              DARABONBA_PTR_FROM_JSON(SupportedNodeCountList, supportedNodeCountList_);
              DARABONBA_PTR_FROM_JSON(Tips, tips_);
            };
            SupportedInstanceClassList() = default ;
            SupportedInstanceClassList(const SupportedInstanceClassList &) = default ;
            SupportedInstanceClassList(SupportedInstanceClassList &&) = default ;
            SupportedInstanceClassList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~SupportedInstanceClassList() = default ;
            SupportedInstanceClassList& operator=(const SupportedInstanceClassList &) = default ;
            SupportedInstanceClassList& operator=(SupportedInstanceClassList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class SupportedNodeCountList : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const SupportedNodeCountList& obj) { 
                DARABONBA_PTR_TO_JSON(NodeCount, nodeCount_);
                DARABONBA_PTR_TO_JSON(StorageSize, storageSize_);
              };
              friend void from_json(const Darabonba::Json& j, SupportedNodeCountList& obj) { 
                DARABONBA_PTR_FROM_JSON(NodeCount, nodeCount_);
                DARABONBA_PTR_FROM_JSON(StorageSize, storageSize_);
              };
              SupportedNodeCountList() = default ;
              SupportedNodeCountList(const SupportedNodeCountList &) = default ;
              SupportedNodeCountList(SupportedNodeCountList &&) = default ;
              SupportedNodeCountList(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~SupportedNodeCountList() = default ;
              SupportedNodeCountList& operator=(const SupportedNodeCountList &) = default ;
              SupportedNodeCountList& operator=(SupportedNodeCountList &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
                // The step size.
                shared_ptr<string> step_ {};
              };

              virtual bool empty() const override { return this->nodeCount_ == nullptr
        && this->storageSize_ == nullptr; };
              // nodeCount Field Functions 
              bool hasNodeCount() const { return this->nodeCount_ != nullptr;};
              void deleteNodeCount() { this->nodeCount_ = nullptr;};
              inline const SupportedNodeCountList::NodeCount & getNodeCount() const { DARABONBA_PTR_GET_CONST(nodeCount_, SupportedNodeCountList::NodeCount) };
              inline SupportedNodeCountList::NodeCount getNodeCount() { DARABONBA_PTR_GET(nodeCount_, SupportedNodeCountList::NodeCount) };
              inline SupportedNodeCountList& setNodeCount(const SupportedNodeCountList::NodeCount & nodeCount) { DARABONBA_PTR_SET_VALUE(nodeCount_, nodeCount) };
              inline SupportedNodeCountList& setNodeCount(SupportedNodeCountList::NodeCount && nodeCount) { DARABONBA_PTR_SET_RVALUE(nodeCount_, nodeCount) };


              // storageSize Field Functions 
              bool hasStorageSize() const { return this->storageSize_ != nullptr;};
              void deleteStorageSize() { this->storageSize_ = nullptr;};
              inline const vector<string> & getStorageSize() const { DARABONBA_PTR_GET_CONST(storageSize_, vector<string>) };
              inline vector<string> getStorageSize() { DARABONBA_PTR_GET(storageSize_, vector<string>) };
              inline SupportedNodeCountList& setStorageSize(const vector<string> & storageSize) { DARABONBA_PTR_SET_VALUE(storageSize_, storageSize) };
              inline SupportedNodeCountList& setStorageSize(vector<string> && storageSize) { DARABONBA_PTR_SET_RVALUE(storageSize_, storageSize) };


            protected:
              // The number of the supported compute nodes.
              shared_ptr<SupportedNodeCountList::NodeCount> nodeCount_ {};
              // The support storage capacity. Unit: GB.
              shared_ptr<vector<string>> storageSize_ {};
            };

            class SupportedExecutorList : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const SupportedExecutorList& obj) { 
                DARABONBA_PTR_TO_JSON(NodeCount, nodeCount_);
              };
              friend void from_json(const Darabonba::Json& j, SupportedExecutorList& obj) { 
                DARABONBA_PTR_FROM_JSON(NodeCount, nodeCount_);
              };
              SupportedExecutorList() = default ;
              SupportedExecutorList(const SupportedExecutorList &) = default ;
              SupportedExecutorList(SupportedExecutorList &&) = default ;
              SupportedExecutorList(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~SupportedExecutorList() = default ;
              SupportedExecutorList& operator=(const SupportedExecutorList &) = default ;
              SupportedExecutorList& operator=(SupportedExecutorList &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
                // A reserved parameter.
                shared_ptr<string> maxCount_ {};
                // A reserved parameter.
                shared_ptr<string> minCount_ {};
                // A reserved parameter.
                shared_ptr<string> step_ {};
              };

              virtual bool empty() const override { return this->nodeCount_ == nullptr; };
              // nodeCount Field Functions 
              bool hasNodeCount() const { return this->nodeCount_ != nullptr;};
              void deleteNodeCount() { this->nodeCount_ = nullptr;};
              inline const SupportedExecutorList::NodeCount & getNodeCount() const { DARABONBA_PTR_GET_CONST(nodeCount_, SupportedExecutorList::NodeCount) };
              inline SupportedExecutorList::NodeCount getNodeCount() { DARABONBA_PTR_GET(nodeCount_, SupportedExecutorList::NodeCount) };
              inline SupportedExecutorList& setNodeCount(const SupportedExecutorList::NodeCount & nodeCount) { DARABONBA_PTR_SET_VALUE(nodeCount_, nodeCount) };
              inline SupportedExecutorList& setNodeCount(SupportedExecutorList::NodeCount && nodeCount) { DARABONBA_PTR_SET_RVALUE(nodeCount_, nodeCount) };


            protected:
              // The information about the supported compute nodes.
              shared_ptr<SupportedExecutorList::NodeCount> nodeCount_ {};
            };

            virtual bool empty() const override { return this->instanceClass_ == nullptr
        && this->supportedExecutorList_ == nullptr && this->supportedNodeCountList_ == nullptr && this->tips_ == nullptr; };
            // instanceClass Field Functions 
            bool hasInstanceClass() const { return this->instanceClass_ != nullptr;};
            void deleteInstanceClass() { this->instanceClass_ = nullptr;};
            inline string getInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(instanceClass_, "") };
            inline SupportedInstanceClassList& setInstanceClass(string instanceClass) { DARABONBA_PTR_SET_VALUE(instanceClass_, instanceClass) };


            // supportedExecutorList Field Functions 
            bool hasSupportedExecutorList() const { return this->supportedExecutorList_ != nullptr;};
            void deleteSupportedExecutorList() { this->supportedExecutorList_ = nullptr;};
            inline const vector<SupportedInstanceClassList::SupportedExecutorList> & getSupportedExecutorList() const { DARABONBA_PTR_GET_CONST(supportedExecutorList_, vector<SupportedInstanceClassList::SupportedExecutorList>) };
            inline vector<SupportedInstanceClassList::SupportedExecutorList> getSupportedExecutorList() { DARABONBA_PTR_GET(supportedExecutorList_, vector<SupportedInstanceClassList::SupportedExecutorList>) };
            inline SupportedInstanceClassList& setSupportedExecutorList(const vector<SupportedInstanceClassList::SupportedExecutorList> & supportedExecutorList) { DARABONBA_PTR_SET_VALUE(supportedExecutorList_, supportedExecutorList) };
            inline SupportedInstanceClassList& setSupportedExecutorList(vector<SupportedInstanceClassList::SupportedExecutorList> && supportedExecutorList) { DARABONBA_PTR_SET_RVALUE(supportedExecutorList_, supportedExecutorList) };


            // supportedNodeCountList Field Functions 
            bool hasSupportedNodeCountList() const { return this->supportedNodeCountList_ != nullptr;};
            void deleteSupportedNodeCountList() { this->supportedNodeCountList_ = nullptr;};
            inline const vector<SupportedInstanceClassList::SupportedNodeCountList> & getSupportedNodeCountList() const { DARABONBA_PTR_GET_CONST(supportedNodeCountList_, vector<SupportedInstanceClassList::SupportedNodeCountList>) };
            inline vector<SupportedInstanceClassList::SupportedNodeCountList> getSupportedNodeCountList() { DARABONBA_PTR_GET(supportedNodeCountList_, vector<SupportedInstanceClassList::SupportedNodeCountList>) };
            inline SupportedInstanceClassList& setSupportedNodeCountList(const vector<SupportedInstanceClassList::SupportedNodeCountList> & supportedNodeCountList) { DARABONBA_PTR_SET_VALUE(supportedNodeCountList_, supportedNodeCountList) };
            inline SupportedInstanceClassList& setSupportedNodeCountList(vector<SupportedInstanceClassList::SupportedNodeCountList> && supportedNodeCountList) { DARABONBA_PTR_SET_RVALUE(supportedNodeCountList_, supportedNodeCountList) };


            // tips Field Functions 
            bool hasTips() const { return this->tips_ != nullptr;};
            void deleteTips() { this->tips_ = nullptr;};
            inline string getTips() const { DARABONBA_PTR_GET_DEFAULT(tips_, "") };
            inline SupportedInstanceClassList& setTips(string tips) { DARABONBA_PTR_SET_VALUE(tips_, tips) };


          protected:
            // The supported instance type.
            shared_ptr<string> instanceClass_ {};
            // A reserved parameter.
            shared_ptr<vector<SupportedInstanceClassList::SupportedExecutorList>> supportedExecutorList_ {};
            // The supported compute nodes.
            shared_ptr<vector<SupportedInstanceClassList::SupportedNodeCountList>> supportedNodeCountList_ {};
            // The description of the instance type.
            shared_ptr<string> tips_ {};
          };

          class SupportedFlexibleResource : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const SupportedFlexibleResource& obj) { 
              DARABONBA_PTR_TO_JSON(StorageType, storageType_);
              DARABONBA_PTR_TO_JSON(SupportedComputeResource, supportedComputeResource_);
              DARABONBA_PTR_TO_JSON(SupportedElasticIOResource, supportedElasticIOResource_);
              DARABONBA_PTR_TO_JSON(SupportedStorageResource, supportedStorageResource_);
            };
            friend void from_json(const Darabonba::Json& j, SupportedFlexibleResource& obj) { 
              DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
              DARABONBA_PTR_FROM_JSON(SupportedComputeResource, supportedComputeResource_);
              DARABONBA_PTR_FROM_JSON(SupportedElasticIOResource, supportedElasticIOResource_);
              DARABONBA_PTR_FROM_JSON(SupportedStorageResource, supportedStorageResource_);
            };
            SupportedFlexibleResource() = default ;
            SupportedFlexibleResource(const SupportedFlexibleResource &) = default ;
            SupportedFlexibleResource(SupportedFlexibleResource &&) = default ;
            SupportedFlexibleResource(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~SupportedFlexibleResource() = default ;
            SupportedFlexibleResource& operator=(const SupportedFlexibleResource &) = default ;
            SupportedFlexibleResource& operator=(SupportedFlexibleResource &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class SupportedElasticIOResource : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const SupportedElasticIOResource& obj) { 
                DARABONBA_PTR_TO_JSON(MaxCount, maxCount_);
                DARABONBA_PTR_TO_JSON(MinCount, minCount_);
                DARABONBA_PTR_TO_JSON(Step, step_);
              };
              friend void from_json(const Darabonba::Json& j, SupportedElasticIOResource& obj) { 
                DARABONBA_PTR_FROM_JSON(MaxCount, maxCount_);
                DARABONBA_PTR_FROM_JSON(MinCount, minCount_);
                DARABONBA_PTR_FROM_JSON(Step, step_);
              };
              SupportedElasticIOResource() = default ;
              SupportedElasticIOResource(const SupportedElasticIOResource &) = default ;
              SupportedElasticIOResource(SupportedElasticIOResource &&) = default ;
              SupportedElasticIOResource(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~SupportedElasticIOResource() = default ;
              SupportedElasticIOResource& operator=(const SupportedElasticIOResource &) = default ;
              SupportedElasticIOResource& operator=(SupportedElasticIOResource &&) = default ;
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
              inline SupportedElasticIOResource& setMaxCount(string maxCount) { DARABONBA_PTR_SET_VALUE(maxCount_, maxCount) };


              // minCount Field Functions 
              bool hasMinCount() const { return this->minCount_ != nullptr;};
              void deleteMinCount() { this->minCount_ = nullptr;};
              inline string getMinCount() const { DARABONBA_PTR_GET_DEFAULT(minCount_, "") };
              inline SupportedElasticIOResource& setMinCount(string minCount) { DARABONBA_PTR_SET_VALUE(minCount_, minCount) };


              // step Field Functions 
              bool hasStep() const { return this->step_ != nullptr;};
              void deleteStep() { this->step_ = nullptr;};
              inline string getStep() const { DARABONBA_PTR_GET_DEFAULT(step_, "") };
              inline SupportedElasticIOResource& setStep(string step) { DARABONBA_PTR_SET_VALUE(step_, step) };


            protected:
              // The maximum amount of elastic I/O resources.
              shared_ptr<string> maxCount_ {};
              // The minimum amount of elastic I/O resources.
              shared_ptr<string> minCount_ {};
              // The step size.
              shared_ptr<string> step_ {};
            };

            virtual bool empty() const override { return this->storageType_ == nullptr
        && this->supportedComputeResource_ == nullptr && this->supportedElasticIOResource_ == nullptr && this->supportedStorageResource_ == nullptr; };
            // storageType Field Functions 
            bool hasStorageType() const { return this->storageType_ != nullptr;};
            void deleteStorageType() { this->storageType_ = nullptr;};
            inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
            inline SupportedFlexibleResource& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


            // supportedComputeResource Field Functions 
            bool hasSupportedComputeResource() const { return this->supportedComputeResource_ != nullptr;};
            void deleteSupportedComputeResource() { this->supportedComputeResource_ = nullptr;};
            inline const vector<string> & getSupportedComputeResource() const { DARABONBA_PTR_GET_CONST(supportedComputeResource_, vector<string>) };
            inline vector<string> getSupportedComputeResource() { DARABONBA_PTR_GET(supportedComputeResource_, vector<string>) };
            inline SupportedFlexibleResource& setSupportedComputeResource(const vector<string> & supportedComputeResource) { DARABONBA_PTR_SET_VALUE(supportedComputeResource_, supportedComputeResource) };
            inline SupportedFlexibleResource& setSupportedComputeResource(vector<string> && supportedComputeResource) { DARABONBA_PTR_SET_RVALUE(supportedComputeResource_, supportedComputeResource) };


            // supportedElasticIOResource Field Functions 
            bool hasSupportedElasticIOResource() const { return this->supportedElasticIOResource_ != nullptr;};
            void deleteSupportedElasticIOResource() { this->supportedElasticIOResource_ = nullptr;};
            inline const SupportedFlexibleResource::SupportedElasticIOResource & getSupportedElasticIOResource() const { DARABONBA_PTR_GET_CONST(supportedElasticIOResource_, SupportedFlexibleResource::SupportedElasticIOResource) };
            inline SupportedFlexibleResource::SupportedElasticIOResource getSupportedElasticIOResource() { DARABONBA_PTR_GET(supportedElasticIOResource_, SupportedFlexibleResource::SupportedElasticIOResource) };
            inline SupportedFlexibleResource& setSupportedElasticIOResource(const SupportedFlexibleResource::SupportedElasticIOResource & supportedElasticIOResource) { DARABONBA_PTR_SET_VALUE(supportedElasticIOResource_, supportedElasticIOResource) };
            inline SupportedFlexibleResource& setSupportedElasticIOResource(SupportedFlexibleResource::SupportedElasticIOResource && supportedElasticIOResource) { DARABONBA_PTR_SET_RVALUE(supportedElasticIOResource_, supportedElasticIOResource) };


            // supportedStorageResource Field Functions 
            bool hasSupportedStorageResource() const { return this->supportedStorageResource_ != nullptr;};
            void deleteSupportedStorageResource() { this->supportedStorageResource_ = nullptr;};
            inline const vector<string> & getSupportedStorageResource() const { DARABONBA_PTR_GET_CONST(supportedStorageResource_, vector<string>) };
            inline vector<string> getSupportedStorageResource() { DARABONBA_PTR_GET(supportedStorageResource_, vector<string>) };
            inline SupportedFlexibleResource& setSupportedStorageResource(const vector<string> & supportedStorageResource) { DARABONBA_PTR_SET_VALUE(supportedStorageResource_, supportedStorageResource) };
            inline SupportedFlexibleResource& setSupportedStorageResource(vector<string> && supportedStorageResource) { DARABONBA_PTR_SET_RVALUE(supportedStorageResource_, supportedStorageResource) };


          protected:
            // The disk storage type. Valid values:
            // 
            // *   **hdd**
            // *   **ssd**
            shared_ptr<string> storageType_ {};
            // The supported computing resources.
            shared_ptr<vector<string>> supportedComputeResource_ {};
            // The supported elastic I/O resources.
            shared_ptr<SupportedFlexibleResource::SupportedElasticIOResource> supportedElasticIOResource_ {};
            // The supported storage resources.
            shared_ptr<vector<string>> supportedStorageResource_ {};
          };

          virtual bool empty() const override { return this->serial_ == nullptr
        && this->supportedFlexibleResource_ == nullptr && this->supportedInstanceClassList_ == nullptr; };
          // serial Field Functions 
          bool hasSerial() const { return this->serial_ != nullptr;};
          void deleteSerial() { this->serial_ = nullptr;};
          inline string getSerial() const { DARABONBA_PTR_GET_DEFAULT(serial_, "") };
          inline SupportedSerialList& setSerial(string serial) { DARABONBA_PTR_SET_VALUE(serial_, serial) };


          // supportedFlexibleResource Field Functions 
          bool hasSupportedFlexibleResource() const { return this->supportedFlexibleResource_ != nullptr;};
          void deleteSupportedFlexibleResource() { this->supportedFlexibleResource_ = nullptr;};
          inline const vector<SupportedSerialList::SupportedFlexibleResource> & getSupportedFlexibleResource() const { DARABONBA_PTR_GET_CONST(supportedFlexibleResource_, vector<SupportedSerialList::SupportedFlexibleResource>) };
          inline vector<SupportedSerialList::SupportedFlexibleResource> getSupportedFlexibleResource() { DARABONBA_PTR_GET(supportedFlexibleResource_, vector<SupportedSerialList::SupportedFlexibleResource>) };
          inline SupportedSerialList& setSupportedFlexibleResource(const vector<SupportedSerialList::SupportedFlexibleResource> & supportedFlexibleResource) { DARABONBA_PTR_SET_VALUE(supportedFlexibleResource_, supportedFlexibleResource) };
          inline SupportedSerialList& setSupportedFlexibleResource(vector<SupportedSerialList::SupportedFlexibleResource> && supportedFlexibleResource) { DARABONBA_PTR_SET_RVALUE(supportedFlexibleResource_, supportedFlexibleResource) };


          // supportedInstanceClassList Field Functions 
          bool hasSupportedInstanceClassList() const { return this->supportedInstanceClassList_ != nullptr;};
          void deleteSupportedInstanceClassList() { this->supportedInstanceClassList_ = nullptr;};
          inline const vector<SupportedSerialList::SupportedInstanceClassList> & getSupportedInstanceClassList() const { DARABONBA_PTR_GET_CONST(supportedInstanceClassList_, vector<SupportedSerialList::SupportedInstanceClassList>) };
          inline vector<SupportedSerialList::SupportedInstanceClassList> getSupportedInstanceClassList() { DARABONBA_PTR_GET(supportedInstanceClassList_, vector<SupportedSerialList::SupportedInstanceClassList>) };
          inline SupportedSerialList& setSupportedInstanceClassList(const vector<SupportedSerialList::SupportedInstanceClassList> & supportedInstanceClassList) { DARABONBA_PTR_SET_VALUE(supportedInstanceClassList_, supportedInstanceClassList) };
          inline SupportedSerialList& setSupportedInstanceClassList(vector<SupportedSerialList::SupportedInstanceClassList> && supportedInstanceClassList) { DARABONBA_PTR_SET_RVALUE(supportedInstanceClassList_, supportedInstanceClassList) };


        protected:
          // The supported edition. Valid values:
          // 
          // *   **basic**: Basic Edition.
          // *   **cluster**: Cluster Edition.
          // *   **mixed_storage**: elastic mode for Cluster Edition.
          shared_ptr<string> serial_ {};
          // The supported resources in elastic mode.
          shared_ptr<vector<SupportedSerialList::SupportedFlexibleResource>> supportedFlexibleResource_ {};
          // The supported resources in reserved mode.
          shared_ptr<vector<SupportedSerialList::SupportedInstanceClassList>> supportedInstanceClassList_ {};
        };

        virtual bool empty() const override { return this->mode_ == nullptr
        && this->supportedSerialList_ == nullptr; };
        // mode Field Functions 
        bool hasMode() const { return this->mode_ != nullptr;};
        void deleteMode() { this->mode_ = nullptr;};
        inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
        inline SupportedMode& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


        // supportedSerialList Field Functions 
        bool hasSupportedSerialList() const { return this->supportedSerialList_ != nullptr;};
        void deleteSupportedSerialList() { this->supportedSerialList_ = nullptr;};
        inline const vector<SupportedMode::SupportedSerialList> & getSupportedSerialList() const { DARABONBA_PTR_GET_CONST(supportedSerialList_, vector<SupportedMode::SupportedSerialList>) };
        inline vector<SupportedMode::SupportedSerialList> getSupportedSerialList() { DARABONBA_PTR_GET(supportedSerialList_, vector<SupportedMode::SupportedSerialList>) };
        inline SupportedMode& setSupportedSerialList(const vector<SupportedMode::SupportedSerialList> & supportedSerialList) { DARABONBA_PTR_SET_VALUE(supportedSerialList_, supportedSerialList) };
        inline SupportedMode& setSupportedSerialList(vector<SupportedMode::SupportedSerialList> && supportedSerialList) { DARABONBA_PTR_SET_RVALUE(supportedSerialList_, supportedSerialList) };


      protected:
        // The supported mode. Valid values:
        // 
        // *   **flexible**: elastic mode.
        // *   **reserver**: reserved mode.
        shared_ptr<string> mode_ {};
        // The supported editions.
        shared_ptr<vector<SupportedMode::SupportedSerialList>> supportedSerialList_ {};
      };

      virtual bool empty() const override { return this->supportedComputeResource_ == nullptr
        && this->supportedMode_ == nullptr && this->supportedStorageResource_ == nullptr && this->zoneId_ == nullptr && this->zoneName_ == nullptr; };
      // supportedComputeResource Field Functions 
      bool hasSupportedComputeResource() const { return this->supportedComputeResource_ != nullptr;};
      void deleteSupportedComputeResource() { this->supportedComputeResource_ = nullptr;};
      inline const vector<string> & getSupportedComputeResource() const { DARABONBA_PTR_GET_CONST(supportedComputeResource_, vector<string>) };
      inline vector<string> getSupportedComputeResource() { DARABONBA_PTR_GET(supportedComputeResource_, vector<string>) };
      inline AvailableZoneList& setSupportedComputeResource(const vector<string> & supportedComputeResource) { DARABONBA_PTR_SET_VALUE(supportedComputeResource_, supportedComputeResource) };
      inline AvailableZoneList& setSupportedComputeResource(vector<string> && supportedComputeResource) { DARABONBA_PTR_SET_RVALUE(supportedComputeResource_, supportedComputeResource) };


      // supportedMode Field Functions 
      bool hasSupportedMode() const { return this->supportedMode_ != nullptr;};
      void deleteSupportedMode() { this->supportedMode_ = nullptr;};
      inline const vector<AvailableZoneList::SupportedMode> & getSupportedMode() const { DARABONBA_PTR_GET_CONST(supportedMode_, vector<AvailableZoneList::SupportedMode>) };
      inline vector<AvailableZoneList::SupportedMode> getSupportedMode() { DARABONBA_PTR_GET(supportedMode_, vector<AvailableZoneList::SupportedMode>) };
      inline AvailableZoneList& setSupportedMode(const vector<AvailableZoneList::SupportedMode> & supportedMode) { DARABONBA_PTR_SET_VALUE(supportedMode_, supportedMode) };
      inline AvailableZoneList& setSupportedMode(vector<AvailableZoneList::SupportedMode> && supportedMode) { DARABONBA_PTR_SET_RVALUE(supportedMode_, supportedMode) };


      // supportedStorageResource Field Functions 
      bool hasSupportedStorageResource() const { return this->supportedStorageResource_ != nullptr;};
      void deleteSupportedStorageResource() { this->supportedStorageResource_ = nullptr;};
      inline const vector<string> & getSupportedStorageResource() const { DARABONBA_PTR_GET_CONST(supportedStorageResource_, vector<string>) };
      inline vector<string> getSupportedStorageResource() { DARABONBA_PTR_GET(supportedStorageResource_, vector<string>) };
      inline AvailableZoneList& setSupportedStorageResource(const vector<string> & supportedStorageResource) { DARABONBA_PTR_SET_VALUE(supportedStorageResource_, supportedStorageResource) };
      inline AvailableZoneList& setSupportedStorageResource(vector<string> && supportedStorageResource) { DARABONBA_PTR_SET_RVALUE(supportedStorageResource_, supportedStorageResource) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline AvailableZoneList& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      // zoneName Field Functions 
      bool hasZoneName() const { return this->zoneName_ != nullptr;};
      void deleteZoneName() { this->zoneName_ = nullptr;};
      inline string getZoneName() const { DARABONBA_PTR_GET_DEFAULT(zoneName_, "") };
      inline AvailableZoneList& setZoneName(string zoneName) { DARABONBA_PTR_SET_VALUE(zoneName_, zoneName) };


    protected:
      // A reserved parameter.
      shared_ptr<vector<string>> supportedComputeResource_ {};
      // The supported modes.
      shared_ptr<vector<AvailableZoneList::SupportedMode>> supportedMode_ {};
      // A reserved parameter.
      shared_ptr<vector<string>> supportedStorageResource_ {};
      // The zone ID.
      shared_ptr<string> zoneId_ {};
      // The name of the zone.
      shared_ptr<string> zoneName_ {};
    };

    virtual bool empty() const override { return this->availableZoneList_ == nullptr
        && this->regionId_ == nullptr && this->requestId_ == nullptr; };
    // availableZoneList Field Functions 
    bool hasAvailableZoneList() const { return this->availableZoneList_ != nullptr;};
    void deleteAvailableZoneList() { this->availableZoneList_ = nullptr;};
    inline const vector<DescribeAvailableResourceResponseBody::AvailableZoneList> & getAvailableZoneList() const { DARABONBA_PTR_GET_CONST(availableZoneList_, vector<DescribeAvailableResourceResponseBody::AvailableZoneList>) };
    inline vector<DescribeAvailableResourceResponseBody::AvailableZoneList> getAvailableZoneList() { DARABONBA_PTR_GET(availableZoneList_, vector<DescribeAvailableResourceResponseBody::AvailableZoneList>) };
    inline DescribeAvailableResourceResponseBody& setAvailableZoneList(const vector<DescribeAvailableResourceResponseBody::AvailableZoneList> & availableZoneList) { DARABONBA_PTR_SET_VALUE(availableZoneList_, availableZoneList) };
    inline DescribeAvailableResourceResponseBody& setAvailableZoneList(vector<DescribeAvailableResourceResponseBody::AvailableZoneList> && availableZoneList) { DARABONBA_PTR_SET_RVALUE(availableZoneList_, availableZoneList) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeAvailableResourceResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAvailableResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The supported zones.
    shared_ptr<vector<DescribeAvailableResourceResponseBody::AvailableZoneList>> availableZoneList_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
