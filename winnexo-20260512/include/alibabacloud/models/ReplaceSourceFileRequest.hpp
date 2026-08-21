// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REPLACESOURCEFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REPLACESOURCEFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class ReplaceSourceFileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReplaceSourceFileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(fileName, fileName_);
      DARABONBA_PTR_TO_JSON(filePath, filePath_);
      DARABONBA_PTR_TO_JSON(filePublicUrl, filePublicUrl_);
      DARABONBA_PTR_TO_JSON(fileRecordId, fileRecordId_);
      DARABONBA_PTR_TO_JSON(forceSync, forceSync_);
      DARABONBA_PTR_TO_JSON(sourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ReplaceSourceFileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(fileName, fileName_);
      DARABONBA_PTR_FROM_JSON(filePath, filePath_);
      DARABONBA_PTR_FROM_JSON(filePublicUrl, filePublicUrl_);
      DARABONBA_PTR_FROM_JSON(fileRecordId, fileRecordId_);
      DARABONBA_PTR_FROM_JSON(forceSync, forceSync_);
      DARABONBA_PTR_FROM_JSON(sourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    ReplaceSourceFileRequest() = default ;
    ReplaceSourceFileRequest(const ReplaceSourceFileRequest &) = default ;
    ReplaceSourceFileRequest(ReplaceSourceFileRequest &&) = default ;
    ReplaceSourceFileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReplaceSourceFileRequest() = default ;
    ReplaceSourceFileRequest& operator=(const ReplaceSourceFileRequest &) = default ;
    ReplaceSourceFileRequest& operator=(ReplaceSourceFileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileName_ == nullptr
        && this->filePath_ == nullptr && this->filePublicUrl_ == nullptr && this->fileRecordId_ == nullptr && this->forceSync_ == nullptr && this->sourceId_ == nullptr
        && this->tenantId_ == nullptr; };
    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline ReplaceSourceFileRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // filePath Field Functions 
    bool hasFilePath() const { return this->filePath_ != nullptr;};
    void deleteFilePath() { this->filePath_ = nullptr;};
    inline string getFilePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
    inline ReplaceSourceFileRequest& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


    // filePublicUrl Field Functions 
    bool hasFilePublicUrl() const { return this->filePublicUrl_ != nullptr;};
    void deleteFilePublicUrl() { this->filePublicUrl_ = nullptr;};
    inline string getFilePublicUrl() const { DARABONBA_PTR_GET_DEFAULT(filePublicUrl_, "") };
    inline ReplaceSourceFileRequest& setFilePublicUrl(string filePublicUrl) { DARABONBA_PTR_SET_VALUE(filePublicUrl_, filePublicUrl) };


    // fileRecordId Field Functions 
    bool hasFileRecordId() const { return this->fileRecordId_ != nullptr;};
    void deleteFileRecordId() { this->fileRecordId_ = nullptr;};
    inline string getFileRecordId() const { DARABONBA_PTR_GET_DEFAULT(fileRecordId_, "") };
    inline ReplaceSourceFileRequest& setFileRecordId(string fileRecordId) { DARABONBA_PTR_SET_VALUE(fileRecordId_, fileRecordId) };


    // forceSync Field Functions 
    bool hasForceSync() const { return this->forceSync_ != nullptr;};
    void deleteForceSync() { this->forceSync_ = nullptr;};
    inline bool getForceSync() const { DARABONBA_PTR_GET_DEFAULT(forceSync_, false) };
    inline ReplaceSourceFileRequest& setForceSync(bool forceSync) { DARABONBA_PTR_SET_VALUE(forceSync_, forceSync) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline ReplaceSourceFileRequest& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ReplaceSourceFileRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The new file name. This parameter is optional. If you do not specify this parameter or set it to an empty string, the original file name is retained.
    shared_ptr<string> fileName_ {};
    // The OSS persistent address of the new file, returned by the upload signing operation.
    // 
    // This parameter is required.
    shared_ptr<string> filePath_ {};
    // The public access URL of the new file. The URL may contain a temporary signature.
    // 
    // This parameter is required.
    shared_ptr<string> filePublicUrl_ {};
    // The file record ID of the new file.
    // 
    // This parameter is required.
    shared_ptr<string> fileRecordId_ {};
    // Specifies whether to synchronously wait for re-parsing to complete. Default value: false, which indicates asynchronous queuing.
    shared_ptr<bool> forceSync_ {};
    // The ID of the personal FILE data source to be replaced. This ID is unique within the tenant.
    // 
    // This parameter is required.
    shared_ptr<string> sourceId_ {};
    // The tenant ID. This is a common parameter. In winnexo-cli, pass this value explicitly by using --tenant-id.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
