// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELFILESETQUOTAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CANCELFILESETQUOTAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class CancelFilesetQuotaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelFilesetQuotaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(FsetId, fsetId_);
    };
    friend void from_json(const Darabonba::Json& j, CancelFilesetQuotaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(FsetId, fsetId_);
    };
    CancelFilesetQuotaRequest() = default ;
    CancelFilesetQuotaRequest(const CancelFilesetQuotaRequest &) = default ;
    CancelFilesetQuotaRequest(CancelFilesetQuotaRequest &&) = default ;
    CancelFilesetQuotaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelFilesetQuotaRequest() = default ;
    CancelFilesetQuotaRequest& operator=(const CancelFilesetQuotaRequest &) = default ;
    CancelFilesetQuotaRequest& operator=(CancelFilesetQuotaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->fileSystemId_ == nullptr && this->fsetId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CancelFilesetQuotaRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CancelFilesetQuotaRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline CancelFilesetQuotaRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // fsetId Field Functions 
    bool hasFsetId() const { return this->fsetId_ != nullptr;};
    void deleteFsetId() { this->fsetId_ = nullptr;};
    inline string getFsetId() const { DARABONBA_PTR_GET_DEFAULT(fsetId_, "") };
    inline CancelFilesetQuotaRequest& setFsetId(string fsetId) { DARABONBA_PTR_SET_VALUE(fsetId_, fsetId) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can generate the token from your client and make sure that the token is unique across different requests.
    // 
    // The ClientToken parameter supports only ASCII characters and can be up to 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    // 
    // > If you do not specify this parameter, the system automatically uses the RequestId of the API request as the ClientToken. The RequestId of each API request may be different.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform a dry run on the request.
    // 
    // A dry run checks the validity of parameters and business constraints. It does not actually cancel the fileset quota or incur any fees.
    // 
    // Valid values:
    // 
    // - true: Sends a check request and does not cancel the quota. The check items include whether required parameters are specified, request format, and business limits. If the check fails, the corresponding error is returned. If the check succeeds, the HTTP status code 200 is returned.
    // - false (default value): Sends a normal request and directly cancels the fileset quota after the check succeeds.
    shared_ptr<bool> dryRun_ {};
    // The ID of the CPFS for Lingjun file system. The ID must start with `bmcpfs-`, for example, bmcpfs-290w65p03ok64ya****. To use CPFS for Lingjun, you must first submit a ticket to apply for the service whitelist and then create the file system in the NAS console.
    // 
    // This parameter is required.
    shared_ptr<string> fileSystemId_ {};
    // The fileset ID.
    // 
    // This parameter is required.
    shared_ptr<string> fsetId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
