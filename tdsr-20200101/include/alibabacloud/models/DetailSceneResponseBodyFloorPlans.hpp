// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETAILSCENERESPONSEBODYFLOORPLANS_HPP_
#define ALIBABACLOUD_MODELS_DETAILSCENERESPONSEBODYFLOORPLANS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tdsr20200101
{
namespace Models
{
  class DetailSceneResponseBodyFloorPlans : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetailSceneResponseBodyFloorPlans& obj) { 
      DARABONBA_PTR_TO_JSON(ColorMapUrl, colorMapUrl_);
      DARABONBA_PTR_TO_JSON(FloorLabel, floorLabel_);
      DARABONBA_PTR_TO_JSON(FloorName, floorName_);
      DARABONBA_PTR_TO_JSON(MiniMapUrl, miniMapUrl_);
    };
    friend void from_json(const Darabonba::Json& j, DetailSceneResponseBodyFloorPlans& obj) { 
      DARABONBA_PTR_FROM_JSON(ColorMapUrl, colorMapUrl_);
      DARABONBA_PTR_FROM_JSON(FloorLabel, floorLabel_);
      DARABONBA_PTR_FROM_JSON(FloorName, floorName_);
      DARABONBA_PTR_FROM_JSON(MiniMapUrl, miniMapUrl_);
    };
    DetailSceneResponseBodyFloorPlans() = default ;
    DetailSceneResponseBodyFloorPlans(const DetailSceneResponseBodyFloorPlans &) = default ;
    DetailSceneResponseBodyFloorPlans(DetailSceneResponseBodyFloorPlans &&) = default ;
    DetailSceneResponseBodyFloorPlans(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetailSceneResponseBodyFloorPlans() = default ;
    DetailSceneResponseBodyFloorPlans& operator=(const DetailSceneResponseBodyFloorPlans &) = default ;
    DetailSceneResponseBodyFloorPlans& operator=(DetailSceneResponseBodyFloorPlans &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->colorMapUrl_ == nullptr
        && return this->floorLabel_ == nullptr && return this->floorName_ == nullptr && return this->miniMapUrl_ == nullptr; };
    // colorMapUrl Field Functions 
    bool hasColorMapUrl() const { return this->colorMapUrl_ != nullptr;};
    void deleteColorMapUrl() { this->colorMapUrl_ = nullptr;};
    inline string colorMapUrl() const { DARABONBA_PTR_GET_DEFAULT(colorMapUrl_, "") };
    inline DetailSceneResponseBodyFloorPlans& setColorMapUrl(string colorMapUrl) { DARABONBA_PTR_SET_VALUE(colorMapUrl_, colorMapUrl) };


    // floorLabel Field Functions 
    bool hasFloorLabel() const { return this->floorLabel_ != nullptr;};
    void deleteFloorLabel() { this->floorLabel_ = nullptr;};
    inline string floorLabel() const { DARABONBA_PTR_GET_DEFAULT(floorLabel_, "") };
    inline DetailSceneResponseBodyFloorPlans& setFloorLabel(string floorLabel) { DARABONBA_PTR_SET_VALUE(floorLabel_, floorLabel) };


    // floorName Field Functions 
    bool hasFloorName() const { return this->floorName_ != nullptr;};
    void deleteFloorName() { this->floorName_ = nullptr;};
    inline string floorName() const { DARABONBA_PTR_GET_DEFAULT(floorName_, "") };
    inline DetailSceneResponseBodyFloorPlans& setFloorName(string floorName) { DARABONBA_PTR_SET_VALUE(floorName_, floorName) };


    // miniMapUrl Field Functions 
    bool hasMiniMapUrl() const { return this->miniMapUrl_ != nullptr;};
    void deleteMiniMapUrl() { this->miniMapUrl_ = nullptr;};
    inline string miniMapUrl() const { DARABONBA_PTR_GET_DEFAULT(miniMapUrl_, "") };
    inline DetailSceneResponseBodyFloorPlans& setMiniMapUrl(string miniMapUrl) { DARABONBA_PTR_SET_VALUE(miniMapUrl_, miniMapUrl) };


  protected:
    std::shared_ptr<string> colorMapUrl_ = nullptr;
    std::shared_ptr<string> floorLabel_ = nullptr;
    std::shared_ptr<string> floorName_ = nullptr;
    std::shared_ptr<string> miniMapUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tdsr20200101
#endif
