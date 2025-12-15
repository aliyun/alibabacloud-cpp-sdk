// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAVAILABLEFILESYSTEMSRESPONSEBODYFILESYSTEMLISTMOUNTTARGETLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTAVAILABLEFILESYSTEMSRESPONSEBODYFILESYSTEMLISTMOUNTTARGETLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class ListAvailableFileSystemsResponseBodyFileSystemListMountTargetList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAvailableFileSystemsResponseBodyFileSystemListMountTargetList& obj) { 
      DARABONBA_PTR_TO_JSON(MountTargetDomain, mountTargetDomain_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAvailableFileSystemsResponseBodyFileSystemListMountTargetList& obj) { 
      DARABONBA_PTR_FROM_JSON(MountTargetDomain, mountTargetDomain_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    ListAvailableFileSystemsResponseBodyFileSystemListMountTargetList() = default ;
    ListAvailableFileSystemsResponseBodyFileSystemListMountTargetList(const ListAvailableFileSystemsResponseBodyFileSystemListMountTargetList &) = default ;
    ListAvailableFileSystemsResponseBodyFileSystemListMountTargetList(ListAvailableFileSystemsResponseBodyFileSystemListMountTargetList &&) = default ;
    ListAvailableFileSystemsResponseBodyFileSystemListMountTargetList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAvailableFileSystemsResponseBodyFileSystemListMountTargetList() = default ;
    ListAvailableFileSystemsResponseBodyFileSystemListMountTargetList& operator=(const ListAvailableFileSystemsResponseBodyFileSystemListMountTargetList &) = default ;
    ListAvailableFileSystemsResponseBodyFileSystemListMountTargetList& operator=(ListAvailableFileSystemsResponseBodyFileSystemListMountTargetList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mountTargetDomain_ == nullptr
        && return this->networkType_ == nullptr && return this->status_ == nullptr && return this->vSwitchId_ == nullptr && return this->vpcId_ == nullptr; };
    // mountTargetDomain Field Functions 
    bool hasMountTargetDomain() const { return this->mountTargetDomain_ != nullptr;};
    void deleteMountTargetDomain() { this->mountTargetDomain_ = nullptr;};
    inline string mountTargetDomain() const { DARABONBA_PTR_GET_DEFAULT(mountTargetDomain_, "") };
    inline ListAvailableFileSystemsResponseBodyFileSystemListMountTargetList& setMountTargetDomain(string mountTargetDomain) { DARABONBA_PTR_SET_VALUE(mountTargetDomain_, mountTargetDomain) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string networkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline ListAvailableFileSystemsResponseBodyFileSystemListMountTargetList& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListAvailableFileSystemsResponseBodyFileSystemListMountTargetList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline ListAvailableFileSystemsResponseBodyFileSystemListMountTargetList& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListAvailableFileSystemsResponseBodyFileSystemListMountTargetList& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The address of the mount target.
    std::shared_ptr<string> mountTargetDomain_ = nullptr;
    // The network type. Valid values: Valid values:
    // 
    // *   vpc
    std::shared_ptr<string> networkType_ = nullptr;
    // The state of the mount target. Valid values:
    // 
    // *   Active: The mount target is available.
    // *   Inactive: The mount target is unavailable.
    // *   Pending: The mount target is being mounted.
    // *   Deleting: The mount target is being deleted.
    std::shared_ptr<string> status_ = nullptr;
    // The vSwitch ID.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The virtual private cloud (VPC) ID.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
