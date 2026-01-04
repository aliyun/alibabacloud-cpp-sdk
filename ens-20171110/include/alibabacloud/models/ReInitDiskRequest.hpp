// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REINITDISKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REINITDISKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class ReInitDiskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReInitDiskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DiskId, diskId_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
    };
    friend void from_json(const Darabonba::Json& j, ReInitDiskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DiskId, diskId_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
    };
    ReInitDiskRequest() = default ;
    ReInitDiskRequest(const ReInitDiskRequest &) = default ;
    ReInitDiskRequest(ReInitDiskRequest &&) = default ;
    ReInitDiskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReInitDiskRequest() = default ;
    ReInitDiskRequest& operator=(const ReInitDiskRequest &) = default ;
    ReInitDiskRequest& operator=(ReInitDiskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->diskId_ == nullptr
        && this->imageId_ == nullptr; };
    // diskId Field Functions 
    bool hasDiskId() const { return this->diskId_ != nullptr;};
    void deleteDiskId() { this->diskId_ = nullptr;};
    inline string getDiskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
    inline ReInitDiskRequest& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline ReInitDiskRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


  protected:
    // The ID of the disk to be initialized. You can initialize only one disk at a time.
    // 
    // This parameter is required.
    shared_ptr<string> diskId_ {};
    // The ID of the image to use to create the instance.
    // 
    // This parameter is required.
    shared_ptr<string> imageId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
