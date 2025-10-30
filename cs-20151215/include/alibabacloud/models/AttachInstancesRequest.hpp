// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ATTACHINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Runtime.hpp>
#include <alibabacloud/models/Tag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class AttachInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(cpu_policy, cpuPolicy_);
      DARABONBA_PTR_TO_JSON(format_disk, formatDisk_);
      DARABONBA_PTR_TO_JSON(image_id, imageId_);
      DARABONBA_PTR_TO_JSON(instances, instances_);
      DARABONBA_PTR_TO_JSON(is_edge_worker, isEdgeWorker_);
      DARABONBA_PTR_TO_JSON(keep_instance_name, keepInstanceName_);
      DARABONBA_PTR_TO_JSON(key_pair, keyPair_);
      DARABONBA_PTR_TO_JSON(nodepool_id, nodepoolId_);
      DARABONBA_PTR_TO_JSON(password, password_);
      DARABONBA_PTR_TO_JSON(rds_instances, rdsInstances_);
      DARABONBA_PTR_TO_JSON(runtime, runtime_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(user_data, userData_);
    };
    friend void from_json(const Darabonba::Json& j, AttachInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(cpu_policy, cpuPolicy_);
      DARABONBA_PTR_FROM_JSON(format_disk, formatDisk_);
      DARABONBA_PTR_FROM_JSON(image_id, imageId_);
      DARABONBA_PTR_FROM_JSON(instances, instances_);
      DARABONBA_PTR_FROM_JSON(is_edge_worker, isEdgeWorker_);
      DARABONBA_PTR_FROM_JSON(keep_instance_name, keepInstanceName_);
      DARABONBA_PTR_FROM_JSON(key_pair, keyPair_);
      DARABONBA_PTR_FROM_JSON(nodepool_id, nodepoolId_);
      DARABONBA_PTR_FROM_JSON(password, password_);
      DARABONBA_PTR_FROM_JSON(rds_instances, rdsInstances_);
      DARABONBA_PTR_FROM_JSON(runtime, runtime_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(user_data, userData_);
    };
    AttachInstancesRequest() = default ;
    AttachInstancesRequest(const AttachInstancesRequest &) = default ;
    AttachInstancesRequest(AttachInstancesRequest &&) = default ;
    AttachInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachInstancesRequest() = default ;
    AttachInstancesRequest& operator=(const AttachInstancesRequest &) = default ;
    AttachInstancesRequest& operator=(AttachInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cpuPolicy_ == nullptr
        && return this->formatDisk_ == nullptr && return this->imageId_ == nullptr && return this->instances_ == nullptr && return this->isEdgeWorker_ == nullptr && return this->keepInstanceName_ == nullptr
        && return this->keyPair_ == nullptr && return this->nodepoolId_ == nullptr && return this->password_ == nullptr && return this->rdsInstances_ == nullptr && return this->runtime_ == nullptr
        && return this->tags_ == nullptr && return this->userData_ == nullptr; };
    // cpuPolicy Field Functions 
    bool hasCpuPolicy() const { return this->cpuPolicy_ != nullptr;};
    void deleteCpuPolicy() { this->cpuPolicy_ = nullptr;};
    inline string cpuPolicy() const { DARABONBA_PTR_GET_DEFAULT(cpuPolicy_, "") };
    inline AttachInstancesRequest& setCpuPolicy(string cpuPolicy) { DARABONBA_PTR_SET_VALUE(cpuPolicy_, cpuPolicy) };


    // formatDisk Field Functions 
    bool hasFormatDisk() const { return this->formatDisk_ != nullptr;};
    void deleteFormatDisk() { this->formatDisk_ = nullptr;};
    inline bool formatDisk() const { DARABONBA_PTR_GET_DEFAULT(formatDisk_, false) };
    inline AttachInstancesRequest& setFormatDisk(bool formatDisk) { DARABONBA_PTR_SET_VALUE(formatDisk_, formatDisk) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline AttachInstancesRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<string> & instances() const { DARABONBA_PTR_GET_CONST(instances_, vector<string>) };
    inline vector<string> instances() { DARABONBA_PTR_GET(instances_, vector<string>) };
    inline AttachInstancesRequest& setInstances(const vector<string> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline AttachInstancesRequest& setInstances(vector<string> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // isEdgeWorker Field Functions 
    bool hasIsEdgeWorker() const { return this->isEdgeWorker_ != nullptr;};
    void deleteIsEdgeWorker() { this->isEdgeWorker_ = nullptr;};
    inline bool isEdgeWorker() const { DARABONBA_PTR_GET_DEFAULT(isEdgeWorker_, false) };
    inline AttachInstancesRequest& setIsEdgeWorker(bool isEdgeWorker) { DARABONBA_PTR_SET_VALUE(isEdgeWorker_, isEdgeWorker) };


    // keepInstanceName Field Functions 
    bool hasKeepInstanceName() const { return this->keepInstanceName_ != nullptr;};
    void deleteKeepInstanceName() { this->keepInstanceName_ = nullptr;};
    inline bool keepInstanceName() const { DARABONBA_PTR_GET_DEFAULT(keepInstanceName_, false) };
    inline AttachInstancesRequest& setKeepInstanceName(bool keepInstanceName) { DARABONBA_PTR_SET_VALUE(keepInstanceName_, keepInstanceName) };


    // keyPair Field Functions 
    bool hasKeyPair() const { return this->keyPair_ != nullptr;};
    void deleteKeyPair() { this->keyPair_ = nullptr;};
    inline string keyPair() const { DARABONBA_PTR_GET_DEFAULT(keyPair_, "") };
    inline AttachInstancesRequest& setKeyPair(string keyPair) { DARABONBA_PTR_SET_VALUE(keyPair_, keyPair) };


    // nodepoolId Field Functions 
    bool hasNodepoolId() const { return this->nodepoolId_ != nullptr;};
    void deleteNodepoolId() { this->nodepoolId_ = nullptr;};
    inline string nodepoolId() const { DARABONBA_PTR_GET_DEFAULT(nodepoolId_, "") };
    inline AttachInstancesRequest& setNodepoolId(string nodepoolId) { DARABONBA_PTR_SET_VALUE(nodepoolId_, nodepoolId) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline AttachInstancesRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // rdsInstances Field Functions 
    bool hasRdsInstances() const { return this->rdsInstances_ != nullptr;};
    void deleteRdsInstances() { this->rdsInstances_ = nullptr;};
    inline const vector<string> & rdsInstances() const { DARABONBA_PTR_GET_CONST(rdsInstances_, vector<string>) };
    inline vector<string> rdsInstances() { DARABONBA_PTR_GET(rdsInstances_, vector<string>) };
    inline AttachInstancesRequest& setRdsInstances(const vector<string> & rdsInstances) { DARABONBA_PTR_SET_VALUE(rdsInstances_, rdsInstances) };
    inline AttachInstancesRequest& setRdsInstances(vector<string> && rdsInstances) { DARABONBA_PTR_SET_RVALUE(rdsInstances_, rdsInstances) };


    // runtime Field Functions 
    bool hasRuntime() const { return this->runtime_ != nullptr;};
    void deleteRuntime() { this->runtime_ = nullptr;};
    inline const Runtime & runtime() const { DARABONBA_PTR_GET_CONST(runtime_, Runtime) };
    inline Runtime runtime() { DARABONBA_PTR_GET(runtime_, Runtime) };
    inline AttachInstancesRequest& setRuntime(const Runtime & runtime) { DARABONBA_PTR_SET_VALUE(runtime_, runtime) };
    inline AttachInstancesRequest& setRuntime(Runtime && runtime) { DARABONBA_PTR_SET_RVALUE(runtime_, runtime) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Tag> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Tag>) };
    inline vector<Tag> tags() { DARABONBA_PTR_GET(tags_, vector<Tag>) };
    inline AttachInstancesRequest& setTags(const vector<Tag> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline AttachInstancesRequest& setTags(vector<Tag> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline AttachInstancesRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The CPU management policy of the node. The following policies are supported if the Kubernetes version of the cluster is 1.12.6 or later:
    // 
    // *   `static`: allows pods with specific resource characteristics on the node to be granted enhanced CPU affinity and exclusivity.
    // *   `none`: uses default CPU affinity.
    // 
    // Default value: `none`
    // 
    // >  This parameter is not supported if you specify `nodepool_id`.
    std::shared_ptr<string> cpuPolicy_ = nullptr;
    // Specifies whether to store container data and images on data disks. Valid value:
    // 
    // *   `true`: stores container data and images on data disks.
    // *   `false`: does not store container data or images on data disks.
    // 
    // Default value: `false`.
    // 
    // How data disks are attached:
    // 
    // *   If the ECS instance is already attached with data disks and the file system of the last data disk is not initialized, the system automatically formats this data disk to ext4. Then, the system uses the disk to store the data in the /var/lib/docker and /var/lib/kubelet directories.
    // *   If no data disk is attached to the ECS instance, the system does not purchase a new data disk.
    // 
    // >  If you choose to store container data and images on data disks and a data disk is already attached to the ECS instance, the original data on this data disk is cleared. You can back up the disk to prevent data loss.
    std::shared_ptr<bool> formatDisk_ = nullptr;
    // The custom image ID. If you do not specify this parameter, the default system image is used.
    // 
    // > 
    // 
    // *   If you specify a custom image, the custom image is used to deploy the operating system on the system disk of the node.
    // 
    // *   This parameter is not supported if you specify `nodepool_id`.
    std::shared_ptr<string> imageId_ = nullptr;
    // The ECS instances that you want to add.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> instances_ = nullptr;
    // Specifies whether the node that you want to add is an Edge Node Service (ENS) node. Valid value:
    // 
    // *   `true`: the node that you want to add is an ENS node.
    // *   `false`: the node that you want to add is not an ENS node.
    // 
    // Default value: `false`.
    // 
    // >  If the node that you want to add is an ENS node, you must set the value to `true`. This allows you to identify the node.
    std::shared_ptr<bool> isEdgeWorker_ = nullptr;
    // Specifies whether to retain the instance name. Valid value:
    // 
    // *   `true`: retains the instance name.
    // *   `false`: does not retain the instance name.
    // 
    // Default value: `false`.
    std::shared_ptr<bool> keepInstanceName_ = nullptr;
    // The name of the key pair used to log on to the ECS instances. You must specify this parameter or `login_password`.
    // 
    // >  This parameter is not supported if you specify `nodepool_id`.
    std::shared_ptr<string> keyPair_ = nullptr;
    // The ID of the node pool to which the node is added. If you do not specify this parameter, the node is added to the default node pool.
    std::shared_ptr<string> nodepoolId_ = nullptr;
    // The SSH logon password used to log on to the ECS instances. You must specify this parameter or `key_pair`. The password must be 8 to 30 characters in length, and must contain at least three of the following character types: uppercase letters, lowercase letters, digits, and special characters. The password cannot contain backslashes (\\\\) or double quotation marks (").
    // 
    // The password is encrypted during data transfer to ensure security.
    std::shared_ptr<string> password_ = nullptr;
    // A list of ApsaraDB RDS instances.
    std::shared_ptr<vector<string>> rdsInstances_ = nullptr;
    // The container runtime.
    // 
    // >  This parameter is not supported if you specify `nodepool_id`.
    std::shared_ptr<Runtime> runtime_ = nullptr;
    // The labels that you want to add to the node. When you add labels to a node, the following rules apply:
    // 
    // *   A label is a case-sensitive key-value pair. You can add up to 20 labels.
    // *   The key must be unique and cannot exceed 64 characters in length. The value can be empty and cannot exceed 128 characters in length. Keys and values cannot start with `aliyun`, `acs:`, `https://`, or `http://`. For more information, see [Labels and Selectors](https://kubernetes.io/docs/concepts/overview/working-with-objects/labels/#syntax-and-character-set).
    // 
    // >  This parameter is not supported if you specify `nodepool_id`.
    std::shared_ptr<vector<Tag>> tags_ = nullptr;
    // The user-defined data on the node. For more information, see [Use instance user data to automatically run commands or scripts on instance startup](https://help.aliyun.com/document_detail/49121.html).
    // 
    // >  This parameter is not supported if you specify `nodepool_id`.
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
