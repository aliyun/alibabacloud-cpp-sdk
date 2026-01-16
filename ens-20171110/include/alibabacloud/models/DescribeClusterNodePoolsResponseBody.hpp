// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODEPOOLSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODEPOOLSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeClusterNodePoolsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterNodePoolsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NodePools, nodePools_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterNodePoolsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NodePools, nodePools_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeClusterNodePoolsResponseBody() = default ;
    DescribeClusterNodePoolsResponseBody(const DescribeClusterNodePoolsResponseBody &) = default ;
    DescribeClusterNodePoolsResponseBody(DescribeClusterNodePoolsResponseBody &&) = default ;
    DescribeClusterNodePoolsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterNodePoolsResponseBody() = default ;
    DescribeClusterNodePoolsResponseBody& operator=(const DescribeClusterNodePoolsResponseBody &) = default ;
    DescribeClusterNodePoolsResponseBody& operator=(DescribeClusterNodePoolsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Page : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Page& obj) { 
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Page& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      Page() = default ;
      Page(const Page &) = default ;
      Page(Page &&) = default ;
      Page(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Page() = default ;
      Page& operator=(const Page &) = default ;
      Page& operator=(Page &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Page& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Page& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Page& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    class NodePools : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NodePools& obj) { 
        DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_TO_JSON(KubernetesConfig, kubernetesConfig_);
        DARABONBA_PTR_TO_JSON(NodepoolInfo, nodepoolInfo_);
        DARABONBA_PTR_TO_JSON(ScalingGroup, scalingGroup_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, NodePools& obj) { 
        DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_FROM_JSON(KubernetesConfig, kubernetesConfig_);
        DARABONBA_PTR_FROM_JSON(NodepoolInfo, nodepoolInfo_);
        DARABONBA_PTR_FROM_JSON(ScalingGroup, scalingGroup_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      NodePools() = default ;
      NodePools(const NodePools &) = default ;
      NodePools(NodePools &&) = default ;
      NodePools(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NodePools() = default ;
      NodePools& operator=(const NodePools &) = default ;
      NodePools& operator=(NodePools &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Status : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Status& obj) { 
          DARABONBA_PTR_TO_JSON(DesiredNodes, desiredNodes_);
          DARABONBA_PTR_TO_JSON(InitialNodes, initialNodes_);
          DARABONBA_PTR_TO_JSON(RemovingNodes, removingNodes_);
          DARABONBA_PTR_TO_JSON(ServingNodes, servingNodes_);
          DARABONBA_PTR_TO_JSON(State, state_);
          DARABONBA_PTR_TO_JSON(TotalNodes, totalNodes_);
        };
        friend void from_json(const Darabonba::Json& j, Status& obj) { 
          DARABONBA_PTR_FROM_JSON(DesiredNodes, desiredNodes_);
          DARABONBA_PTR_FROM_JSON(InitialNodes, initialNodes_);
          DARABONBA_PTR_FROM_JSON(RemovingNodes, removingNodes_);
          DARABONBA_PTR_FROM_JSON(ServingNodes, servingNodes_);
          DARABONBA_PTR_FROM_JSON(State, state_);
          DARABONBA_PTR_FROM_JSON(TotalNodes, totalNodes_);
        };
        Status() = default ;
        Status(const Status &) = default ;
        Status(Status &&) = default ;
        Status(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Status() = default ;
        Status& operator=(const Status &) = default ;
        Status& operator=(Status &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->desiredNodes_ == nullptr
        && this->initialNodes_ == nullptr && this->removingNodes_ == nullptr && this->servingNodes_ == nullptr && this->state_ == nullptr && this->totalNodes_ == nullptr; };
        // desiredNodes Field Functions 
        bool hasDesiredNodes() const { return this->desiredNodes_ != nullptr;};
        void deleteDesiredNodes() { this->desiredNodes_ = nullptr;};
        inline int32_t getDesiredNodes() const { DARABONBA_PTR_GET_DEFAULT(desiredNodes_, 0) };
        inline Status& setDesiredNodes(int32_t desiredNodes) { DARABONBA_PTR_SET_VALUE(desiredNodes_, desiredNodes) };


        // initialNodes Field Functions 
        bool hasInitialNodes() const { return this->initialNodes_ != nullptr;};
        void deleteInitialNodes() { this->initialNodes_ = nullptr;};
        inline int32_t getInitialNodes() const { DARABONBA_PTR_GET_DEFAULT(initialNodes_, 0) };
        inline Status& setInitialNodes(int32_t initialNodes) { DARABONBA_PTR_SET_VALUE(initialNodes_, initialNodes) };


        // removingNodes Field Functions 
        bool hasRemovingNodes() const { return this->removingNodes_ != nullptr;};
        void deleteRemovingNodes() { this->removingNodes_ = nullptr;};
        inline int32_t getRemovingNodes() const { DARABONBA_PTR_GET_DEFAULT(removingNodes_, 0) };
        inline Status& setRemovingNodes(int32_t removingNodes) { DARABONBA_PTR_SET_VALUE(removingNodes_, removingNodes) };


        // servingNodes Field Functions 
        bool hasServingNodes() const { return this->servingNodes_ != nullptr;};
        void deleteServingNodes() { this->servingNodes_ = nullptr;};
        inline int32_t getServingNodes() const { DARABONBA_PTR_GET_DEFAULT(servingNodes_, 0) };
        inline Status& setServingNodes(int32_t servingNodes) { DARABONBA_PTR_SET_VALUE(servingNodes_, servingNodes) };


        // state Field Functions 
        bool hasState() const { return this->state_ != nullptr;};
        void deleteState() { this->state_ = nullptr;};
        inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
        inline Status& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


        // totalNodes Field Functions 
        bool hasTotalNodes() const { return this->totalNodes_ != nullptr;};
        void deleteTotalNodes() { this->totalNodes_ = nullptr;};
        inline int32_t getTotalNodes() const { DARABONBA_PTR_GET_DEFAULT(totalNodes_, 0) };
        inline Status& setTotalNodes(int32_t totalNodes) { DARABONBA_PTR_SET_VALUE(totalNodes_, totalNodes) };


      protected:
        shared_ptr<int32_t> desiredNodes_ {};
        shared_ptr<int32_t> initialNodes_ {};
        shared_ptr<int32_t> removingNodes_ {};
        shared_ptr<int32_t> servingNodes_ {};
        shared_ptr<string> state_ {};
        shared_ptr<int32_t> totalNodes_ {};
      };

      class ScalingGroup : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ScalingGroup& obj) { 
          DARABONBA_PTR_TO_JSON(DataDisks, dataDisks_);
          DARABONBA_PTR_TO_JSON(ImageId, imageId_);
          DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
          DARABONBA_PTR_TO_JSON(InstanceTypes, instanceTypes_);
          DARABONBA_PTR_TO_JSON(KeyPairName, keyPairName_);
          DARABONBA_PTR_TO_JSON(Password, password_);
          DARABONBA_PTR_TO_JSON(SystemDiskCategory, systemDiskCategory_);
          DARABONBA_PTR_TO_JSON(SystemDiskSize, systemDiskSize_);
          DARABONBA_PTR_TO_JSON(VswitchIds, vswitchIds_);
        };
        friend void from_json(const Darabonba::Json& j, ScalingGroup& obj) { 
          DARABONBA_PTR_FROM_JSON(DataDisks, dataDisks_);
          DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
          DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
          DARABONBA_PTR_FROM_JSON(InstanceTypes, instanceTypes_);
          DARABONBA_PTR_FROM_JSON(KeyPairName, keyPairName_);
          DARABONBA_PTR_FROM_JSON(Password, password_);
          DARABONBA_PTR_FROM_JSON(SystemDiskCategory, systemDiskCategory_);
          DARABONBA_PTR_FROM_JSON(SystemDiskSize, systemDiskSize_);
          DARABONBA_PTR_FROM_JSON(VswitchIds, vswitchIds_);
        };
        ScalingGroup() = default ;
        ScalingGroup(const ScalingGroup &) = default ;
        ScalingGroup(ScalingGroup &&) = default ;
        ScalingGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ScalingGroup() = default ;
        ScalingGroup& operator=(const ScalingGroup &) = default ;
        ScalingGroup& operator=(ScalingGroup &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class DataDisks : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DataDisks& obj) { 
            DARABONBA_PTR_TO_JSON(Category, category_);
            DARABONBA_PTR_TO_JSON(Size, size_);
          };
          friend void from_json(const Darabonba::Json& j, DataDisks& obj) { 
            DARABONBA_PTR_FROM_JSON(Category, category_);
            DARABONBA_PTR_FROM_JSON(Size, size_);
          };
          DataDisks() = default ;
          DataDisks(const DataDisks &) = default ;
          DataDisks(DataDisks &&) = default ;
          DataDisks(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DataDisks() = default ;
          DataDisks& operator=(const DataDisks &) = default ;
          DataDisks& operator=(DataDisks &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->category_ == nullptr
        && this->size_ == nullptr; };
          // category Field Functions 
          bool hasCategory() const { return this->category_ != nullptr;};
          void deleteCategory() { this->category_ = nullptr;};
          inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
          inline DataDisks& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


          // size Field Functions 
          bool hasSize() const { return this->size_ != nullptr;};
          void deleteSize() { this->size_ = nullptr;};
          inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
          inline DataDisks& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


        protected:
          shared_ptr<string> category_ {};
          shared_ptr<int32_t> size_ {};
        };

        virtual bool empty() const override { return this->dataDisks_ == nullptr
        && this->imageId_ == nullptr && this->instanceChargeType_ == nullptr && this->instanceTypes_ == nullptr && this->keyPairName_ == nullptr && this->password_ == nullptr
        && this->systemDiskCategory_ == nullptr && this->systemDiskSize_ == nullptr && this->vswitchIds_ == nullptr; };
        // dataDisks Field Functions 
        bool hasDataDisks() const { return this->dataDisks_ != nullptr;};
        void deleteDataDisks() { this->dataDisks_ = nullptr;};
        inline const vector<ScalingGroup::DataDisks> & getDataDisks() const { DARABONBA_PTR_GET_CONST(dataDisks_, vector<ScalingGroup::DataDisks>) };
        inline vector<ScalingGroup::DataDisks> getDataDisks() { DARABONBA_PTR_GET(dataDisks_, vector<ScalingGroup::DataDisks>) };
        inline ScalingGroup& setDataDisks(const vector<ScalingGroup::DataDisks> & dataDisks) { DARABONBA_PTR_SET_VALUE(dataDisks_, dataDisks) };
        inline ScalingGroup& setDataDisks(vector<ScalingGroup::DataDisks> && dataDisks) { DARABONBA_PTR_SET_RVALUE(dataDisks_, dataDisks) };


        // imageId Field Functions 
        bool hasImageId() const { return this->imageId_ != nullptr;};
        void deleteImageId() { this->imageId_ = nullptr;};
        inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
        inline ScalingGroup& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


        // instanceChargeType Field Functions 
        bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
        void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
        inline string getInstanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
        inline ScalingGroup& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


        // instanceTypes Field Functions 
        bool hasInstanceTypes() const { return this->instanceTypes_ != nullptr;};
        void deleteInstanceTypes() { this->instanceTypes_ = nullptr;};
        inline const vector<string> & getInstanceTypes() const { DARABONBA_PTR_GET_CONST(instanceTypes_, vector<string>) };
        inline vector<string> getInstanceTypes() { DARABONBA_PTR_GET(instanceTypes_, vector<string>) };
        inline ScalingGroup& setInstanceTypes(const vector<string> & instanceTypes) { DARABONBA_PTR_SET_VALUE(instanceTypes_, instanceTypes) };
        inline ScalingGroup& setInstanceTypes(vector<string> && instanceTypes) { DARABONBA_PTR_SET_RVALUE(instanceTypes_, instanceTypes) };


        // keyPairName Field Functions 
        bool hasKeyPairName() const { return this->keyPairName_ != nullptr;};
        void deleteKeyPairName() { this->keyPairName_ = nullptr;};
        inline string getKeyPairName() const { DARABONBA_PTR_GET_DEFAULT(keyPairName_, "") };
        inline ScalingGroup& setKeyPairName(string keyPairName) { DARABONBA_PTR_SET_VALUE(keyPairName_, keyPairName) };


        // password Field Functions 
        bool hasPassword() const { return this->password_ != nullptr;};
        void deletePassword() { this->password_ = nullptr;};
        inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
        inline ScalingGroup& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


        // systemDiskCategory Field Functions 
        bool hasSystemDiskCategory() const { return this->systemDiskCategory_ != nullptr;};
        void deleteSystemDiskCategory() { this->systemDiskCategory_ = nullptr;};
        inline string getSystemDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(systemDiskCategory_, "") };
        inline ScalingGroup& setSystemDiskCategory(string systemDiskCategory) { DARABONBA_PTR_SET_VALUE(systemDiskCategory_, systemDiskCategory) };


        // systemDiskSize Field Functions 
        bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
        void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
        inline int32_t getSystemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, 0) };
        inline ScalingGroup& setSystemDiskSize(int32_t systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


        // vswitchIds Field Functions 
        bool hasVswitchIds() const { return this->vswitchIds_ != nullptr;};
        void deleteVswitchIds() { this->vswitchIds_ = nullptr;};
        inline const vector<string> & getVswitchIds() const { DARABONBA_PTR_GET_CONST(vswitchIds_, vector<string>) };
        inline vector<string> getVswitchIds() { DARABONBA_PTR_GET(vswitchIds_, vector<string>) };
        inline ScalingGroup& setVswitchIds(const vector<string> & vswitchIds) { DARABONBA_PTR_SET_VALUE(vswitchIds_, vswitchIds) };
        inline ScalingGroup& setVswitchIds(vector<string> && vswitchIds) { DARABONBA_PTR_SET_RVALUE(vswitchIds_, vswitchIds) };


      protected:
        shared_ptr<vector<ScalingGroup::DataDisks>> dataDisks_ {};
        shared_ptr<string> imageId_ {};
        shared_ptr<string> instanceChargeType_ {};
        shared_ptr<vector<string>> instanceTypes_ {};
        shared_ptr<string> keyPairName_ {};
        shared_ptr<string> password_ {};
        shared_ptr<string> systemDiskCategory_ {};
        shared_ptr<int32_t> systemDiskSize_ {};
        shared_ptr<vector<string>> vswitchIds_ {};
      };

      class NodepoolInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NodepoolInfo& obj) { 
          DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(NodepoolId, nodepoolId_);
        };
        friend void from_json(const Darabonba::Json& j, NodepoolInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(NodepoolId, nodepoolId_);
        };
        NodepoolInfo() = default ;
        NodepoolInfo(const NodepoolInfo &) = default ;
        NodepoolInfo(NodepoolInfo &&) = default ;
        NodepoolInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NodepoolInfo() = default ;
        NodepoolInfo& operator=(const NodepoolInfo &) = default ;
        NodepoolInfo& operator=(NodepoolInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->ensRegionId_ == nullptr
        && this->name_ == nullptr && this->nodepoolId_ == nullptr; };
        // ensRegionId Field Functions 
        bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
        void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
        inline string getEnsRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
        inline NodepoolInfo& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline NodepoolInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // nodepoolId Field Functions 
        bool hasNodepoolId() const { return this->nodepoolId_ != nullptr;};
        void deleteNodepoolId() { this->nodepoolId_ = nullptr;};
        inline string getNodepoolId() const { DARABONBA_PTR_GET_DEFAULT(nodepoolId_, "") };
        inline NodepoolInfo& setNodepoolId(string nodepoolId) { DARABONBA_PTR_SET_VALUE(nodepoolId_, nodepoolId) };


      protected:
        shared_ptr<string> ensRegionId_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> nodepoolId_ {};
      };

      class KubernetesConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const KubernetesConfig& obj) { 
          DARABONBA_PTR_TO_JSON(PreUserData, preUserData_);
          DARABONBA_PTR_TO_JSON(UserData, userData_);
        };
        friend void from_json(const Darabonba::Json& j, KubernetesConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(PreUserData, preUserData_);
          DARABONBA_PTR_FROM_JSON(UserData, userData_);
        };
        KubernetesConfig() = default ;
        KubernetesConfig(const KubernetesConfig &) = default ;
        KubernetesConfig(KubernetesConfig &&) = default ;
        KubernetesConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~KubernetesConfig() = default ;
        KubernetesConfig& operator=(const KubernetesConfig &) = default ;
        KubernetesConfig& operator=(KubernetesConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->preUserData_ == nullptr
        && this->userData_ == nullptr; };
        // preUserData Field Functions 
        bool hasPreUserData() const { return this->preUserData_ != nullptr;};
        void deletePreUserData() { this->preUserData_ = nullptr;};
        inline string getPreUserData() const { DARABONBA_PTR_GET_DEFAULT(preUserData_, "") };
        inline KubernetesConfig& setPreUserData(string preUserData) { DARABONBA_PTR_SET_VALUE(preUserData_, preUserData) };


        // userData Field Functions 
        bool hasUserData() const { return this->userData_ != nullptr;};
        void deleteUserData() { this->userData_ = nullptr;};
        inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
        inline KubernetesConfig& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


      protected:
        shared_ptr<string> preUserData_ {};
        shared_ptr<string> userData_ {};
      };

      virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->kubernetesConfig_ == nullptr && this->nodepoolInfo_ == nullptr && this->scalingGroup_ == nullptr && this->status_ == nullptr; };
      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline NodePools& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // kubernetesConfig Field Functions 
      bool hasKubernetesConfig() const { return this->kubernetesConfig_ != nullptr;};
      void deleteKubernetesConfig() { this->kubernetesConfig_ = nullptr;};
      inline const NodePools::KubernetesConfig & getKubernetesConfig() const { DARABONBA_PTR_GET_CONST(kubernetesConfig_, NodePools::KubernetesConfig) };
      inline NodePools::KubernetesConfig getKubernetesConfig() { DARABONBA_PTR_GET(kubernetesConfig_, NodePools::KubernetesConfig) };
      inline NodePools& setKubernetesConfig(const NodePools::KubernetesConfig & kubernetesConfig) { DARABONBA_PTR_SET_VALUE(kubernetesConfig_, kubernetesConfig) };
      inline NodePools& setKubernetesConfig(NodePools::KubernetesConfig && kubernetesConfig) { DARABONBA_PTR_SET_RVALUE(kubernetesConfig_, kubernetesConfig) };


      // nodepoolInfo Field Functions 
      bool hasNodepoolInfo() const { return this->nodepoolInfo_ != nullptr;};
      void deleteNodepoolInfo() { this->nodepoolInfo_ = nullptr;};
      inline const NodePools::NodepoolInfo & getNodepoolInfo() const { DARABONBA_PTR_GET_CONST(nodepoolInfo_, NodePools::NodepoolInfo) };
      inline NodePools::NodepoolInfo getNodepoolInfo() { DARABONBA_PTR_GET(nodepoolInfo_, NodePools::NodepoolInfo) };
      inline NodePools& setNodepoolInfo(const NodePools::NodepoolInfo & nodepoolInfo) { DARABONBA_PTR_SET_VALUE(nodepoolInfo_, nodepoolInfo) };
      inline NodePools& setNodepoolInfo(NodePools::NodepoolInfo && nodepoolInfo) { DARABONBA_PTR_SET_RVALUE(nodepoolInfo_, nodepoolInfo) };


      // scalingGroup Field Functions 
      bool hasScalingGroup() const { return this->scalingGroup_ != nullptr;};
      void deleteScalingGroup() { this->scalingGroup_ = nullptr;};
      inline const NodePools::ScalingGroup & getScalingGroup() const { DARABONBA_PTR_GET_CONST(scalingGroup_, NodePools::ScalingGroup) };
      inline NodePools::ScalingGroup getScalingGroup() { DARABONBA_PTR_GET(scalingGroup_, NodePools::ScalingGroup) };
      inline NodePools& setScalingGroup(const NodePools::ScalingGroup & scalingGroup) { DARABONBA_PTR_SET_VALUE(scalingGroup_, scalingGroup) };
      inline NodePools& setScalingGroup(NodePools::ScalingGroup && scalingGroup) { DARABONBA_PTR_SET_RVALUE(scalingGroup_, scalingGroup) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline const NodePools::Status & getStatus() const { DARABONBA_PTR_GET_CONST(status_, NodePools::Status) };
      inline NodePools::Status getStatus() { DARABONBA_PTR_GET(status_, NodePools::Status) };
      inline NodePools& setStatus(const NodePools::Status & status) { DARABONBA_PTR_SET_VALUE(status_, status) };
      inline NodePools& setStatus(NodePools::Status && status) { DARABONBA_PTR_SET_RVALUE(status_, status) };


    protected:
      shared_ptr<string> clusterId_ {};
      shared_ptr<NodePools::KubernetesConfig> kubernetesConfig_ {};
      shared_ptr<NodePools::NodepoolInfo> nodepoolInfo_ {};
      shared_ptr<NodePools::ScalingGroup> scalingGroup_ {};
      shared_ptr<NodePools::Status> status_ {};
    };

    virtual bool empty() const override { return this->nodePools_ == nullptr
        && this->page_ == nullptr && this->requestId_ == nullptr; };
    // nodePools Field Functions 
    bool hasNodePools() const { return this->nodePools_ != nullptr;};
    void deleteNodePools() { this->nodePools_ = nullptr;};
    inline const vector<DescribeClusterNodePoolsResponseBody::NodePools> & getNodePools() const { DARABONBA_PTR_GET_CONST(nodePools_, vector<DescribeClusterNodePoolsResponseBody::NodePools>) };
    inline vector<DescribeClusterNodePoolsResponseBody::NodePools> getNodePools() { DARABONBA_PTR_GET(nodePools_, vector<DescribeClusterNodePoolsResponseBody::NodePools>) };
    inline DescribeClusterNodePoolsResponseBody& setNodePools(const vector<DescribeClusterNodePoolsResponseBody::NodePools> & nodePools) { DARABONBA_PTR_SET_VALUE(nodePools_, nodePools) };
    inline DescribeClusterNodePoolsResponseBody& setNodePools(vector<DescribeClusterNodePoolsResponseBody::NodePools> && nodePools) { DARABONBA_PTR_SET_RVALUE(nodePools_, nodePools) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline const DescribeClusterNodePoolsResponseBody::Page & getPage() const { DARABONBA_PTR_GET_CONST(page_, DescribeClusterNodePoolsResponseBody::Page) };
    inline DescribeClusterNodePoolsResponseBody::Page getPage() { DARABONBA_PTR_GET(page_, DescribeClusterNodePoolsResponseBody::Page) };
    inline DescribeClusterNodePoolsResponseBody& setPage(const DescribeClusterNodePoolsResponseBody::Page & page) { DARABONBA_PTR_SET_VALUE(page_, page) };
    inline DescribeClusterNodePoolsResponseBody& setPage(DescribeClusterNodePoolsResponseBody::Page && page) { DARABONBA_PTR_SET_RVALUE(page_, page) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeClusterNodePoolsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeClusterNodePoolsResponseBody::NodePools>> nodePools_ {};
    shared_ptr<DescribeClusterNodePoolsResponseBody::Page> page_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
