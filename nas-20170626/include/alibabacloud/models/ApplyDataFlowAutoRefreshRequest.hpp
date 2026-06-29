// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYDATAFLOWAUTOREFRESHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_APPLYDATAFLOWAUTOREFRESHREQUEST_HPP_
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
  class ApplyDataFlowAutoRefreshRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyDataFlowAutoRefreshRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoRefreshInterval, autoRefreshInterval_);
      DARABONBA_PTR_TO_JSON(AutoRefreshPolicy, autoRefreshPolicy_);
      DARABONBA_PTR_TO_JSON(AutoRefreshs, autoRefreshs_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DataFlowId, dataFlowId_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyDataFlowAutoRefreshRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoRefreshInterval, autoRefreshInterval_);
      DARABONBA_PTR_FROM_JSON(AutoRefreshPolicy, autoRefreshPolicy_);
      DARABONBA_PTR_FROM_JSON(AutoRefreshs, autoRefreshs_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DataFlowId, dataFlowId_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
    };
    ApplyDataFlowAutoRefreshRequest() = default ;
    ApplyDataFlowAutoRefreshRequest(const ApplyDataFlowAutoRefreshRequest &) = default ;
    ApplyDataFlowAutoRefreshRequest(ApplyDataFlowAutoRefreshRequest &&) = default ;
    ApplyDataFlowAutoRefreshRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyDataFlowAutoRefreshRequest() = default ;
    ApplyDataFlowAutoRefreshRequest& operator=(const ApplyDataFlowAutoRefreshRequest &) = default ;
    ApplyDataFlowAutoRefreshRequest& operator=(ApplyDataFlowAutoRefreshRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AutoRefreshs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AutoRefreshs& obj) { 
        DARABONBA_PTR_TO_JSON(RefreshPath, refreshPath_);
      };
      friend void from_json(const Darabonba::Json& j, AutoRefreshs& obj) { 
        DARABONBA_PTR_FROM_JSON(RefreshPath, refreshPath_);
      };
      AutoRefreshs() = default ;
      AutoRefreshs(const AutoRefreshs &) = default ;
      AutoRefreshs(AutoRefreshs &&) = default ;
      AutoRefreshs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AutoRefreshs() = default ;
      AutoRefreshs& operator=(const AutoRefreshs &) = default ;
      AutoRefreshs& operator=(AutoRefreshs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->refreshPath_ == nullptr; };
      // refreshPath Field Functions 
      bool hasRefreshPath() const { return this->refreshPath_ != nullptr;};
      void deleteRefreshPath() { this->refreshPath_ = nullptr;};
      inline string getRefreshPath() const { DARABONBA_PTR_GET_DEFAULT(refreshPath_, "") };
      inline AutoRefreshs& setRefreshPath(string refreshPath) { DARABONBA_PTR_SET_VALUE(refreshPath_, refreshPath) };


    protected:
      // The auto-refresh directory. CPFS automatically checks whether data in this directory on the source has been updated and imports the updated data.
      // 
      // Limits:
      // 
      // - The path must be 2 to 1,024 characters in length.
      // - The path must be encoded in UTF-8.
      // - The path must start and end with a forward slash (/).
      // 
      // > The directory must already exist in CPFS and must be in a fileset that has data flow enabled.
      // 
      // This parameter is required.
      shared_ptr<string> refreshPath_ {};
    };

    virtual bool empty() const override { return this->autoRefreshInterval_ == nullptr
        && this->autoRefreshPolicy_ == nullptr && this->autoRefreshs_ == nullptr && this->clientToken_ == nullptr && this->dataFlowId_ == nullptr && this->dryRun_ == nullptr
        && this->fileSystemId_ == nullptr; };
    // autoRefreshInterval Field Functions 
    bool hasAutoRefreshInterval() const { return this->autoRefreshInterval_ != nullptr;};
    void deleteAutoRefreshInterval() { this->autoRefreshInterval_ = nullptr;};
    inline int64_t getAutoRefreshInterval() const { DARABONBA_PTR_GET_DEFAULT(autoRefreshInterval_, 0L) };
    inline ApplyDataFlowAutoRefreshRequest& setAutoRefreshInterval(int64_t autoRefreshInterval) { DARABONBA_PTR_SET_VALUE(autoRefreshInterval_, autoRefreshInterval) };


    // autoRefreshPolicy Field Functions 
    bool hasAutoRefreshPolicy() const { return this->autoRefreshPolicy_ != nullptr;};
    void deleteAutoRefreshPolicy() { this->autoRefreshPolicy_ = nullptr;};
    inline string getAutoRefreshPolicy() const { DARABONBA_PTR_GET_DEFAULT(autoRefreshPolicy_, "") };
    inline ApplyDataFlowAutoRefreshRequest& setAutoRefreshPolicy(string autoRefreshPolicy) { DARABONBA_PTR_SET_VALUE(autoRefreshPolicy_, autoRefreshPolicy) };


    // autoRefreshs Field Functions 
    bool hasAutoRefreshs() const { return this->autoRefreshs_ != nullptr;};
    void deleteAutoRefreshs() { this->autoRefreshs_ = nullptr;};
    inline const vector<ApplyDataFlowAutoRefreshRequest::AutoRefreshs> & getAutoRefreshs() const { DARABONBA_PTR_GET_CONST(autoRefreshs_, vector<ApplyDataFlowAutoRefreshRequest::AutoRefreshs>) };
    inline vector<ApplyDataFlowAutoRefreshRequest::AutoRefreshs> getAutoRefreshs() { DARABONBA_PTR_GET(autoRefreshs_, vector<ApplyDataFlowAutoRefreshRequest::AutoRefreshs>) };
    inline ApplyDataFlowAutoRefreshRequest& setAutoRefreshs(const vector<ApplyDataFlowAutoRefreshRequest::AutoRefreshs> & autoRefreshs) { DARABONBA_PTR_SET_VALUE(autoRefreshs_, autoRefreshs) };
    inline ApplyDataFlowAutoRefreshRequest& setAutoRefreshs(vector<ApplyDataFlowAutoRefreshRequest::AutoRefreshs> && autoRefreshs) { DARABONBA_PTR_SET_RVALUE(autoRefreshs_, autoRefreshs) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ApplyDataFlowAutoRefreshRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dataFlowId Field Functions 
    bool hasDataFlowId() const { return this->dataFlowId_ != nullptr;};
    void deleteDataFlowId() { this->dataFlowId_ = nullptr;};
    inline string getDataFlowId() const { DARABONBA_PTR_GET_DEFAULT(dataFlowId_, "") };
    inline ApplyDataFlowAutoRefreshRequest& setDataFlowId(string dataFlowId) { DARABONBA_PTR_SET_VALUE(dataFlowId_, dataFlowId) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ApplyDataFlowAutoRefreshRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline ApplyDataFlowAutoRefreshRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


  protected:
    // The auto-refresh interval. CPFS checks the directory for data updates at this interval. If data updates exist, an auto-refresh task is started. Unit: minutes.
    // 
    // Valid values: 10 to 525600. Default value: 10.
    shared_ptr<int64_t> autoRefreshInterval_ {};
    // The auto-refresh policy. This policy determines how data updates from the source are imported to CPFS. Valid values:
    // 
    // - None: Data updates from the source are not automatically imported to CPFS. You can use a data flow task to import data updates from the source.
    // - ImportChanged: Data updates from the source are automatically imported to CPFS.
    shared_ptr<string> autoRefreshPolicy_ {};
    // The collection of auto-refresh configurations.
    // 
    // This parameter is required.
    shared_ptr<vector<ApplyDataFlowAutoRefreshRequest::AutoRefreshs>> autoRefreshs_ {};
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but make sure that the token is unique among different requests.
    // 
    // The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    // 
    // > If you do not specify this parameter, the system automatically uses the RequestId of the API request as the ClientToken. The RequestId may differ for each API request.
    shared_ptr<string> clientToken_ {};
    // The ID of the data flow.
    // 
    // This parameter is required.
    shared_ptr<string> dataFlowId_ {};
    // Specifies whether to perform a dry run for this request.
    // 
    // A dry run checks parameter validity and resource availability without actually creating an instance or incurring charges.
    // 
    // Valid values:
    // 
    // - true: Sends a dry run request without creating an instance. The check items include required parameters, request format, business limits, and NAS inventory. If the check fails, the corresponding error is returned. If the check succeeds, HTTP status code 200 is returned, but FileSystemId is empty.
    // - false (default): Sends a normal request. After the check succeeds, the instance is created.
    shared_ptr<bool> dryRun_ {};
    // The ID of the file system.
    // 
    // This parameter is required.
    shared_ptr<string> fileSystemId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
