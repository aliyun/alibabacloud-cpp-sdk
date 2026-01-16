// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TURNONZONEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TURNONZONEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class TurnOnZoneRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TurnOnZoneRequest& obj) { 
      DARABONBA_PTR_TO_JSON(zone, zone_);
    };
    friend void from_json(const Darabonba::Json& j, TurnOnZoneRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(zone, zone_);
    };
    TurnOnZoneRequest() = default ;
    TurnOnZoneRequest(const TurnOnZoneRequest &) = default ;
    TurnOnZoneRequest(TurnOnZoneRequest &&) = default ;
    TurnOnZoneRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TurnOnZoneRequest() = default ;
    TurnOnZoneRequest& operator=(const TurnOnZoneRequest &) = default ;
    TurnOnZoneRequest& operator=(TurnOnZoneRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->zone_ == nullptr; };
    // zone Field Functions 
    bool hasZone() const { return this->zone_ != nullptr;};
    void deleteZone() { this->zone_ = nullptr;};
    inline string getZone() const { DARABONBA_PTR_GET_DEFAULT(zone_, "") };
    inline TurnOnZoneRequest& setZone(string zone) { DARABONBA_PTR_SET_VALUE(zone_, zone) };


  protected:
    shared_ptr<string> zone_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
