// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEFAULTSTORAGELOCATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDEFAULTSTORAGELOCATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetDefaultStorageLocationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDefaultStorageLocationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Bucket, bucket_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
    };
    friend void from_json(const Darabonba::Json& j, GetDefaultStorageLocationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
    };
    GetDefaultStorageLocationResponseBody() = default ;
    GetDefaultStorageLocationResponseBody(const GetDefaultStorageLocationResponseBody &) = default ;
    GetDefaultStorageLocationResponseBody(GetDefaultStorageLocationResponseBody &&) = default ;
    GetDefaultStorageLocationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDefaultStorageLocationResponseBody() = default ;
    GetDefaultStorageLocationResponseBody& operator=(const GetDefaultStorageLocationResponseBody &) = default ;
    GetDefaultStorageLocationResponseBody& operator=(GetDefaultStorageLocationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bucket_ != nullptr
        && this->path_ != nullptr && this->requestId_ != nullptr && this->status_ != nullptr && this->storageType_ != nullptr; };
    // bucket Field Functions 
    bool hasBucket() const { return this->bucket_ != nullptr;};
    void deleteBucket() { this->bucket_ = nullptr;};
    inline string bucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
    inline GetDefaultStorageLocationResponseBody& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline GetDefaultStorageLocationResponseBody& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDefaultStorageLocationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetDefaultStorageLocationResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string storageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline GetDefaultStorageLocationResponseBody& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


  protected:
    std::shared_ptr<string> bucket_ = nullptr;
    std::shared_ptr<string> path_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> storageType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
