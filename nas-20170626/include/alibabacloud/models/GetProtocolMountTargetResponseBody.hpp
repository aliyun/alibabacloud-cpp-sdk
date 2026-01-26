// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROTOCOLMOUNTTARGETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPROTOCOLMOUNTTARGETRESPONSEBODY_HPP_
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
  class GetProtocolMountTargetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProtocolMountTargetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ProtocolMountTarget, protocolMountTarget_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetProtocolMountTargetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ProtocolMountTarget, protocolMountTarget_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetProtocolMountTargetResponseBody() = default ;
    GetProtocolMountTargetResponseBody(const GetProtocolMountTargetResponseBody &) = default ;
    GetProtocolMountTargetResponseBody(GetProtocolMountTargetResponseBody &&) = default ;
    GetProtocolMountTargetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProtocolMountTargetResponseBody() = default ;
    GetProtocolMountTargetResponseBody& operator=(const GetProtocolMountTargetResponseBody &) = default ;
    GetProtocolMountTargetResponseBody& operator=(GetProtocolMountTargetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ProtocolMountTarget : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ProtocolMountTarget& obj) { 
        DARABONBA_PTR_TO_JSON(AccessGroupName, accessGroupName_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(ExportId, exportId_);
        DARABONBA_PTR_TO_JSON(FsetId, fsetId_);
        DARABONBA_PTR_TO_JSON(Path, path_);
        DARABONBA_PTR_TO_JSON(ProtocolMountTargetDomain, protocolMountTargetDomain_);
        DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, ProtocolMountTarget& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessGroupName, accessGroupName_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(ExportId, exportId_);
        DARABONBA_PTR_FROM_JSON(FsetId, fsetId_);
        DARABONBA_PTR_FROM_JSON(Path, path_);
        DARABONBA_PTR_FROM_JSON(ProtocolMountTargetDomain, protocolMountTargetDomain_);
        DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      };
      ProtocolMountTarget() = default ;
      ProtocolMountTarget(const ProtocolMountTarget &) = default ;
      ProtocolMountTarget(ProtocolMountTarget &&) = default ;
      ProtocolMountTarget(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ProtocolMountTarget() = default ;
      ProtocolMountTarget& operator=(const ProtocolMountTarget &) = default ;
      ProtocolMountTarget& operator=(ProtocolMountTarget &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accessGroupName_ == nullptr
        && this->createTime_ == nullptr && this->description_ == nullptr && this->exportId_ == nullptr && this->fsetId_ == nullptr && this->path_ == nullptr
        && this->protocolMountTargetDomain_ == nullptr && this->protocolType_ == nullptr && this->status_ == nullptr && this->vSwitchId_ == nullptr && this->vSwitchIds_ == nullptr
        && this->vpcId_ == nullptr; };
      // accessGroupName Field Functions 
      bool hasAccessGroupName() const { return this->accessGroupName_ != nullptr;};
      void deleteAccessGroupName() { this->accessGroupName_ = nullptr;};
      inline string getAccessGroupName() const { DARABONBA_PTR_GET_DEFAULT(accessGroupName_, "") };
      inline ProtocolMountTarget& setAccessGroupName(string accessGroupName) { DARABONBA_PTR_SET_VALUE(accessGroupName_, accessGroupName) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline ProtocolMountTarget& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ProtocolMountTarget& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // exportId Field Functions 
      bool hasExportId() const { return this->exportId_ != nullptr;};
      void deleteExportId() { this->exportId_ = nullptr;};
      inline string getExportId() const { DARABONBA_PTR_GET_DEFAULT(exportId_, "") };
      inline ProtocolMountTarget& setExportId(string exportId) { DARABONBA_PTR_SET_VALUE(exportId_, exportId) };


      // fsetId Field Functions 
      bool hasFsetId() const { return this->fsetId_ != nullptr;};
      void deleteFsetId() { this->fsetId_ = nullptr;};
      inline string getFsetId() const { DARABONBA_PTR_GET_DEFAULT(fsetId_, "") };
      inline ProtocolMountTarget& setFsetId(string fsetId) { DARABONBA_PTR_SET_VALUE(fsetId_, fsetId) };


      // path Field Functions 
      bool hasPath() const { return this->path_ != nullptr;};
      void deletePath() { this->path_ = nullptr;};
      inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
      inline ProtocolMountTarget& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


      // protocolMountTargetDomain Field Functions 
      bool hasProtocolMountTargetDomain() const { return this->protocolMountTargetDomain_ != nullptr;};
      void deleteProtocolMountTargetDomain() { this->protocolMountTargetDomain_ = nullptr;};
      inline string getProtocolMountTargetDomain() const { DARABONBA_PTR_GET_DEFAULT(protocolMountTargetDomain_, "") };
      inline ProtocolMountTarget& setProtocolMountTargetDomain(string protocolMountTargetDomain) { DARABONBA_PTR_SET_VALUE(protocolMountTargetDomain_, protocolMountTargetDomain) };


      // protocolType Field Functions 
      bool hasProtocolType() const { return this->protocolType_ != nullptr;};
      void deleteProtocolType() { this->protocolType_ = nullptr;};
      inline string getProtocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
      inline ProtocolMountTarget& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ProtocolMountTarget& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline ProtocolMountTarget& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      // vSwitchIds Field Functions 
      bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
      void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
      inline const vector<string> & getVSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
      inline vector<string> getVSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
      inline ProtocolMountTarget& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
      inline ProtocolMountTarget& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline ProtocolMountTarget& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      // The name of the permission group.
      // 
      // Default permission group: DEFAULT\\\_VPC\\\_GROUP\\\_NAME
      shared_ptr<string> accessGroupName_ {};
      // The time when the export directory was created. Return format: yyyy-MM-dd HH:mm:ss
      shared_ptr<string> createTime_ {};
      // The description of the export directory.
      shared_ptr<string> description_ {};
      // The ID of the export directory.
      shared_ptr<string> exportId_ {};
      // The fileset ID.
      shared_ptr<string> fsetId_ {};
      // The path of the CPFS directory that was queried.
      // 
      // Format:
      // 
      // *   Must be 1 to 1,024 characters in length.
      // *   Must be encoded in UTF-8.
      // *   Must start and end with a forward slash (/). The root directory is `/`.
      shared_ptr<string> path_ {};
      // The domain name of the export directory for the protocol service.
      shared_ptr<string> protocolMountTargetDomain_ {};
      // The protocol type of the file system.
      // 
      // Valid values:
      // 
      // *   NFS: Network File System (NFS)
      // *   SMB: Server Message Block (SMB)
      // *   cpfs: The protocol type supported by the CPFS file system.
      shared_ptr<string> protocolType_ {};
      // The status of the export directory. Valid values:
      // 
      // *   CREATING: The export directory is being created.
      // *   AVAILABLE : The export directory is available.
      // *   MODIFYING: The export directory is being modified.
      // *   DELETING: The export directory is being deleted.
      // *   STOPPING: The export directory is being stopped.
      shared_ptr<string> status_ {};
      // The vSwitch ID of the export directory.
      shared_ptr<string> vSwitchId_ {};
      // The vSwitch ID list of the export directory.
      shared_ptr<vector<string>> vSwitchIds_ {};
      // The VPC ID of the export directory.
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->protocolMountTarget_ == nullptr && this->requestId_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline GetProtocolMountTargetResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // protocolMountTarget Field Functions 
    bool hasProtocolMountTarget() const { return this->protocolMountTarget_ != nullptr;};
    void deleteProtocolMountTarget() { this->protocolMountTarget_ = nullptr;};
    inline const GetProtocolMountTargetResponseBody::ProtocolMountTarget & getProtocolMountTarget() const { DARABONBA_PTR_GET_CONST(protocolMountTarget_, GetProtocolMountTargetResponseBody::ProtocolMountTarget) };
    inline GetProtocolMountTargetResponseBody::ProtocolMountTarget getProtocolMountTarget() { DARABONBA_PTR_GET(protocolMountTarget_, GetProtocolMountTargetResponseBody::ProtocolMountTarget) };
    inline GetProtocolMountTargetResponseBody& setProtocolMountTarget(const GetProtocolMountTargetResponseBody::ProtocolMountTarget & protocolMountTarget) { DARABONBA_PTR_SET_VALUE(protocolMountTarget_, protocolMountTarget) };
    inline GetProtocolMountTargetResponseBody& setProtocolMountTarget(GetProtocolMountTargetResponseBody::ProtocolMountTarget && protocolMountTarget) { DARABONBA_PTR_SET_RVALUE(protocolMountTarget_, protocolMountTarget) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetProtocolMountTargetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // Information of the export directory for the protocol service
    shared_ptr<GetProtocolMountTargetResponseBody::ProtocolMountTarget> protocolMountTarget_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
