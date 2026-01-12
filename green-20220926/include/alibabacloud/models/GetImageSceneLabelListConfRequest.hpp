// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIMAGESCENELABELLISTCONFREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETIMAGESCENELABELLISTCONFREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class GetImageSceneLabelListConfRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetImageSceneLabelListConfRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageServiceCode, imageServiceCode_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetImageSceneLabelListConfRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageServiceCode, imageServiceCode_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    GetImageSceneLabelListConfRequest() = default ;
    GetImageSceneLabelListConfRequest(const GetImageSceneLabelListConfRequest &) = default ;
    GetImageSceneLabelListConfRequest(GetImageSceneLabelListConfRequest &&) = default ;
    GetImageSceneLabelListConfRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetImageSceneLabelListConfRequest() = default ;
    GetImageSceneLabelListConfRequest& operator=(const GetImageSceneLabelListConfRequest &) = default ;
    GetImageSceneLabelListConfRequest& operator=(GetImageSceneLabelListConfRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageServiceCode_ == nullptr
        && this->regionId_ == nullptr; };
    // imageServiceCode Field Functions 
    bool hasImageServiceCode() const { return this->imageServiceCode_ != nullptr;};
    void deleteImageServiceCode() { this->imageServiceCode_ = nullptr;};
    inline string getImageServiceCode() const { DARABONBA_PTR_GET_DEFAULT(imageServiceCode_, "") };
    inline GetImageSceneLabelListConfRequest& setImageServiceCode(string imageServiceCode) { DARABONBA_PTR_SET_VALUE(imageServiceCode_, imageServiceCode) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetImageSceneLabelListConfRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // Service code.
    shared_ptr<string> imageServiceCode_ {};
    // Region ID.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
