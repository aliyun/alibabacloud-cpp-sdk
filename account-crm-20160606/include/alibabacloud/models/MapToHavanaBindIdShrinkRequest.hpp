// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MAPTOHAVANABINDIDSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MAPTOHAVANABINDIDSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class MapToHavanaBindIdShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MapToHavanaBindIdShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(HavanaBindStations, havanaBindStationsShrink_);
      DARABONBA_PTR_TO_JSON(Pk, pk_);
    };
    friend void from_json(const Darabonba::Json& j, MapToHavanaBindIdShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(HavanaBindStations, havanaBindStationsShrink_);
      DARABONBA_PTR_FROM_JSON(Pk, pk_);
    };
    MapToHavanaBindIdShrinkRequest() = default ;
    MapToHavanaBindIdShrinkRequest(const MapToHavanaBindIdShrinkRequest &) = default ;
    MapToHavanaBindIdShrinkRequest(MapToHavanaBindIdShrinkRequest &&) = default ;
    MapToHavanaBindIdShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MapToHavanaBindIdShrinkRequest() = default ;
    MapToHavanaBindIdShrinkRequest& operator=(const MapToHavanaBindIdShrinkRequest &) = default ;
    MapToHavanaBindIdShrinkRequest& operator=(MapToHavanaBindIdShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && this->havanaBindStationsShrink_ == nullptr && this->pk_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline MapToHavanaBindIdShrinkRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // havanaBindStationsShrink Field Functions 
    bool hasHavanaBindStationsShrink() const { return this->havanaBindStationsShrink_ != nullptr;};
    void deleteHavanaBindStationsShrink() { this->havanaBindStationsShrink_ = nullptr;};
    inline string getHavanaBindStationsShrink() const { DARABONBA_PTR_GET_DEFAULT(havanaBindStationsShrink_, "") };
    inline MapToHavanaBindIdShrinkRequest& setHavanaBindStationsShrink(string havanaBindStationsShrink) { DARABONBA_PTR_SET_VALUE(havanaBindStationsShrink_, havanaBindStationsShrink) };


    // pk Field Functions 
    bool hasPk() const { return this->pk_ != nullptr;};
    void deletePk() { this->pk_ = nullptr;};
    inline string getPk() const { DARABONBA_PTR_GET_DEFAULT(pk_, "") };
    inline MapToHavanaBindIdShrinkRequest& setPk(string pk) { DARABONBA_PTR_SET_VALUE(pk_, pk) };


  protected:
    // This parameter is required.
    shared_ptr<string> appName_ {};
    // This parameter is required.
    shared_ptr<string> havanaBindStationsShrink_ {};
    // This parameter is required.
    shared_ptr<string> pk_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
