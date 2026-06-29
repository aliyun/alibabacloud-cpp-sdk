// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROTOCOLSERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROTOCOLSERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class CreateProtocolServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateProtocolServiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(ProtocolSpec, protocolSpec_);
      DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_TO_JSON(Throughput, throughput_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateProtocolServiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(ProtocolSpec, protocolSpec_);
      DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_FROM_JSON(Throughput, throughput_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    CreateProtocolServiceRequest() = default ;
    CreateProtocolServiceRequest(const CreateProtocolServiceRequest &) = default ;
    CreateProtocolServiceRequest(CreateProtocolServiceRequest &&) = default ;
    CreateProtocolServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateProtocolServiceRequest() = default ;
    CreateProtocolServiceRequest& operator=(const CreateProtocolServiceRequest &) = default ;
    CreateProtocolServiceRequest& operator=(CreateProtocolServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->description_ == nullptr && this->dryRun_ == nullptr && this->fileSystemId_ == nullptr && this->protocolSpec_ == nullptr && this->protocolType_ == nullptr
        && this->throughput_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateProtocolServiceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateProtocolServiceRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateProtocolServiceRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline CreateProtocolServiceRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // protocolSpec Field Functions 
    bool hasProtocolSpec() const { return this->protocolSpec_ != nullptr;};
    void deleteProtocolSpec() { this->protocolSpec_ = nullptr;};
    inline string getProtocolSpec() const { DARABONBA_PTR_GET_DEFAULT(protocolSpec_, "") };
    inline CreateProtocolServiceRequest& setProtocolSpec(string protocolSpec) { DARABONBA_PTR_SET_VALUE(protocolSpec_, protocolSpec) };


    // protocolType Field Functions 
    bool hasProtocolType() const { return this->protocolType_ != nullptr;};
    void deleteProtocolType() { this->protocolType_ = nullptr;};
    inline string getProtocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
    inline CreateProtocolServiceRequest& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


    // throughput Field Functions 
    bool hasThroughput() const { return this->throughput_ != nullptr;};
    void deleteThroughput() { this->throughput_ = nullptr;};
    inline int32_t getThroughput() const { DARABONBA_PTR_GET_DEFAULT(throughput_, 0) };
    inline CreateProtocolServiceRequest& setThroughput(int32_t throughput) { DARABONBA_PTR_SET_VALUE(throughput_, throughput) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateProtocolServiceRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateProtocolServiceRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but make sure that the token is unique among different requests.
    // 
    // The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    // 
    // > If you do not specify this parameter, the system automatically uses the RequestId of the API request as the ClientToken. The RequestId may differ for each API request.
    shared_ptr<string> clientToken_ {};
    // The description of the protocol service. This value is displayed as "Protocol service name" in the console.
    // 
    // Limits:
    // 
    // - The description must be 2 to 128 characters in length.
    // - The description must start with a letter or Chinese character and cannot start with `http://` or `https://`.
    // - The description can contain digits, colons (:), underscores (_), and hyphens (-).
    shared_ptr<string> description_ {};
    // Specifies whether to perform a dry run for this request.
    // 
    // A dry run checks parameter validity and dependencies without actually creating the instance or incurring charges.
    // 
    // Valid values:
    // - true: Sends a check request without creating the protocol service. The check items include whether required parameters are specified, the request format, and business limit dependencies. If the check fails, the corresponding error is returned. If the check passes, HTTP status code 200 is returned, but ProtocolServiceId is empty.
    // - false (default): Sends a normal request. After the check passes, the instance is directly created.
    shared_ptr<bool> dryRun_ {};
    // The file system ID.
    // 
    // This parameter is required.
    shared_ptr<string> fileSystemId_ {};
    // The specification of the protocol service.
    // 
    // Valid values: General (default).
    // 
    // This parameter is required.
    shared_ptr<string> protocolSpec_ {};
    // The protocol type of the protocol service.
    // 
    // Valid values: NFS (default). Only NFSv3 access is supported.
    // 
    // This parameter is required.
    shared_ptr<string> protocolType_ {};
    // The bandwidth of the protocol service.
    // 
    // Unit: MB/s.
    shared_ptr<int32_t> throughput_ {};
    // The vSwitch ID of the protocol service.
    // 
    // If the storage redundancy type of the file system is zone-redundant storage (ZRS), do not set this parameter. Otherwise, this parameter is required.
    shared_ptr<string> vSwitchId_ {};
    // The VPC ID of the protocol service. The VPC must be the same as the VPC of the file system.
    // 
    // If the storage redundancy type of the file system is zone-redundant storage (ZRS), do not set this parameter. Otherwise, this parameter is required.
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
