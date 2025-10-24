// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROJECTRESPONSEBODYDATAIPWHITELIST_HPP_
#define ALIBABACLOUD_MODELS_GETPROJECTRESPONSEBODYDATAIPWHITELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetProjectResponseBodyDataIpWhiteList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProjectResponseBodyDataIpWhiteList& obj) { 
      DARABONBA_PTR_TO_JSON(ipList, ipList_);
      DARABONBA_PTR_TO_JSON(vpcIpList, vpcIpList_);
    };
    friend void from_json(const Darabonba::Json& j, GetProjectResponseBodyDataIpWhiteList& obj) { 
      DARABONBA_PTR_FROM_JSON(ipList, ipList_);
      DARABONBA_PTR_FROM_JSON(vpcIpList, vpcIpList_);
    };
    GetProjectResponseBodyDataIpWhiteList() = default ;
    GetProjectResponseBodyDataIpWhiteList(const GetProjectResponseBodyDataIpWhiteList &) = default ;
    GetProjectResponseBodyDataIpWhiteList(GetProjectResponseBodyDataIpWhiteList &&) = default ;
    GetProjectResponseBodyDataIpWhiteList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProjectResponseBodyDataIpWhiteList() = default ;
    GetProjectResponseBodyDataIpWhiteList& operator=(const GetProjectResponseBodyDataIpWhiteList &) = default ;
    GetProjectResponseBodyDataIpWhiteList& operator=(GetProjectResponseBodyDataIpWhiteList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ipList_ == nullptr
        && return this->vpcIpList_ == nullptr; };
    // ipList Field Functions 
    bool hasIpList() const { return this->ipList_ != nullptr;};
    void deleteIpList() { this->ipList_ = nullptr;};
    inline string ipList() const { DARABONBA_PTR_GET_DEFAULT(ipList_, "") };
    inline GetProjectResponseBodyDataIpWhiteList& setIpList(string ipList) { DARABONBA_PTR_SET_VALUE(ipList_, ipList) };


    // vpcIpList Field Functions 
    bool hasVpcIpList() const { return this->vpcIpList_ != nullptr;};
    void deleteVpcIpList() { this->vpcIpList_ = nullptr;};
    inline string vpcIpList() const { DARABONBA_PTR_GET_DEFAULT(vpcIpList_, "") };
    inline GetProjectResponseBodyDataIpWhiteList& setVpcIpList(string vpcIpList) { DARABONBA_PTR_SET_VALUE(vpcIpList_, vpcIpList) };


  protected:
    // The IP address whitelist for access over the Internet or the network for interconnecting with other Alibaba Cloud services.
    // 
    // >  If you configure only the IP address whitelist for access over the Internet or the network for interconnecting with other Alibaba Cloud services, the access over the Internet or the network for interconnecting with other Alibaba Cloud services is subject to configurations, and access over a virtual private cloud (VPC) is not allowed.
    std::shared_ptr<string> ipList_ = nullptr;
    // The IP address whitelist for access over a VPC.
    // 
    // >  If you configure only the IP address whitelist for access over a VPC, the access over a VPC is subject to configurations, and the access over the Internet or the network for interconnecting with other Alibaba Cloud services is not allowed.
    std::shared_ptr<string> vpcIpList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
