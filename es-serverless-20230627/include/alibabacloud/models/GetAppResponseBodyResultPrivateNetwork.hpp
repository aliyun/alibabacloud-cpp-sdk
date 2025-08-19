// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPRESPONSEBODYRESULTPRIVATENETWORK_HPP_
#define ALIBABACLOUD_MODELS_GETAPPRESPONSEBODYRESULTPRIVATENETWORK_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAppResponseBodyResultPrivateNetworkWhiteIpGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EsServerless20230627
{
namespace Models
{
  class GetAppResponseBodyResultPrivateNetwork : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAppResponseBodyResultPrivateNetwork& obj) { 
      DARABONBA_PTR_TO_JSON(domain, domain_);
      DARABONBA_PTR_TO_JSON(enabled, enabled_);
      DARABONBA_PTR_TO_JSON(port, port_);
      DARABONBA_PTR_TO_JSON(pvlEndpointId, pvlEndpointId_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(whiteIpGroup, whiteIpGroup_);
    };
    friend void from_json(const Darabonba::Json& j, GetAppResponseBodyResultPrivateNetwork& obj) { 
      DARABONBA_PTR_FROM_JSON(domain, domain_);
      DARABONBA_PTR_FROM_JSON(enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(port, port_);
      DARABONBA_PTR_FROM_JSON(pvlEndpointId, pvlEndpointId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(whiteIpGroup, whiteIpGroup_);
    };
    GetAppResponseBodyResultPrivateNetwork() = default ;
    GetAppResponseBodyResultPrivateNetwork(const GetAppResponseBodyResultPrivateNetwork &) = default ;
    GetAppResponseBodyResultPrivateNetwork(GetAppResponseBodyResultPrivateNetwork &&) = default ;
    GetAppResponseBodyResultPrivateNetwork(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAppResponseBodyResultPrivateNetwork() = default ;
    GetAppResponseBodyResultPrivateNetwork& operator=(const GetAppResponseBodyResultPrivateNetwork &) = default ;
    GetAppResponseBodyResultPrivateNetwork& operator=(GetAppResponseBodyResultPrivateNetwork &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domain_ != nullptr
        && this->enabled_ != nullptr && this->port_ != nullptr && this->pvlEndpointId_ != nullptr && this->type_ != nullptr && this->vpcId_ != nullptr
        && this->whiteIpGroup_ != nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline GetAppResponseBodyResultPrivateNetwork& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline GetAppResponseBodyResultPrivateNetwork& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline GetAppResponseBodyResultPrivateNetwork& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // pvlEndpointId Field Functions 
    bool hasPvlEndpointId() const { return this->pvlEndpointId_ != nullptr;};
    void deletePvlEndpointId() { this->pvlEndpointId_ = nullptr;};
    inline string pvlEndpointId() const { DARABONBA_PTR_GET_DEFAULT(pvlEndpointId_, "") };
    inline GetAppResponseBodyResultPrivateNetwork& setPvlEndpointId(string pvlEndpointId) { DARABONBA_PTR_SET_VALUE(pvlEndpointId_, pvlEndpointId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetAppResponseBodyResultPrivateNetwork& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline GetAppResponseBodyResultPrivateNetwork& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // whiteIpGroup Field Functions 
    bool hasWhiteIpGroup() const { return this->whiteIpGroup_ != nullptr;};
    void deleteWhiteIpGroup() { this->whiteIpGroup_ = nullptr;};
    inline const vector<Models::GetAppResponseBodyResultPrivateNetworkWhiteIpGroup> & whiteIpGroup() const { DARABONBA_PTR_GET_CONST(whiteIpGroup_, vector<Models::GetAppResponseBodyResultPrivateNetworkWhiteIpGroup>) };
    inline vector<Models::GetAppResponseBodyResultPrivateNetworkWhiteIpGroup> whiteIpGroup() { DARABONBA_PTR_GET(whiteIpGroup_, vector<Models::GetAppResponseBodyResultPrivateNetworkWhiteIpGroup>) };
    inline GetAppResponseBodyResultPrivateNetwork& setWhiteIpGroup(const vector<Models::GetAppResponseBodyResultPrivateNetworkWhiteIpGroup> & whiteIpGroup) { DARABONBA_PTR_SET_VALUE(whiteIpGroup_, whiteIpGroup) };
    inline GetAppResponseBodyResultPrivateNetwork& setWhiteIpGroup(vector<Models::GetAppResponseBodyResultPrivateNetworkWhiteIpGroup> && whiteIpGroup) { DARABONBA_PTR_SET_RVALUE(whiteIpGroup_, whiteIpGroup) };


  protected:
    std::shared_ptr<string> domain_ = nullptr;
    std::shared_ptr<bool> enabled_ = nullptr;
    std::shared_ptr<int32_t> port_ = nullptr;
    std::shared_ptr<string> pvlEndpointId_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> vpcId_ = nullptr;
    std::shared_ptr<vector<Models::GetAppResponseBodyResultPrivateNetworkWhiteIpGroup>> whiteIpGroup_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EsServerless20230627
#endif
