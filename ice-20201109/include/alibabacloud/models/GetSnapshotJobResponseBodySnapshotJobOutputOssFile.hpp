// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSNAPSHOTJOBRESPONSEBODYSNAPSHOTJOBOUTPUTOSSFILE_HPP_
#define ALIBABACLOUD_MODELS_GETSNAPSHOTJOBRESPONSEBODYSNAPSHOTJOBOUTPUTOSSFILE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetSnapshotJobResponseBodySnapshotJobOutputOssFile : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSnapshotJobResponseBodySnapshotJobOutputOssFile& obj) { 
      DARABONBA_PTR_TO_JSON(Bucket, bucket_);
      DARABONBA_PTR_TO_JSON(Location, location_);
      DARABONBA_PTR_TO_JSON(Object, object_);
    };
    friend void from_json(const Darabonba::Json& j, GetSnapshotJobResponseBodySnapshotJobOutputOssFile& obj) { 
      DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
      DARABONBA_PTR_FROM_JSON(Location, location_);
      DARABONBA_PTR_FROM_JSON(Object, object_);
    };
    GetSnapshotJobResponseBodySnapshotJobOutputOssFile() = default ;
    GetSnapshotJobResponseBodySnapshotJobOutputOssFile(const GetSnapshotJobResponseBodySnapshotJobOutputOssFile &) = default ;
    GetSnapshotJobResponseBodySnapshotJobOutputOssFile(GetSnapshotJobResponseBodySnapshotJobOutputOssFile &&) = default ;
    GetSnapshotJobResponseBodySnapshotJobOutputOssFile(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSnapshotJobResponseBodySnapshotJobOutputOssFile() = default ;
    GetSnapshotJobResponseBodySnapshotJobOutputOssFile& operator=(const GetSnapshotJobResponseBodySnapshotJobOutputOssFile &) = default ;
    GetSnapshotJobResponseBodySnapshotJobOutputOssFile& operator=(GetSnapshotJobResponseBodySnapshotJobOutputOssFile &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bucket_ != nullptr
        && this->location_ != nullptr && this->object_ != nullptr; };
    // bucket Field Functions 
    bool hasBucket() const { return this->bucket_ != nullptr;};
    void deleteBucket() { this->bucket_ = nullptr;};
    inline string bucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
    inline GetSnapshotJobResponseBodySnapshotJobOutputOssFile& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string location() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline GetSnapshotJobResponseBodySnapshotJobOutputOssFile& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // object Field Functions 
    bool hasObject() const { return this->object_ != nullptr;};
    void deleteObject() { this->object_ = nullptr;};
    inline string object() const { DARABONBA_PTR_GET_DEFAULT(object_, "") };
    inline GetSnapshotJobResponseBodySnapshotJobOutputOssFile& setObject(string object) { DARABONBA_PTR_SET_VALUE(object_, object) };


  protected:
    // The OSS bucket.
    std::shared_ptr<string> bucket_ = nullptr;
    // The OSS location.
    std::shared_ptr<string> location_ = nullptr;
    // The OSS object.
    std::shared_ptr<string> object_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
