// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFILESYSTEMSRESPONSEBODYFILESYSTEMSMOUNTTARGETS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFILESYSTEMSRESPONSEBODYFILESYSTEMSMOUNTTARGETS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeFileSystemsResponseBodyFileSystemsMountTargets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFileSystemsResponseBodyFileSystemsMountTargets& obj) { 
      DARABONBA_PTR_TO_JSON(MountTargetDomain, mountTargetDomain_);
      DARABONBA_PTR_TO_JSON(MountTargetName, mountTargetName_);
      DARABONBA_PTR_TO_JSON(NetWorkId, netWorkId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFileSystemsResponseBodyFileSystemsMountTargets& obj) { 
      DARABONBA_PTR_FROM_JSON(MountTargetDomain, mountTargetDomain_);
      DARABONBA_PTR_FROM_JSON(MountTargetName, mountTargetName_);
      DARABONBA_PTR_FROM_JSON(NetWorkId, netWorkId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeFileSystemsResponseBodyFileSystemsMountTargets() = default ;
    DescribeFileSystemsResponseBodyFileSystemsMountTargets(const DescribeFileSystemsResponseBodyFileSystemsMountTargets &) = default ;
    DescribeFileSystemsResponseBodyFileSystemsMountTargets(DescribeFileSystemsResponseBodyFileSystemsMountTargets &&) = default ;
    DescribeFileSystemsResponseBodyFileSystemsMountTargets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFileSystemsResponseBodyFileSystemsMountTargets() = default ;
    DescribeFileSystemsResponseBodyFileSystemsMountTargets& operator=(const DescribeFileSystemsResponseBodyFileSystemsMountTargets &) = default ;
    DescribeFileSystemsResponseBodyFileSystemsMountTargets& operator=(DescribeFileSystemsResponseBodyFileSystemsMountTargets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mountTargetDomain_ == nullptr
        && return this->mountTargetName_ == nullptr && return this->netWorkId_ == nullptr && return this->status_ == nullptr; };
    // mountTargetDomain Field Functions 
    bool hasMountTargetDomain() const { return this->mountTargetDomain_ != nullptr;};
    void deleteMountTargetDomain() { this->mountTargetDomain_ = nullptr;};
    inline string mountTargetDomain() const { DARABONBA_PTR_GET_DEFAULT(mountTargetDomain_, "") };
    inline DescribeFileSystemsResponseBodyFileSystemsMountTargets& setMountTargetDomain(string mountTargetDomain) { DARABONBA_PTR_SET_VALUE(mountTargetDomain_, mountTargetDomain) };


    // mountTargetName Field Functions 
    bool hasMountTargetName() const { return this->mountTargetName_ != nullptr;};
    void deleteMountTargetName() { this->mountTargetName_ = nullptr;};
    inline string mountTargetName() const { DARABONBA_PTR_GET_DEFAULT(mountTargetName_, "") };
    inline DescribeFileSystemsResponseBodyFileSystemsMountTargets& setMountTargetName(string mountTargetName) { DARABONBA_PTR_SET_VALUE(mountTargetName_, mountTargetName) };


    // netWorkId Field Functions 
    bool hasNetWorkId() const { return this->netWorkId_ != nullptr;};
    void deleteNetWorkId() { this->netWorkId_ = nullptr;};
    inline string netWorkId() const { DARABONBA_PTR_GET_DEFAULT(netWorkId_, "") };
    inline DescribeFileSystemsResponseBodyFileSystemsMountTargets& setNetWorkId(string netWorkId) { DARABONBA_PTR_SET_VALUE(netWorkId_, netWorkId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeFileSystemsResponseBodyFileSystemsMountTargets& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The path of the mount target.
    std::shared_ptr<string> mountTargetDomain_ = nullptr;
    // The name of the mount target.
    std::shared_ptr<string> mountTargetName_ = nullptr;
    // The ID of the network.
    std::shared_ptr<string> netWorkId_ = nullptr;
    // The status of the mount target. Valid values:
    // 
    // *   active: The mount target is available.
    // *   inactive: The mount target is unavailable.
    // *   pending: The task is running.
    // *   deleting: The mount target is being deleted.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
