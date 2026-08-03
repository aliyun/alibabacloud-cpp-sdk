// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETFILESETQUOTAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETFILESETQUOTAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class SetFilesetQuotaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetFilesetQuotaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(FileCountLimit, fileCountLimit_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(FsetId, fsetId_);
      DARABONBA_PTR_TO_JSON(SizeLimit, sizeLimit_);
    };
    friend void from_json(const Darabonba::Json& j, SetFilesetQuotaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(FileCountLimit, fileCountLimit_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(FsetId, fsetId_);
      DARABONBA_PTR_FROM_JSON(SizeLimit, sizeLimit_);
    };
    SetFilesetQuotaRequest() = default ;
    SetFilesetQuotaRequest(const SetFilesetQuotaRequest &) = default ;
    SetFilesetQuotaRequest(SetFilesetQuotaRequest &&) = default ;
    SetFilesetQuotaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetFilesetQuotaRequest() = default ;
    SetFilesetQuotaRequest& operator=(const SetFilesetQuotaRequest &) = default ;
    SetFilesetQuotaRequest& operator=(SetFilesetQuotaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->fileCountLimit_ == nullptr && this->fileSystemId_ == nullptr && this->fsetId_ == nullptr && this->sizeLimit_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline SetFilesetQuotaRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline SetFilesetQuotaRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // fileCountLimit Field Functions 
    bool hasFileCountLimit() const { return this->fileCountLimit_ != nullptr;};
    void deleteFileCountLimit() { this->fileCountLimit_ = nullptr;};
    inline int64_t getFileCountLimit() const { DARABONBA_PTR_GET_DEFAULT(fileCountLimit_, 0L) };
    inline SetFilesetQuotaRequest& setFileCountLimit(int64_t fileCountLimit) { DARABONBA_PTR_SET_VALUE(fileCountLimit_, fileCountLimit) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline SetFilesetQuotaRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // fsetId Field Functions 
    bool hasFsetId() const { return this->fsetId_ != nullptr;};
    void deleteFsetId() { this->fsetId_ = nullptr;};
    inline string getFsetId() const { DARABONBA_PTR_GET_DEFAULT(fsetId_, "") };
    inline SetFilesetQuotaRequest& setFsetId(string fsetId) { DARABONBA_PTR_SET_VALUE(fsetId_, fsetId) };


    // sizeLimit Field Functions 
    bool hasSizeLimit() const { return this->sizeLimit_ != nullptr;};
    void deleteSizeLimit() { this->sizeLimit_ = nullptr;};
    inline int64_t getSizeLimit() const { DARABONBA_PTR_GET_DEFAULT(sizeLimit_, 0L) };
    inline SetFilesetQuotaRequest& setSizeLimit(int64_t sizeLimit) { DARABONBA_PTR_SET_VALUE(sizeLimit_, sizeLimit) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests.
    // 
    // The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    // 
    // > If you do not specify this parameter, the system automatically uses the RequestId of the API request as the ClientToken. The RequestId may be different for each API request.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform a dry run for this request.
    // A dry run checks parameter validity and dependencies without actually deleting the instance or incurring charges.
    // 
    // Valid values:
    // 
    // - true: Sends a check request without deleting the export directory. The check items include whether required parameters are specified, the request format, and business limit dependencies. If the check fails, the corresponding error is returned. If the check passes, HTTP status code 200 is returned.
    // 
    // - false (default): Sends a normal request. After the check passes, the instance is directly deleted.
    shared_ptr<bool> dryRun_ {};
    // The file count limit of the quota. Valid values:
    // 
    // - Minimum value: 10,000.
    // 
    // - Maximum value: 10,000,000,000.
    // 
    // > If this parameter is not specified, the file count is unlimited.
    shared_ptr<int64_t> fileCountLimit_ {};
    // The ID of the CPFS for Lingjun file system. The ID must start with `bmcpfs-`, such as bmcpfs-290w65p03ok64ya****. You can call [DescribeFileSystems](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-describefilesystems) (FileSystemType=bmcpfs) to query existing file systems.
    // 
    // This parameter is required.
    shared_ptr<string> fileSystemId_ {};
    // Fileset ID。
    // 
    // This parameter is required.
    shared_ptr<string> fsetId_ {};
    // The total capacity limit of the quota. Unit: bytes.
    // 
    // Valid values:
    // 
    // - Minimum value: 10,737,418,240 (10 GiB).
    // 
    // - Increment: 1,073,741,824 (1 GiB).
    // 
    // > If this parameter is not specified, the capacity is unlimited.
    shared_ptr<int64_t> sizeLimit_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
