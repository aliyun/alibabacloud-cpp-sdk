// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREPOTAGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETREPOTAGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class GetRepoTagResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRepoTagResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Digest, digest_);
      DARABONBA_PTR_TO_JSON(ImageCreate, imageCreate_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ImageSize, imageSize_);
      DARABONBA_PTR_TO_JSON(ImageUpdate, imageUpdate_);
      DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, GetRepoTagResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Digest, digest_);
      DARABONBA_PTR_FROM_JSON(ImageCreate, imageCreate_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ImageSize, imageSize_);
      DARABONBA_PTR_FROM_JSON(ImageUpdate, imageUpdate_);
      DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    GetRepoTagResponseBody() = default ;
    GetRepoTagResponseBody(const GetRepoTagResponseBody &) = default ;
    GetRepoTagResponseBody(GetRepoTagResponseBody &&) = default ;
    GetRepoTagResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRepoTagResponseBody() = default ;
    GetRepoTagResponseBody& operator=(const GetRepoTagResponseBody &) = default ;
    GetRepoTagResponseBody& operator=(GetRepoTagResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->digest_ == nullptr && this->imageCreate_ == nullptr && this->imageId_ == nullptr && this->imageSize_ == nullptr && this->imageUpdate_ == nullptr
        && this->isSuccess_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr && this->tag_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetRepoTagResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // digest Field Functions 
    bool hasDigest() const { return this->digest_ != nullptr;};
    void deleteDigest() { this->digest_ = nullptr;};
    inline string getDigest() const { DARABONBA_PTR_GET_DEFAULT(digest_, "") };
    inline GetRepoTagResponseBody& setDigest(string digest) { DARABONBA_PTR_SET_VALUE(digest_, digest) };


    // imageCreate Field Functions 
    bool hasImageCreate() const { return this->imageCreate_ != nullptr;};
    void deleteImageCreate() { this->imageCreate_ = nullptr;};
    inline int64_t getImageCreate() const { DARABONBA_PTR_GET_DEFAULT(imageCreate_, 0L) };
    inline GetRepoTagResponseBody& setImageCreate(int64_t imageCreate) { DARABONBA_PTR_SET_VALUE(imageCreate_, imageCreate) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline GetRepoTagResponseBody& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageSize Field Functions 
    bool hasImageSize() const { return this->imageSize_ != nullptr;};
    void deleteImageSize() { this->imageSize_ = nullptr;};
    inline int64_t getImageSize() const { DARABONBA_PTR_GET_DEFAULT(imageSize_, 0L) };
    inline GetRepoTagResponseBody& setImageSize(int64_t imageSize) { DARABONBA_PTR_SET_VALUE(imageSize_, imageSize) };


    // imageUpdate Field Functions 
    bool hasImageUpdate() const { return this->imageUpdate_ != nullptr;};
    void deleteImageUpdate() { this->imageUpdate_ = nullptr;};
    inline int64_t getImageUpdate() const { DARABONBA_PTR_GET_DEFAULT(imageUpdate_, 0L) };
    inline GetRepoTagResponseBody& setImageUpdate(int64_t imageUpdate) { DARABONBA_PTR_SET_VALUE(imageUpdate_, imageUpdate) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool getIsSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline GetRepoTagResponseBody& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRepoTagResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetRepoTagResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline GetRepoTagResponseBody& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


  protected:
    // The ID of the image.
    shared_ptr<string> code_ {};
    // The size of the image. Unit: Bytes.
    shared_ptr<string> digest_ {};
    // crr-tquyps22md8p****
    shared_ptr<int64_t> imageCreate_ {};
    shared_ptr<string> imageId_ {};
    // The number of milliseconds that have elapsed since the image was last updated.
    shared_ptr<int64_t> imageSize_ {};
    // The ID of the request.
    shared_ptr<int64_t> imageUpdate_ {};
    // The status of the image. Valid values:
    // 
    // *   `NORMAL`: The image is normal.
    // *   `DELETING`: The image is being deleted.
    shared_ptr<bool> isSuccess_ {};
    // 1.0
    shared_ptr<string> requestId_ {};
    // The ID of the instance.
    shared_ptr<string> status_ {};
    // The version of the repository.
    shared_ptr<string> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
