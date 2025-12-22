// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDATAFLOWAUTOREFRESHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDATAFLOWAUTOREFRESHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class ModifyDataFlowAutoRefreshRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDataFlowAutoRefreshRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoRefreshInterval, autoRefreshInterval_);
      DARABONBA_PTR_TO_JSON(AutoRefreshPolicy, autoRefreshPolicy_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DataFlowId, dataFlowId_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDataFlowAutoRefreshRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoRefreshInterval, autoRefreshInterval_);
      DARABONBA_PTR_FROM_JSON(AutoRefreshPolicy, autoRefreshPolicy_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DataFlowId, dataFlowId_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
    };
    ModifyDataFlowAutoRefreshRequest() = default ;
    ModifyDataFlowAutoRefreshRequest(const ModifyDataFlowAutoRefreshRequest &) = default ;
    ModifyDataFlowAutoRefreshRequest(ModifyDataFlowAutoRefreshRequest &&) = default ;
    ModifyDataFlowAutoRefreshRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDataFlowAutoRefreshRequest() = default ;
    ModifyDataFlowAutoRefreshRequest& operator=(const ModifyDataFlowAutoRefreshRequest &) = default ;
    ModifyDataFlowAutoRefreshRequest& operator=(ModifyDataFlowAutoRefreshRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoRefreshInterval_ == nullptr
        && return this->autoRefreshPolicy_ == nullptr && return this->clientToken_ == nullptr && return this->dataFlowId_ == nullptr && return this->dryRun_ == nullptr && return this->fileSystemId_ == nullptr; };
    // autoRefreshInterval Field Functions 
    bool hasAutoRefreshInterval() const { return this->autoRefreshInterval_ != nullptr;};
    void deleteAutoRefreshInterval() { this->autoRefreshInterval_ = nullptr;};
    inline int64_t autoRefreshInterval() const { DARABONBA_PTR_GET_DEFAULT(autoRefreshInterval_, 0L) };
    inline ModifyDataFlowAutoRefreshRequest& setAutoRefreshInterval(int64_t autoRefreshInterval) { DARABONBA_PTR_SET_VALUE(autoRefreshInterval_, autoRefreshInterval) };


    // autoRefreshPolicy Field Functions 
    bool hasAutoRefreshPolicy() const { return this->autoRefreshPolicy_ != nullptr;};
    void deleteAutoRefreshPolicy() { this->autoRefreshPolicy_ = nullptr;};
    inline string autoRefreshPolicy() const { DARABONBA_PTR_GET_DEFAULT(autoRefreshPolicy_, "") };
    inline ModifyDataFlowAutoRefreshRequest& setAutoRefreshPolicy(string autoRefreshPolicy) { DARABONBA_PTR_SET_VALUE(autoRefreshPolicy_, autoRefreshPolicy) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyDataFlowAutoRefreshRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dataFlowId Field Functions 
    bool hasDataFlowId() const { return this->dataFlowId_ != nullptr;};
    void deleteDataFlowId() { this->dataFlowId_ = nullptr;};
    inline string dataFlowId() const { DARABONBA_PTR_GET_DEFAULT(dataFlowId_, "") };
    inline ModifyDataFlowAutoRefreshRequest& setDataFlowId(string dataFlowId) { DARABONBA_PTR_SET_VALUE(dataFlowId_, dataFlowId) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ModifyDataFlowAutoRefreshRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string fileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline ModifyDataFlowAutoRefreshRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


  protected:
    // The automatic update interval. CPFS checks whether data is updated in the directory at the interval specified by this parameter. If data is updated, CPFS starts an automatic update task. Unit: minute.
    // 
    // Valid values: 5 to 526600. Default value: 10.
    std::shared_ptr<int64_t> autoRefreshInterval_ = nullptr;
    // The automatic update policy. The updated data in the source storage is imported into the CPFS file system based on the policy. The following information is displayed:
    // 
    // *   None: Updated data in the source storage is not automatically imported into the CPFS file system. You can run a dataflow task to import the updated data from the source storage.
    // *   ImportChanged: Updated data in the source storage is automatically imported into the CPFS file system.
    std::shared_ptr<string> autoRefreshPolicy_ = nullptr;
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests.
    // 
    // The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    // 
    // >  If you do not specify this parameter, the system automatically uses the request ID as the client token. The request ID may be different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The ID of the dataflow.
    // 
    // This parameter is required.
    std::shared_ptr<string> dataFlowId_ = nullptr;
    // Specifies whether to perform a dry run.
    // 
    // During the dry run, the system checks whether the request parameters are valid and whether the requested resources are available. During the dry run, no fileset quota is canceled and no fee is incurred.
    // 
    // Valid value:
    // 
    // *   true: performs a dry run. The system checks the required parameters, request syntax, service limits, and available Apsara File Storage NAS (NAS) resources. Otherwise, an error message is returned. If the request passes the dry run, the HTTP status code 200 is returned. No value is returned for the FileSystemId parameter.
    // *   false (default): performs a dry run and sends the request. If the request passes the dry run, a fileset is created.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The ID of the file system.
    // 
    // This parameter is required.
    std::shared_ptr<string> fileSystemId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
