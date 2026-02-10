// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFILEDETECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEFILEDETECTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateFileDetectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFileDetectRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Decompress, decompress_);
      DARABONBA_PTR_TO_JSON(DecompressMaxFileCount, decompressMaxFileCount_);
      DARABONBA_PTR_TO_JSON(DecompressMaxLayer, decompressMaxLayer_);
      DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_TO_JSON(HashKey, hashKey_);
      DARABONBA_PTR_TO_JSON(OssKey, ossKey_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFileDetectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Decompress, decompress_);
      DARABONBA_PTR_FROM_JSON(DecompressMaxFileCount, decompressMaxFileCount_);
      DARABONBA_PTR_FROM_JSON(DecompressMaxLayer, decompressMaxLayer_);
      DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_FROM_JSON(HashKey, hashKey_);
      DARABONBA_PTR_FROM_JSON(OssKey, ossKey_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateFileDetectRequest() = default ;
    CreateFileDetectRequest(const CreateFileDetectRequest &) = default ;
    CreateFileDetectRequest(CreateFileDetectRequest &&) = default ;
    CreateFileDetectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFileDetectRequest() = default ;
    CreateFileDetectRequest& operator=(const CreateFileDetectRequest &) = default ;
    CreateFileDetectRequest& operator=(CreateFileDetectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->decompress_ == nullptr
        && this->decompressMaxFileCount_ == nullptr && this->decompressMaxLayer_ == nullptr && this->downloadUrl_ == nullptr && this->hashKey_ == nullptr && this->ossKey_ == nullptr
        && this->sourceIp_ == nullptr && this->type_ == nullptr; };
    // decompress Field Functions 
    bool hasDecompress() const { return this->decompress_ != nullptr;};
    void deleteDecompress() { this->decompress_ = nullptr;};
    inline bool getDecompress() const { DARABONBA_PTR_GET_DEFAULT(decompress_, false) };
    inline CreateFileDetectRequest& setDecompress(bool decompress) { DARABONBA_PTR_SET_VALUE(decompress_, decompress) };


    // decompressMaxFileCount Field Functions 
    bool hasDecompressMaxFileCount() const { return this->decompressMaxFileCount_ != nullptr;};
    void deleteDecompressMaxFileCount() { this->decompressMaxFileCount_ = nullptr;};
    inline int32_t getDecompressMaxFileCount() const { DARABONBA_PTR_GET_DEFAULT(decompressMaxFileCount_, 0) };
    inline CreateFileDetectRequest& setDecompressMaxFileCount(int32_t decompressMaxFileCount) { DARABONBA_PTR_SET_VALUE(decompressMaxFileCount_, decompressMaxFileCount) };


    // decompressMaxLayer Field Functions 
    bool hasDecompressMaxLayer() const { return this->decompressMaxLayer_ != nullptr;};
    void deleteDecompressMaxLayer() { this->decompressMaxLayer_ = nullptr;};
    inline int32_t getDecompressMaxLayer() const { DARABONBA_PTR_GET_DEFAULT(decompressMaxLayer_, 0) };
    inline CreateFileDetectRequest& setDecompressMaxLayer(int32_t decompressMaxLayer) { DARABONBA_PTR_SET_VALUE(decompressMaxLayer_, decompressMaxLayer) };


    // downloadUrl Field Functions 
    bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
    void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
    inline string getDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
    inline CreateFileDetectRequest& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


    // hashKey Field Functions 
    bool hasHashKey() const { return this->hashKey_ != nullptr;};
    void deleteHashKey() { this->hashKey_ = nullptr;};
    inline string getHashKey() const { DARABONBA_PTR_GET_DEFAULT(hashKey_, "") };
    inline CreateFileDetectRequest& setHashKey(string hashKey) { DARABONBA_PTR_SET_VALUE(hashKey_, hashKey) };


    // ossKey Field Functions 
    bool hasOssKey() const { return this->ossKey_ != nullptr;};
    void deleteOssKey() { this->ossKey_ = nullptr;};
    inline string getOssKey() const { DARABONBA_PTR_GET_DEFAULT(ossKey_, "") };
    inline CreateFileDetectRequest& setOssKey(string ossKey) { DARABONBA_PTR_SET_VALUE(ossKey_, ossKey) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline CreateFileDetectRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline CreateFileDetectRequest& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Whether to decompress or not. Valid values:
    // 
    // - true: To decompress.
    // - false: Not to decompress.
    shared_ptr<bool> decompress_ {};
    // The maximum number of files for decompression. The minimum value is 1, and the maximum value is 1000. If the decompression level exceeds the maximum, the decompression operation will be terminated, but the detection of decompressed files will not be affected.
    shared_ptr<int32_t> decompressMaxFileCount_ {};
    // The maximum level of decompression when dealing with nested compressed files with multiple levels. The minimum value is 1, and the maximum value is 5. If the decompression level exceeds the maximum, the decompression operation will be terminated, but the detection of decompressed files will not be affected.
    shared_ptr<int32_t> decompressMaxLayer_ {};
    // The URL that is used to download the file. You can specify this parameter to trigger file detection without the need to upload the file in advance.
    shared_ptr<string> downloadUrl_ {};
    // The identifier of the file. Only MD5 hash values are supported.
    // 
    // This parameter is required.
    shared_ptr<string> hashKey_ {};
    // The key of the file that is stored in the Object Storage Service (OSS) bucket. You can call the [CreateFileDetectUploadUrl](~~CreateFileDetectUploadUrl~~) operation to query the keys of files.
    shared_ptr<string> ossKey_ {};
    // The source IP address of the request.
    shared_ptr<string> sourceIp_ {};
    // The type of the file. Valid values:
    // 
    // *   **0**: unknown files
    // *   **1**: binary files
    // *   **2**: webshell files
    // *   **4**: script files
    // 
    // >  If you do not know the type of the file, set this parameter to 0.
    // 
    // This parameter is required.
    shared_ptr<int32_t> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
