// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MAPFROMHAVANABINDIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MAPFROMHAVANABINDIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class MapFromHavanaBindIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MapFromHavanaBindIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(HavanaBindId, havanaBindId_);
      DARABONBA_ANY_TO_JSON(HavanaBindStations, havanaBindStations_);
    };
    friend void from_json(const Darabonba::Json& j, MapFromHavanaBindIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(HavanaBindId, havanaBindId_);
      DARABONBA_ANY_FROM_JSON(HavanaBindStations, havanaBindStations_);
    };
    MapFromHavanaBindIdRequest() = default ;
    MapFromHavanaBindIdRequest(const MapFromHavanaBindIdRequest &) = default ;
    MapFromHavanaBindIdRequest(MapFromHavanaBindIdRequest &&) = default ;
    MapFromHavanaBindIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MapFromHavanaBindIdRequest() = default ;
    MapFromHavanaBindIdRequest& operator=(const MapFromHavanaBindIdRequest &) = default ;
    MapFromHavanaBindIdRequest& operator=(MapFromHavanaBindIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && this->havanaBindId_ == nullptr && this->havanaBindStations_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline MapFromHavanaBindIdRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // havanaBindId Field Functions 
    bool hasHavanaBindId() const { return this->havanaBindId_ != nullptr;};
    void deleteHavanaBindId() { this->havanaBindId_ = nullptr;};
    inline string getHavanaBindId() const { DARABONBA_PTR_GET_DEFAULT(havanaBindId_, "") };
    inline MapFromHavanaBindIdRequest& setHavanaBindId(string havanaBindId) { DARABONBA_PTR_SET_VALUE(havanaBindId_, havanaBindId) };


    // havanaBindStations Field Functions 
    bool hasHavanaBindStations() const { return this->havanaBindStations_ != nullptr;};
    void deleteHavanaBindStations() { this->havanaBindStations_ = nullptr;};
    inline     const Darabonba::Json & getHavanaBindStations() const { DARABONBA_GET(havanaBindStations_) };
    Darabonba::Json & getHavanaBindStations() { DARABONBA_GET(havanaBindStations_) };
    inline MapFromHavanaBindIdRequest& setHavanaBindStations(const Darabonba::Json & havanaBindStations) { DARABONBA_SET_VALUE(havanaBindStations_, havanaBindStations) };
    inline MapFromHavanaBindIdRequest& setHavanaBindStations(Darabonba::Json && havanaBindStations) { DARABONBA_SET_RVALUE(havanaBindStations_, havanaBindStations) };


  protected:
    // This parameter is required.
    shared_ptr<string> appName_ {};
    // This parameter is required.
    shared_ptr<string> havanaBindId_ {};
    // This parameter is required.
    Darabonba::Json havanaBindStations_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
