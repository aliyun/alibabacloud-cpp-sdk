// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTIMAGEREQUESTDISKDEVICEMAPPING_HPP_
#define ALIBABACLOUD_MODELS_IMPORTIMAGEREQUESTDISKDEVICEMAPPING_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class ImportImageRequestDiskDeviceMapping : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportImageRequestDiskDeviceMapping& obj) { 
      DARABONBA_PTR_TO_JSON(OSSBucket, OSSBucket_);
      DARABONBA_PTR_TO_JSON(OSSObject, OSSObject_);
      DARABONBA_PTR_TO_JSON(OSSRegion, OSSRegion_);
    };
    friend void from_json(const Darabonba::Json& j, ImportImageRequestDiskDeviceMapping& obj) { 
      DARABONBA_PTR_FROM_JSON(OSSBucket, OSSBucket_);
      DARABONBA_PTR_FROM_JSON(OSSObject, OSSObject_);
      DARABONBA_PTR_FROM_JSON(OSSRegion, OSSRegion_);
    };
    ImportImageRequestDiskDeviceMapping() = default ;
    ImportImageRequestDiskDeviceMapping(const ImportImageRequestDiskDeviceMapping &) = default ;
    ImportImageRequestDiskDeviceMapping(ImportImageRequestDiskDeviceMapping &&) = default ;
    ImportImageRequestDiskDeviceMapping(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportImageRequestDiskDeviceMapping() = default ;
    ImportImageRequestDiskDeviceMapping& operator=(const ImportImageRequestDiskDeviceMapping &) = default ;
    ImportImageRequestDiskDeviceMapping& operator=(ImportImageRequestDiskDeviceMapping &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->OSSBucket_ == nullptr
        && return this->OSSObject_ == nullptr && return this->OSSRegion_ == nullptr; };
    // OSSBucket Field Functions 
    bool hasOSSBucket() const { return this->OSSBucket_ != nullptr;};
    void deleteOSSBucket() { this->OSSBucket_ = nullptr;};
    inline string OSSBucket() const { DARABONBA_PTR_GET_DEFAULT(OSSBucket_, "") };
    inline ImportImageRequestDiskDeviceMapping& setOSSBucket(string OSSBucket) { DARABONBA_PTR_SET_VALUE(OSSBucket_, OSSBucket) };


    // OSSObject Field Functions 
    bool hasOSSObject() const { return this->OSSObject_ != nullptr;};
    void deleteOSSObject() { this->OSSObject_ = nullptr;};
    inline string OSSObject() const { DARABONBA_PTR_GET_DEFAULT(OSSObject_, "") };
    inline ImportImageRequestDiskDeviceMapping& setOSSObject(string OSSObject) { DARABONBA_PTR_SET_VALUE(OSSObject_, OSSObject) };


    // OSSRegion Field Functions 
    bool hasOSSRegion() const { return this->OSSRegion_ != nullptr;};
    void deleteOSSRegion() { this->OSSRegion_ = nullptr;};
    inline string OSSRegion() const { DARABONBA_PTR_GET_DEFAULT(OSSRegion_, "") };
    inline ImportImageRequestDiskDeviceMapping& setOSSRegion(string OSSRegion) { DARABONBA_PTR_SET_VALUE(OSSRegion_, OSSRegion) };


  protected:
    // The OSS Bucket where the image is stored.
    std::shared_ptr<string> OSSBucket_ = nullptr;
    // The filename (key) of the image file after it is uploaded to the OSS Bucket.
    std::shared_ptr<string> OSSObject_ = nullptr;
    // The Region where the image is located.
    std::shared_ptr<string> OSSRegion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
