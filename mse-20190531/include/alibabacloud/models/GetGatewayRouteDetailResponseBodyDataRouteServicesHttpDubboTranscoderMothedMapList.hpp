// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGATEWAYROUTEDETAILRESPONSEBODYDATAROUTESERVICESHTTPDUBBOTRANSCODERMOTHEDMAPLIST_HPP_
#define ALIBABACLOUD_MODELS_GETGATEWAYROUTEDETAILRESPONSEBODYDATAROUTESERVICESHTTPDUBBOTRANSCODERMOTHEDMAPLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetGatewayRouteDetailResponseBodyDataRouteServicesHttpDubboTranscoderMothedMapListParamMapsList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetGatewayRouteDetailResponseBodyDataRouteServicesHttpDubboTranscoderMothedMapList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGatewayRouteDetailResponseBodyDataRouteServicesHttpDubboTranscoderMothedMapList& obj) { 
      DARABONBA_PTR_TO_JSON(DubboMothedName, dubboMothedName_);
      DARABONBA_PTR_TO_JSON(HttpMothed, httpMothed_);
      DARABONBA_PTR_TO_JSON(Mothedpath, mothedpath_);
      DARABONBA_PTR_TO_JSON(ParamMapsList, paramMapsList_);
      DARABONBA_PTR_TO_JSON(PassThroughAllHeaders, passThroughAllHeaders_);
      DARABONBA_PTR_TO_JSON(PassThroughList, passThroughList_);
    };
    friend void from_json(const Darabonba::Json& j, GetGatewayRouteDetailResponseBodyDataRouteServicesHttpDubboTranscoderMothedMapList& obj) { 
      DARABONBA_PTR_FROM_JSON(DubboMothedName, dubboMothedName_);
      DARABONBA_PTR_FROM_JSON(HttpMothed, httpMothed_);
      DARABONBA_PTR_FROM_JSON(Mothedpath, mothedpath_);
      DARABONBA_PTR_FROM_JSON(ParamMapsList, paramMapsList_);
      DARABONBA_PTR_FROM_JSON(PassThroughAllHeaders, passThroughAllHeaders_);
      DARABONBA_PTR_FROM_JSON(PassThroughList, passThroughList_);
    };
    GetGatewayRouteDetailResponseBodyDataRouteServicesHttpDubboTranscoderMothedMapList() = default ;
    GetGatewayRouteDetailResponseBodyDataRouteServicesHttpDubboTranscoderMothedMapList(const GetGatewayRouteDetailResponseBodyDataRouteServicesHttpDubboTranscoderMothedMapList &) = default ;
    GetGatewayRouteDetailResponseBodyDataRouteServicesHttpDubboTranscoderMothedMapList(GetGatewayRouteDetailResponseBodyDataRouteServicesHttpDubboTranscoderMothedMapList &&) = default ;
    GetGatewayRouteDetailResponseBodyDataRouteServicesHttpDubboTranscoderMothedMapList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGatewayRouteDetailResponseBodyDataRouteServicesHttpDubboTranscoderMothedMapList() = default ;
    GetGatewayRouteDetailResponseBodyDataRouteServicesHttpDubboTranscoderMothedMapList& operator=(const GetGatewayRouteDetailResponseBodyDataRouteServicesHttpDubboTranscoderMothedMapList &) = default ;
    GetGatewayRouteDetailResponseBodyDataRouteServicesHttpDubboTranscoderMothedMapList& operator=(GetGatewayRouteDetailResponseBodyDataRouteServicesHttpDubboTranscoderMothedMapList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dubboMothedName_ != nullptr
        && this->httpMothed_ != nullptr && this->mothedpath_ != nullptr && this->paramMapsList_ != nullptr && this->passThroughAllHeaders_ != nullptr && this->passThroughList_ != nullptr; };
    // dubboMothedName Field Functions 
    bool hasDubboMothedName() const { return this->dubboMothedName_ != nullptr;};
    void deleteDubboMothedName() { this->dubboMothedName_ = nullptr;};
    inline string dubboMothedName() const { DARABONBA_PTR_GET_DEFAULT(dubboMothedName_, "") };
    inline GetGatewayRouteDetailResponseBodyDataRouteServicesHttpDubboTranscoderMothedMapList& setDubboMothedName(string dubboMothedName) { DARABONBA_PTR_SET_VALUE(dubboMothedName_, dubboMothedName) };


    // httpMothed Field Functions 
    bool hasHttpMothed() const { return this->httpMothed_ != nullptr;};
    void deleteHttpMothed() { this->httpMothed_ = nullptr;};
    inline string httpMothed() const { DARABONBA_PTR_GET_DEFAULT(httpMothed_, "") };
    inline GetGatewayRouteDetailResponseBodyDataRouteServicesHttpDubboTranscoderMothedMapList& setHttpMothed(string httpMothed) { DARABONBA_PTR_SET_VALUE(httpMothed_, httpMothed) };


    // mothedpath Field Functions 
    bool hasMothedpath() const { return this->mothedpath_ != nullptr;};
    void deleteMothedpath() { this->mothedpath_ = nullptr;};
    inline string mothedpath() const { DARABONBA_PTR_GET_DEFAULT(mothedpath_, "") };
    inline GetGatewayRouteDetailResponseBodyDataRouteServicesHttpDubboTranscoderMothedMapList& setMothedpath(string mothedpath) { DARABONBA_PTR_SET_VALUE(mothedpath_, mothedpath) };


    // paramMapsList Field Functions 
    bool hasParamMapsList() const { return this->paramMapsList_ != nullptr;};
    void deleteParamMapsList() { this->paramMapsList_ = nullptr;};
    inline const vector<Models::GetGatewayRouteDetailResponseBodyDataRouteServicesHttpDubboTranscoderMothedMapListParamMapsList> & paramMapsList() const { DARABONBA_PTR_GET_CONST(paramMapsList_, vector<Models::GetGatewayRouteDetailResponseBodyDataRouteServicesHttpDubboTranscoderMothedMapListParamMapsList>) };
    inline vector<Models::GetGatewayRouteDetailResponseBodyDataRouteServicesHttpDubboTranscoderMothedMapListParamMapsList> paramMapsList() { DARABONBA_PTR_GET(paramMapsList_, vector<Models::GetGatewayRouteDetailResponseBodyDataRouteServicesHttpDubboTranscoderMothedMapListParamMapsList>) };
    inline GetGatewayRouteDetailResponseBodyDataRouteServicesHttpDubboTranscoderMothedMapList& setParamMapsList(const vector<Models::GetGatewayRouteDetailResponseBodyDataRouteServicesHttpDubboTranscoderMothedMapListParamMapsList> & paramMapsList) { DARABONBA_PTR_SET_VALUE(paramMapsList_, paramMapsList) };
    inline GetGatewayRouteDetailResponseBodyDataRouteServicesHttpDubboTranscoderMothedMapList& setParamMapsList(vector<Models::GetGatewayRouteDetailResponseBodyDataRouteServicesHttpDubboTranscoderMothedMapListParamMapsList> && paramMapsList) { DARABONBA_PTR_SET_RVALUE(paramMapsList_, paramMapsList) };


    // passThroughAllHeaders Field Functions 
    bool hasPassThroughAllHeaders() const { return this->passThroughAllHeaders_ != nullptr;};
    void deletePassThroughAllHeaders() { this->passThroughAllHeaders_ = nullptr;};
    inline string passThroughAllHeaders() const { DARABONBA_PTR_GET_DEFAULT(passThroughAllHeaders_, "") };
    inline GetGatewayRouteDetailResponseBodyDataRouteServicesHttpDubboTranscoderMothedMapList& setPassThroughAllHeaders(string passThroughAllHeaders) { DARABONBA_PTR_SET_VALUE(passThroughAllHeaders_, passThroughAllHeaders) };


    // passThroughList Field Functions 
    bool hasPassThroughList() const { return this->passThroughList_ != nullptr;};
    void deletePassThroughList() { this->passThroughList_ = nullptr;};
    inline const vector<string> & passThroughList() const { DARABONBA_PTR_GET_CONST(passThroughList_, vector<string>) };
    inline vector<string> passThroughList() { DARABONBA_PTR_GET(passThroughList_, vector<string>) };
    inline GetGatewayRouteDetailResponseBodyDataRouteServicesHttpDubboTranscoderMothedMapList& setPassThroughList(const vector<string> & passThroughList) { DARABONBA_PTR_SET_VALUE(passThroughList_, passThroughList) };
    inline GetGatewayRouteDetailResponseBodyDataRouteServicesHttpDubboTranscoderMothedMapList& setPassThroughList(vector<string> && passThroughList) { DARABONBA_PTR_SET_RVALUE(passThroughList_, passThroughList) };


  protected:
    std::shared_ptr<string> dubboMothedName_ = nullptr;
    std::shared_ptr<string> httpMothed_ = nullptr;
    std::shared_ptr<string> mothedpath_ = nullptr;
    std::shared_ptr<vector<Models::GetGatewayRouteDetailResponseBodyDataRouteServicesHttpDubboTranscoderMothedMapListParamMapsList>> paramMapsList_ = nullptr;
    std::shared_ptr<string> passThroughAllHeaders_ = nullptr;
    std::shared_ptr<vector<string>> passThroughList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
