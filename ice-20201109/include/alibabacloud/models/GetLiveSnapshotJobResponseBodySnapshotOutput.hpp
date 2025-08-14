// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLIVESNAPSHOTJOBRESPONSEBODYSNAPSHOTOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_GETLIVESNAPSHOTJOBRESPONSEBODYSNAPSHOTOUTPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetLiveSnapshotJobResponseBodySnapshotOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLiveSnapshotJobResponseBodySnapshotOutput& obj) { 
      DARABONBA_PTR_TO_JSON(Bucket, bucket_);
      DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
    };
    friend void from_json(const Darabonba::Json& j, GetLiveSnapshotJobResponseBodySnapshotOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
      DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
    };
    GetLiveSnapshotJobResponseBodySnapshotOutput() = default ;
    GetLiveSnapshotJobResponseBodySnapshotOutput(const GetLiveSnapshotJobResponseBodySnapshotOutput &) = default ;
    GetLiveSnapshotJobResponseBodySnapshotOutput(GetLiveSnapshotJobResponseBodySnapshotOutput &&) = default ;
    GetLiveSnapshotJobResponseBodySnapshotOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLiveSnapshotJobResponseBodySnapshotOutput() = default ;
    GetLiveSnapshotJobResponseBodySnapshotOutput& operator=(const GetLiveSnapshotJobResponseBodySnapshotOutput &) = default ;
    GetLiveSnapshotJobResponseBodySnapshotOutput& operator=(GetLiveSnapshotJobResponseBodySnapshotOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bucket_ != nullptr
        && this->endpoint_ != nullptr && this->storageType_ != nullptr; };
    // bucket Field Functions 
    bool hasBucket() const { return this->bucket_ != nullptr;};
    void deleteBucket() { this->bucket_ = nullptr;};
    inline string bucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
    inline GetLiveSnapshotJobResponseBodySnapshotOutput& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string endpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline GetLiveSnapshotJobResponseBodySnapshotOutput& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string storageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline GetLiveSnapshotJobResponseBodySnapshotOutput& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


  protected:
    // The bucket of the output endpoint. If the storage type is set to oss, the OSS bucket is returned.
    std::shared_ptr<string> bucket_ = nullptr;
    // The output endpoint. If the storage type is set to oss, the Object Storage Service (OSS) domain name is returned.
    std::shared_ptr<string> endpoint_ = nullptr;
    // The storage type. The value can only be oss.
    std::shared_ptr<string> storageType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
