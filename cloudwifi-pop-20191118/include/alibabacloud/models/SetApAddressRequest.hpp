// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETAPADDRESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETAPADDRESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudwifiPop20191118
{
namespace Models
{
  class SetApAddressRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetApAddressRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApAreaName, apAreaName_);
      DARABONBA_PTR_TO_JSON(ApBuildingName, apBuildingName_);
      DARABONBA_PTR_TO_JSON(ApCampusName, apCampusName_);
      DARABONBA_PTR_TO_JSON(ApCityName, apCityName_);
      DARABONBA_PTR_TO_JSON(ApFloor, apFloor_);
      DARABONBA_PTR_TO_JSON(ApGroup, apGroup_);
      DARABONBA_PTR_TO_JSON(ApName, apName_);
      DARABONBA_PTR_TO_JSON(ApNationName, apNationName_);
      DARABONBA_PTR_TO_JSON(ApProvinceName, apProvinceName_);
      DARABONBA_PTR_TO_JSON(ApUnitId, apUnitId_);
      DARABONBA_PTR_TO_JSON(ApUnitName, apUnitName_);
      DARABONBA_PTR_TO_JSON(AppCode, appCode_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Direction, direction_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(Lat, lat_);
      DARABONBA_PTR_TO_JSON(Lng, lng_);
      DARABONBA_PTR_TO_JSON(Mac, mac_);
    };
    friend void from_json(const Darabonba::Json& j, SetApAddressRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApAreaName, apAreaName_);
      DARABONBA_PTR_FROM_JSON(ApBuildingName, apBuildingName_);
      DARABONBA_PTR_FROM_JSON(ApCampusName, apCampusName_);
      DARABONBA_PTR_FROM_JSON(ApCityName, apCityName_);
      DARABONBA_PTR_FROM_JSON(ApFloor, apFloor_);
      DARABONBA_PTR_FROM_JSON(ApGroup, apGroup_);
      DARABONBA_PTR_FROM_JSON(ApName, apName_);
      DARABONBA_PTR_FROM_JSON(ApNationName, apNationName_);
      DARABONBA_PTR_FROM_JSON(ApProvinceName, apProvinceName_);
      DARABONBA_PTR_FROM_JSON(ApUnitId, apUnitId_);
      DARABONBA_PTR_FROM_JSON(ApUnitName, apUnitName_);
      DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Direction, direction_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(Lat, lat_);
      DARABONBA_PTR_FROM_JSON(Lng, lng_);
      DARABONBA_PTR_FROM_JSON(Mac, mac_);
    };
    SetApAddressRequest() = default ;
    SetApAddressRequest(const SetApAddressRequest &) = default ;
    SetApAddressRequest(SetApAddressRequest &&) = default ;
    SetApAddressRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetApAddressRequest() = default ;
    SetApAddressRequest& operator=(const SetApAddressRequest &) = default ;
    SetApAddressRequest& operator=(SetApAddressRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apAreaName_ == nullptr
        && this->apBuildingName_ == nullptr && this->apCampusName_ == nullptr && this->apCityName_ == nullptr && this->apFloor_ == nullptr && this->apGroup_ == nullptr
        && this->apName_ == nullptr && this->apNationName_ == nullptr && this->apProvinceName_ == nullptr && this->apUnitId_ == nullptr && this->apUnitName_ == nullptr
        && this->appCode_ == nullptr && this->appName_ == nullptr && this->direction_ == nullptr && this->language_ == nullptr && this->lat_ == nullptr
        && this->lng_ == nullptr && this->mac_ == nullptr; };
    // apAreaName Field Functions 
    bool hasApAreaName() const { return this->apAreaName_ != nullptr;};
    void deleteApAreaName() { this->apAreaName_ = nullptr;};
    inline string getApAreaName() const { DARABONBA_PTR_GET_DEFAULT(apAreaName_, "") };
    inline SetApAddressRequest& setApAreaName(string apAreaName) { DARABONBA_PTR_SET_VALUE(apAreaName_, apAreaName) };


    // apBuildingName Field Functions 
    bool hasApBuildingName() const { return this->apBuildingName_ != nullptr;};
    void deleteApBuildingName() { this->apBuildingName_ = nullptr;};
    inline string getApBuildingName() const { DARABONBA_PTR_GET_DEFAULT(apBuildingName_, "") };
    inline SetApAddressRequest& setApBuildingName(string apBuildingName) { DARABONBA_PTR_SET_VALUE(apBuildingName_, apBuildingName) };


    // apCampusName Field Functions 
    bool hasApCampusName() const { return this->apCampusName_ != nullptr;};
    void deleteApCampusName() { this->apCampusName_ = nullptr;};
    inline string getApCampusName() const { DARABONBA_PTR_GET_DEFAULT(apCampusName_, "") };
    inline SetApAddressRequest& setApCampusName(string apCampusName) { DARABONBA_PTR_SET_VALUE(apCampusName_, apCampusName) };


    // apCityName Field Functions 
    bool hasApCityName() const { return this->apCityName_ != nullptr;};
    void deleteApCityName() { this->apCityName_ = nullptr;};
    inline string getApCityName() const { DARABONBA_PTR_GET_DEFAULT(apCityName_, "") };
    inline SetApAddressRequest& setApCityName(string apCityName) { DARABONBA_PTR_SET_VALUE(apCityName_, apCityName) };


    // apFloor Field Functions 
    bool hasApFloor() const { return this->apFloor_ != nullptr;};
    void deleteApFloor() { this->apFloor_ = nullptr;};
    inline string getApFloor() const { DARABONBA_PTR_GET_DEFAULT(apFloor_, "") };
    inline SetApAddressRequest& setApFloor(string apFloor) { DARABONBA_PTR_SET_VALUE(apFloor_, apFloor) };


    // apGroup Field Functions 
    bool hasApGroup() const { return this->apGroup_ != nullptr;};
    void deleteApGroup() { this->apGroup_ = nullptr;};
    inline string getApGroup() const { DARABONBA_PTR_GET_DEFAULT(apGroup_, "") };
    inline SetApAddressRequest& setApGroup(string apGroup) { DARABONBA_PTR_SET_VALUE(apGroup_, apGroup) };


    // apName Field Functions 
    bool hasApName() const { return this->apName_ != nullptr;};
    void deleteApName() { this->apName_ = nullptr;};
    inline string getApName() const { DARABONBA_PTR_GET_DEFAULT(apName_, "") };
    inline SetApAddressRequest& setApName(string apName) { DARABONBA_PTR_SET_VALUE(apName_, apName) };


    // apNationName Field Functions 
    bool hasApNationName() const { return this->apNationName_ != nullptr;};
    void deleteApNationName() { this->apNationName_ = nullptr;};
    inline string getApNationName() const { DARABONBA_PTR_GET_DEFAULT(apNationName_, "") };
    inline SetApAddressRequest& setApNationName(string apNationName) { DARABONBA_PTR_SET_VALUE(apNationName_, apNationName) };


    // apProvinceName Field Functions 
    bool hasApProvinceName() const { return this->apProvinceName_ != nullptr;};
    void deleteApProvinceName() { this->apProvinceName_ = nullptr;};
    inline string getApProvinceName() const { DARABONBA_PTR_GET_DEFAULT(apProvinceName_, "") };
    inline SetApAddressRequest& setApProvinceName(string apProvinceName) { DARABONBA_PTR_SET_VALUE(apProvinceName_, apProvinceName) };


    // apUnitId Field Functions 
    bool hasApUnitId() const { return this->apUnitId_ != nullptr;};
    void deleteApUnitId() { this->apUnitId_ = nullptr;};
    inline int64_t getApUnitId() const { DARABONBA_PTR_GET_DEFAULT(apUnitId_, 0L) };
    inline SetApAddressRequest& setApUnitId(int64_t apUnitId) { DARABONBA_PTR_SET_VALUE(apUnitId_, apUnitId) };


    // apUnitName Field Functions 
    bool hasApUnitName() const { return this->apUnitName_ != nullptr;};
    void deleteApUnitName() { this->apUnitName_ = nullptr;};
    inline string getApUnitName() const { DARABONBA_PTR_GET_DEFAULT(apUnitName_, "") };
    inline SetApAddressRequest& setApUnitName(string apUnitName) { DARABONBA_PTR_SET_VALUE(apUnitName_, apUnitName) };


    // appCode Field Functions 
    bool hasAppCode() const { return this->appCode_ != nullptr;};
    void deleteAppCode() { this->appCode_ = nullptr;};
    inline string getAppCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
    inline SetApAddressRequest& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline SetApAddressRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline SetApAddressRequest& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline SetApAddressRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // lat Field Functions 
    bool hasLat() const { return this->lat_ != nullptr;};
    void deleteLat() { this->lat_ = nullptr;};
    inline string getLat() const { DARABONBA_PTR_GET_DEFAULT(lat_, "") };
    inline SetApAddressRequest& setLat(string lat) { DARABONBA_PTR_SET_VALUE(lat_, lat) };


    // lng Field Functions 
    bool hasLng() const { return this->lng_ != nullptr;};
    void deleteLng() { this->lng_ = nullptr;};
    inline string getLng() const { DARABONBA_PTR_GET_DEFAULT(lng_, "") };
    inline SetApAddressRequest& setLng(string lng) { DARABONBA_PTR_SET_VALUE(lng_, lng) };


    // mac Field Functions 
    bool hasMac() const { return this->mac_ != nullptr;};
    void deleteMac() { this->mac_ = nullptr;};
    inline string getMac() const { DARABONBA_PTR_GET_DEFAULT(mac_, "") };
    inline SetApAddressRequest& setMac(string mac) { DARABONBA_PTR_SET_VALUE(mac_, mac) };


  protected:
    shared_ptr<string> apAreaName_ {};
    shared_ptr<string> apBuildingName_ {};
    shared_ptr<string> apCampusName_ {};
    shared_ptr<string> apCityName_ {};
    shared_ptr<string> apFloor_ {};
    shared_ptr<string> apGroup_ {};
    shared_ptr<string> apName_ {};
    shared_ptr<string> apNationName_ {};
    shared_ptr<string> apProvinceName_ {};
    shared_ptr<int64_t> apUnitId_ {};
    shared_ptr<string> apUnitName_ {};
    // This parameter is required.
    shared_ptr<string> appCode_ {};
    // This parameter is required.
    shared_ptr<string> appName_ {};
    shared_ptr<string> direction_ {};
    // This parameter is required.
    shared_ptr<string> language_ {};
    shared_ptr<string> lat_ {};
    shared_ptr<string> lng_ {};
    // This parameter is required.
    shared_ptr<string> mac_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudwifiPop20191118
#endif
