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
      DARABONBA_PTR_TO_JSON(instances, instances_);
      DARABONBA_PTR_TO_JSON(keep_instance_name, keepInstanceName_);
      DARABONBA_PTR_TO_JSON(password, password_);
    };
    friend void from_json(const Darabonba::Json& j, AttachInstancesToNodePoolRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(format_disk, formatDisk_);
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
        && this->instances_ == nullptr && this->keepInstanceName_ == nullptr && this->password_ == nullptr; };
    // formatDisk Field Functions 
    bool hasFormatDisk() const { return this->formatDisk_ != nullptr;};
    void deleteFormatDisk() { this->formatDisk_ = nullptr;};
    inline bool getFormatDisk() const { DARABONBA_PTR_GET_DEFAULT(formatDisk_, false) };
    inline AttachInstancesToNodePoolRequest& setFormatDisk(bool formatDisk) { DARABONBA_PTR_SET_VALUE(formatDisk_, formatDisk) };


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
    // - If the ECS instance has data cloud disks attached and the file system of the last data cloud disk is not initialized, the system automatically formats the data cloud disk as EXT4 to store /var/lib/docker and /var/lib/kubelet.
    // - If the ECS instance has no data cloud disks attached, no new data cloud disk is mounted.
    // > If you choose to store data on a data cloud disk and the ECS instance already has data cloud disks attached, existing data on the data cloud disk is lost. Back up your data in advance.
    shared_ptr<bool> formatDisk_ {};
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
    // The SSH logon password of the instances to be added.
    shared_ptr<string> password_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
