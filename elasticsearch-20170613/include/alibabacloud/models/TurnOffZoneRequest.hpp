// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TURNOFFZONEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TURNOFFZONEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class TurnOffZoneRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TurnOffZoneRequest& obj) { 
      DARABONBA_PTR_TO_JSON(hpAlbZoneDrained, hpAlbZoneDrained_);
      DARABONBA_PTR_TO_JSON(zone, zone_);
    };
    friend void from_json(const Darabonba::Json& j, TurnOffZoneRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(hpAlbZoneDrained, hpAlbZoneDrained_);
      DARABONBA_PTR_FROM_JSON(zone, zone_);
    };
    TurnOffZoneRequest() = default ;
    TurnOffZoneRequest(const TurnOffZoneRequest &) = default ;
    TurnOffZoneRequest(TurnOffZoneRequest &&) = default ;
    TurnOffZoneRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TurnOffZoneRequest() = default ;
    TurnOffZoneRequest& operator=(const TurnOffZoneRequest &) = default ;
    TurnOffZoneRequest& operator=(TurnOffZoneRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hpAlbZoneDrained_ == nullptr
        && this->zone_ == nullptr; };
    // hpAlbZoneDrained Field Functions 
    bool hasHpAlbZoneDrained() const { return this->hpAlbZoneDrained_ != nullptr;};
    void deleteHpAlbZoneDrained() { this->hpAlbZoneDrained_ = nullptr;};
    inline bool getHpAlbZoneDrained() const { DARABONBA_PTR_GET_DEFAULT(hpAlbZoneDrained_, false) };
    inline TurnOffZoneRequest& setHpAlbZoneDrained(bool hpAlbZoneDrained) { DARABONBA_PTR_SET_VALUE(hpAlbZoneDrained_, hpAlbZoneDrained) };


    // zone Field Functions 
    bool hasZone() const { return this->zone_ != nullptr;};
    void deleteZone() { this->zone_ = nullptr;};
    inline string getZone() const { DARABONBA_PTR_GET_DEFAULT(zone_, "") };
    inline TurnOffZoneRequest& setZone(string zone) { DARABONBA_PTR_SET_VALUE(zone_, zone) };


  protected:
    shared_ptr<bool> hpAlbZoneDrained_ {};
    shared_ptr<string> zone_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
