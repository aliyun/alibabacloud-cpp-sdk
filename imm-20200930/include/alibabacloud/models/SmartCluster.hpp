// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SMARTCLUSTER_HPP_
#define ALIBABACLOUD_MODELS_SMARTCLUSTER_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SmartClusterRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class SmartCluster : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SmartCluster& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ObjectId, objectId_);
      DARABONBA_PTR_TO_JSON(ObjectStatus, objectStatus_);
      DARABONBA_PTR_TO_JSON(ObjectType, objectType_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(Rule, rule_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, SmartCluster& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ObjectId, objectId_);
      DARABONBA_PTR_FROM_JSON(ObjectStatus, objectStatus_);
      DARABONBA_PTR_FROM_JSON(ObjectType, objectType_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    SmartCluster() = default ;
    SmartCluster(const SmartCluster &) = default ;
    SmartCluster(SmartCluster &&) = default ;
    SmartCluster(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SmartCluster() = default ;
    SmartCluster& operator=(const SmartCluster &) = default ;
    SmartCluster& operator=(SmartCluster &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && this->datasetName_ == nullptr && this->description_ == nullptr && this->name_ == nullptr && this->objectId_ == nullptr && this->objectStatus_ == nullptr
        && this->objectType_ == nullptr && this->ownerId_ == nullptr && this->projectName_ == nullptr && this->rule_ == nullptr && this->updateTime_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline SmartCluster& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string getDatasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline SmartCluster& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline SmartCluster& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline SmartCluster& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // objectId Field Functions 
    bool hasObjectId() const { return this->objectId_ != nullptr;};
    void deleteObjectId() { this->objectId_ = nullptr;};
    inline string getObjectId() const { DARABONBA_PTR_GET_DEFAULT(objectId_, "") };
    inline SmartCluster& setObjectId(string objectId) { DARABONBA_PTR_SET_VALUE(objectId_, objectId) };


    // objectStatus Field Functions 
    bool hasObjectStatus() const { return this->objectStatus_ != nullptr;};
    void deleteObjectStatus() { this->objectStatus_ = nullptr;};
    inline string getObjectStatus() const { DARABONBA_PTR_GET_DEFAULT(objectStatus_, "") };
    inline SmartCluster& setObjectStatus(string objectStatus) { DARABONBA_PTR_SET_VALUE(objectStatus_, objectStatus) };


    // objectType Field Functions 
    bool hasObjectType() const { return this->objectType_ != nullptr;};
    void deleteObjectType() { this->objectType_ = nullptr;};
    inline string getObjectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
    inline SmartCluster& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline SmartCluster& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline SmartCluster& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline const SmartClusterRule & getRule() const { DARABONBA_PTR_GET_CONST(rule_, SmartClusterRule) };
    inline SmartClusterRule getRule() { DARABONBA_PTR_GET(rule_, SmartClusterRule) };
    inline SmartCluster& setRule(const SmartClusterRule & rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };
    inline SmartCluster& setRule(SmartClusterRule && rule) { DARABONBA_PTR_SET_RVALUE(rule_, rule) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline SmartCluster& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The time when the cluster was created.
    shared_ptr<string> createTime_ {};
    // The name of the dataset.
    shared_ptr<string> datasetName_ {};
    // The description of the cluster.
    shared_ptr<string> description_ {};
    // The name of the cluster.
    shared_ptr<string> name_ {};
    // The ID of the cluster.
    shared_ptr<string> objectId_ {};
    // The status of the cluster.
    shared_ptr<string> objectStatus_ {};
    // The type of the cluster.
    shared_ptr<string> objectType_ {};
    // The user ID.
    shared_ptr<string> ownerId_ {};
    // The name of the project.
    shared_ptr<string> projectName_ {};
    // The clustering rule.
    shared_ptr<SmartClusterRule> rule_ {};
    // The time when the cluster was updated.
    shared_ptr<string> updateTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
