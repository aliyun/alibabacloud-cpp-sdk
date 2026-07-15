// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETAGENTICSPACEQUOTAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETAGENTICSPACEQUOTAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class SetAgenticSpaceQuotaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetAgenticSpaceQuotaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgenticSpaceId, agenticSpaceId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(FileCountLimit, fileCountLimit_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(SizeLimit, sizeLimit_);
    };
    friend void from_json(const Darabonba::Json& j, SetAgenticSpaceQuotaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgenticSpaceId, agenticSpaceId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(FileCountLimit, fileCountLimit_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(SizeLimit, sizeLimit_);
    };
    SetAgenticSpaceQuotaRequest() = default ;
    SetAgenticSpaceQuotaRequest(const SetAgenticSpaceQuotaRequest &) = default ;
    SetAgenticSpaceQuotaRequest(SetAgenticSpaceQuotaRequest &&) = default ;
    SetAgenticSpaceQuotaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetAgenticSpaceQuotaRequest() = default ;
    SetAgenticSpaceQuotaRequest& operator=(const SetAgenticSpaceQuotaRequest &) = default ;
    SetAgenticSpaceQuotaRequest& operator=(SetAgenticSpaceQuotaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agenticSpaceId_ == nullptr
        && this->clientToken_ == nullptr && this->dryRun_ == nullptr && this->fileCountLimit_ == nullptr && this->fileSystemId_ == nullptr && this->sizeLimit_ == nullptr; };
    // agenticSpaceId Field Functions 
    bool hasAgenticSpaceId() const { return this->agenticSpaceId_ != nullptr;};
    void deleteAgenticSpaceId() { this->agenticSpaceId_ = nullptr;};
    inline string getAgenticSpaceId() const { DARABONBA_PTR_GET_DEFAULT(agenticSpaceId_, "") };
    inline SetAgenticSpaceQuotaRequest& setAgenticSpaceId(string agenticSpaceId) { DARABONBA_PTR_SET_VALUE(agenticSpaceId_, agenticSpaceId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline SetAgenticSpaceQuotaRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline SetAgenticSpaceQuotaRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // fileCountLimit Field Functions 
    bool hasFileCountLimit() const { return this->fileCountLimit_ != nullptr;};
    void deleteFileCountLimit() { this->fileCountLimit_ = nullptr;};
    inline int64_t getFileCountLimit() const { DARABONBA_PTR_GET_DEFAULT(fileCountLimit_, 0L) };
    inline SetAgenticSpaceQuotaRequest& setFileCountLimit(int64_t fileCountLimit) { DARABONBA_PTR_SET_VALUE(fileCountLimit_, fileCountLimit) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline SetAgenticSpaceQuotaRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // sizeLimit Field Functions 
    bool hasSizeLimit() const { return this->sizeLimit_ != nullptr;};
    void deleteSizeLimit() { this->sizeLimit_ = nullptr;};
    inline int64_t getSizeLimit() const { DARABONBA_PTR_GET_DEFAULT(sizeLimit_, 0L) };
    inline SetAgenticSpaceQuotaRequest& setSizeLimit(int64_t sizeLimit) { DARABONBA_PTR_SET_VALUE(sizeLimit_, sizeLimit) };


  protected:
    // AgenticSpace Id。
    // 
    // This parameter is required.
    shared_ptr<string> agenticSpaceId_ {};
    // Ensures the idempotency of the request. Generate a unique parameter value from your client to ensure that the value is unique across different requests.
    // 
    // ClientToken supports only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotency](https://help.aliyun.com/document_detail/25693.html).
    // 
    // > If you do not specify this parameter, the system automatically uses the RequestId of the API request as the ClientToken. The RequestId may differ for each API request.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform a dry run for this request. A dry run checks parameter validity and dependencies without actually modifying the instance or incurring charges.
    // 
    // Valid values:
    // 
    // - true: Sends a dry run request without modifying the protocol service. The check items include required parameters, request format, and business dependency conditions. If the check fails, the corresponding error is returned. If the check passes, HTTP status code 200 is returned.
    // - false (default): Sends a normal request. After the check passes, the protocol service is directly modified.
    shared_ptr<bool> dryRun_ {};
    // The file count limit for the quota. Valid values:
    // 
    // - Minimum value: 10,000.
    // 
    // - Maximum value: 100,000,000.
    shared_ptr<int64_t> fileCountLimit_ {};
    // The file system ID.
    // 
    // This parameter is required.
    shared_ptr<string> fileSystemId_ {};
    // The total capacity limit for the quota. Unit: bytes.
    // 
    // Valid values:
    // 
    // - Minimum value: 10,737,418,240 (10 GiB).
    // - Maximum value: 1,099,511,627,776,000 (1,024,000 GiB).
    // - Step: 1,073,741,824 (1 GiB).
    shared_ptr<int64_t> sizeLimit_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
