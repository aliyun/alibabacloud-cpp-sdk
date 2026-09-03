// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRIALINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTRIALINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class GetTrialInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTrialInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Bucket, bucket_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
    };
    friend void from_json(const Darabonba::Json& j, GetTrialInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
    };
    GetTrialInfoRequest() = default ;
    GetTrialInfoRequest(const GetTrialInfoRequest &) = default ;
    GetTrialInfoRequest(GetTrialInfoRequest &&) = default ;
    GetTrialInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTrialInfoRequest() = default ;
    GetTrialInfoRequest& operator=(const GetTrialInfoRequest &) = default ;
    GetTrialInfoRequest& operator=(GetTrialInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bucket_ == nullptr
        && this->createTime_ == nullptr && this->fileSystemId_ == nullptr && this->sourceType_ == nullptr; };
    // bucket Field Functions 
    bool hasBucket() const { return this->bucket_ != nullptr;};
    void deleteBucket() { this->bucket_ = nullptr;};
    inline string getBucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
    inline GetTrialInfoRequest& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetTrialInfoRequest& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline GetTrialInfoRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline GetTrialInfoRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


  protected:
    // This parameter is required only when **SourceType** is set to **OSS**. The name of the OSS bucket.
    shared_ptr<string> bucket_ {};
    // This parameter is required only when **SourceType** is set to **NAS**. The time when the file system was created. UNIX timestamp, in seconds.
    shared_ptr<int64_t> createTime_ {};
    // This parameter is required only when **SourceType** is set to **NAS**. The ID of the file system.
    shared_ptr<string> fileSystemId_ {};
    // The data source type. Only free trial information of OSS backup and NAS backup can be queried.
    // 
    // This parameter is required.
    shared_ptr<string> sourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
