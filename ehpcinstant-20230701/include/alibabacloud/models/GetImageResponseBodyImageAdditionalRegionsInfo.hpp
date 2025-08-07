// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIMAGERESPONSEBODYIMAGEADDITIONALREGIONSINFO_HPP_
#define ALIBABACLOUD_MODELS_GETIMAGERESPONSEBODYIMAGEADDITIONALREGIONSINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class GetImageResponseBodyImageAdditionalRegionsInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetImageResponseBodyImageAdditionalRegionsInfo& obj) { 
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetImageResponseBodyImageAdditionalRegionsInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetImageResponseBodyImageAdditionalRegionsInfo() = default ;
    GetImageResponseBodyImageAdditionalRegionsInfo(const GetImageResponseBodyImageAdditionalRegionsInfo &) = default ;
    GetImageResponseBodyImageAdditionalRegionsInfo(GetImageResponseBodyImageAdditionalRegionsInfo &&) = default ;
    GetImageResponseBodyImageAdditionalRegionsInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetImageResponseBodyImageAdditionalRegionsInfo() = default ;
    GetImageResponseBodyImageAdditionalRegionsInfo& operator=(const GetImageResponseBodyImageAdditionalRegionsInfo &) = default ;
    GetImageResponseBodyImageAdditionalRegionsInfo& operator=(GetImageResponseBodyImageAdditionalRegionsInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->imageId_ != nullptr
        && this->regionId_ != nullptr && this->status_ != nullptr; };
    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline GetImageResponseBodyImageAdditionalRegionsInfo& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetImageResponseBodyImageAdditionalRegionsInfo& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetImageResponseBodyImageAdditionalRegionsInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> imageId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
