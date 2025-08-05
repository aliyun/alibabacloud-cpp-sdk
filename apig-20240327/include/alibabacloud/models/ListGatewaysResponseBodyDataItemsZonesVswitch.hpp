// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYSRESPONSEBODYDATAITEMSZONESVSWITCH_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYSRESPONSEBODYDATAITEMSZONESVSWITCH_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ListGatewaysResponseBodyDataItemsZonesVSwitch : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewaysResponseBodyDataItemsZonesVSwitch& obj) { 
      DARABONBA_PTR_TO_JSON(vSwitchId, vSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewaysResponseBodyDataItemsZonesVSwitch& obj) { 
      DARABONBA_PTR_FROM_JSON(vSwitchId, vSwitchId_);
    };
    ListGatewaysResponseBodyDataItemsZonesVSwitch() = default ;
    ListGatewaysResponseBodyDataItemsZonesVSwitch(const ListGatewaysResponseBodyDataItemsZonesVSwitch &) = default ;
    ListGatewaysResponseBodyDataItemsZonesVSwitch(ListGatewaysResponseBodyDataItemsZonesVSwitch &&) = default ;
    ListGatewaysResponseBodyDataItemsZonesVSwitch(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewaysResponseBodyDataItemsZonesVSwitch() = default ;
    ListGatewaysResponseBodyDataItemsZonesVSwitch& operator=(const ListGatewaysResponseBodyDataItemsZonesVSwitch &) = default ;
    ListGatewaysResponseBodyDataItemsZonesVSwitch& operator=(ListGatewaysResponseBodyDataItemsZonesVSwitch &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->vSwitchId_ != nullptr; };
    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline ListGatewaysResponseBodyDataItemsZonesVSwitch& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


  protected:
    // The vSwitch ID.
    std::shared_ptr<string> vSwitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
