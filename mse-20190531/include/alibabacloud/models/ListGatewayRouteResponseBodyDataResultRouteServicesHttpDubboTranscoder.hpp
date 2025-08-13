// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYROUTERESPONSEBODYDATARESULTROUTESERVICESHTTPDUBBOTRANSCODER_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYROUTERESPONSEBODYDATARESULTROUTESERVICESHTTPDUBBOTRANSCODER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListGatewayRouteResponseBodyDataResultRouteServicesHttpDubboTranscoderMothedMapList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListGatewayRouteResponseBodyDataResultRouteServicesHttpDubboTranscoder : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayRouteResponseBodyDataResultRouteServicesHttpDubboTranscoder& obj) { 
      DARABONBA_PTR_TO_JSON(DubboServiceGroup, dubboServiceGroup_);
      DARABONBA_PTR_TO_JSON(DubboServiceName, dubboServiceName_);
      DARABONBA_PTR_TO_JSON(DubboServiceVersion, dubboServiceVersion_);
      DARABONBA_PTR_TO_JSON(MothedMapList, mothedMapList_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayRouteResponseBodyDataResultRouteServicesHttpDubboTranscoder& obj) { 
      DARABONBA_PTR_FROM_JSON(DubboServiceGroup, dubboServiceGroup_);
      DARABONBA_PTR_FROM_JSON(DubboServiceName, dubboServiceName_);
      DARABONBA_PTR_FROM_JSON(DubboServiceVersion, dubboServiceVersion_);
      DARABONBA_PTR_FROM_JSON(MothedMapList, mothedMapList_);
    };
    ListGatewayRouteResponseBodyDataResultRouteServicesHttpDubboTranscoder() = default ;
    ListGatewayRouteResponseBodyDataResultRouteServicesHttpDubboTranscoder(const ListGatewayRouteResponseBodyDataResultRouteServicesHttpDubboTranscoder &) = default ;
    ListGatewayRouteResponseBodyDataResultRouteServicesHttpDubboTranscoder(ListGatewayRouteResponseBodyDataResultRouteServicesHttpDubboTranscoder &&) = default ;
    ListGatewayRouteResponseBodyDataResultRouteServicesHttpDubboTranscoder(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayRouteResponseBodyDataResultRouteServicesHttpDubboTranscoder() = default ;
    ListGatewayRouteResponseBodyDataResultRouteServicesHttpDubboTranscoder& operator=(const ListGatewayRouteResponseBodyDataResultRouteServicesHttpDubboTranscoder &) = default ;
    ListGatewayRouteResponseBodyDataResultRouteServicesHttpDubboTranscoder& operator=(ListGatewayRouteResponseBodyDataResultRouteServicesHttpDubboTranscoder &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dubboServiceGroup_ != nullptr
        && this->dubboServiceName_ != nullptr && this->dubboServiceVersion_ != nullptr && this->mothedMapList_ != nullptr; };
    // dubboServiceGroup Field Functions 
    bool hasDubboServiceGroup() const { return this->dubboServiceGroup_ != nullptr;};
    void deleteDubboServiceGroup() { this->dubboServiceGroup_ = nullptr;};
    inline string dubboServiceGroup() const { DARABONBA_PTR_GET_DEFAULT(dubboServiceGroup_, "") };
    inline ListGatewayRouteResponseBodyDataResultRouteServicesHttpDubboTranscoder& setDubboServiceGroup(string dubboServiceGroup) { DARABONBA_PTR_SET_VALUE(dubboServiceGroup_, dubboServiceGroup) };


    // dubboServiceName Field Functions 
    bool hasDubboServiceName() const { return this->dubboServiceName_ != nullptr;};
    void deleteDubboServiceName() { this->dubboServiceName_ = nullptr;};
    inline string dubboServiceName() const { DARABONBA_PTR_GET_DEFAULT(dubboServiceName_, "") };
    inline ListGatewayRouteResponseBodyDataResultRouteServicesHttpDubboTranscoder& setDubboServiceName(string dubboServiceName) { DARABONBA_PTR_SET_VALUE(dubboServiceName_, dubboServiceName) };


    // dubboServiceVersion Field Functions 
    bool hasDubboServiceVersion() const { return this->dubboServiceVersion_ != nullptr;};
    void deleteDubboServiceVersion() { this->dubboServiceVersion_ = nullptr;};
    inline string dubboServiceVersion() const { DARABONBA_PTR_GET_DEFAULT(dubboServiceVersion_, "") };
    inline ListGatewayRouteResponseBodyDataResultRouteServicesHttpDubboTranscoder& setDubboServiceVersion(string dubboServiceVersion) { DARABONBA_PTR_SET_VALUE(dubboServiceVersion_, dubboServiceVersion) };


    // mothedMapList Field Functions 
    bool hasMothedMapList() const { return this->mothedMapList_ != nullptr;};
    void deleteMothedMapList() { this->mothedMapList_ = nullptr;};
    inline const vector<Models::ListGatewayRouteResponseBodyDataResultRouteServicesHttpDubboTranscoderMothedMapList> & mothedMapList() const { DARABONBA_PTR_GET_CONST(mothedMapList_, vector<Models::ListGatewayRouteResponseBodyDataResultRouteServicesHttpDubboTranscoderMothedMapList>) };
    inline vector<Models::ListGatewayRouteResponseBodyDataResultRouteServicesHttpDubboTranscoderMothedMapList> mothedMapList() { DARABONBA_PTR_GET(mothedMapList_, vector<Models::ListGatewayRouteResponseBodyDataResultRouteServicesHttpDubboTranscoderMothedMapList>) };
    inline ListGatewayRouteResponseBodyDataResultRouteServicesHttpDubboTranscoder& setMothedMapList(const vector<Models::ListGatewayRouteResponseBodyDataResultRouteServicesHttpDubboTranscoderMothedMapList> & mothedMapList) { DARABONBA_PTR_SET_VALUE(mothedMapList_, mothedMapList) };
    inline ListGatewayRouteResponseBodyDataResultRouteServicesHttpDubboTranscoder& setMothedMapList(vector<Models::ListGatewayRouteResponseBodyDataResultRouteServicesHttpDubboTranscoderMothedMapList> && mothedMapList) { DARABONBA_PTR_SET_RVALUE(mothedMapList_, mothedMapList) };


  protected:
    // The Dubbo service group.
    std::shared_ptr<string> dubboServiceGroup_ = nullptr;
    // The name of the Dubbo service.
    std::shared_ptr<string> dubboServiceName_ = nullptr;
    // The version of the Dubbo service.
    std::shared_ptr<string> dubboServiceVersion_ = nullptr;
    // The forwarding rules of the Dubbo service.
    std::shared_ptr<vector<Models::ListGatewayRouteResponseBodyDataResultRouteServicesHttpDubboTranscoderMothedMapList>> mothedMapList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
