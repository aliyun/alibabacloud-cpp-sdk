// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDGATEWAYROUTEREQUESTSERVICESHTTPDUBBOTRANSCODERMOTHEDMAPLIST_HPP_
#define ALIBABACLOUD_MODELS_ADDGATEWAYROUTEREQUESTSERVICESHTTPDUBBOTRANSCODERMOTHEDMAPLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddGatewayRouteRequestServicesHttpDubboTranscoderMothedMapListParamMapsList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class AddGatewayRouteRequestServicesHttpDubboTranscoderMothedMapList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddGatewayRouteRequestServicesHttpDubboTranscoderMothedMapList& obj) { 
      DARABONBA_PTR_TO_JSON(DubboMothedName, dubboMothedName_);
      DARABONBA_PTR_TO_JSON(HttpMothed, httpMothed_);
      DARABONBA_PTR_TO_JSON(Mothedpath, mothedpath_);
      DARABONBA_PTR_TO_JSON(ParamMapsList, paramMapsList_);
      DARABONBA_PTR_TO_JSON(PassThroughAllHeaders, passThroughAllHeaders_);
      DARABONBA_PTR_TO_JSON(PassThroughList, passThroughList_);
    };
    friend void from_json(const Darabonba::Json& j, AddGatewayRouteRequestServicesHttpDubboTranscoderMothedMapList& obj) { 
      DARABONBA_PTR_FROM_JSON(DubboMothedName, dubboMothedName_);
      DARABONBA_PTR_FROM_JSON(HttpMothed, httpMothed_);
      DARABONBA_PTR_FROM_JSON(Mothedpath, mothedpath_);
      DARABONBA_PTR_FROM_JSON(ParamMapsList, paramMapsList_);
      DARABONBA_PTR_FROM_JSON(PassThroughAllHeaders, passThroughAllHeaders_);
      DARABONBA_PTR_FROM_JSON(PassThroughList, passThroughList_);
    };
    AddGatewayRouteRequestServicesHttpDubboTranscoderMothedMapList() = default ;
    AddGatewayRouteRequestServicesHttpDubboTranscoderMothedMapList(const AddGatewayRouteRequestServicesHttpDubboTranscoderMothedMapList &) = default ;
    AddGatewayRouteRequestServicesHttpDubboTranscoderMothedMapList(AddGatewayRouteRequestServicesHttpDubboTranscoderMothedMapList &&) = default ;
    AddGatewayRouteRequestServicesHttpDubboTranscoderMothedMapList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddGatewayRouteRequestServicesHttpDubboTranscoderMothedMapList() = default ;
    AddGatewayRouteRequestServicesHttpDubboTranscoderMothedMapList& operator=(const AddGatewayRouteRequestServicesHttpDubboTranscoderMothedMapList &) = default ;
    AddGatewayRouteRequestServicesHttpDubboTranscoderMothedMapList& operator=(AddGatewayRouteRequestServicesHttpDubboTranscoderMothedMapList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dubboMothedName_ == nullptr
        && return this->httpMothed_ == nullptr && return this->mothedpath_ == nullptr && return this->paramMapsList_ == nullptr && return this->passThroughAllHeaders_ == nullptr && return this->passThroughList_ == nullptr; };
    // dubboMothedName Field Functions 
    bool hasDubboMothedName() const { return this->dubboMothedName_ != nullptr;};
    void deleteDubboMothedName() { this->dubboMothedName_ = nullptr;};
    inline string dubboMothedName() const { DARABONBA_PTR_GET_DEFAULT(dubboMothedName_, "") };
    inline AddGatewayRouteRequestServicesHttpDubboTranscoderMothedMapList& setDubboMothedName(string dubboMothedName) { DARABONBA_PTR_SET_VALUE(dubboMothedName_, dubboMothedName) };


    // httpMothed Field Functions 
    bool hasHttpMothed() const { return this->httpMothed_ != nullptr;};
    void deleteHttpMothed() { this->httpMothed_ = nullptr;};
    inline string httpMothed() const { DARABONBA_PTR_GET_DEFAULT(httpMothed_, "") };
    inline AddGatewayRouteRequestServicesHttpDubboTranscoderMothedMapList& setHttpMothed(string httpMothed) { DARABONBA_PTR_SET_VALUE(httpMothed_, httpMothed) };


    // mothedpath Field Functions 
    bool hasMothedpath() const { return this->mothedpath_ != nullptr;};
    void deleteMothedpath() { this->mothedpath_ = nullptr;};
    inline string mothedpath() const { DARABONBA_PTR_GET_DEFAULT(mothedpath_, "") };
    inline AddGatewayRouteRequestServicesHttpDubboTranscoderMothedMapList& setMothedpath(string mothedpath) { DARABONBA_PTR_SET_VALUE(mothedpath_, mothedpath) };


    // paramMapsList Field Functions 
    bool hasParamMapsList() const { return this->paramMapsList_ != nullptr;};
    void deleteParamMapsList() { this->paramMapsList_ = nullptr;};
    inline const vector<Models::AddGatewayRouteRequestServicesHttpDubboTranscoderMothedMapListParamMapsList> & paramMapsList() const { DARABONBA_PTR_GET_CONST(paramMapsList_, vector<Models::AddGatewayRouteRequestServicesHttpDubboTranscoderMothedMapListParamMapsList>) };
    inline vector<Models::AddGatewayRouteRequestServicesHttpDubboTranscoderMothedMapListParamMapsList> paramMapsList() { DARABONBA_PTR_GET(paramMapsList_, vector<Models::AddGatewayRouteRequestServicesHttpDubboTranscoderMothedMapListParamMapsList>) };
    inline AddGatewayRouteRequestServicesHttpDubboTranscoderMothedMapList& setParamMapsList(const vector<Models::AddGatewayRouteRequestServicesHttpDubboTranscoderMothedMapListParamMapsList> & paramMapsList) { DARABONBA_PTR_SET_VALUE(paramMapsList_, paramMapsList) };
    inline AddGatewayRouteRequestServicesHttpDubboTranscoderMothedMapList& setParamMapsList(vector<Models::AddGatewayRouteRequestServicesHttpDubboTranscoderMothedMapListParamMapsList> && paramMapsList) { DARABONBA_PTR_SET_RVALUE(paramMapsList_, paramMapsList) };


    // passThroughAllHeaders Field Functions 
    bool hasPassThroughAllHeaders() const { return this->passThroughAllHeaders_ != nullptr;};
    void deletePassThroughAllHeaders() { this->passThroughAllHeaders_ = nullptr;};
    inline string passThroughAllHeaders() const { DARABONBA_PTR_GET_DEFAULT(passThroughAllHeaders_, "") };
    inline AddGatewayRouteRequestServicesHttpDubboTranscoderMothedMapList& setPassThroughAllHeaders(string passThroughAllHeaders) { DARABONBA_PTR_SET_VALUE(passThroughAllHeaders_, passThroughAllHeaders) };


    // passThroughList Field Functions 
    bool hasPassThroughList() const { return this->passThroughList_ != nullptr;};
    void deletePassThroughList() { this->passThroughList_ = nullptr;};
    inline const vector<string> & passThroughList() const { DARABONBA_PTR_GET_CONST(passThroughList_, vector<string>) };
    inline vector<string> passThroughList() { DARABONBA_PTR_GET(passThroughList_, vector<string>) };
    inline AddGatewayRouteRequestServicesHttpDubboTranscoderMothedMapList& setPassThroughList(const vector<string> & passThroughList) { DARABONBA_PTR_SET_VALUE(passThroughList_, passThroughList) };
    inline AddGatewayRouteRequestServicesHttpDubboTranscoderMothedMapList& setPassThroughList(vector<string> && passThroughList) { DARABONBA_PTR_SET_RVALUE(passThroughList_, passThroughList) };


  protected:
    // The method name of the Dubbo service.
    std::shared_ptr<string> dubboMothedName_ = nullptr;
    // The HTTP method.
    // 
    // > Valid values:
    // 
    // *   ALL_GET
    // 
    // *   ALL_POST
    // 
    // *   ALL_PUT
    // 
    // *   ALL_DELETE
    // 
    // *   ALL_PATCH
    std::shared_ptr<string> httpMothed_ = nullptr;
    // The path used for method matching.
    std::shared_ptr<string> mothedpath_ = nullptr;
    // The information about parameter mappings.
    std::shared_ptr<vector<Models::AddGatewayRouteRequestServicesHttpDubboTranscoderMothedMapListParamMapsList>> paramMapsList_ = nullptr;
    // The pass-through type of the header.
    // 
    // > Valid values:
    // 
    // *   PASS_ALL: All headers are passed through.
    // 
    // *   PASS_NOT: All headers are not passed through.
    // 
    // *   PASS_ASSIGN: Specified headers are passed through.
    std::shared_ptr<string> passThroughAllHeaders_ = nullptr;
    // The list of headers to be passed through.
    std::shared_ptr<vector<string>> passThroughList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
