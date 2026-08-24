// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEVIRUSSCANGLOBALCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEVIRUSSCANGLOBALCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class UpdateVirusScanGlobalConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateVirusScanGlobalConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(UploadFileMaxSize, uploadFileMaxSize_);
      DARABONBA_PTR_TO_JSON(UploadFileMaxSpeed, uploadFileMaxSpeed_);
      DARABONBA_PTR_TO_JSON(UploadFileSuffixBlacklist, uploadFileSuffixBlacklist_);
      DARABONBA_PTR_TO_JSON(VirusFileUpload, virusFileUpload_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateVirusScanGlobalConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(UploadFileMaxSize, uploadFileMaxSize_);
      DARABONBA_PTR_FROM_JSON(UploadFileMaxSpeed, uploadFileMaxSpeed_);
      DARABONBA_PTR_FROM_JSON(UploadFileSuffixBlacklist, uploadFileSuffixBlacklist_);
      DARABONBA_PTR_FROM_JSON(VirusFileUpload, virusFileUpload_);
    };
    UpdateVirusScanGlobalConfigRequest() = default ;
    UpdateVirusScanGlobalConfigRequest(const UpdateVirusScanGlobalConfigRequest &) = default ;
    UpdateVirusScanGlobalConfigRequest(UpdateVirusScanGlobalConfigRequest &&) = default ;
    UpdateVirusScanGlobalConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateVirusScanGlobalConfigRequest() = default ;
    UpdateVirusScanGlobalConfigRequest& operator=(const UpdateVirusScanGlobalConfigRequest &) = default ;
    UpdateVirusScanGlobalConfigRequest& operator=(UpdateVirusScanGlobalConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->uploadFileMaxSize_ == nullptr
        && this->uploadFileMaxSpeed_ == nullptr && this->uploadFileSuffixBlacklist_ == nullptr && this->virusFileUpload_ == nullptr; };
    // uploadFileMaxSize Field Functions 
    bool hasUploadFileMaxSize() const { return this->uploadFileMaxSize_ != nullptr;};
    void deleteUploadFileMaxSize() { this->uploadFileMaxSize_ = nullptr;};
    inline int64_t getUploadFileMaxSize() const { DARABONBA_PTR_GET_DEFAULT(uploadFileMaxSize_, 0L) };
    inline UpdateVirusScanGlobalConfigRequest& setUploadFileMaxSize(int64_t uploadFileMaxSize) { DARABONBA_PTR_SET_VALUE(uploadFileMaxSize_, uploadFileMaxSize) };


    // uploadFileMaxSpeed Field Functions 
    bool hasUploadFileMaxSpeed() const { return this->uploadFileMaxSpeed_ != nullptr;};
    void deleteUploadFileMaxSpeed() { this->uploadFileMaxSpeed_ = nullptr;};
    inline int64_t getUploadFileMaxSpeed() const { DARABONBA_PTR_GET_DEFAULT(uploadFileMaxSpeed_, 0L) };
    inline UpdateVirusScanGlobalConfigRequest& setUploadFileMaxSpeed(int64_t uploadFileMaxSpeed) { DARABONBA_PTR_SET_VALUE(uploadFileMaxSpeed_, uploadFileMaxSpeed) };


    // uploadFileSuffixBlacklist Field Functions 
    bool hasUploadFileSuffixBlacklist() const { return this->uploadFileSuffixBlacklist_ != nullptr;};
    void deleteUploadFileSuffixBlacklist() { this->uploadFileSuffixBlacklist_ = nullptr;};
    inline const vector<string> & getUploadFileSuffixBlacklist() const { DARABONBA_PTR_GET_CONST(uploadFileSuffixBlacklist_, vector<string>) };
    inline vector<string> getUploadFileSuffixBlacklist() { DARABONBA_PTR_GET(uploadFileSuffixBlacklist_, vector<string>) };
    inline UpdateVirusScanGlobalConfigRequest& setUploadFileSuffixBlacklist(const vector<string> & uploadFileSuffixBlacklist) { DARABONBA_PTR_SET_VALUE(uploadFileSuffixBlacklist_, uploadFileSuffixBlacklist) };
    inline UpdateVirusScanGlobalConfigRequest& setUploadFileSuffixBlacklist(vector<string> && uploadFileSuffixBlacklist) { DARABONBA_PTR_SET_RVALUE(uploadFileSuffixBlacklist_, uploadFileSuffixBlacklist) };


    // virusFileUpload Field Functions 
    bool hasVirusFileUpload() const { return this->virusFileUpload_ != nullptr;};
    void deleteVirusFileUpload() { this->virusFileUpload_ = nullptr;};
    inline bool getVirusFileUpload() const { DARABONBA_PTR_GET_DEFAULT(virusFileUpload_, false) };
    inline UpdateVirusScanGlobalConfigRequest& setVirusFileUpload(bool virusFileUpload) { DARABONBA_PTR_SET_VALUE(virusFileUpload_, virusFileUpload) };


  protected:
    // The maximum size of a single virus file that can be uploaded. Unit: KB. Valid values: 0 to 204800. A value of 0 indicates no size limit. Values from 1 to 204800 specify the actual size limit.
    shared_ptr<int64_t> uploadFileMaxSize_ {};
    // The maximum upload rate for virus files. Unit: KB/s. Valid values: 0 to 102400. A value of 0 indicates no rate limit.
    shared_ptr<int64_t> uploadFileMaxSpeed_ {};
    // The collection of file types that are prohibited from being uploaded. Duplicate values are not allowed. Files that match the specified types are not uploaded even if upload is enabled.
    shared_ptr<vector<string>> uploadFileSuffixBlacklist_ {};
    // Specifies whether user terminal devices are allowed to upload detected virus files to the cloud for further analysis. Valid values:
    // - **true**: Allowed.
    // - **false**: Not allowed.
    shared_ptr<bool> virusFileUpload_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
