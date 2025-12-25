// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETATTACHMENTUPLOADURLRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETATTACHMENTUPLOADURLRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Workorder20210610
{
namespace Models
{
  class GetAttachmentUploadUrlResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAttachmentUploadUrlResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(GetSignedUrl, getSignedUrl_);
      DARABONBA_PTR_TO_JSON(ObjectKey, objectKey_);
      DARABONBA_PTR_TO_JSON(PutSignedUrl, putSignedUrl_);
    };
    friend void from_json(const Darabonba::Json& j, GetAttachmentUploadUrlResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(GetSignedUrl, getSignedUrl_);
      DARABONBA_PTR_FROM_JSON(ObjectKey, objectKey_);
      DARABONBA_PTR_FROM_JSON(PutSignedUrl, putSignedUrl_);
    };
    GetAttachmentUploadUrlResponseBodyData() = default ;
    GetAttachmentUploadUrlResponseBodyData(const GetAttachmentUploadUrlResponseBodyData &) = default ;
    GetAttachmentUploadUrlResponseBodyData(GetAttachmentUploadUrlResponseBodyData &&) = default ;
    GetAttachmentUploadUrlResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAttachmentUploadUrlResponseBodyData() = default ;
    GetAttachmentUploadUrlResponseBodyData& operator=(const GetAttachmentUploadUrlResponseBodyData &) = default ;
    GetAttachmentUploadUrlResponseBodyData& operator=(GetAttachmentUploadUrlResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->getSignedUrl_ == nullptr
        && return this->objectKey_ == nullptr && return this->putSignedUrl_ == nullptr; };
    // getSignedUrl Field Functions 
    bool hasGetSignedUrl() const { return this->getSignedUrl_ != nullptr;};
    void deleteGetSignedUrl() { this->getSignedUrl_ = nullptr;};
    inline string getSignedUrl() const { DARABONBA_PTR_GET_DEFAULT(getSignedUrl_, "") };
    inline GetAttachmentUploadUrlResponseBodyData& setGetSignedUrl(string getSignedUrl) { DARABONBA_PTR_SET_VALUE(getSignedUrl_, getSignedUrl) };


    // objectKey Field Functions 
    bool hasObjectKey() const { return this->objectKey_ != nullptr;};
    void deleteObjectKey() { this->objectKey_ = nullptr;};
    inline string objectKey() const { DARABONBA_PTR_GET_DEFAULT(objectKey_, "") };
    inline GetAttachmentUploadUrlResponseBodyData& setObjectKey(string objectKey) { DARABONBA_PTR_SET_VALUE(objectKey_, objectKey) };


    // putSignedUrl Field Functions 
    bool hasPutSignedUrl() const { return this->putSignedUrl_ != nullptr;};
    void deletePutSignedUrl() { this->putSignedUrl_ = nullptr;};
    inline string putSignedUrl() const { DARABONBA_PTR_GET_DEFAULT(putSignedUrl_, "") };
    inline GetAttachmentUploadUrlResponseBodyData& setPutSignedUrl(string putSignedUrl) { DARABONBA_PTR_SET_VALUE(putSignedUrl_, putSignedUrl) };


  protected:
    // Query the signed URL of an OSS object
    std::shared_ptr<string> getSignedUrl_ = nullptr;
    // Uploaded file identifier
    std::shared_ptr<string> objectKey_ = nullptr;
    // The signed URL used to upload the object to OSS.
    std::shared_ptr<string> putSignedUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Workorder20210610
#endif
