// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYSRESPONSEBODYDATAITEMSVSWITCH_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYSRESPONSEBODYDATAITEMSVSWITCH_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ListGatewaysResponseBodyDataItemsVSwitch : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewaysResponseBodyDataItemsVSwitch& obj) { 
      DARABONBA_PTR_TO_JSON(vSwitchId, vSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewaysResponseBodyDataItemsVSwitch& obj) { 
      DARABONBA_PTR_FROM_JSON(vSwitchId, vSwitchId_);
    };
    ListGatewaysResponseBodyDataItemsVSwitch() = default ;
    ListGatewaysResponseBodyDataItemsVSwitch(const ListGatewaysResponseBodyDataItemsVSwitch &) = default ;
    ListGatewaysResponseBodyDataItemsVSwitch(ListGatewaysResponseBodyDataItemsVSwitch &&) = default ;
    ListGatewaysResponseBodyDataItemsVSwitch(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewaysResponseBodyDataItemsVSwitch() = default ;
    ListGatewaysResponseBodyDataItemsVSwitch& operator=(const ListGatewaysResponseBodyDataItemsVSwitch &) = default ;
    ListGatewaysResponseBodyDataItemsVSwitch& operator=(ListGatewaysResponseBodyDataItemsVSwitch &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->vSwitchId_ == nullptr; };
    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline ListGatewaysResponseBodyDataItemsVSwitch& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


  protected:
    // The vSwitch ID.
    std::shared_ptr<string> vSwitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
