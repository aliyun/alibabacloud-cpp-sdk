// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLEKIBANAPVLNETWORKREQUESTVSWITCHIDSZONE_HPP_
#define ALIBABACLOUD_MODELS_ENABLEKIBANAPVLNETWORKREQUESTVSWITCHIDSZONE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class EnableKibanaPvlNetworkRequestVSwitchIdsZone : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableKibanaPvlNetworkRequestVSwitchIdsZone& obj) { 
      DARABONBA_PTR_TO_JSON(vswitchId, vswitchId_);
      DARABONBA_PTR_TO_JSON(zoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, EnableKibanaPvlNetworkRequestVSwitchIdsZone& obj) { 
      DARABONBA_PTR_FROM_JSON(vswitchId, vswitchId_);
      DARABONBA_PTR_FROM_JSON(zoneId, zoneId_);
    };
    EnableKibanaPvlNetworkRequestVSwitchIdsZone() = default ;
    EnableKibanaPvlNetworkRequestVSwitchIdsZone(const EnableKibanaPvlNetworkRequestVSwitchIdsZone &) = default ;
    EnableKibanaPvlNetworkRequestVSwitchIdsZone(EnableKibanaPvlNetworkRequestVSwitchIdsZone &&) = default ;
    EnableKibanaPvlNetworkRequestVSwitchIdsZone(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableKibanaPvlNetworkRequestVSwitchIdsZone() = default ;
    EnableKibanaPvlNetworkRequestVSwitchIdsZone& operator=(const EnableKibanaPvlNetworkRequestVSwitchIdsZone &) = default ;
    EnableKibanaPvlNetworkRequestVSwitchIdsZone& operator=(EnableKibanaPvlNetworkRequestVSwitchIdsZone &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->vswitchId_ != nullptr
        && this->zoneId_ != nullptr; };
    // vswitchId Field Functions 
    bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
    void deleteVswitchId() { this->vswitchId_ = nullptr;};
    inline string vswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
    inline EnableKibanaPvlNetworkRequestVSwitchIdsZone& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline EnableKibanaPvlNetworkRequestVSwitchIdsZone& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> vswitchId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
