// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIMAGERESPONSEBODYIMAGEVMIMAGESPEC_HPP_
#define ALIBABACLOUD_MODELS_GETIMAGERESPONSEBODYIMAGEVMIMAGESPEC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class GetImageResponseBodyImageVMImageSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetImageResponseBodyImageVMImageSpec& obj) { 
      DARABONBA_PTR_TO_JSON(Architecture, architecture_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(OsTag, osTag_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
    };
    friend void from_json(const Darabonba::Json& j, GetImageResponseBodyImageVMImageSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(Architecture, architecture_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(OsTag, osTag_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
    };
    GetImageResponseBodyImageVMImageSpec() = default ;
    GetImageResponseBodyImageVMImageSpec(const GetImageResponseBodyImageVMImageSpec &) = default ;
    GetImageResponseBodyImageVMImageSpec(GetImageResponseBodyImageVMImageSpec &&) = default ;
    GetImageResponseBodyImageVMImageSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetImageResponseBodyImageVMImageSpec() = default ;
    GetImageResponseBodyImageVMImageSpec& operator=(const GetImageResponseBodyImageVMImageSpec &) = default ;
    GetImageResponseBodyImageVMImageSpec& operator=(GetImageResponseBodyImageVMImageSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->architecture_ != nullptr
        && this->imageId_ != nullptr && this->osTag_ != nullptr && this->platform_ != nullptr; };
    // architecture Field Functions 
    bool hasArchitecture() const { return this->architecture_ != nullptr;};
    void deleteArchitecture() { this->architecture_ = nullptr;};
    inline string architecture() const { DARABONBA_PTR_GET_DEFAULT(architecture_, "") };
    inline GetImageResponseBodyImageVMImageSpec& setArchitecture(string architecture) { DARABONBA_PTR_SET_VALUE(architecture_, architecture) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline GetImageResponseBodyImageVMImageSpec& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // osTag Field Functions 
    bool hasOsTag() const { return this->osTag_ != nullptr;};
    void deleteOsTag() { this->osTag_ = nullptr;};
    inline string osTag() const { DARABONBA_PTR_GET_DEFAULT(osTag_, "") };
    inline GetImageResponseBodyImageVMImageSpec& setOsTag(string osTag) { DARABONBA_PTR_SET_VALUE(osTag_, osTag) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline GetImageResponseBodyImageVMImageSpec& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


  protected:
    std::shared_ptr<string> architecture_ = nullptr;
    std::shared_ptr<string> imageId_ = nullptr;
    std::shared_ptr<string> osTag_ = nullptr;
    std::shared_ptr<string> platform_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
