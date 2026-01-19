// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEIMAGECACHEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEIMAGECACHEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Acc20240402
{
namespace Models
{
  class DeleteImageCacheRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteImageCacheRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Force, force_);
      DARABONBA_PTR_TO_JSON(ImageCacheId, imageCacheId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteImageCacheRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Force, force_);
      DARABONBA_PTR_FROM_JSON(ImageCacheId, imageCacheId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteImageCacheRequest() = default ;
    DeleteImageCacheRequest(const DeleteImageCacheRequest &) = default ;
    DeleteImageCacheRequest(DeleteImageCacheRequest &&) = default ;
    DeleteImageCacheRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteImageCacheRequest() = default ;
    DeleteImageCacheRequest& operator=(const DeleteImageCacheRequest &) = default ;
    DeleteImageCacheRequest& operator=(DeleteImageCacheRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->force_ == nullptr
        && this->imageCacheId_ == nullptr && this->regionId_ == nullptr; };
    // force Field Functions 
    bool hasForce() const { return this->force_ != nullptr;};
    void deleteForce() { this->force_ = nullptr;};
    inline bool getForce() const { DARABONBA_PTR_GET_DEFAULT(force_, false) };
    inline DeleteImageCacheRequest& setForce(bool force) { DARABONBA_PTR_SET_VALUE(force_, force) };


    // imageCacheId Field Functions 
    bool hasImageCacheId() const { return this->imageCacheId_ != nullptr;};
    void deleteImageCacheId() { this->imageCacheId_ = nullptr;};
    inline string getImageCacheId() const { DARABONBA_PTR_GET_DEFAULT(imageCacheId_, "") };
    inline DeleteImageCacheRequest& setImageCacheId(string imageCacheId) { DARABONBA_PTR_SET_VALUE(imageCacheId_, imageCacheId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteImageCacheRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    shared_ptr<bool> force_ {};
    // This parameter is required.
    shared_ptr<string> imageCacheId_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Acc20240402
#endif
