// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITLIVESNAPSHOTJOBREQUESTSNAPSHOTOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_SUBMITLIVESNAPSHOTJOBREQUESTSNAPSHOTOUTPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitLiveSnapshotJobRequestSnapshotOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitLiveSnapshotJobRequestSnapshotOutput& obj) { 
      DARABONBA_PTR_TO_JSON(Bucket, bucket_);
      DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitLiveSnapshotJobRequestSnapshotOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
      DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
    };
    SubmitLiveSnapshotJobRequestSnapshotOutput() = default ;
    SubmitLiveSnapshotJobRequestSnapshotOutput(const SubmitLiveSnapshotJobRequestSnapshotOutput &) = default ;
    SubmitLiveSnapshotJobRequestSnapshotOutput(SubmitLiveSnapshotJobRequestSnapshotOutput &&) = default ;
    SubmitLiveSnapshotJobRequestSnapshotOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitLiveSnapshotJobRequestSnapshotOutput() = default ;
    SubmitLiveSnapshotJobRequestSnapshotOutput& operator=(const SubmitLiveSnapshotJobRequestSnapshotOutput &) = default ;
    SubmitLiveSnapshotJobRequestSnapshotOutput& operator=(SubmitLiveSnapshotJobRequestSnapshotOutput &&) = default ;
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
    inline SubmitLiveSnapshotJobRequestSnapshotOutput& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string endpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline SubmitLiveSnapshotJobRequestSnapshotOutput& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string storageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline SubmitLiveSnapshotJobRequestSnapshotOutput& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


  protected:
    // The bucket of the snapshot output endpoint.
    // 
    // This parameter is required.
    std::shared_ptr<string> bucket_ = nullptr;
    // The output endpoint of the snapshot.
    // 
    // This parameter is required.
    std::shared_ptr<string> endpoint_ = nullptr;
    // The storage type of the snapshot. The value can only be oss.
    // 
    // This parameter is required.
    std::shared_ptr<string> storageType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
