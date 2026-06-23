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
        && this->formatDisk_ == nullptr && this->imageId_ == nullptr && this->instances_ == nullptr && this->isEdgeWorker_ == nullptr && this->keepInstanceName_ == nullptr
        && this->keyPair_ == nullptr && this->nodepoolId_ == nullptr && this->password_ == nullptr && this->rdsInstances_ == nullptr && this->runtime_ == nullptr
        && this->tags_ == nullptr && this->userData_ == nullptr; };
    // cpuPolicy Field Functions 
    bool hasCpuPolicy() const { return this->cpuPolicy_ != nullptr;};
    void deleteCpuPolicy() { this->cpuPolicy_ = nullptr;};
    inline string getCpuPolicy() const { DARABONBA_PTR_GET_DEFAULT(cpuPolicy_, "") };
    inline AttachInstancesRequest& setCpuPolicy(string cpuPolicy) { DARABONBA_PTR_SET_VALUE(cpuPolicy_, cpuPolicy) };


    // formatDisk Field Functions 
    bool hasFormatDisk() const { return this->formatDisk_ != nullptr;};
    void deleteFormatDisk() { this->formatDisk_ = nullptr;};
    inline bool getFormatDisk() const { DARABONBA_PTR_GET_DEFAULT(formatDisk_, false) };
    inline AttachInstancesRequest& setFormatDisk(bool formatDisk) { DARABONBA_PTR_SET_VALUE(formatDisk_, formatDisk) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline AttachInstancesRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<string> & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, vector<string>) };
    inline vector<string> getInstances() { DARABONBA_PTR_GET(instances_, vector<string>) };
    inline AttachInstancesRequest& setInstances(const vector<string> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline AttachInstancesRequest& setInstances(vector<string> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // isEdgeWorker Field Functions 
    bool hasIsEdgeWorker() const { return this->isEdgeWorker_ != nullptr;};
    void deleteIsEdgeWorker() { this->isEdgeWorker_ = nullptr;};
    inline bool getIsEdgeWorker() const { DARABONBA_PTR_GET_DEFAULT(isEdgeWorker_, false) };
    inline AttachInstancesRequest& setIsEdgeWorker(bool isEdgeWorker) { DARABONBA_PTR_SET_VALUE(isEdgeWorker_, isEdgeWorker) };


    // keepInstanceName Field Functions 
    bool hasKeepInstanceName() const { return this->keepInstanceName_ != nullptr;};
    void deleteKeepInstanceName() { this->keepInstanceName_ = nullptr;};
    inline bool getKeepInstanceName() const { DARABONBA_PTR_GET_DEFAULT(keepInstanceName_, false) };
    inline AttachInstancesRequest& setKeepInstanceName(bool keepInstanceName) { DARABONBA_PTR_SET_VALUE(keepInstanceName_, keepInstanceName) };


    // keyPair Field Functions 
    bool hasKeyPair() const { return this->keyPair_ != nullptr;};
    void deleteKeyPair() { this->keyPair_ = nullptr;};
    inline string getKeyPair() const { DARABONBA_PTR_GET_DEFAULT(keyPair_, "") };
    inline AttachInstancesRequest& setKeyPair(string keyPair) { DARABONBA_PTR_SET_VALUE(keyPair_, keyPair) };


    // nodepoolId Field Functions 
    bool hasNodepoolId() const { return this->nodepoolId_ != nullptr;};
    void deleteNodepoolId() { this->nodepoolId_ = nullptr;};
    inline string getNodepoolId() const { DARABONBA_PTR_GET_DEFAULT(nodepoolId_, "") };
    inline AttachInstancesRequest& setNodepoolId(string nodepoolId) { DARABONBA_PTR_SET_VALUE(nodepoolId_, nodepoolId) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline AttachInstancesRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // rdsInstances Field Functions 
    bool hasRdsInstances() const { return this->rdsInstances_ != nullptr;};
    void deleteRdsInstances() { this->rdsInstances_ = nullptr;};
    inline const vector<string> & getRdsInstances() const { DARABONBA_PTR_GET_CONST(rdsInstances_, vector<string>) };
    inline vector<string> getRdsInstances() { DARABONBA_PTR_GET(rdsInstances_, vector<string>) };
    inline AttachInstancesRequest& setRdsInstances(const vector<string> & rdsInstances) { DARABONBA_PTR_SET_VALUE(rdsInstances_, rdsInstances) };
    inline AttachInstancesRequest& setRdsInstances(vector<string> && rdsInstances) { DARABONBA_PTR_SET_RVALUE(rdsInstances_, rdsInstances) };


    // runtime Field Functions 
    bool hasRuntime() const { return this->runtime_ != nullptr;};
    void deleteRuntime() { this->runtime_ = nullptr;};
    inline const Runtime & getRuntime() const { DARABONBA_PTR_GET_CONST(runtime_, Runtime) };
    inline Runtime getRuntime() { DARABONBA_PTR_GET(runtime_, Runtime) };
    inline AttachInstancesRequest& setRuntime(const Runtime & runtime) { DARABONBA_PTR_SET_VALUE(runtime_, runtime) };
    inline AttachInstancesRequest& setRuntime(Runtime && runtime) { DARABONBA_PTR_SET_RVALUE(runtime_, runtime) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Tag> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Tag>) };
    inline vector<Tag> getTags() { DARABONBA_PTR_GET(tags_, vector<Tag>) };
    inline AttachInstancesRequest& setTags(const vector<Tag> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline AttachInstancesRequest& setTags(vector<Tag> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline AttachInstancesRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The CPU management policy of the node. The following policies are supported for clusters of version 1.12.6 or later:
    // 
    // - `static`: Allows pods with certain resource characteristics on the node to be granted enhanced CPU affinity and exclusivity.
    // - `none`: Uses the existing default CPU affinity scheme.
    // 
    // Default value: `none`.
    // 
    // > After you specify `nodepool_id`, this parameter is not supported.
    shared_ptr<string> cpuPolicy_ {};
    // Specifies whether to store container data and images on a data cloud disk. Valid values:
    // 
    // - `true`: Stores container data and images on a data cloud disk.
    // 
    // - `false`: Does not store container data and images on a data cloud disk.
    // 
    // Default value: `false`.
    // 
    // 
    // Data cloud disk mounting rules:
    // 
    // - If the ECS instance has data cloud disks mounted and the file system of the last data cloud disk is not initialized, the system automatically formats the data cloud disk to EXT4 to store the content of /var/lib/docker and /var/lib/kubelet (the default data directories for the Docker container runtime and the kubelet component, respectively).
    // - If the ECS instance has no data cloud disks mounted, no new data cloud disk is mounted.
    // > If you choose to store data on a data cloud disk and the ECS instance already has data cloud disks mounted, existing data on the data cloud disk is lost. Back up your data in advance.
    shared_ptr<bool> formatDisk_ {};
    // The custom image ID.
    // 
    // - If you specify a custom image ID, the system cloud disk image of the instance is replaced with the custom image.
    // 
    // - If you do not specify this parameter, the default system image is used.
    // 
    // > After you specify `nodepool_id`, this parameter is not supported.
    shared_ptr<string> imageId_ {};
    // The list of ECS instances to be added.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> instances_ {};
    // Specifies whether the node to be added is an edge node, that is, an Edge Node Service (ENS) node. Valid values:
    // 
    // - `true`: The node to be added is an edge node.
    // 
    // - `false`: The node to be added is not an edge node.
    // 
    // Default value: `false`.
    // 
    // > If the node is an edge node, set this parameter to `true` to identify the node type as an ENS node.
    shared_ptr<bool> isEdgeWorker_ {};
    // Specifies whether to retain the original instance name. Valid values:
    // 
    // - `true`: Retains the instance name.
    // 
    // - `false`: Does not retain the instance name.
    // 
    // Default value: `false`.
    shared_ptr<bool> keepInstanceName_ {};
    // The name of the key pair for the instances to be added. Specify either key_pair or password. You can also leave both parameters empty.
    // > After you specify `nodepool_id`, this parameter is not supported.
    shared_ptr<string> keyPair_ {};
    // The node pool ID. If you do not specify this parameter, the node is added to the default node pool.
    shared_ptr<string> nodepoolId_ {};
    // The SSH logon password for the instances to be added. Specify either key_pair or password. You can also leave both parameters empty.
    // 
    // The password must meet the following requirements:
    // - The password must be 8 to 30 characters in length.
    // - The password must contain uppercase letters, lowercase letters, digits, and special characters at the same time.
    // - The password cannot contain backslashes (\\) or double quotation marks (").
    // 
    // The password is encrypted during transmission for security purposes.
    shared_ptr<string> password_ {};
    // The list of ApsaraDB RDS instances.
    shared_ptr<vector<string>> rdsInstances_ {};
    // The container runtime.
    // > After you specify `nodepool_id`, this parameter is not supported.
    // 
    // name: The name of the container runtime. ACK supports the following three container runtimes:
    // 
    // - containerd: Recommended. Supported by all cluster versions.
    // - Sandboxed-Container.runv: Sandboxed container that provides higher isolation. Supported by clusters of version 1.24 or earlier.
    // - docker: Supported by clusters of version 1.22 or earlier.
    // 
    // Default value: containerd.
    // 
    // containerd: The container runtime version. Default value: the latest version.
    // 
    // For more information about changes to the sandboxed container runtime, see [Release notes for the sandboxed container runtime](https://help.aliyun.com/document_detail/160312.html).
    shared_ptr<Runtime> runtime_ {};
    // The node labels. Label definition rules:
    // 
    // - Labels are case-sensitive key-value pairs. You can set up to 20 labels.
    // - Label keys cannot be duplicate and can be up to 64 characters in length.
    // - Label values can be empty and can be up to 128 characters in length.
    // - Label keys and values cannot start with `aliyun`, `acs:`, `https://`, or `http://`.
    // 
    // For more information, see [Labels and Selectors](https://kubernetes.io/docs/concepts/overview/working-with-objects/labels/#syntax-and-character-set).
    // > After you specify `nodepool_id`, this parameter is not supported.
    shared_ptr<vector<Tag>> tags_ {};
    // The instance user data of the node. For more information, see [Generate instance user data](https://help.aliyun.com/document_detail/49121.html).
    // 
    // > After you specify `nodepool_id`, this parameter is not supported.
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
