// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MAPTOHAVANABINDIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MAPTOHAVANABINDIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class MapToHavanaBindIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MapToHavanaBindIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_ANY_TO_JSON(HavanaBindStations, havanaBindStations_);
      DARABONBA_PTR_TO_JSON(Pk, pk_);
    };
    friend void from_json(const Darabonba::Json& j, MapToHavanaBindIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_ANY_FROM_JSON(HavanaBindStations, havanaBindStations_);
      DARABONBA_PTR_FROM_JSON(Pk, pk_);
    };
    MapToHavanaBindIdRequest() = default ;
    MapToHavanaBindIdRequest(const MapToHavanaBindIdRequest &) = default ;
    MapToHavanaBindIdRequest(MapToHavanaBindIdRequest &&) = default ;
    MapToHavanaBindIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MapToHavanaBindIdRequest() = default ;
    MapToHavanaBindIdRequest& operator=(const MapToHavanaBindIdRequest &) = default ;
    MapToHavanaBindIdRequest& operator=(MapToHavanaBindIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && this->havanaBindStations_ == nullptr && this->pk_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline MapToHavanaBindIdRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // havanaBindStations Field Functions 
    bool hasHavanaBindStations() const { return this->havanaBindStations_ != nullptr;};
    void deleteHavanaBindStations() { this->havanaBindStations_ = nullptr;};
    inline     const Darabonba::Json & getHavanaBindStations() const { DARABONBA_GET(havanaBindStations_) };
    Darabonba::Json & getHavanaBindStations() { DARABONBA_GET(havanaBindStations_) };
    inline MapToHavanaBindIdRequest& setHavanaBindStations(const Darabonba::Json & havanaBindStations) { DARABONBA_SET_VALUE(havanaBindStations_, havanaBindStations) };
    inline MapToHavanaBindIdRequest& setHavanaBindStations(Darabonba::Json && havanaBindStations) { DARABONBA_SET_RVALUE(havanaBindStations_, havanaBindStations) };


    // pk Field Functions 
    bool hasPk() const { return this->pk_ != nullptr;};
    void deletePk() { this->pk_ = nullptr;};
    inline string getPk() const { DARABONBA_PTR_GET_DEFAULT(pk_, "") };
    inline MapToHavanaBindIdRequest& setPk(string pk) { DARABONBA_PTR_SET_VALUE(pk_, pk) };


  protected:
    // This parameter is required.
    shared_ptr<string> appName_ {};
    // This parameter is required.
    Darabonba::Json havanaBindStations_ {};
    // This parameter is required.
    shared_ptr<string> pk_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
