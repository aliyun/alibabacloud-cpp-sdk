// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYPERNODERESPONSEBODYNODESNETWORKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYPERNODERESPONSEBODYNODESNETWORKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class DescribeHyperNodeResponseBodyNodesNetworks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHyperNodeResponseBodyNodesNetworks& obj) { 
      DARABONBA_PTR_TO_JSON(BondName, bondName_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHyperNodeResponseBodyNodesNetworks& obj) { 
      DARABONBA_PTR_FROM_JSON(BondName, bondName_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
    };
    DescribeHyperNodeResponseBodyNodesNetworks() = default ;
    DescribeHyperNodeResponseBodyNodesNetworks(const DescribeHyperNodeResponseBodyNodesNetworks &) = default ;
    DescribeHyperNodeResponseBodyNodesNetworks(DescribeHyperNodeResponseBodyNodesNetworks &&) = default ;
    DescribeHyperNodeResponseBodyNodesNetworks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHyperNodeResponseBodyNodesNetworks() = default ;
    DescribeHyperNodeResponseBodyNodesNetworks& operator=(const DescribeHyperNodeResponseBodyNodesNetworks &) = default ;
    DescribeHyperNodeResponseBodyNodesNetworks& operator=(DescribeHyperNodeResponseBodyNodesNetworks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bondName_ == nullptr
        && return this->ip_ == nullptr; };
    // bondName Field Functions 
    bool hasBondName() const { return this->bondName_ != nullptr;};
    void deleteBondName() { this->bondName_ = nullptr;};
    inline string bondName() const { DARABONBA_PTR_GET_DEFAULT(bondName_, "") };
    inline DescribeHyperNodeResponseBodyNodesNetworks& setBondName(string bondName) { DARABONBA_PTR_SET_VALUE(bondName_, bondName) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline DescribeHyperNodeResponseBodyNodesNetworks& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


  protected:
    std::shared_ptr<string> bondName_ = nullptr;
    std::shared_ptr<string> ip_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
