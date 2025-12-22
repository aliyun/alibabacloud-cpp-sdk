// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROTOCOLMOUNTTARGETRESPONSEBODYPROTOCOLMOUNTTARGETS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROTOCOLMOUNTTARGETRESPONSEBODYPROTOCOLMOUNTTARGETS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeProtocolMountTargetResponseBodyProtocolMountTargets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProtocolMountTargetResponseBodyProtocolMountTargets& obj) { 
      DARABONBA_PTR_TO_JSON(AccessGroupName, accessGroupName_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ExportId, exportId_);
      DARABONBA_PTR_TO_JSON(FsetId, fsetId_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(ProtocolMountTargetDomain, protocolMountTargetDomain_);
      DARABONBA_PTR_TO_JSON(ProtocolServiceId, protocolServiceId_);
      DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProtocolMountTargetResponseBodyProtocolMountTargets& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessGroupName, accessGroupName_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ExportId, exportId_);
      DARABONBA_PTR_FROM_JSON(FsetId, fsetId_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(ProtocolMountTargetDomain, protocolMountTargetDomain_);
      DARABONBA_PTR_FROM_JSON(ProtocolServiceId, protocolServiceId_);
      DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    DescribeProtocolMountTargetResponseBodyProtocolMountTargets() = default ;
    DescribeProtocolMountTargetResponseBodyProtocolMountTargets(const DescribeProtocolMountTargetResponseBodyProtocolMountTargets &) = default ;
    DescribeProtocolMountTargetResponseBodyProtocolMountTargets(DescribeProtocolMountTargetResponseBodyProtocolMountTargets &&) = default ;
    DescribeProtocolMountTargetResponseBodyProtocolMountTargets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProtocolMountTargetResponseBodyProtocolMountTargets() = default ;
    DescribeProtocolMountTargetResponseBodyProtocolMountTargets& operator=(const DescribeProtocolMountTargetResponseBodyProtocolMountTargets &) = default ;
    DescribeProtocolMountTargetResponseBodyProtocolMountTargets& operator=(DescribeProtocolMountTargetResponseBodyProtocolMountTargets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessGroupName_ == nullptr
        && return this->createTime_ == nullptr && return this->description_ == nullptr && return this->exportId_ == nullptr && return this->fsetId_ == nullptr && return this->path_ == nullptr
        && return this->protocolMountTargetDomain_ == nullptr && return this->protocolServiceId_ == nullptr && return this->protocolType_ == nullptr && return this->status_ == nullptr && return this->vSwitchId_ == nullptr
        && return this->vSwitchIds_ == nullptr && return this->vpcId_ == nullptr; };
    // accessGroupName Field Functions 
    bool hasAccessGroupName() const { return this->accessGroupName_ != nullptr;};
    void deleteAccessGroupName() { this->accessGroupName_ = nullptr;};
    inline string accessGroupName() const { DARABONBA_PTR_GET_DEFAULT(accessGroupName_, "") };
    inline DescribeProtocolMountTargetResponseBodyProtocolMountTargets& setAccessGroupName(string accessGroupName) { DARABONBA_PTR_SET_VALUE(accessGroupName_, accessGroupName) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeProtocolMountTargetResponseBodyProtocolMountTargets& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeProtocolMountTargetResponseBodyProtocolMountTargets& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // exportId Field Functions 
    bool hasExportId() const { return this->exportId_ != nullptr;};
    void deleteExportId() { this->exportId_ = nullptr;};
    inline string exportId() const { DARABONBA_PTR_GET_DEFAULT(exportId_, "") };
    inline DescribeProtocolMountTargetResponseBodyProtocolMountTargets& setExportId(string exportId) { DARABONBA_PTR_SET_VALUE(exportId_, exportId) };


    // fsetId Field Functions 
    bool hasFsetId() const { return this->fsetId_ != nullptr;};
    void deleteFsetId() { this->fsetId_ = nullptr;};
    inline string fsetId() const { DARABONBA_PTR_GET_DEFAULT(fsetId_, "") };
    inline DescribeProtocolMountTargetResponseBodyProtocolMountTargets& setFsetId(string fsetId) { DARABONBA_PTR_SET_VALUE(fsetId_, fsetId) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline DescribeProtocolMountTargetResponseBodyProtocolMountTargets& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // protocolMountTargetDomain Field Functions 
    bool hasProtocolMountTargetDomain() const { return this->protocolMountTargetDomain_ != nullptr;};
    void deleteProtocolMountTargetDomain() { this->protocolMountTargetDomain_ = nullptr;};
    inline string protocolMountTargetDomain() const { DARABONBA_PTR_GET_DEFAULT(protocolMountTargetDomain_, "") };
    inline DescribeProtocolMountTargetResponseBodyProtocolMountTargets& setProtocolMountTargetDomain(string protocolMountTargetDomain) { DARABONBA_PTR_SET_VALUE(protocolMountTargetDomain_, protocolMountTargetDomain) };


    // protocolServiceId Field Functions 
    bool hasProtocolServiceId() const { return this->protocolServiceId_ != nullptr;};
    void deleteProtocolServiceId() { this->protocolServiceId_ = nullptr;};
    inline string protocolServiceId() const { DARABONBA_PTR_GET_DEFAULT(protocolServiceId_, "") };
    inline DescribeProtocolMountTargetResponseBodyProtocolMountTargets& setProtocolServiceId(string protocolServiceId) { DARABONBA_PTR_SET_VALUE(protocolServiceId_, protocolServiceId) };


    // protocolType Field Functions 
    bool hasProtocolType() const { return this->protocolType_ != nullptr;};
    void deleteProtocolType() { this->protocolType_ = nullptr;};
    inline string protocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
    inline DescribeProtocolMountTargetResponseBodyProtocolMountTargets& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeProtocolMountTargetResponseBodyProtocolMountTargets& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeProtocolMountTargetResponseBodyProtocolMountTargets& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline const vector<string> & vSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
    inline vector<string> vSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
    inline DescribeProtocolMountTargetResponseBodyProtocolMountTargets& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
    inline DescribeProtocolMountTargetResponseBodyProtocolMountTargets& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeProtocolMountTargetResponseBodyProtocolMountTargets& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The permission group that is associated with the export directory of the protocol service.
    std::shared_ptr<string> accessGroupName_ = nullptr;
    // The time when the export directory of the protocol service was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The description of the export directory for the protocol service.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the export directory for the protocol service.
    std::shared_ptr<string> exportId_ = nullptr;
    // The fileset ID of the export directory for the protocol service.
    std::shared_ptr<string> fsetId_ = nullptr;
    // The export directory of the protocol service.
    std::shared_ptr<string> path_ = nullptr;
    // The domain name of the export directory for the protocol service.
    std::shared_ptr<string> protocolMountTargetDomain_ = nullptr;
    // The ID of the protocol service.
    std::shared_ptr<string> protocolServiceId_ = nullptr;
    // The protocol type supported by the protocol service.
    std::shared_ptr<string> protocolType_ = nullptr;
    // The status of the mount target.
    std::shared_ptr<string> status_ = nullptr;
    // The vSwitch ID of the export directory for the protocol service.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    std::shared_ptr<vector<string>> vSwitchIds_ = nullptr;
    // The VPC ID of the export directory for the protocol service.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
