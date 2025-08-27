// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENODERESPONSEBODYNETWORKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENODERESPONSEBODYNETWORKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class DescribeNodeResponseBodyNetworks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNodeResponseBodyNetworks& obj) { 
      DARABONBA_PTR_TO_JSON(BondName, bondName_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(SubnetId, subnetId_);
      DARABONBA_PTR_TO_JSON(VpdId, vpdId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNodeResponseBodyNetworks& obj) { 
      DARABONBA_PTR_FROM_JSON(BondName, bondName_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(SubnetId, subnetId_);
      DARABONBA_PTR_FROM_JSON(VpdId, vpdId_);
    };
    DescribeNodeResponseBodyNetworks() = default ;
    DescribeNodeResponseBodyNetworks(const DescribeNodeResponseBodyNetworks &) = default ;
    DescribeNodeResponseBodyNetworks(DescribeNodeResponseBodyNetworks &&) = default ;
    DescribeNodeResponseBodyNetworks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNodeResponseBodyNetworks() = default ;
    DescribeNodeResponseBodyNetworks& operator=(const DescribeNodeResponseBodyNetworks &) = default ;
    DescribeNodeResponseBodyNetworks& operator=(DescribeNodeResponseBodyNetworks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bondName_ != nullptr
        && this->ip_ != nullptr && this->subnetId_ != nullptr && this->vpdId_ != nullptr; };
    // bondName Field Functions 
    bool hasBondName() const { return this->bondName_ != nullptr;};
    void deleteBondName() { this->bondName_ = nullptr;};
    inline string bondName() const { DARABONBA_PTR_GET_DEFAULT(bondName_, "") };
    inline DescribeNodeResponseBodyNetworks& setBondName(string bondName) { DARABONBA_PTR_SET_VALUE(bondName_, bondName) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline DescribeNodeResponseBodyNetworks& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // subnetId Field Functions 
    bool hasSubnetId() const { return this->subnetId_ != nullptr;};
    void deleteSubnetId() { this->subnetId_ = nullptr;};
    inline string subnetId() const { DARABONBA_PTR_GET_DEFAULT(subnetId_, "") };
    inline DescribeNodeResponseBodyNetworks& setSubnetId(string subnetId) { DARABONBA_PTR_SET_VALUE(subnetId_, subnetId) };


    // vpdId Field Functions 
    bool hasVpdId() const { return this->vpdId_ != nullptr;};
    void deleteVpdId() { this->vpdId_ = nullptr;};
    inline string vpdId() const { DARABONBA_PTR_GET_DEFAULT(vpdId_, "") };
    inline DescribeNodeResponseBodyNetworks& setVpdId(string vpdId) { DARABONBA_PTR_SET_VALUE(vpdId_, vpdId) };


  protected:
    // The port information of the elastic network interface (ENI).
    std::shared_ptr<string> bondName_ = nullptr;
    // The IP address of the node.
    std::shared_ptr<string> ip_ = nullptr;
    // The subnet ID.
    std::shared_ptr<string> subnetId_ = nullptr;
    // The ID of the cluster network.
    std::shared_ptr<string> vpdId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
