// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MAPFROMHAVANABINDIDSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MAPFROMHAVANABINDIDSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class MapFromHavanaBindIdShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MapFromHavanaBindIdShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(HavanaBindId, havanaBindId_);
      DARABONBA_PTR_TO_JSON(HavanaBindStations, havanaBindStationsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, MapFromHavanaBindIdShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(HavanaBindId, havanaBindId_);
      DARABONBA_PTR_FROM_JSON(HavanaBindStations, havanaBindStationsShrink_);
    };
    MapFromHavanaBindIdShrinkRequest() = default ;
    MapFromHavanaBindIdShrinkRequest(const MapFromHavanaBindIdShrinkRequest &) = default ;
    MapFromHavanaBindIdShrinkRequest(MapFromHavanaBindIdShrinkRequest &&) = default ;
    MapFromHavanaBindIdShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MapFromHavanaBindIdShrinkRequest() = default ;
    MapFromHavanaBindIdShrinkRequest& operator=(const MapFromHavanaBindIdShrinkRequest &) = default ;
    MapFromHavanaBindIdShrinkRequest& operator=(MapFromHavanaBindIdShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && this->havanaBindId_ == nullptr && this->havanaBindStationsShrink_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline MapFromHavanaBindIdShrinkRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // havanaBindId Field Functions 
    bool hasHavanaBindId() const { return this->havanaBindId_ != nullptr;};
    void deleteHavanaBindId() { this->havanaBindId_ = nullptr;};
    inline string getHavanaBindId() const { DARABONBA_PTR_GET_DEFAULT(havanaBindId_, "") };
    inline MapFromHavanaBindIdShrinkRequest& setHavanaBindId(string havanaBindId) { DARABONBA_PTR_SET_VALUE(havanaBindId_, havanaBindId) };


    // havanaBindStationsShrink Field Functions 
    bool hasHavanaBindStationsShrink() const { return this->havanaBindStationsShrink_ != nullptr;};
    void deleteHavanaBindStationsShrink() { this->havanaBindStationsShrink_ = nullptr;};
    inline string getHavanaBindStationsShrink() const { DARABONBA_PTR_GET_DEFAULT(havanaBindStationsShrink_, "") };
    inline MapFromHavanaBindIdShrinkRequest& setHavanaBindStationsShrink(string havanaBindStationsShrink) { DARABONBA_PTR_SET_VALUE(havanaBindStationsShrink_, havanaBindStationsShrink) };


  protected:
    // This parameter is required.
    shared_ptr<string> appName_ {};
    // This parameter is required.
    shared_ptr<string> havanaBindId_ {};
    // This parameter is required.
    shared_ptr<string> havanaBindStationsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
