// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERATTACHSCRIPTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERATTACHSCRIPTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClusterAttachScriptsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterAttachScriptsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(arch, arch_);
      DARABONBA_PTR_TO_JSON(expired, expired_);
      DARABONBA_PTR_TO_JSON(format_disk, formatDisk_);
      DARABONBA_PTR_TO_JSON(keep_instance_name, keepInstanceName_);
      DARABONBA_PTR_TO_JSON(nodepool_id, nodepoolId_);
      DARABONBA_PTR_TO_JSON(one_time_token, oneTimeToken_);
      DARABONBA_PTR_TO_JSON(options, options_);
      DARABONBA_PTR_TO_JSON(rds_instances, rdsInstances_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterAttachScriptsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(arch, arch_);
      DARABONBA_PTR_FROM_JSON(expired, expired_);
      DARABONBA_PTR_FROM_JSON(format_disk, formatDisk_);
      DARABONBA_PTR_FROM_JSON(keep_instance_name, keepInstanceName_);
      DARABONBA_PTR_FROM_JSON(nodepool_id, nodepoolId_);
      DARABONBA_PTR_FROM_JSON(one_time_token, oneTimeToken_);
      DARABONBA_PTR_FROM_JSON(options, options_);
      DARABONBA_PTR_FROM_JSON(rds_instances, rdsInstances_);
    };
    DescribeClusterAttachScriptsRequest() = default ;
    DescribeClusterAttachScriptsRequest(const DescribeClusterAttachScriptsRequest &) = default ;
    DescribeClusterAttachScriptsRequest(DescribeClusterAttachScriptsRequest &&) = default ;
    DescribeClusterAttachScriptsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterAttachScriptsRequest() = default ;
    DescribeClusterAttachScriptsRequest& operator=(const DescribeClusterAttachScriptsRequest &) = default ;
    DescribeClusterAttachScriptsRequest& operator=(DescribeClusterAttachScriptsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->arch_ == nullptr
        && this->expired_ == nullptr && this->formatDisk_ == nullptr && this->keepInstanceName_ == nullptr && this->nodepoolId_ == nullptr && this->oneTimeToken_ == nullptr
        && this->options_ == nullptr && this->rdsInstances_ == nullptr; };
    // arch Field Functions 
    bool hasArch() const { return this->arch_ != nullptr;};
    void deleteArch() { this->arch_ = nullptr;};
    inline string getArch() const { DARABONBA_PTR_GET_DEFAULT(arch_, "") };
    inline DescribeClusterAttachScriptsRequest& setArch(string arch) { DARABONBA_PTR_SET_VALUE(arch_, arch) };


    // expired Field Functions 
    bool hasExpired() const { return this->expired_ != nullptr;};
    void deleteExpired() { this->expired_ = nullptr;};
    inline int64_t getExpired() const { DARABONBA_PTR_GET_DEFAULT(expired_, 0L) };
    inline DescribeClusterAttachScriptsRequest& setExpired(int64_t expired) { DARABONBA_PTR_SET_VALUE(expired_, expired) };


    // formatDisk Field Functions 
    bool hasFormatDisk() const { return this->formatDisk_ != nullptr;};
    void deleteFormatDisk() { this->formatDisk_ = nullptr;};
    inline bool getFormatDisk() const { DARABONBA_PTR_GET_DEFAULT(formatDisk_, false) };
    inline DescribeClusterAttachScriptsRequest& setFormatDisk(bool formatDisk) { DARABONBA_PTR_SET_VALUE(formatDisk_, formatDisk) };


    // keepInstanceName Field Functions 
    bool hasKeepInstanceName() const { return this->keepInstanceName_ != nullptr;};
    void deleteKeepInstanceName() { this->keepInstanceName_ = nullptr;};
    inline bool getKeepInstanceName() const { DARABONBA_PTR_GET_DEFAULT(keepInstanceName_, false) };
    inline DescribeClusterAttachScriptsRequest& setKeepInstanceName(bool keepInstanceName) { DARABONBA_PTR_SET_VALUE(keepInstanceName_, keepInstanceName) };


    // nodepoolId Field Functions 
    bool hasNodepoolId() const { return this->nodepoolId_ != nullptr;};
    void deleteNodepoolId() { this->nodepoolId_ = nullptr;};
    inline string getNodepoolId() const { DARABONBA_PTR_GET_DEFAULT(nodepoolId_, "") };
    inline DescribeClusterAttachScriptsRequest& setNodepoolId(string nodepoolId) { DARABONBA_PTR_SET_VALUE(nodepoolId_, nodepoolId) };


    // oneTimeToken Field Functions 
    bool hasOneTimeToken() const { return this->oneTimeToken_ != nullptr;};
    void deleteOneTimeToken() { this->oneTimeToken_ = nullptr;};
    inline bool getOneTimeToken() const { DARABONBA_PTR_GET_DEFAULT(oneTimeToken_, false) };
    inline DescribeClusterAttachScriptsRequest& setOneTimeToken(bool oneTimeToken) { DARABONBA_PTR_SET_VALUE(oneTimeToken_, oneTimeToken) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline string getOptions() const { DARABONBA_PTR_GET_DEFAULT(options_, "") };
    inline DescribeClusterAttachScriptsRequest& setOptions(string options) { DARABONBA_PTR_SET_VALUE(options_, options) };


    // rdsInstances Field Functions 
    bool hasRdsInstances() const { return this->rdsInstances_ != nullptr;};
    void deleteRdsInstances() { this->rdsInstances_ = nullptr;};
    inline const vector<string> & getRdsInstances() const { DARABONBA_PTR_GET_CONST(rdsInstances_, vector<string>) };
    inline vector<string> getRdsInstances() { DARABONBA_PTR_GET(rdsInstances_, vector<string>) };
    inline DescribeClusterAttachScriptsRequest& setRdsInstances(const vector<string> & rdsInstances) { DARABONBA_PTR_SET_VALUE(rdsInstances_, rdsInstances) };
    inline DescribeClusterAttachScriptsRequest& setRdsInstances(vector<string> && rdsInstances) { DARABONBA_PTR_SET_RVALUE(rdsInstances_, rdsInstances) };


  protected:
    // The CPU architecture of the node. Supported CPU architectures include `amd64`, `arm`, and `arm64`.
    // 
    // Default value: `amd64`.
    // 
    // > This parameter is required if the cluster is a managed edge cluster.
    shared_ptr<string> arch_ {};
    // The Unix timestamp that indicates when the generated token expires. For example, the timestamp 1739980800 corresponds to 00:00:00 on February 20, 2025 (UTC).
    shared_ptr<int64_t> expired_ {};
    // Specifies whether to mount a data disk to the instance and store containers and images on the data disk when you manually add an existing instance to the cluster. Valid values:
    // 
    // - `true`: Mounts the data disk to the instance. The original data on the data disk will be erased. Back up your data before you proceed.
    // 
    // - `false`: Does not mount the data disk to the instance.
    // 
    // Default value: `false`.
    // 
    // Data disk mounting rules:
    // 
    // - If an ECS instance has data disks attached and the last data disk is uninitialized, the system automatically formats that disk to ext4 and uses it to store content for `/var/lib/docker` and `/var/lib/kubelet`.
    // 
    // - If no data disk is attached to the ECS instance, the system does not mount a new data disk.
    shared_ptr<bool> formatDisk_ {};
    // Specifies whether to retain the instance name when the instance is added to the cluster. If you do not retain the instance name, the system renames the instance to use the `worker-k8s-for-cs-<clusterid>` format. Valid values:
    // 
    // - `true`: Retains the instance name.
    // 
    // - `false`: Does not retain the instance name. The system renames the instance based on a system rule.
    // 
    // Default value: `true`.
    shared_ptr<bool> keepInstanceName_ {};
    // The node pool ID. You can add the node to a specific node pool.
    // 
    // > If you do not specify a node pool ID, the node is added to the default node pool.
    shared_ptr<string> nodepoolId_ {};
    shared_ptr<bool> oneTimeToken_ {};
    // The configuration parameters for node attachment.
    // 
    // > This parameter is required if the cluster is a managed edge cluster.
    shared_ptr<string> options_ {};
    // If you specify a list of RDS instances, the system automatically adds the ECS instances of the cluster nodes to the access whitelists of the specified RDS instances.
    shared_ptr<vector<string>> rdsInstances_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
