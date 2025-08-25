// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIMAGECACHEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETIMAGECACHEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Acc20240402
{
namespace Models
{
  class GetImageCacheRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetImageCacheRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageCacheId, imageCacheId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetImageCacheRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageCacheId, imageCacheId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    GetImageCacheRequest() = default ;
    GetImageCacheRequest(const GetImageCacheRequest &) = default ;
    GetImageCacheRequest(GetImageCacheRequest &&) = default ;
    GetImageCacheRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetImageCacheRequest() = default ;
    GetImageCacheRequest& operator=(const GetImageCacheRequest &) = default ;
    GetImageCacheRequest& operator=(GetImageCacheRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->imageCacheId_ != nullptr
        && this->regionId_ != nullptr; };
    // imageCacheId Field Functions 
    bool hasImageCacheId() const { return this->imageCacheId_ != nullptr;};
    void deleteImageCacheId() { this->imageCacheId_ = nullptr;};
    inline string imageCacheId() const { DARABONBA_PTR_GET_DEFAULT(imageCacheId_, "") };
    inline GetImageCacheRequest& setImageCacheId(string imageCacheId) { DARABONBA_PTR_SET_VALUE(imageCacheId_, imageCacheId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetImageCacheRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> imageCacheId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Acc20240402
#endif
