// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROTOCOLMOUNTTARGETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROTOCOLMOUNTTARGETREQUEST_HPP_
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
  class CreateProtocolMountTargetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateProtocolMountTargetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessGroupName, accessGroupName_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(FsetId, fsetId_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(ProtocolServiceId, protocolServiceId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateProtocolMountTargetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessGroupName, accessGroupName_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(FsetId, fsetId_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(ProtocolServiceId, protocolServiceId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    CreateProtocolMountTargetRequest() = default ;
    CreateProtocolMountTargetRequest(const CreateProtocolMountTargetRequest &) = default ;
    CreateProtocolMountTargetRequest(CreateProtocolMountTargetRequest &&) = default ;
    CreateProtocolMountTargetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateProtocolMountTargetRequest() = default ;
    CreateProtocolMountTargetRequest& operator=(const CreateProtocolMountTargetRequest &) = default ;
    CreateProtocolMountTargetRequest& operator=(CreateProtocolMountTargetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessGroupName_ == nullptr
        && this->clientToken_ == nullptr && this->description_ == nullptr && this->dryRun_ == nullptr && this->fileSystemId_ == nullptr && this->fsetId_ == nullptr
        && this->path_ == nullptr && this->protocolServiceId_ == nullptr && this->vSwitchId_ == nullptr && this->vSwitchIds_ == nullptr && this->vpcId_ == nullptr; };
    // accessGroupName Field Functions 
    bool hasAccessGroupName() const { return this->accessGroupName_ != nullptr;};
    void deleteAccessGroupName() { this->accessGroupName_ = nullptr;};
    inline string getAccessGroupName() const { DARABONBA_PTR_GET_DEFAULT(accessGroupName_, "") };
    inline CreateProtocolMountTargetRequest& setAccessGroupName(string accessGroupName) { DARABONBA_PTR_SET_VALUE(accessGroupName_, accessGroupName) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateProtocolMountTargetRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateProtocolMountTargetRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateProtocolMountTargetRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline CreateProtocolMountTargetRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // fsetId Field Functions 
    bool hasFsetId() const { return this->fsetId_ != nullptr;};
    void deleteFsetId() { this->fsetId_ = nullptr;};
    inline string getFsetId() const { DARABONBA_PTR_GET_DEFAULT(fsetId_, "") };
    inline CreateProtocolMountTargetRequest& setFsetId(string fsetId) { DARABONBA_PTR_SET_VALUE(fsetId_, fsetId) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline CreateProtocolMountTargetRequest& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // protocolServiceId Field Functions 
    bool hasProtocolServiceId() const { return this->protocolServiceId_ != nullptr;};
    void deleteProtocolServiceId() { this->protocolServiceId_ = nullptr;};
    inline string getProtocolServiceId() const { DARABONBA_PTR_GET_DEFAULT(protocolServiceId_, "") };
    inline CreateProtocolMountTargetRequest& setProtocolServiceId(string protocolServiceId) { DARABONBA_PTR_SET_VALUE(protocolServiceId_, protocolServiceId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateProtocolMountTargetRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline const vector<string> & getVSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
    inline vector<string> getVSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
    inline CreateProtocolMountTargetRequest& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
    inline CreateProtocolMountTargetRequest& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateProtocolMountTargetRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The name of the permission group.
    // 
    // Default value: DEFAULT_VPC_GROUP_NAME.
    shared_ptr<string> accessGroupName_ {};
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but make sure that the token is unique among different requests.
    // 
    // The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    // 
    // > If you do not specify this parameter, the system automatically uses the RequestId of the API request as the ClientToken. The RequestId may differ for each API request.
    shared_ptr<string> clientToken_ {};
    // The description of the protocol service export directory. This parameter is displayed as **Export Directory Name** in the console.
    // 
    // Limits:
    // - The description must be 2 to 128 characters in length and can contain letters and Chinese characters.
    // - The description must start with a letter or a Chinese character and cannot start with `http://` or `https://`.
    // - The description can contain digits, colons (:), underscores (_), and hyphens (-).
    shared_ptr<string> description_ {};
    // Specifies whether to perform a dry run for this request. A dry run checks parameter validity, dependencies, and other conditions without actually creating the instance or incurring charges.
    // 
    // Valid values:
    // - true: sends a dry run request without creating the export directory. The dry run checks whether required parameters are specified, whether the request format is valid, and whether business limit dependencies are met. If the check fails, the corresponding error is returned. If the check succeeds, HTTP status code 200 is returned, but ExportId is empty.
    // 
    // - false (default): sends a normal request. After the check succeeds, the instance is created.
    shared_ptr<bool> dryRun_ {};
    // The ID of the file system.
    // 
    // This parameter is required.
    shared_ptr<string> fileSystemId_ {};
    // The ID of the fileset to export.
    // 
    // Limits:
    // - The fileset must already exist.
    // - Only one export directory can be created for each fileset.
    // - You must specify one and only one of FsetId and Path.
    shared_ptr<string> fsetId_ {};
    // The path of the CPFS directory to export.
    // 
    // Limits:
    // - The directory must already exist on the CPFS file system.
    // - Only one export can be created for each directory.
    // - You must specify one and only one of FsetId and Path.
    // 
    // Format:
    // - The path must be 1 to 1,024 characters in length.
    // - The path must be encoded in UTF-8.
    // - The path must start and end with a forward slash (/). The root directory is `/`.
    shared_ptr<string> path_ {};
    // The ID of the protocol service.
    // 
    // This parameter is required.
    shared_ptr<string> protocolServiceId_ {};
    // The ID of the vSwitch for the protocol service export.
    // 
    // If the storage redundancy type of the file system is not zone-redundant storage (ZRS), this parameter is required when VpcId is specified.
    // >  The vSwitch must be in the same zone as the target CPFS file system.
    shared_ptr<string> vSwitchId_ {};
    // The list of vSwitch IDs for the protocol service export.
    shared_ptr<vector<string>> vSwitchIds_ {};
    // The ID of the VPC for the protocol service export.
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
