// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDYNAMICIMAGEJOBRESPONSEBODYDYNAMICIMAGEJOBOUTPUTOSSFILE_HPP_
#define ALIBABACLOUD_MODELS_GETDYNAMICIMAGEJOBRESPONSEBODYDYNAMICIMAGEJOBOUTPUTOSSFILE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetDynamicImageJobResponseBodyDynamicImageJobOutputOssFile : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDynamicImageJobResponseBodyDynamicImageJobOutputOssFile& obj) { 
      DARABONBA_PTR_TO_JSON(Bucket, bucket_);
      DARABONBA_PTR_TO_JSON(Location, location_);
      DARABONBA_PTR_TO_JSON(Object, object_);
    };
    friend void from_json(const Darabonba::Json& j, GetDynamicImageJobResponseBodyDynamicImageJobOutputOssFile& obj) { 
      DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
      DARABONBA_PTR_FROM_JSON(Location, location_);
      DARABONBA_PTR_FROM_JSON(Object, object_);
    };
    GetDynamicImageJobResponseBodyDynamicImageJobOutputOssFile() = default ;
    GetDynamicImageJobResponseBodyDynamicImageJobOutputOssFile(const GetDynamicImageJobResponseBodyDynamicImageJobOutputOssFile &) = default ;
    GetDynamicImageJobResponseBodyDynamicImageJobOutputOssFile(GetDynamicImageJobResponseBodyDynamicImageJobOutputOssFile &&) = default ;
    GetDynamicImageJobResponseBodyDynamicImageJobOutputOssFile(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDynamicImageJobResponseBodyDynamicImageJobOutputOssFile() = default ;
    GetDynamicImageJobResponseBodyDynamicImageJobOutputOssFile& operator=(const GetDynamicImageJobResponseBodyDynamicImageJobOutputOssFile &) = default ;
    GetDynamicImageJobResponseBodyDynamicImageJobOutputOssFile& operator=(GetDynamicImageJobResponseBodyDynamicImageJobOutputOssFile &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bucket_ == nullptr
        && return this->location_ == nullptr && return this->object_ == nullptr; };
    // bucket Field Functions 
    bool hasBucket() const { return this->bucket_ != nullptr;};
    void deleteBucket() { this->bucket_ = nullptr;};
    inline string bucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
    inline GetDynamicImageJobResponseBodyDynamicImageJobOutputOssFile& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string location() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline GetDynamicImageJobResponseBodyDynamicImageJobOutputOssFile& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // object Field Functions 
    bool hasObject() const { return this->object_ != nullptr;};
    void deleteObject() { this->object_ = nullptr;};
    inline string object() const { DARABONBA_PTR_GET_DEFAULT(object_, "") };
    inline GetDynamicImageJobResponseBodyDynamicImageJobOutputOssFile& setObject(string object) { DARABONBA_PTR_SET_VALUE(object_, object) };


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
