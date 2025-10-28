// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPCONFIGIMAGECONFIG_HPP_
#define ALIBABACLOUD_MODELS_APPCONFIGIMAGECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class AppConfigImageConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AppConfigImageConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ContainerRegistryId, containerRegistryId_);
      DARABONBA_PTR_TO_JSON(CrInstanceId, crInstanceId_);
      DARABONBA_PTR_TO_JSON(CrRegionId, crRegionId_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
    };
    friend void from_json(const Darabonba::Json& j, AppConfigImageConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ContainerRegistryId, containerRegistryId_);
      DARABONBA_PTR_FROM_JSON(CrInstanceId, crInstanceId_);
      DARABONBA_PTR_FROM_JSON(CrRegionId, crRegionId_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
    };
    AppConfigImageConfig() = default ;
    AppConfigImageConfig(const AppConfigImageConfig &) = default ;
    AppConfigImageConfig(AppConfigImageConfig &&) = default ;
    AppConfigImageConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AppConfigImageConfig() = default ;
    AppConfigImageConfig& operator=(const AppConfigImageConfig &) = default ;
    AppConfigImageConfig& operator=(AppConfigImageConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->containerRegistryId_ == nullptr
        && return this->crInstanceId_ == nullptr && return this->crRegionId_ == nullptr && return this->imageUrl_ == nullptr; };
    // containerRegistryId Field Functions 
    bool hasContainerRegistryId() const { return this->containerRegistryId_ != nullptr;};
    void deleteContainerRegistryId() { this->containerRegistryId_ = nullptr;};
    inline string containerRegistryId() const { DARABONBA_PTR_GET_DEFAULT(containerRegistryId_, "") };
    inline AppConfigImageConfig& setContainerRegistryId(string containerRegistryId) { DARABONBA_PTR_SET_VALUE(containerRegistryId_, containerRegistryId) };


    // crInstanceId Field Functions 
    bool hasCrInstanceId() const { return this->crInstanceId_ != nullptr;};
    void deleteCrInstanceId() { this->crInstanceId_ = nullptr;};
    inline string crInstanceId() const { DARABONBA_PTR_GET_DEFAULT(crInstanceId_, "") };
    inline AppConfigImageConfig& setCrInstanceId(string crInstanceId) { DARABONBA_PTR_SET_VALUE(crInstanceId_, crInstanceId) };


    // crRegionId Field Functions 
    bool hasCrRegionId() const { return this->crRegionId_ != nullptr;};
    void deleteCrRegionId() { this->crRegionId_ = nullptr;};
    inline string crRegionId() const { DARABONBA_PTR_GET_DEFAULT(crRegionId_, "") };
    inline AppConfigImageConfig& setCrRegionId(string crRegionId) { DARABONBA_PTR_SET_VALUE(crRegionId_, crRegionId) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string imageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline AppConfigImageConfig& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


  protected:
    std::shared_ptr<string> containerRegistryId_ = nullptr;
    std::shared_ptr<string> crInstanceId_ = nullptr;
    std::shared_ptr<string> crRegionId_ = nullptr;
    std::shared_ptr<string> imageUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
