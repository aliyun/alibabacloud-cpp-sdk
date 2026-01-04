// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXPORTIMAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class ExportImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(OSSBucket, OSSBucket_);
      DARABONBA_PTR_TO_JSON(OSSPrefix, OSSPrefix_);
      DARABONBA_PTR_TO_JSON(OSSRegionId, OSSRegionId_);
      DARABONBA_PTR_TO_JSON(RoleName, roleName_);
    };
    friend void from_json(const Darabonba::Json& j, ExportImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(OSSBucket, OSSBucket_);
      DARABONBA_PTR_FROM_JSON(OSSPrefix, OSSPrefix_);
      DARABONBA_PTR_FROM_JSON(OSSRegionId, OSSRegionId_);
      DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
    };
    ExportImageRequest() = default ;
    ExportImageRequest(const ExportImageRequest &) = default ;
    ExportImageRequest(ExportImageRequest &&) = default ;
    ExportImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportImageRequest() = default ;
    ExportImageRequest& operator=(const ExportImageRequest &) = default ;
    ExportImageRequest& operator=(ExportImageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageId_ == nullptr
        && this->OSSBucket_ == nullptr && this->OSSPrefix_ == nullptr && this->OSSRegionId_ == nullptr && this->roleName_ == nullptr; };
    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline ExportImageRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // OSSBucket Field Functions 
    bool hasOSSBucket() const { return this->OSSBucket_ != nullptr;};
    void deleteOSSBucket() { this->OSSBucket_ = nullptr;};
    inline string getOSSBucket() const { DARABONBA_PTR_GET_DEFAULT(OSSBucket_, "") };
    inline ExportImageRequest& setOSSBucket(string OSSBucket) { DARABONBA_PTR_SET_VALUE(OSSBucket_, OSSBucket) };


    // OSSPrefix Field Functions 
    bool hasOSSPrefix() const { return this->OSSPrefix_ != nullptr;};
    void deleteOSSPrefix() { this->OSSPrefix_ = nullptr;};
    inline string getOSSPrefix() const { DARABONBA_PTR_GET_DEFAULT(OSSPrefix_, "") };
    inline ExportImageRequest& setOSSPrefix(string OSSPrefix) { DARABONBA_PTR_SET_VALUE(OSSPrefix_, OSSPrefix) };


    // OSSRegionId Field Functions 
    bool hasOSSRegionId() const { return this->OSSRegionId_ != nullptr;};
    void deleteOSSRegionId() { this->OSSRegionId_ = nullptr;};
    inline string getOSSRegionId() const { DARABONBA_PTR_GET_DEFAULT(OSSRegionId_, "") };
    inline ExportImageRequest& setOSSRegionId(string OSSRegionId) { DARABONBA_PTR_SET_VALUE(OSSRegionId_, OSSRegionId) };


    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline string getRoleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
    inline ExportImageRequest& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


  protected:
    // The ID of the image.
    // 
    // This parameter is required.
    shared_ptr<string> imageId_ {};
    // The OSS bucket to which you want to export the image.
    // 
    // This parameter is required.
    shared_ptr<string> OSSBucket_ {};
    // The prefix of the object as which you want to store the image in the OSS bucket. The prefix must be 1 to 30 characters in length and can contain digits and letters.
    shared_ptr<string> OSSPrefix_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> OSSRegionId_ {};
    // The name of the Resource Access Management (RAM) role.
    shared_ptr<string> roleName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
