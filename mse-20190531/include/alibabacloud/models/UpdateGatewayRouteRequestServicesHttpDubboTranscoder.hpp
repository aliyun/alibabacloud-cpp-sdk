// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGATEWAYROUTEREQUESTSERVICESHTTPDUBBOTRANSCODER_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGATEWAYROUTEREQUESTSERVICESHTTPDUBBOTRANSCODER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateGatewayRouteRequestServicesHttpDubboTranscoderMothedMapList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class UpdateGatewayRouteRequestServicesHttpDubboTranscoder : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGatewayRouteRequestServicesHttpDubboTranscoder& obj) { 
      DARABONBA_PTR_TO_JSON(DubboServiceGroup, dubboServiceGroup_);
      DARABONBA_PTR_TO_JSON(DubboServiceName, dubboServiceName_);
      DARABONBA_PTR_TO_JSON(DubboServiceVersion, dubboServiceVersion_);
      DARABONBA_PTR_TO_JSON(MothedMapList, mothedMapList_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGatewayRouteRequestServicesHttpDubboTranscoder& obj) { 
      DARABONBA_PTR_FROM_JSON(DubboServiceGroup, dubboServiceGroup_);
      DARABONBA_PTR_FROM_JSON(DubboServiceName, dubboServiceName_);
      DARABONBA_PTR_FROM_JSON(DubboServiceVersion, dubboServiceVersion_);
      DARABONBA_PTR_FROM_JSON(MothedMapList, mothedMapList_);
    };
    UpdateGatewayRouteRequestServicesHttpDubboTranscoder() = default ;
    UpdateGatewayRouteRequestServicesHttpDubboTranscoder(const UpdateGatewayRouteRequestServicesHttpDubboTranscoder &) = default ;
    UpdateGatewayRouteRequestServicesHttpDubboTranscoder(UpdateGatewayRouteRequestServicesHttpDubboTranscoder &&) = default ;
    UpdateGatewayRouteRequestServicesHttpDubboTranscoder(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGatewayRouteRequestServicesHttpDubboTranscoder() = default ;
    UpdateGatewayRouteRequestServicesHttpDubboTranscoder& operator=(const UpdateGatewayRouteRequestServicesHttpDubboTranscoder &) = default ;
    UpdateGatewayRouteRequestServicesHttpDubboTranscoder& operator=(UpdateGatewayRouteRequestServicesHttpDubboTranscoder &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dubboServiceGroup_ == nullptr
        && return this->dubboServiceName_ == nullptr && return this->dubboServiceVersion_ == nullptr && return this->mothedMapList_ == nullptr; };
    // dubboServiceGroup Field Functions 
    bool hasDubboServiceGroup() const { return this->dubboServiceGroup_ != nullptr;};
    void deleteDubboServiceGroup() { this->dubboServiceGroup_ = nullptr;};
    inline string dubboServiceGroup() const { DARABONBA_PTR_GET_DEFAULT(dubboServiceGroup_, "") };
    inline UpdateGatewayRouteRequestServicesHttpDubboTranscoder& setDubboServiceGroup(string dubboServiceGroup) { DARABONBA_PTR_SET_VALUE(dubboServiceGroup_, dubboServiceGroup) };


    // dubboServiceName Field Functions 
    bool hasDubboServiceName() const { return this->dubboServiceName_ != nullptr;};
    void deleteDubboServiceName() { this->dubboServiceName_ = nullptr;};
    inline string dubboServiceName() const { DARABONBA_PTR_GET_DEFAULT(dubboServiceName_, "") };
    inline UpdateGatewayRouteRequestServicesHttpDubboTranscoder& setDubboServiceName(string dubboServiceName) { DARABONBA_PTR_SET_VALUE(dubboServiceName_, dubboServiceName) };


    // dubboServiceVersion Field Functions 
    bool hasDubboServiceVersion() const { return this->dubboServiceVersion_ != nullptr;};
    void deleteDubboServiceVersion() { this->dubboServiceVersion_ = nullptr;};
    inline string dubboServiceVersion() const { DARABONBA_PTR_GET_DEFAULT(dubboServiceVersion_, "") };
    inline UpdateGatewayRouteRequestServicesHttpDubboTranscoder& setDubboServiceVersion(string dubboServiceVersion) { DARABONBA_PTR_SET_VALUE(dubboServiceVersion_, dubboServiceVersion) };


    // mothedMapList Field Functions 
    bool hasMothedMapList() const { return this->mothedMapList_ != nullptr;};
    void deleteMothedMapList() { this->mothedMapList_ = nullptr;};
    inline const vector<Models::UpdateGatewayRouteRequestServicesHttpDubboTranscoderMothedMapList> & mothedMapList() const { DARABONBA_PTR_GET_CONST(mothedMapList_, vector<Models::UpdateGatewayRouteRequestServicesHttpDubboTranscoderMothedMapList>) };
    inline vector<Models::UpdateGatewayRouteRequestServicesHttpDubboTranscoderMothedMapList> mothedMapList() { DARABONBA_PTR_GET(mothedMapList_, vector<Models::UpdateGatewayRouteRequestServicesHttpDubboTranscoderMothedMapList>) };
    inline UpdateGatewayRouteRequestServicesHttpDubboTranscoder& setMothedMapList(const vector<Models::UpdateGatewayRouteRequestServicesHttpDubboTranscoderMothedMapList> & mothedMapList) { DARABONBA_PTR_SET_VALUE(mothedMapList_, mothedMapList) };
    inline UpdateGatewayRouteRequestServicesHttpDubboTranscoder& setMothedMapList(vector<Models::UpdateGatewayRouteRequestServicesHttpDubboTranscoderMothedMapList> && mothedMapList) { DARABONBA_PTR_SET_RVALUE(mothedMapList_, mothedMapList) };


  protected:
    // The Dubbo service group.
    std::shared_ptr<string> dubboServiceGroup_ = nullptr;
    // The name of the Dubbo service.
    std::shared_ptr<string> dubboServiceName_ = nullptr;
    // The version of the Dubbo service.
    std::shared_ptr<string> dubboServiceVersion_ = nullptr;
    // The forwarding rules of the Dubbo service.
    std::shared_ptr<vector<Models::UpdateGatewayRouteRequestServicesHttpDubboTranscoderMothedMapList>> mothedMapList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
