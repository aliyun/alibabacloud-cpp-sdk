// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDGATEWAYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_ADDGATEWAYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class AddGatewayResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddGatewayResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
    };
    friend void from_json(const Darabonba::Json& j, AddGatewayResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
    };
    AddGatewayResponseBodyData() = default ;
    AddGatewayResponseBodyData(const AddGatewayResponseBodyData &) = default ;
    AddGatewayResponseBodyData(AddGatewayResponseBodyData &&) = default ;
    AddGatewayResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddGatewayResponseBodyData() = default ;
    AddGatewayResponseBodyData& operator=(const AddGatewayResponseBodyData &) = default ;
    AddGatewayResponseBodyData& operator=(AddGatewayResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->gatewayUniqueId_ != nullptr; };
    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string gatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline AddGatewayResponseBodyData& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


  protected:
    // code
    std::shared_ptr<string> gatewayUniqueId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
