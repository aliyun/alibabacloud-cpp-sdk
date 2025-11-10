// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODYDATANETWORKINFO_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODYDATANETWORKINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetInstanceResponseBodyDataNetworkInfoEndpoints.hpp>
#include <alibabacloud/models/GetInstanceResponseBodyDataNetworkInfoInternetInfo.hpp>
#include <alibabacloud/models/GetInstanceResponseBodyDataNetworkInfoVpcInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class GetInstanceResponseBodyDataNetworkInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceResponseBodyDataNetworkInfo& obj) { 
      DARABONBA_PTR_TO_JSON(endpoints, endpoints_);
      DARABONBA_PTR_TO_JSON(internetInfo, internetInfo_);
      DARABONBA_PTR_TO_JSON(vpcInfo, vpcInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceResponseBodyDataNetworkInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(endpoints, endpoints_);
      DARABONBA_PTR_FROM_JSON(internetInfo, internetInfo_);
      DARABONBA_PTR_FROM_JSON(vpcInfo, vpcInfo_);
    };
    GetInstanceResponseBodyDataNetworkInfo() = default ;
    GetInstanceResponseBodyDataNetworkInfo(const GetInstanceResponseBodyDataNetworkInfo &) = default ;
    GetInstanceResponseBodyDataNetworkInfo(GetInstanceResponseBodyDataNetworkInfo &&) = default ;
    GetInstanceResponseBodyDataNetworkInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceResponseBodyDataNetworkInfo() = default ;
    GetInstanceResponseBodyDataNetworkInfo& operator=(const GetInstanceResponseBodyDataNetworkInfo &) = default ;
    GetInstanceResponseBodyDataNetworkInfo& operator=(GetInstanceResponseBodyDataNetworkInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endpoints_ == nullptr
        && return this->internetInfo_ == nullptr && return this->vpcInfo_ == nullptr; };
    // endpoints Field Functions 
    bool hasEndpoints() const { return this->endpoints_ != nullptr;};
    void deleteEndpoints() { this->endpoints_ = nullptr;};
    inline const vector<Models::GetInstanceResponseBodyDataNetworkInfoEndpoints> & endpoints() const { DARABONBA_PTR_GET_CONST(endpoints_, vector<Models::GetInstanceResponseBodyDataNetworkInfoEndpoints>) };
    inline vector<Models::GetInstanceResponseBodyDataNetworkInfoEndpoints> endpoints() { DARABONBA_PTR_GET(endpoints_, vector<Models::GetInstanceResponseBodyDataNetworkInfoEndpoints>) };
    inline GetInstanceResponseBodyDataNetworkInfo& setEndpoints(const vector<Models::GetInstanceResponseBodyDataNetworkInfoEndpoints> & endpoints) { DARABONBA_PTR_SET_VALUE(endpoints_, endpoints) };
    inline GetInstanceResponseBodyDataNetworkInfo& setEndpoints(vector<Models::GetInstanceResponseBodyDataNetworkInfoEndpoints> && endpoints) { DARABONBA_PTR_SET_RVALUE(endpoints_, endpoints) };


    // internetInfo Field Functions 
    bool hasInternetInfo() const { return this->internetInfo_ != nullptr;};
    void deleteInternetInfo() { this->internetInfo_ = nullptr;};
    inline const Models::GetInstanceResponseBodyDataNetworkInfoInternetInfo & internetInfo() const { DARABONBA_PTR_GET_CONST(internetInfo_, Models::GetInstanceResponseBodyDataNetworkInfoInternetInfo) };
    inline Models::GetInstanceResponseBodyDataNetworkInfoInternetInfo internetInfo() { DARABONBA_PTR_GET(internetInfo_, Models::GetInstanceResponseBodyDataNetworkInfoInternetInfo) };
    inline GetInstanceResponseBodyDataNetworkInfo& setInternetInfo(const Models::GetInstanceResponseBodyDataNetworkInfoInternetInfo & internetInfo) { DARABONBA_PTR_SET_VALUE(internetInfo_, internetInfo) };
    inline GetInstanceResponseBodyDataNetworkInfo& setInternetInfo(Models::GetInstanceResponseBodyDataNetworkInfoInternetInfo && internetInfo) { DARABONBA_PTR_SET_RVALUE(internetInfo_, internetInfo) };


    // vpcInfo Field Functions 
    bool hasVpcInfo() const { return this->vpcInfo_ != nullptr;};
    void deleteVpcInfo() { this->vpcInfo_ = nullptr;};
    inline const Models::GetInstanceResponseBodyDataNetworkInfoVpcInfo & vpcInfo() const { DARABONBA_PTR_GET_CONST(vpcInfo_, Models::GetInstanceResponseBodyDataNetworkInfoVpcInfo) };
    inline Models::GetInstanceResponseBodyDataNetworkInfoVpcInfo vpcInfo() { DARABONBA_PTR_GET(vpcInfo_, Models::GetInstanceResponseBodyDataNetworkInfoVpcInfo) };
    inline GetInstanceResponseBodyDataNetworkInfo& setVpcInfo(const Models::GetInstanceResponseBodyDataNetworkInfoVpcInfo & vpcInfo) { DARABONBA_PTR_SET_VALUE(vpcInfo_, vpcInfo) };
    inline GetInstanceResponseBodyDataNetworkInfo& setVpcInfo(Models::GetInstanceResponseBodyDataNetworkInfoVpcInfo && vpcInfo) { DARABONBA_PTR_SET_RVALUE(vpcInfo_, vpcInfo) };


  protected:
    // The endpoints.
    std::shared_ptr<vector<Models::GetInstanceResponseBodyDataNetworkInfoEndpoints>> endpoints_ = nullptr;
    // The information about the Internet.
    std::shared_ptr<Models::GetInstanceResponseBodyDataNetworkInfoInternetInfo> internetInfo_ = nullptr;
    // The virtual private cloud (VPC) information.
    std::shared_ptr<Models::GetInstanceResponseBodyDataNetworkInfoVpcInfo> vpcInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
