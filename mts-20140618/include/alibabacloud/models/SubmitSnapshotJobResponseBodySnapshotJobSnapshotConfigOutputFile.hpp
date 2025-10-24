// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITSNAPSHOTJOBRESPONSEBODYSNAPSHOTJOBSNAPSHOTCONFIGOUTPUTFILE_HPP_
#define ALIBABACLOUD_MODELS_SUBMITSNAPSHOTJOBRESPONSEBODYSNAPSHOTJOBSNAPSHOTCONFIGOUTPUTFILE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfigOutputFile : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfigOutputFile& obj) { 
      DARABONBA_PTR_TO_JSON(Bucket, bucket_);
      DARABONBA_PTR_TO_JSON(Location, location_);
      DARABONBA_PTR_TO_JSON(Object, object_);
      DARABONBA_PTR_TO_JSON(RoleArn, roleArn_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfigOutputFile& obj) { 
      DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
      DARABONBA_PTR_FROM_JSON(Location, location_);
      DARABONBA_PTR_FROM_JSON(Object, object_);
      DARABONBA_PTR_FROM_JSON(RoleArn, roleArn_);
    };
    SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfigOutputFile() = default ;
    SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfigOutputFile(const SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfigOutputFile &) = default ;
    SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfigOutputFile(SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfigOutputFile &&) = default ;
    SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfigOutputFile(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfigOutputFile() = default ;
    SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfigOutputFile& operator=(const SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfigOutputFile &) = default ;
    SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfigOutputFile& operator=(SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfigOutputFile &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bucket_ == nullptr
        && return this->location_ == nullptr && return this->object_ == nullptr && return this->roleArn_ == nullptr; };
    // bucket Field Functions 
    bool hasBucket() const { return this->bucket_ != nullptr;};
    void deleteBucket() { this->bucket_ = nullptr;};
    inline string bucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
    inline SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfigOutputFile& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string location() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfigOutputFile& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // object Field Functions 
    bool hasObject() const { return this->object_ != nullptr;};
    void deleteObject() { this->object_ = nullptr;};
    inline string object() const { DARABONBA_PTR_GET_DEFAULT(object_, "") };
    inline SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfigOutputFile& setObject(string object) { DARABONBA_PTR_SET_VALUE(object_, object) };


    // roleArn Field Functions 
    bool hasRoleArn() const { return this->roleArn_ != nullptr;};
    void deleteRoleArn() { this->roleArn_ = nullptr;};
    inline string roleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
    inline SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfigOutputFile& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


  protected:
    // The OSS bucket that stores the output snapshot.
    std::shared_ptr<string> bucket_ = nullptr;
    // The OSS region in which the OSS bucket for storing the output snapshot resides.
    std::shared_ptr<string> location_ = nullptr;
    // The OSS object that is generated as the output file of the snapshot job.
    std::shared_ptr<string> object_ = nullptr;
    // The Alibaba Cloud Resource Name (ARN) of the specified RAM role. Format: acs:ram::$accountID:role/$roleName.
    std::shared_ptr<string> roleArn_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
