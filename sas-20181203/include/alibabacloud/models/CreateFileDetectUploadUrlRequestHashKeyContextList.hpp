// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFILEDETECTUPLOADURLREQUESTHASHKEYCONTEXTLIST_HPP_
#define ALIBABACLOUD_MODELS_CREATEFILEDETECTUPLOADURLREQUESTHASHKEYCONTEXTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateFileDetectUploadUrlRequestHashKeyContextList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFileDetectUploadUrlRequestHashKeyContextList& obj) { 
      DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
      DARABONBA_PTR_TO_JSON(HashKey, hashKey_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFileDetectUploadUrlRequestHashKeyContextList& obj) { 
      DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
      DARABONBA_PTR_FROM_JSON(HashKey, hashKey_);
    };
    CreateFileDetectUploadUrlRequestHashKeyContextList() = default ;
    CreateFileDetectUploadUrlRequestHashKeyContextList(const CreateFileDetectUploadUrlRequestHashKeyContextList &) = default ;
    CreateFileDetectUploadUrlRequestHashKeyContextList(CreateFileDetectUploadUrlRequestHashKeyContextList &&) = default ;
    CreateFileDetectUploadUrlRequestHashKeyContextList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFileDetectUploadUrlRequestHashKeyContextList() = default ;
    CreateFileDetectUploadUrlRequestHashKeyContextList& operator=(const CreateFileDetectUploadUrlRequestHashKeyContextList &) = default ;
    CreateFileDetectUploadUrlRequestHashKeyContextList& operator=(CreateFileDetectUploadUrlRequestHashKeyContextList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fileSize_ != nullptr
        && this->hashKey_ != nullptr; };
    // fileSize Field Functions 
    bool hasFileSize() const { return this->fileSize_ != nullptr;};
    void deleteFileSize() { this->fileSize_ = nullptr;};
    inline int32_t fileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, 0) };
    inline CreateFileDetectUploadUrlRequestHashKeyContextList& setFileSize(int32_t fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


    // hashKey Field Functions 
    bool hasHashKey() const { return this->hashKey_ != nullptr;};
    void deleteHashKey() { this->hashKey_ = nullptr;};
    inline string hashKey() const { DARABONBA_PTR_GET_DEFAULT(hashKey_, "") };
    inline CreateFileDetectUploadUrlRequestHashKeyContextList& setHashKey(string hashKey) { DARABONBA_PTR_SET_VALUE(hashKey_, hashKey) };


  protected:
    // The size of the file. Unit: bytes.
    std::shared_ptr<int32_t> fileSize_ = nullptr;
    // The hash value of the file.
    std::shared_ptr<string> hashKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
