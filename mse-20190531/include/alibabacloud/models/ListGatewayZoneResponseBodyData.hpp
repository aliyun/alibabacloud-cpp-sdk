// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYZONERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYZONERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListGatewayZoneResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayZoneResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(LocalName, localName_);
      DARABONBA_PTR_TO_JSON(SupportQat, supportQat_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayZoneResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(LocalName, localName_);
      DARABONBA_PTR_FROM_JSON(SupportQat, supportQat_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    ListGatewayZoneResponseBodyData() = default ;
    ListGatewayZoneResponseBodyData(const ListGatewayZoneResponseBodyData &) = default ;
    ListGatewayZoneResponseBodyData(ListGatewayZoneResponseBodyData &&) = default ;
    ListGatewayZoneResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayZoneResponseBodyData() = default ;
    ListGatewayZoneResponseBodyData& operator=(const ListGatewayZoneResponseBodyData &) = default ;
    ListGatewayZoneResponseBodyData& operator=(ListGatewayZoneResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->localName_ != nullptr
        && this->supportQat_ != nullptr && this->zoneId_ != nullptr; };
    // localName Field Functions 
    bool hasLocalName() const { return this->localName_ != nullptr;};
    void deleteLocalName() { this->localName_ = nullptr;};
    inline string localName() const { DARABONBA_PTR_GET_DEFAULT(localName_, "") };
    inline ListGatewayZoneResponseBodyData& setLocalName(string localName) { DARABONBA_PTR_SET_VALUE(localName_, localName) };


    // supportQat Field Functions 
    bool hasSupportQat() const { return this->supportQat_ != nullptr;};
    void deleteSupportQat() { this->supportQat_ = nullptr;};
    inline bool supportQat() const { DARABONBA_PTR_GET_DEFAULT(supportQat_, false) };
    inline ListGatewayZoneResponseBodyData& setSupportQat(bool supportQat) { DARABONBA_PTR_SET_VALUE(supportQat_, supportQat) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline ListGatewayZoneResponseBodyData& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The local name of the zone.
    std::shared_ptr<string> localName_ = nullptr;
    std::shared_ptr<bool> supportQat_ = nullptr;
    // The zone ID.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
