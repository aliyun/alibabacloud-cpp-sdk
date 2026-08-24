// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIRUSSCANGLOBALCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETVIRUSSCANGLOBALCONFIGRESPONSEBODY_HPP_
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
  class GetVirusScanGlobalConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVirusScanGlobalConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UploadFileMaxSize, uploadFileMaxSize_);
      DARABONBA_PTR_TO_JSON(UploadFileMaxSpeed, uploadFileMaxSpeed_);
      DARABONBA_PTR_TO_JSON(UploadFileSuffixBlacklist, uploadFileSuffixBlacklist_);
      DARABONBA_PTR_TO_JSON(VirusFileUpload, virusFileUpload_);
    };
    friend void from_json(const Darabonba::Json& j, GetVirusScanGlobalConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UploadFileMaxSize, uploadFileMaxSize_);
      DARABONBA_PTR_FROM_JSON(UploadFileMaxSpeed, uploadFileMaxSpeed_);
      DARABONBA_PTR_FROM_JSON(UploadFileSuffixBlacklist, uploadFileSuffixBlacklist_);
      DARABONBA_PTR_FROM_JSON(VirusFileUpload, virusFileUpload_);
    };
    GetVirusScanGlobalConfigResponseBody() = default ;
    GetVirusScanGlobalConfigResponseBody(const GetVirusScanGlobalConfigResponseBody &) = default ;
    GetVirusScanGlobalConfigResponseBody(GetVirusScanGlobalConfigResponseBody &&) = default ;
    GetVirusScanGlobalConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVirusScanGlobalConfigResponseBody() = default ;
    GetVirusScanGlobalConfigResponseBody& operator=(const GetVirusScanGlobalConfigResponseBody &) = default ;
    GetVirusScanGlobalConfigResponseBody& operator=(GetVirusScanGlobalConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->uploadFileMaxSize_ == nullptr && this->uploadFileMaxSpeed_ == nullptr && this->uploadFileSuffixBlacklist_ == nullptr && this->virusFileUpload_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetVirusScanGlobalConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // uploadFileMaxSize Field Functions 
    bool hasUploadFileMaxSize() const { return this->uploadFileMaxSize_ != nullptr;};
    void deleteUploadFileMaxSize() { this->uploadFileMaxSize_ = nullptr;};
    inline int64_t getUploadFileMaxSize() const { DARABONBA_PTR_GET_DEFAULT(uploadFileMaxSize_, 0L) };
    inline GetVirusScanGlobalConfigResponseBody& setUploadFileMaxSize(int64_t uploadFileMaxSize) { DARABONBA_PTR_SET_VALUE(uploadFileMaxSize_, uploadFileMaxSize) };


    // uploadFileMaxSpeed Field Functions 
    bool hasUploadFileMaxSpeed() const { return this->uploadFileMaxSpeed_ != nullptr;};
    void deleteUploadFileMaxSpeed() { this->uploadFileMaxSpeed_ = nullptr;};
    inline int64_t getUploadFileMaxSpeed() const { DARABONBA_PTR_GET_DEFAULT(uploadFileMaxSpeed_, 0L) };
    inline GetVirusScanGlobalConfigResponseBody& setUploadFileMaxSpeed(int64_t uploadFileMaxSpeed) { DARABONBA_PTR_SET_VALUE(uploadFileMaxSpeed_, uploadFileMaxSpeed) };


    // uploadFileSuffixBlacklist Field Functions 
    bool hasUploadFileSuffixBlacklist() const { return this->uploadFileSuffixBlacklist_ != nullptr;};
    void deleteUploadFileSuffixBlacklist() { this->uploadFileSuffixBlacklist_ = nullptr;};
    inline const vector<string> & getUploadFileSuffixBlacklist() const { DARABONBA_PTR_GET_CONST(uploadFileSuffixBlacklist_, vector<string>) };
    inline vector<string> getUploadFileSuffixBlacklist() { DARABONBA_PTR_GET(uploadFileSuffixBlacklist_, vector<string>) };
    inline GetVirusScanGlobalConfigResponseBody& setUploadFileSuffixBlacklist(const vector<string> & uploadFileSuffixBlacklist) { DARABONBA_PTR_SET_VALUE(uploadFileSuffixBlacklist_, uploadFileSuffixBlacklist) };
    inline GetVirusScanGlobalConfigResponseBody& setUploadFileSuffixBlacklist(vector<string> && uploadFileSuffixBlacklist) { DARABONBA_PTR_SET_RVALUE(uploadFileSuffixBlacklist_, uploadFileSuffixBlacklist) };


    // virusFileUpload Field Functions 
    bool hasVirusFileUpload() const { return this->virusFileUpload_ != nullptr;};
    void deleteVirusFileUpload() { this->virusFileUpload_ = nullptr;};
    inline bool getVirusFileUpload() const { DARABONBA_PTR_GET_DEFAULT(virusFileUpload_, false) };
    inline GetVirusScanGlobalConfigResponseBody& setVirusFileUpload(bool virusFileUpload) { DARABONBA_PTR_SET_VALUE(virusFileUpload_, virusFileUpload) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The maximum size of a single virus file that can be uploaded, in KB. A value of 0 indicates no size limit.
    shared_ptr<int64_t> uploadFileMaxSize_ {};
    // The maximum upload rate for virus files, in KB/s. A value of 0 indicates no rate limit.
    shared_ptr<int64_t> uploadFileMaxSpeed_ {};
    // The collection of file types that are prohibited from being uploaded. Files that match these types are not uploaded even if the upload feature is enabled. An empty list is returned if no file types are configured.
    shared_ptr<vector<string>> uploadFileSuffixBlacklist_ {};
    // Indicates whether user terminal devices are allowed to upload detected virus files to the cloud for further analysis. Valid values:
    // - **true**: Upload is allowed.
    // - **false**: Upload is not allowed.
    shared_ptr<bool> virusFileUpload_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
