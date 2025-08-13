// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGATEWAYROUTEWAFSTATUSRESPONSEBODYDATAHEADEROP_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGATEWAYROUTEWAFSTATUSRESPONSEBODYDATAHEADEROP_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateGatewayRouteWafStatusResponseBodyDataHeaderOpHeaderOpItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class UpdateGatewayRouteWafStatusResponseBodyDataHeaderOp : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGatewayRouteWafStatusResponseBodyDataHeaderOp& obj) { 
      DARABONBA_PTR_TO_JSON(HeaderOpItems, headerOpItems_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGatewayRouteWafStatusResponseBodyDataHeaderOp& obj) { 
      DARABONBA_PTR_FROM_JSON(HeaderOpItems, headerOpItems_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    UpdateGatewayRouteWafStatusResponseBodyDataHeaderOp() = default ;
    UpdateGatewayRouteWafStatusResponseBodyDataHeaderOp(const UpdateGatewayRouteWafStatusResponseBodyDataHeaderOp &) = default ;
    UpdateGatewayRouteWafStatusResponseBodyDataHeaderOp(UpdateGatewayRouteWafStatusResponseBodyDataHeaderOp &&) = default ;
    UpdateGatewayRouteWafStatusResponseBodyDataHeaderOp(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGatewayRouteWafStatusResponseBodyDataHeaderOp() = default ;
    UpdateGatewayRouteWafStatusResponseBodyDataHeaderOp& operator=(const UpdateGatewayRouteWafStatusResponseBodyDataHeaderOp &) = default ;
    UpdateGatewayRouteWafStatusResponseBodyDataHeaderOp& operator=(UpdateGatewayRouteWafStatusResponseBodyDataHeaderOp &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->headerOpItems_ != nullptr
        && this->status_ != nullptr; };
    // headerOpItems Field Functions 
    bool hasHeaderOpItems() const { return this->headerOpItems_ != nullptr;};
    void deleteHeaderOpItems() { this->headerOpItems_ = nullptr;};
    inline const vector<Models::UpdateGatewayRouteWafStatusResponseBodyDataHeaderOpHeaderOpItems> & headerOpItems() const { DARABONBA_PTR_GET_CONST(headerOpItems_, vector<Models::UpdateGatewayRouteWafStatusResponseBodyDataHeaderOpHeaderOpItems>) };
    inline vector<Models::UpdateGatewayRouteWafStatusResponseBodyDataHeaderOpHeaderOpItems> headerOpItems() { DARABONBA_PTR_GET(headerOpItems_, vector<Models::UpdateGatewayRouteWafStatusResponseBodyDataHeaderOpHeaderOpItems>) };
    inline UpdateGatewayRouteWafStatusResponseBodyDataHeaderOp& setHeaderOpItems(const vector<Models::UpdateGatewayRouteWafStatusResponseBodyDataHeaderOpHeaderOpItems> & headerOpItems) { DARABONBA_PTR_SET_VALUE(headerOpItems_, headerOpItems) };
    inline UpdateGatewayRouteWafStatusResponseBodyDataHeaderOp& setHeaderOpItems(vector<Models::UpdateGatewayRouteWafStatusResponseBodyDataHeaderOpHeaderOpItems> && headerOpItems) { DARABONBA_PTR_SET_RVALUE(headerOpItems_, headerOpItems) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateGatewayRouteWafStatusResponseBodyDataHeaderOp& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The policy.
    std::shared_ptr<vector<Models::UpdateGatewayRouteWafStatusResponseBodyDataHeaderOpHeaderOpItems>> headerOpItems_ = nullptr;
    // The status.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
