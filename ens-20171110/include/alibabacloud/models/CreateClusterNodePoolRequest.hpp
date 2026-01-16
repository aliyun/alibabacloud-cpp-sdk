// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLUSTERNODEPOOLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECLUSTERNODEPOOLREQUEST_HPP_
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
  class CreateClusterNodePoolRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClusterNodePoolRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(KubernetesConfig, kubernetesConfig_);
      DARABONBA_PTR_TO_JSON(NodepoolInfo, nodepoolInfo_);
      DARABONBA_PTR_TO_JSON(ScalingGroup, scalingGroup_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClusterNodePoolRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(KubernetesConfig, kubernetesConfig_);
      DARABONBA_PTR_FROM_JSON(NodepoolInfo, nodepoolInfo_);
      DARABONBA_PTR_FROM_JSON(ScalingGroup, scalingGroup_);
    };
    CreateClusterNodePoolRequest() = default ;
    CreateClusterNodePoolRequest(const CreateClusterNodePoolRequest &) = default ;
    CreateClusterNodePoolRequest(CreateClusterNodePoolRequest &&) = default ;
    CreateClusterNodePoolRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClusterNodePoolRequest() = default ;
    CreateClusterNodePoolRequest& operator=(const CreateClusterNodePoolRequest &) = default ;
    CreateClusterNodePoolRequest& operator=(CreateClusterNodePoolRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ScalingGroup : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ScalingGroup& obj) { 
        DARABONBA_PTR_TO_JSON(DataDisks, dataDisks_);
        DARABONBA_PTR_TO_JSON(DesiredSize, desiredSize_);
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
        DARABONBA_PTR_FROM_JSON(DesiredSize, desiredSize_);
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
        && this->desiredSize_ == nullptr && this->imageId_ == nullptr && this->instanceChargeType_ == nullptr && this->instanceTypes_ == nullptr && this->keyPairName_ == nullptr
        && this->password_ == nullptr && this->systemDiskCategory_ == nullptr && this->systemDiskSize_ == nullptr && this->vswitchIds_ == nullptr; };
      // dataDisks Field Functions 
      bool hasDataDisks() const { return this->dataDisks_ != nullptr;};
      void deleteDataDisks() { this->dataDisks_ = nullptr;};
      inline const vector<ScalingGroup::DataDisks> & getDataDisks() const { DARABONBA_PTR_GET_CONST(dataDisks_, vector<ScalingGroup::DataDisks>) };
      inline vector<ScalingGroup::DataDisks> getDataDisks() { DARABONBA_PTR_GET(dataDisks_, vector<ScalingGroup::DataDisks>) };
      inline ScalingGroup& setDataDisks(const vector<ScalingGroup::DataDisks> & dataDisks) { DARABONBA_PTR_SET_VALUE(dataDisks_, dataDisks) };
      inline ScalingGroup& setDataDisks(vector<ScalingGroup::DataDisks> && dataDisks) { DARABONBA_PTR_SET_RVALUE(dataDisks_, dataDisks) };


      // desiredSize Field Functions 
      bool hasDesiredSize() const { return this->desiredSize_ != nullptr;};
      void deleteDesiredSize() { this->desiredSize_ = nullptr;};
      inline int32_t getDesiredSize() const { DARABONBA_PTR_GET_DEFAULT(desiredSize_, 0) };
      inline ScalingGroup& setDesiredSize(int32_t desiredSize) { DARABONBA_PTR_SET_VALUE(desiredSize_, desiredSize) };


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
      shared_ptr<int32_t> desiredSize_ {};
      // This parameter is required.
      shared_ptr<string> imageId_ {};
      shared_ptr<string> instanceChargeType_ {};
      // This parameter is required.
      shared_ptr<vector<string>> instanceTypes_ {};
      shared_ptr<string> keyPairName_ {};
      shared_ptr<string> password_ {};
      shared_ptr<string> systemDiskCategory_ {};
      shared_ptr<int32_t> systemDiskSize_ {};
      // This parameter is required.
      shared_ptr<vector<string>> vswitchIds_ {};
    };

    class NodepoolInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NodepoolInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, NodepoolInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
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
      virtual bool empty() const override { return this->name_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline NodepoolInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // This parameter is required.
      shared_ptr<string> name_ {};
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
        && this->kubernetesConfig_ == nullptr && this->nodepoolInfo_ == nullptr && this->scalingGroup_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateClusterNodePoolRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // kubernetesConfig Field Functions 
    bool hasKubernetesConfig() const { return this->kubernetesConfig_ != nullptr;};
    void deleteKubernetesConfig() { this->kubernetesConfig_ = nullptr;};
    inline const CreateClusterNodePoolRequest::KubernetesConfig & getKubernetesConfig() const { DARABONBA_PTR_GET_CONST(kubernetesConfig_, CreateClusterNodePoolRequest::KubernetesConfig) };
    inline CreateClusterNodePoolRequest::KubernetesConfig getKubernetesConfig() { DARABONBA_PTR_GET(kubernetesConfig_, CreateClusterNodePoolRequest::KubernetesConfig) };
    inline CreateClusterNodePoolRequest& setKubernetesConfig(const CreateClusterNodePoolRequest::KubernetesConfig & kubernetesConfig) { DARABONBA_PTR_SET_VALUE(kubernetesConfig_, kubernetesConfig) };
    inline CreateClusterNodePoolRequest& setKubernetesConfig(CreateClusterNodePoolRequest::KubernetesConfig && kubernetesConfig) { DARABONBA_PTR_SET_RVALUE(kubernetesConfig_, kubernetesConfig) };


    // nodepoolInfo Field Functions 
    bool hasNodepoolInfo() const { return this->nodepoolInfo_ != nullptr;};
    void deleteNodepoolInfo() { this->nodepoolInfo_ = nullptr;};
    inline const CreateClusterNodePoolRequest::NodepoolInfo & getNodepoolInfo() const { DARABONBA_PTR_GET_CONST(nodepoolInfo_, CreateClusterNodePoolRequest::NodepoolInfo) };
    inline CreateClusterNodePoolRequest::NodepoolInfo getNodepoolInfo() { DARABONBA_PTR_GET(nodepoolInfo_, CreateClusterNodePoolRequest::NodepoolInfo) };
    inline CreateClusterNodePoolRequest& setNodepoolInfo(const CreateClusterNodePoolRequest::NodepoolInfo & nodepoolInfo) { DARABONBA_PTR_SET_VALUE(nodepoolInfo_, nodepoolInfo) };
    inline CreateClusterNodePoolRequest& setNodepoolInfo(CreateClusterNodePoolRequest::NodepoolInfo && nodepoolInfo) { DARABONBA_PTR_SET_RVALUE(nodepoolInfo_, nodepoolInfo) };


    // scalingGroup Field Functions 
    bool hasScalingGroup() const { return this->scalingGroup_ != nullptr;};
    void deleteScalingGroup() { this->scalingGroup_ = nullptr;};
    inline const CreateClusterNodePoolRequest::ScalingGroup & getScalingGroup() const { DARABONBA_PTR_GET_CONST(scalingGroup_, CreateClusterNodePoolRequest::ScalingGroup) };
    inline CreateClusterNodePoolRequest::ScalingGroup getScalingGroup() { DARABONBA_PTR_GET(scalingGroup_, CreateClusterNodePoolRequest::ScalingGroup) };
    inline CreateClusterNodePoolRequest& setScalingGroup(const CreateClusterNodePoolRequest::ScalingGroup & scalingGroup) { DARABONBA_PTR_SET_VALUE(scalingGroup_, scalingGroup) };
    inline CreateClusterNodePoolRequest& setScalingGroup(CreateClusterNodePoolRequest::ScalingGroup && scalingGroup) { DARABONBA_PTR_SET_RVALUE(scalingGroup_, scalingGroup) };


  protected:
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    shared_ptr<CreateClusterNodePoolRequest::KubernetesConfig> kubernetesConfig_ {};
    // This parameter is required.
    shared_ptr<CreateClusterNodePoolRequest::NodepoolInfo> nodepoolInfo_ {};
    // This parameter is required.
    shared_ptr<CreateClusterNodePoolRequest::ScalingGroup> scalingGroup_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
