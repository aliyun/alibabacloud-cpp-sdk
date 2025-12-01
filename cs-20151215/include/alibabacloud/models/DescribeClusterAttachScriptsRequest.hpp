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
        && return this->expired_ == nullptr && return this->formatDisk_ == nullptr && return this->keepInstanceName_ == nullptr && return this->nodepoolId_ == nullptr && return this->oneTimeToken_ == nullptr
        && return this->options_ == nullptr && return this->rdsInstances_ == nullptr; };
    // arch Field Functions 
    bool hasArch() const { return this->arch_ != nullptr;};
    void deleteArch() { this->arch_ = nullptr;};
    inline string arch() const { DARABONBA_PTR_GET_DEFAULT(arch_, "") };
    inline DescribeClusterAttachScriptsRequest& setArch(string arch) { DARABONBA_PTR_SET_VALUE(arch_, arch) };


    // expired Field Functions 
    bool hasExpired() const { return this->expired_ != nullptr;};
    void deleteExpired() { this->expired_ = nullptr;};
    inline int64_t expired() const { DARABONBA_PTR_GET_DEFAULT(expired_, 0L) };
    inline DescribeClusterAttachScriptsRequest& setExpired(int64_t expired) { DARABONBA_PTR_SET_VALUE(expired_, expired) };


    // formatDisk Field Functions 
    bool hasFormatDisk() const { return this->formatDisk_ != nullptr;};
    void deleteFormatDisk() { this->formatDisk_ = nullptr;};
    inline bool formatDisk() const { DARABONBA_PTR_GET_DEFAULT(formatDisk_, false) };
    inline DescribeClusterAttachScriptsRequest& setFormatDisk(bool formatDisk) { DARABONBA_PTR_SET_VALUE(formatDisk_, formatDisk) };


    // keepInstanceName Field Functions 
    bool hasKeepInstanceName() const { return this->keepInstanceName_ != nullptr;};
    void deleteKeepInstanceName() { this->keepInstanceName_ = nullptr;};
    inline bool keepInstanceName() const { DARABONBA_PTR_GET_DEFAULT(keepInstanceName_, false) };
    inline DescribeClusterAttachScriptsRequest& setKeepInstanceName(bool keepInstanceName) { DARABONBA_PTR_SET_VALUE(keepInstanceName_, keepInstanceName) };


    // nodepoolId Field Functions 
    bool hasNodepoolId() const { return this->nodepoolId_ != nullptr;};
    void deleteNodepoolId() { this->nodepoolId_ = nullptr;};
    inline string nodepoolId() const { DARABONBA_PTR_GET_DEFAULT(nodepoolId_, "") };
    inline DescribeClusterAttachScriptsRequest& setNodepoolId(string nodepoolId) { DARABONBA_PTR_SET_VALUE(nodepoolId_, nodepoolId) };


    // oneTimeToken Field Functions 
    bool hasOneTimeToken() const { return this->oneTimeToken_ != nullptr;};
    void deleteOneTimeToken() { this->oneTimeToken_ = nullptr;};
    inline bool oneTimeToken() const { DARABONBA_PTR_GET_DEFAULT(oneTimeToken_, false) };
    inline DescribeClusterAttachScriptsRequest& setOneTimeToken(bool oneTimeToken) { DARABONBA_PTR_SET_VALUE(oneTimeToken_, oneTimeToken) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline string options() const { DARABONBA_PTR_GET_DEFAULT(options_, "") };
    inline DescribeClusterAttachScriptsRequest& setOptions(string options) { DARABONBA_PTR_SET_VALUE(options_, options) };


    // rdsInstances Field Functions 
    bool hasRdsInstances() const { return this->rdsInstances_ != nullptr;};
    void deleteRdsInstances() { this->rdsInstances_ = nullptr;};
    inline const vector<string> & rdsInstances() const { DARABONBA_PTR_GET_CONST(rdsInstances_, vector<string>) };
    inline vector<string> rdsInstances() { DARABONBA_PTR_GET(rdsInstances_, vector<string>) };
    inline DescribeClusterAttachScriptsRequest& setRdsInstances(const vector<string> & rdsInstances) { DARABONBA_PTR_SET_VALUE(rdsInstances_, rdsInstances) };
    inline DescribeClusterAttachScriptsRequest& setRdsInstances(vector<string> && rdsInstances) { DARABONBA_PTR_SET_RVALUE(rdsInstances_, rdsInstances) };


  protected:
    // The CPU architecture of the node. Valid values: `amd64`, `arm`, and `arm64`.
    // 
    // Default value: `amd64`.
    // 
    // >  This parameter is required if you want to add a node to an ACK Edge cluster.
    std::shared_ptr<string> arch_ = nullptr;
    // The expiration time of the token that is generated. The value is a UNIX timestamp. For example, a value of 1739980800 indicates 00:00:00 (UTC+8) on February 20, 2025.
    std::shared_ptr<int64_t> expired_ = nullptr;
    // Specifies whether to mount data disks to an existing instance when you manually add this instance to the cluster. You can use data disks to store container data and images. Valid values:
    // 
    // *   `true`: mounts data disks to the instance that you want to add. After a data disk is mounted, the original data on the disk is erased. Back up data before you mount a data disk.
    // *   `false`: does not mount data disks to the instance.
    // 
    // Default value: `false`.
    // 
    // How a data disk is mounted:
    // 
    // *   If the Elastic Compute Service (ECS) instances are already mounted with data disks and the file system of the last data disk is uninitialized, the system automatically formats this data disk to ext4 and uses the disk to store the data in the /var/lib/docker and /var/lib/kubelet directories.
    // *   If no data disk is mounted to the ECS instance, the system does not purchase a new data disk.
    std::shared_ptr<bool> formatDisk_ = nullptr;
    // Specifies whether to retain the name of an existing instance when it is added to the cluster. If you do not retain the instance name, the instance is renamed in the `worker-k8s-for-cs-<clusterid>` format. Valid values:
    // 
    // *   `true`: retains the instance name.
    // *   `false`: does not retain the instance name.
    // 
    // Default value: `true`.
    std::shared_ptr<bool> keepInstanceName_ = nullptr;
    // The ID of the node pool to which you want to add an existing node.
    // 
    // >  If you do not specify a node pool ID, the node is added to the default node pool.
    std::shared_ptr<string> nodepoolId_ = nullptr;
    std::shared_ptr<bool> oneTimeToken_ = nullptr;
    // The node configurations for the node that you want to add.
    // 
    // >  This parameter is required if you want to add a node to an ACK Edge cluster.
    std::shared_ptr<string> options_ = nullptr;
    // A list of ApsaraDB RDS instances. ECS instances in the cluster are automatically added to the whitelist of the ApsaraDB RDS instances.
    std::shared_ptr<vector<string>> rdsInstances_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
