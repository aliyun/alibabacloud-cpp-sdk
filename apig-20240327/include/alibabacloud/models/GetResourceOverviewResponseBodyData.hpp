// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCEOVERVIEWRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCEOVERVIEWRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetResourceOverviewResponseBodyDataApi.hpp>
#include <alibabacloud/models/GetResourceOverviewResponseBodyDataGateway.hpp>
#include <vector>
#include <alibabacloud/models/GetResourceOverviewResponseBodyDataRiskOverview.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetResourceOverviewResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceOverviewResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(api, api_);
      DARABONBA_PTR_TO_JSON(gateway, gateway_);
      DARABONBA_PTR_TO_JSON(riskOverview, riskOverview_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceOverviewResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(api, api_);
      DARABONBA_PTR_FROM_JSON(gateway, gateway_);
      DARABONBA_PTR_FROM_JSON(riskOverview, riskOverview_);
    };
    GetResourceOverviewResponseBodyData() = default ;
    GetResourceOverviewResponseBodyData(const GetResourceOverviewResponseBodyData &) = default ;
    GetResourceOverviewResponseBodyData(GetResourceOverviewResponseBodyData &&) = default ;
    GetResourceOverviewResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceOverviewResponseBodyData() = default ;
    GetResourceOverviewResponseBodyData& operator=(const GetResourceOverviewResponseBodyData &) = default ;
    GetResourceOverviewResponseBodyData& operator=(GetResourceOverviewResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->api_ == nullptr
        && return this->gateway_ == nullptr && return this->riskOverview_ == nullptr; };
    // api Field Functions 
    bool hasApi() const { return this->api_ != nullptr;};
    void deleteApi() { this->api_ = nullptr;};
    inline const Models::GetResourceOverviewResponseBodyDataApi & api() const { DARABONBA_PTR_GET_CONST(api_, Models::GetResourceOverviewResponseBodyDataApi) };
    inline Models::GetResourceOverviewResponseBodyDataApi api() { DARABONBA_PTR_GET(api_, Models::GetResourceOverviewResponseBodyDataApi) };
    inline GetResourceOverviewResponseBodyData& setApi(const Models::GetResourceOverviewResponseBodyDataApi & api) { DARABONBA_PTR_SET_VALUE(api_, api) };
    inline GetResourceOverviewResponseBodyData& setApi(Models::GetResourceOverviewResponseBodyDataApi && api) { DARABONBA_PTR_SET_RVALUE(api_, api) };


    // gateway Field Functions 
    bool hasGateway() const { return this->gateway_ != nullptr;};
    void deleteGateway() { this->gateway_ = nullptr;};
    inline const Models::GetResourceOverviewResponseBodyDataGateway & gateway() const { DARABONBA_PTR_GET_CONST(gateway_, Models::GetResourceOverviewResponseBodyDataGateway) };
    inline Models::GetResourceOverviewResponseBodyDataGateway gateway() { DARABONBA_PTR_GET(gateway_, Models::GetResourceOverviewResponseBodyDataGateway) };
    inline GetResourceOverviewResponseBodyData& setGateway(const Models::GetResourceOverviewResponseBodyDataGateway & gateway) { DARABONBA_PTR_SET_VALUE(gateway_, gateway) };
    inline GetResourceOverviewResponseBodyData& setGateway(Models::GetResourceOverviewResponseBodyDataGateway && gateway) { DARABONBA_PTR_SET_RVALUE(gateway_, gateway) };


    // riskOverview Field Functions 
    bool hasRiskOverview() const { return this->riskOverview_ != nullptr;};
    void deleteRiskOverview() { this->riskOverview_ = nullptr;};
    inline const vector<Models::GetResourceOverviewResponseBodyDataRiskOverview> & riskOverview() const { DARABONBA_PTR_GET_CONST(riskOverview_, vector<Models::GetResourceOverviewResponseBodyDataRiskOverview>) };
    inline vector<Models::GetResourceOverviewResponseBodyDataRiskOverview> riskOverview() { DARABONBA_PTR_GET(riskOverview_, vector<Models::GetResourceOverviewResponseBodyDataRiskOverview>) };
    inline GetResourceOverviewResponseBodyData& setRiskOverview(const vector<Models::GetResourceOverviewResponseBodyDataRiskOverview> & riskOverview) { DARABONBA_PTR_SET_VALUE(riskOverview_, riskOverview) };
    inline GetResourceOverviewResponseBodyData& setRiskOverview(vector<Models::GetResourceOverviewResponseBodyDataRiskOverview> && riskOverview) { DARABONBA_PTR_SET_RVALUE(riskOverview_, riskOverview) };


  protected:
    // API information.
    std::shared_ptr<Models::GetResourceOverviewResponseBodyDataApi> api_ = nullptr;
    // Gateway information.
    std::shared_ptr<Models::GetResourceOverviewResponseBodyDataGateway> gateway_ = nullptr;
    std::shared_ptr<vector<Models::GetResourceOverviewResponseBodyDataRiskOverview>> riskOverview_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
