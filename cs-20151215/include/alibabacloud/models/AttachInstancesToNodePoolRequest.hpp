// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHINSTANCESTONODEPOOLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ATTACHINSTANCESTONODEPOOLREQUEST_HPP_
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
  class AttachInstancesToNodePoolRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachInstancesToNodePoolRequest& obj) { 
      DARABONBA_PTR_TO_JSON(format_disk, formatDisk_);
      DARABONBA_PTR_TO_JSON(format_disk_option, formatDiskOption_);
      DARABONBA_PTR_TO_JSON(instances, instances_);
      DARABONBA_PTR_TO_JSON(keep_instance_name, keepInstanceName_);
      DARABONBA_PTR_TO_JSON(password, password_);
    };
    friend void from_json(const Darabonba::Json& j, AttachInstancesToNodePoolRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(format_disk, formatDisk_);
      DARABONBA_PTR_FROM_JSON(format_disk_option, formatDiskOption_);
      DARABONBA_PTR_FROM_JSON(instances, instances_);
      DARABONBA_PTR_FROM_JSON(keep_instance_name, keepInstanceName_);
      DARABONBA_PTR_FROM_JSON(password, password_);
    };
    AttachInstancesToNodePoolRequest() = default ;
    AttachInstancesToNodePoolRequest(const AttachInstancesToNodePoolRequest &) = default ;
    AttachInstancesToNodePoolRequest(AttachInstancesToNodePoolRequest &&) = default ;
    AttachInstancesToNodePoolRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachInstancesToNodePoolRequest() = default ;
    AttachInstancesToNodePoolRequest& operator=(const AttachInstancesToNodePoolRequest &) = default ;
    AttachInstancesToNodePoolRequest& operator=(AttachInstancesToNodePoolRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->formatDisk_ == nullptr
        && this->formatDiskOption_ == nullptr && this->instances_ == nullptr && this->keepInstanceName_ == nullptr && this->password_ == nullptr; };
    // formatDisk Field Functions 
    bool hasFormatDisk() const { return this->formatDisk_ != nullptr;};
    void deleteFormatDisk() { this->formatDisk_ = nullptr;};
    inline bool getFormatDisk() const { DARABONBA_PTR_GET_DEFAULT(formatDisk_, false) };
    inline AttachInstancesToNodePoolRequest& setFormatDisk(bool formatDisk) { DARABONBA_PTR_SET_VALUE(formatDisk_, formatDisk) };


    // formatDiskOption Field Functions 
    bool hasFormatDiskOption() const { return this->formatDiskOption_ != nullptr;};
    void deleteFormatDiskOption() { this->formatDiskOption_ = nullptr;};
    inline string getFormatDiskOption() const { DARABONBA_PTR_GET_DEFAULT(formatDiskOption_, "") };
    inline AttachInstancesToNodePoolRequest& setFormatDiskOption(string formatDiskOption) { DARABONBA_PTR_SET_VALUE(formatDiskOption_, formatDiskOption) };


    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<string> & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, vector<string>) };
    inline vector<string> getInstances() { DARABONBA_PTR_GET(instances_, vector<string>) };
    inline AttachInstancesToNodePoolRequest& setInstances(const vector<string> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline AttachInstancesToNodePoolRequest& setInstances(vector<string> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // keepInstanceName Field Functions 
    bool hasKeepInstanceName() const { return this->keepInstanceName_ != nullptr;};
    void deleteKeepInstanceName() { this->keepInstanceName_ = nullptr;};
    inline bool getKeepInstanceName() const { DARABONBA_PTR_GET_DEFAULT(keepInstanceName_, false) };
    inline AttachInstancesToNodePoolRequest& setKeepInstanceName(bool keepInstanceName) { DARABONBA_PTR_SET_VALUE(keepInstanceName_, keepInstanceName) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline AttachInstancesToNodePoolRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


  protected:
    // **[Deprecated]** Use `format_disk_option` instead. Valid values:
    // 
    // - `true`: equivalent to setting `format_disk_option` to `DataDisk`.
    // - `false`: equivalent to setting `format_disk_option` to `SystemDisk`.
    shared_ptr<bool> formatDisk_ {};
    // The disk formatting method. This parameter is mutually exclusive with `format_disk` set to `true`. Valid values:
    // 
    // - `SystemDisk`: No additional initialization is performed. Container runtime data is stored on the system cloud disk or any disk that is already mounted to the relevant directory during import.
    // - `DataDisk`: If a data cloud disk or local disk is mounted, the last disk is formatted and mounted to store container runtime data.
    // - `NodePoolDiskConfig`: Initializes data cloud disks based on the configuration of the imported node pool. Cloud disks and elastic ephemeral disks are matched based on the `disk_name` field of the node pool and the `DiskName` field of the block storage. Local disks are matched sequentially based on the PCI address order. Node pool configurations that do not match any disk are ignored.
    // 
    // >Warning: The `DataDisk` option is retained only for historical compatibility and is strongly discouraged.
    // This option uses the last disk in lexicographical order of device names under `/dev` (NVMe is preferred). Note that nvme9 takes precedence over nvme10. Operating systems with newer kernels such as Alinux 4 cannot guarantee a stable device order.
    // 
    // 
    // Disks with recognizable file systems during import skip the formatting step and are mounted directly.
    shared_ptr<string> formatDiskOption_ {};
    // The list of ECS instances to be added.
    shared_ptr<vector<string>> instances_ {};
    // Specifies whether to retain the original instance name. Valid values:
    // 
    // - `true`: Retains the instance name.
    // 
    // - `false`: Does not retain the instance name.
    // 
    // Default value: `true`.
    shared_ptr<bool> keepInstanceName_ {};
    // The SSH logon password for the instances to be added.
    shared_ptr<string> password_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
