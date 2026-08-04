// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MAPPKFROMHIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MAPPKFROMHIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class MapPkFromHidRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MapPkFromHidRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Bid, bid_);
      DARABONBA_PTR_TO_JSON(Hid, hid_);
      DARABONBA_PTR_TO_JSON(MappingScenes, mappingScenes_);
    };
    friend void from_json(const Darabonba::Json& j, MapPkFromHidRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Bid, bid_);
      DARABONBA_PTR_FROM_JSON(Hid, hid_);
      DARABONBA_PTR_FROM_JSON(MappingScenes, mappingScenes_);
    };
    MapPkFromHidRequest() = default ;
    MapPkFromHidRequest(const MapPkFromHidRequest &) = default ;
    MapPkFromHidRequest(MapPkFromHidRequest &&) = default ;
    MapPkFromHidRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MapPkFromHidRequest() = default ;
    MapPkFromHidRequest& operator=(const MapPkFromHidRequest &) = default ;
    MapPkFromHidRequest& operator=(MapPkFromHidRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && this->bid_ == nullptr && this->hid_ == nullptr && this->mappingScenes_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline MapPkFromHidRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // bid Field Functions 
    bool hasBid() const { return this->bid_ != nullptr;};
    void deleteBid() { this->bid_ = nullptr;};
    inline string getBid() const { DARABONBA_PTR_GET_DEFAULT(bid_, "") };
    inline MapPkFromHidRequest& setBid(string bid) { DARABONBA_PTR_SET_VALUE(bid_, bid) };


    // hid Field Functions 
    bool hasHid() const { return this->hid_ != nullptr;};
    void deleteHid() { this->hid_ = nullptr;};
    inline string getHid() const { DARABONBA_PTR_GET_DEFAULT(hid_, "") };
    inline MapPkFromHidRequest& setHid(string hid) { DARABONBA_PTR_SET_VALUE(hid_, hid) };


    // mappingScenes Field Functions 
    bool hasMappingScenes() const { return this->mappingScenes_ != nullptr;};
    void deleteMappingScenes() { this->mappingScenes_ = nullptr;};
    inline string getMappingScenes() const { DARABONBA_PTR_GET_DEFAULT(mappingScenes_, "") };
    inline MapPkFromHidRequest& setMappingScenes(string mappingScenes) { DARABONBA_PTR_SET_VALUE(mappingScenes_, mappingScenes) };


  protected:
    // This parameter is required.
    shared_ptr<string> appName_ {};
    shared_ptr<string> bid_ {};
    // This parameter is required.
    shared_ptr<string> hid_ {};
    // This parameter is required.
    shared_ptr<string> mappingScenes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
