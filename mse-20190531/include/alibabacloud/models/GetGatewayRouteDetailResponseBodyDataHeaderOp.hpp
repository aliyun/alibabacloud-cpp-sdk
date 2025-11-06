// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGATEWAYROUTEDETAILRESPONSEBODYDATAHEADEROP_HPP_
#define ALIBABACLOUD_MODELS_GETGATEWAYROUTEDETAILRESPONSEBODYDATAHEADEROP_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetGatewayRouteDetailResponseBodyDataHeaderOpHeaderOpItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetGatewayRouteDetailResponseBodyDataHeaderOp : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGatewayRouteDetailResponseBodyDataHeaderOp& obj) { 
      DARABONBA_PTR_TO_JSON(HeaderOpItems, headerOpItems_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetGatewayRouteDetailResponseBodyDataHeaderOp& obj) { 
      DARABONBA_PTR_FROM_JSON(HeaderOpItems, headerOpItems_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetGatewayRouteDetailResponseBodyDataHeaderOp() = default ;
    GetGatewayRouteDetailResponseBodyDataHeaderOp(const GetGatewayRouteDetailResponseBodyDataHeaderOp &) = default ;
    GetGatewayRouteDetailResponseBodyDataHeaderOp(GetGatewayRouteDetailResponseBodyDataHeaderOp &&) = default ;
    GetGatewayRouteDetailResponseBodyDataHeaderOp(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGatewayRouteDetailResponseBodyDataHeaderOp() = default ;
    GetGatewayRouteDetailResponseBodyDataHeaderOp& operator=(const GetGatewayRouteDetailResponseBodyDataHeaderOp &) = default ;
    GetGatewayRouteDetailResponseBodyDataHeaderOp& operator=(GetGatewayRouteDetailResponseBodyDataHeaderOp &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->headerOpItems_ == nullptr
        && return this->status_ == nullptr; };
    // headerOpItems Field Functions 
    bool hasHeaderOpItems() const { return this->headerOpItems_ != nullptr;};
    void deleteHeaderOpItems() { this->headerOpItems_ = nullptr;};
    inline const vector<Models::GetGatewayRouteDetailResponseBodyDataHeaderOpHeaderOpItems> & headerOpItems() const { DARABONBA_PTR_GET_CONST(headerOpItems_, vector<Models::GetGatewayRouteDetailResponseBodyDataHeaderOpHeaderOpItems>) };
    inline vector<Models::GetGatewayRouteDetailResponseBodyDataHeaderOpHeaderOpItems> headerOpItems() { DARABONBA_PTR_GET(headerOpItems_, vector<Models::GetGatewayRouteDetailResponseBodyDataHeaderOpHeaderOpItems>) };
    inline GetGatewayRouteDetailResponseBodyDataHeaderOp& setHeaderOpItems(const vector<Models::GetGatewayRouteDetailResponseBodyDataHeaderOpHeaderOpItems> & headerOpItems) { DARABONBA_PTR_SET_VALUE(headerOpItems_, headerOpItems) };
    inline GetGatewayRouteDetailResponseBodyDataHeaderOp& setHeaderOpItems(vector<Models::GetGatewayRouteDetailResponseBodyDataHeaderOpHeaderOpItems> && headerOpItems) { DARABONBA_PTR_SET_RVALUE(headerOpItems_, headerOpItems) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetGatewayRouteDetailResponseBodyDataHeaderOp& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The information about headers.
    std::shared_ptr<vector<Models::GetGatewayRouteDetailResponseBodyDataHeaderOpHeaderOpItems>> headerOpItems_ = nullptr;
    // The status.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
