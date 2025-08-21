// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEKIBANAWHITEIPSRESPONSEBODYRESULTNETWORKCONFIG_HPP_
#define ALIBABACLOUD_MODELS_UPDATEKIBANAWHITEIPSRESPONSEBODYRESULTNETWORKCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateKibanaWhiteIpsResponseBodyResultNetworkConfigWhiteIpGroupList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class UpdateKibanaWhiteIpsResponseBodyResultNetworkConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateKibanaWhiteIpsResponseBodyResultNetworkConfig& obj) { 
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(vsArea, vsArea_);
      DARABONBA_PTR_TO_JSON(vswitchId, vswitchId_);
      DARABONBA_PTR_TO_JSON(whiteIpGroupList, whiteIpGroupList_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateKibanaWhiteIpsResponseBodyResultNetworkConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(vsArea, vsArea_);
      DARABONBA_PTR_FROM_JSON(vswitchId, vswitchId_);
      DARABONBA_PTR_FROM_JSON(whiteIpGroupList, whiteIpGroupList_);
    };
    UpdateKibanaWhiteIpsResponseBodyResultNetworkConfig() = default ;
    UpdateKibanaWhiteIpsResponseBodyResultNetworkConfig(const UpdateKibanaWhiteIpsResponseBodyResultNetworkConfig &) = default ;
    UpdateKibanaWhiteIpsResponseBodyResultNetworkConfig(UpdateKibanaWhiteIpsResponseBodyResultNetworkConfig &&) = default ;
    UpdateKibanaWhiteIpsResponseBodyResultNetworkConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateKibanaWhiteIpsResponseBodyResultNetworkConfig() = default ;
    UpdateKibanaWhiteIpsResponseBodyResultNetworkConfig& operator=(const UpdateKibanaWhiteIpsResponseBodyResultNetworkConfig &) = default ;
    UpdateKibanaWhiteIpsResponseBodyResultNetworkConfig& operator=(UpdateKibanaWhiteIpsResponseBodyResultNetworkConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->type_ != nullptr
        && this->vpcId_ != nullptr && this->vsArea_ != nullptr && this->vswitchId_ != nullptr && this->whiteIpGroupList_ != nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateKibanaWhiteIpsResponseBodyResultNetworkConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline UpdateKibanaWhiteIpsResponseBodyResultNetworkConfig& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vsArea Field Functions 
    bool hasVsArea() const { return this->vsArea_ != nullptr;};
    void deleteVsArea() { this->vsArea_ = nullptr;};
    inline string vsArea() const { DARABONBA_PTR_GET_DEFAULT(vsArea_, "") };
    inline UpdateKibanaWhiteIpsResponseBodyResultNetworkConfig& setVsArea(string vsArea) { DARABONBA_PTR_SET_VALUE(vsArea_, vsArea) };


    // vswitchId Field Functions 
    bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
    void deleteVswitchId() { this->vswitchId_ = nullptr;};
    inline string vswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
    inline UpdateKibanaWhiteIpsResponseBodyResultNetworkConfig& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


    // whiteIpGroupList Field Functions 
    bool hasWhiteIpGroupList() const { return this->whiteIpGroupList_ != nullptr;};
    void deleteWhiteIpGroupList() { this->whiteIpGroupList_ = nullptr;};
    inline const vector<Models::UpdateKibanaWhiteIpsResponseBodyResultNetworkConfigWhiteIpGroupList> & whiteIpGroupList() const { DARABONBA_PTR_GET_CONST(whiteIpGroupList_, vector<Models::UpdateKibanaWhiteIpsResponseBodyResultNetworkConfigWhiteIpGroupList>) };
    inline vector<Models::UpdateKibanaWhiteIpsResponseBodyResultNetworkConfigWhiteIpGroupList> whiteIpGroupList() { DARABONBA_PTR_GET(whiteIpGroupList_, vector<Models::UpdateKibanaWhiteIpsResponseBodyResultNetworkConfigWhiteIpGroupList>) };
    inline UpdateKibanaWhiteIpsResponseBodyResultNetworkConfig& setWhiteIpGroupList(const vector<Models::UpdateKibanaWhiteIpsResponseBodyResultNetworkConfigWhiteIpGroupList> & whiteIpGroupList) { DARABONBA_PTR_SET_VALUE(whiteIpGroupList_, whiteIpGroupList) };
    inline UpdateKibanaWhiteIpsResponseBodyResultNetworkConfig& setWhiteIpGroupList(vector<Models::UpdateKibanaWhiteIpsResponseBodyResultNetworkConfigWhiteIpGroupList> && whiteIpGroupList) { DARABONBA_PTR_SET_RVALUE(whiteIpGroupList_, whiteIpGroupList) };


  protected:
    // The IP address whitelists.
    std::shared_ptr<string> type_ = nullptr;
    // The ID of the vSwitch.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The network type.
    std::shared_ptr<string> vsArea_ = nullptr;
    // The region ID.
    std::shared_ptr<string> vswitchId_ = nullptr;
    // The IP address whitelists.
    std::shared_ptr<vector<Models::UpdateKibanaWhiteIpsResponseBodyResultNetworkConfigWhiteIpGroupList>> whiteIpGroupList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
