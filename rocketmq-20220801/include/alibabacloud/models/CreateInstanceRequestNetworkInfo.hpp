// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCEREQUESTNETWORKINFO_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCEREQUESTNETWORKINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateInstanceRequestNetworkInfoInternetInfo.hpp>
#include <alibabacloud/models/CreateInstanceRequestNetworkInfoVpcInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class CreateInstanceRequestNetworkInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceRequestNetworkInfo& obj) { 
      DARABONBA_PTR_TO_JSON(internetInfo, internetInfo_);
      DARABONBA_PTR_TO_JSON(vpcInfo, vpcInfo_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceRequestNetworkInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(internetInfo, internetInfo_);
      DARABONBA_PTR_FROM_JSON(vpcInfo, vpcInfo_);
    };
    CreateInstanceRequestNetworkInfo() = default ;
    CreateInstanceRequestNetworkInfo(const CreateInstanceRequestNetworkInfo &) = default ;
    CreateInstanceRequestNetworkInfo(CreateInstanceRequestNetworkInfo &&) = default ;
    CreateInstanceRequestNetworkInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstanceRequestNetworkInfo() = default ;
    CreateInstanceRequestNetworkInfo& operator=(const CreateInstanceRequestNetworkInfo &) = default ;
    CreateInstanceRequestNetworkInfo& operator=(CreateInstanceRequestNetworkInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->internetInfo_ == nullptr
        && return this->vpcInfo_ == nullptr; };
    // internetInfo Field Functions 
    bool hasInternetInfo() const { return this->internetInfo_ != nullptr;};
    void deleteInternetInfo() { this->internetInfo_ = nullptr;};
    inline const Models::CreateInstanceRequestNetworkInfoInternetInfo & internetInfo() const { DARABONBA_PTR_GET_CONST(internetInfo_, Models::CreateInstanceRequestNetworkInfoInternetInfo) };
    inline Models::CreateInstanceRequestNetworkInfoInternetInfo internetInfo() { DARABONBA_PTR_GET(internetInfo_, Models::CreateInstanceRequestNetworkInfoInternetInfo) };
    inline CreateInstanceRequestNetworkInfo& setInternetInfo(const Models::CreateInstanceRequestNetworkInfoInternetInfo & internetInfo) { DARABONBA_PTR_SET_VALUE(internetInfo_, internetInfo) };
    inline CreateInstanceRequestNetworkInfo& setInternetInfo(Models::CreateInstanceRequestNetworkInfoInternetInfo && internetInfo) { DARABONBA_PTR_SET_RVALUE(internetInfo_, internetInfo) };


    // vpcInfo Field Functions 
    bool hasVpcInfo() const { return this->vpcInfo_ != nullptr;};
    void deleteVpcInfo() { this->vpcInfo_ = nullptr;};
    inline const Models::CreateInstanceRequestNetworkInfoVpcInfo & vpcInfo() const { DARABONBA_PTR_GET_CONST(vpcInfo_, Models::CreateInstanceRequestNetworkInfoVpcInfo) };
    inline Models::CreateInstanceRequestNetworkInfoVpcInfo vpcInfo() { DARABONBA_PTR_GET(vpcInfo_, Models::CreateInstanceRequestNetworkInfoVpcInfo) };
    inline CreateInstanceRequestNetworkInfo& setVpcInfo(const Models::CreateInstanceRequestNetworkInfoVpcInfo & vpcInfo) { DARABONBA_PTR_SET_VALUE(vpcInfo_, vpcInfo) };
    inline CreateInstanceRequestNetworkInfo& setVpcInfo(Models::CreateInstanceRequestNetworkInfoVpcInfo && vpcInfo) { DARABONBA_PTR_SET_RVALUE(vpcInfo_, vpcInfo) };


  protected:
    // The Internet-related configurations.
    // 
    // This parameter is required.
    std::shared_ptr<Models::CreateInstanceRequestNetworkInfoInternetInfo> internetInfo_ = nullptr;
    // The virtual private cloud (VPC)-related configurations.
    // 
    // This parameter is required.
    std::shared_ptr<Models::CreateInstanceRequestNetworkInfoVpcInfo> vpcInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
