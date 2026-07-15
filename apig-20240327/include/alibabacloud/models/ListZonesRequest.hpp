// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTZONESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTZONESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ListZonesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListZonesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(gatewayEdition, gatewayEdition_);
    };
    friend void from_json(const Darabonba::Json& j, ListZonesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(gatewayEdition, gatewayEdition_);
    };
    ListZonesRequest() = default ;
    ListZonesRequest(const ListZonesRequest &) = default ;
    ListZonesRequest(ListZonesRequest &&) = default ;
    ListZonesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListZonesRequest() = default ;
    ListZonesRequest& operator=(const ListZonesRequest &) = default ;
    ListZonesRequest& operator=(ListZonesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gatewayEdition_ == nullptr; };
    // gatewayEdition Field Functions 
    bool hasGatewayEdition() const { return this->gatewayEdition_ != nullptr;};
    void deleteGatewayEdition() { this->gatewayEdition_ = nullptr;};
    inline string getGatewayEdition() const { DARABONBA_PTR_GET_DEFAULT(gatewayEdition_, "") };
    inline ListZonesRequest& setGatewayEdition(string gatewayEdition) { DARABONBA_PTR_SET_VALUE(gatewayEdition_, gatewayEdition) };


  protected:
    // The target gateway edition for querying zones. Valid values:
    // - Professional: standard gateway. This is the default value.
    // - ServerlessV2: API multi-tenant Serverless V2.
    // 
    // If this parameter is not specified, Professional is used.
    shared_ptr<string> gatewayEdition_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
