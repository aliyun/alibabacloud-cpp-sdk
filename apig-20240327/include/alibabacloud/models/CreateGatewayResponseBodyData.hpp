// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGATEWAYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEGATEWAYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class CreateGatewayResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGatewayResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGatewayResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
    };
    CreateGatewayResponseBodyData() = default ;
    CreateGatewayResponseBodyData(const CreateGatewayResponseBodyData &) = default ;
    CreateGatewayResponseBodyData(CreateGatewayResponseBodyData &&) = default ;
    CreateGatewayResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGatewayResponseBodyData() = default ;
    CreateGatewayResponseBodyData& operator=(const CreateGatewayResponseBodyData &) = default ;
    CreateGatewayResponseBodyData& operator=(CreateGatewayResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gatewayId_ == nullptr; };
    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline CreateGatewayResponseBodyData& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


  protected:
    std::shared_ptr<string> gatewayId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
