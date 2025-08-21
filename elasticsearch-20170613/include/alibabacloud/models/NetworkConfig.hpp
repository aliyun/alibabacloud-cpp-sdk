// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NETWORKCONFIG_HPP_
#define ALIBABACLOUD_MODELS_NETWORKCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/WhiteIpGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class NetworkConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NetworkConfig& obj) { 
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(vsArea, vsArea_);
      DARABONBA_PTR_TO_JSON(vswitchId, vswitchId_);
      DARABONBA_PTR_TO_JSON(whiteIpGroupList, whiteIpGroupList_);
    };
    friend void from_json(const Darabonba::Json& j, NetworkConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(vsArea, vsArea_);
      DARABONBA_PTR_FROM_JSON(vswitchId, vswitchId_);
      DARABONBA_PTR_FROM_JSON(whiteIpGroupList, whiteIpGroupList_);
    };
    NetworkConfig() = default ;
    NetworkConfig(const NetworkConfig &) = default ;
    NetworkConfig(NetworkConfig &&) = default ;
    NetworkConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NetworkConfig() = default ;
    NetworkConfig& operator=(const NetworkConfig &) = default ;
    NetworkConfig& operator=(NetworkConfig &&) = default ;
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
    inline NetworkConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline NetworkConfig& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vsArea Field Functions 
    bool hasVsArea() const { return this->vsArea_ != nullptr;};
    void deleteVsArea() { this->vsArea_ = nullptr;};
    inline string vsArea() const { DARABONBA_PTR_GET_DEFAULT(vsArea_, "") };
    inline NetworkConfig& setVsArea(string vsArea) { DARABONBA_PTR_SET_VALUE(vsArea_, vsArea) };


    // vswitchId Field Functions 
    bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
    void deleteVswitchId() { this->vswitchId_ = nullptr;};
    inline string vswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
    inline NetworkConfig& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


    // whiteIpGroupList Field Functions 
    bool hasWhiteIpGroupList() const { return this->whiteIpGroupList_ != nullptr;};
    void deleteWhiteIpGroupList() { this->whiteIpGroupList_ = nullptr;};
    inline const vector<WhiteIpGroup> & whiteIpGroupList() const { DARABONBA_PTR_GET_CONST(whiteIpGroupList_, vector<WhiteIpGroup>) };
    inline vector<WhiteIpGroup> whiteIpGroupList() { DARABONBA_PTR_GET(whiteIpGroupList_, vector<WhiteIpGroup>) };
    inline NetworkConfig& setWhiteIpGroupList(const vector<WhiteIpGroup> & whiteIpGroupList) { DARABONBA_PTR_SET_VALUE(whiteIpGroupList_, whiteIpGroupList) };
    inline NetworkConfig& setWhiteIpGroupList(vector<WhiteIpGroup> && whiteIpGroupList) { DARABONBA_PTR_SET_RVALUE(whiteIpGroupList_, whiteIpGroupList) };


  protected:
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> vpcId_ = nullptr;
    std::shared_ptr<string> vsArea_ = nullptr;
    std::shared_ptr<string> vswitchId_ = nullptr;
    std::shared_ptr<vector<WhiteIpGroup>> whiteIpGroupList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
