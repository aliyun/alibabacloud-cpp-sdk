// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROTOCOLMOUNTTARGETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROTOCOLMOUNTTARGETRESPONSEBODY_HPP_
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
  class DescribeProtocolMountTargetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProtocolMountTargetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ProtocolMountTargets, protocolMountTargets_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProtocolMountTargetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ProtocolMountTargets, protocolMountTargets_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeProtocolMountTargetResponseBody() = default ;
    DescribeProtocolMountTargetResponseBody(const DescribeProtocolMountTargetResponseBody &) = default ;
    DescribeProtocolMountTargetResponseBody(DescribeProtocolMountTargetResponseBody &&) = default ;
    DescribeProtocolMountTargetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProtocolMountTargetResponseBody() = default ;
    DescribeProtocolMountTargetResponseBody& operator=(const DescribeProtocolMountTargetResponseBody &) = default ;
    DescribeProtocolMountTargetResponseBody& operator=(DescribeProtocolMountTargetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ProtocolMountTargets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ProtocolMountTargets& obj) { 
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
      friend void from_json(const Darabonba::Json& j, ProtocolMountTargets& obj) { 
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
      ProtocolMountTargets() = default ;
      ProtocolMountTargets(const ProtocolMountTargets &) = default ;
      ProtocolMountTargets(ProtocolMountTargets &&) = default ;
      ProtocolMountTargets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ProtocolMountTargets() = default ;
      ProtocolMountTargets& operator=(const ProtocolMountTargets &) = default ;
      ProtocolMountTargets& operator=(ProtocolMountTargets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accessGroupName_ == nullptr
        && this->createTime_ == nullptr && this->description_ == nullptr && this->exportId_ == nullptr && this->fsetId_ == nullptr && this->path_ == nullptr
        && this->protocolMountTargetDomain_ == nullptr && this->protocolServiceId_ == nullptr && this->protocolType_ == nullptr && this->status_ == nullptr && this->vSwitchId_ == nullptr
        && this->vSwitchIds_ == nullptr && this->vpcId_ == nullptr; };
      // accessGroupName Field Functions 
      bool hasAccessGroupName() const { return this->accessGroupName_ != nullptr;};
      void deleteAccessGroupName() { this->accessGroupName_ = nullptr;};
      inline string getAccessGroupName() const { DARABONBA_PTR_GET_DEFAULT(accessGroupName_, "") };
      inline ProtocolMountTargets& setAccessGroupName(string accessGroupName) { DARABONBA_PTR_SET_VALUE(accessGroupName_, accessGroupName) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline ProtocolMountTargets& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ProtocolMountTargets& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // exportId Field Functions 
      bool hasExportId() const { return this->exportId_ != nullptr;};
      void deleteExportId() { this->exportId_ = nullptr;};
      inline string getExportId() const { DARABONBA_PTR_GET_DEFAULT(exportId_, "") };
      inline ProtocolMountTargets& setExportId(string exportId) { DARABONBA_PTR_SET_VALUE(exportId_, exportId) };


      // fsetId Field Functions 
      bool hasFsetId() const { return this->fsetId_ != nullptr;};
      void deleteFsetId() { this->fsetId_ = nullptr;};
      inline string getFsetId() const { DARABONBA_PTR_GET_DEFAULT(fsetId_, "") };
      inline ProtocolMountTargets& setFsetId(string fsetId) { DARABONBA_PTR_SET_VALUE(fsetId_, fsetId) };


      // path Field Functions 
      bool hasPath() const { return this->path_ != nullptr;};
      void deletePath() { this->path_ = nullptr;};
      inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
      inline ProtocolMountTargets& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


      // protocolMountTargetDomain Field Functions 
      bool hasProtocolMountTargetDomain() const { return this->protocolMountTargetDomain_ != nullptr;};
      void deleteProtocolMountTargetDomain() { this->protocolMountTargetDomain_ = nullptr;};
      inline string getProtocolMountTargetDomain() const { DARABONBA_PTR_GET_DEFAULT(protocolMountTargetDomain_, "") };
      inline ProtocolMountTargets& setProtocolMountTargetDomain(string protocolMountTargetDomain) { DARABONBA_PTR_SET_VALUE(protocolMountTargetDomain_, protocolMountTargetDomain) };


      // protocolServiceId Field Functions 
      bool hasProtocolServiceId() const { return this->protocolServiceId_ != nullptr;};
      void deleteProtocolServiceId() { this->protocolServiceId_ = nullptr;};
      inline string getProtocolServiceId() const { DARABONBA_PTR_GET_DEFAULT(protocolServiceId_, "") };
      inline ProtocolMountTargets& setProtocolServiceId(string protocolServiceId) { DARABONBA_PTR_SET_VALUE(protocolServiceId_, protocolServiceId) };


      // protocolType Field Functions 
      bool hasProtocolType() const { return this->protocolType_ != nullptr;};
      void deleteProtocolType() { this->protocolType_ = nullptr;};
      inline string getProtocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
      inline ProtocolMountTargets& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ProtocolMountTargets& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline ProtocolMountTargets& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      // vSwitchIds Field Functions 
      bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
      void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
      inline const vector<string> & getVSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
      inline vector<string> getVSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
      inline ProtocolMountTargets& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
      inline ProtocolMountTargets& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline ProtocolMountTargets& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      // The permission group that is associated with the export directory of the protocol service.
      shared_ptr<string> accessGroupName_ {};
      // The time when the export directory of the protocol service was created.
      shared_ptr<string> createTime_ {};
      // The description of the export directory for the protocol service.
      shared_ptr<string> description_ {};
      // The ID of the export directory for the protocol service.
      shared_ptr<string> exportId_ {};
      // The fileset ID of the export directory for the protocol service.
      shared_ptr<string> fsetId_ {};
      // The export directory of the protocol service.
      shared_ptr<string> path_ {};
      // The domain name of the export directory for the protocol service.
      shared_ptr<string> protocolMountTargetDomain_ {};
      // The ID of the protocol service.
      shared_ptr<string> protocolServiceId_ {};
      // The protocol type supported by the protocol service.
      shared_ptr<string> protocolType_ {};
      // The status of the mount target.
      shared_ptr<string> status_ {};
      // The vSwitch ID of the export directory for the protocol service.
      shared_ptr<string> vSwitchId_ {};
      shared_ptr<vector<string>> vSwitchIds_ {};
      // The VPC ID of the export directory for the protocol service.
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->protocolMountTargets_ == nullptr && this->requestId_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeProtocolMountTargetResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // protocolMountTargets Field Functions 
    bool hasProtocolMountTargets() const { return this->protocolMountTargets_ != nullptr;};
    void deleteProtocolMountTargets() { this->protocolMountTargets_ = nullptr;};
    inline const vector<DescribeProtocolMountTargetResponseBody::ProtocolMountTargets> & getProtocolMountTargets() const { DARABONBA_PTR_GET_CONST(protocolMountTargets_, vector<DescribeProtocolMountTargetResponseBody::ProtocolMountTargets>) };
    inline vector<DescribeProtocolMountTargetResponseBody::ProtocolMountTargets> getProtocolMountTargets() { DARABONBA_PTR_GET(protocolMountTargets_, vector<DescribeProtocolMountTargetResponseBody::ProtocolMountTargets>) };
    inline DescribeProtocolMountTargetResponseBody& setProtocolMountTargets(const vector<DescribeProtocolMountTargetResponseBody::ProtocolMountTargets> & protocolMountTargets) { DARABONBA_PTR_SET_VALUE(protocolMountTargets_, protocolMountTargets) };
    inline DescribeProtocolMountTargetResponseBody& setProtocolMountTargets(vector<DescribeProtocolMountTargetResponseBody::ProtocolMountTargets> && protocolMountTargets) { DARABONBA_PTR_SET_RVALUE(protocolMountTargets_, protocolMountTargets) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeProtocolMountTargetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The export directories of the protocol service.
    shared_ptr<vector<DescribeProtocolMountTargetResponseBody::ProtocolMountTargets>> protocolMountTargets_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
