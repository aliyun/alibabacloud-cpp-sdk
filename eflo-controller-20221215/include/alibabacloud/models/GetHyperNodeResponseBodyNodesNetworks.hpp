// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHYPERNODERESPONSEBODYNODESNETWORKS_HPP_
#define ALIBABACLOUD_MODELS_GETHYPERNODERESPONSEBODYNODESNETWORKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class GetHyperNodeResponseBodyNodesNetworks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHyperNodeResponseBodyNodesNetworks& obj) { 
      DARABONBA_PTR_TO_JSON(BondName, bondName_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
    };
    friend void from_json(const Darabonba::Json& j, GetHyperNodeResponseBodyNodesNetworks& obj) { 
      DARABONBA_PTR_FROM_JSON(BondName, bondName_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
    };
    GetHyperNodeResponseBodyNodesNetworks() = default ;
    GetHyperNodeResponseBodyNodesNetworks(const GetHyperNodeResponseBodyNodesNetworks &) = default ;
    GetHyperNodeResponseBodyNodesNetworks(GetHyperNodeResponseBodyNodesNetworks &&) = default ;
    GetHyperNodeResponseBodyNodesNetworks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHyperNodeResponseBodyNodesNetworks() = default ;
    GetHyperNodeResponseBodyNodesNetworks& operator=(const GetHyperNodeResponseBodyNodesNetworks &) = default ;
    GetHyperNodeResponseBodyNodesNetworks& operator=(GetHyperNodeResponseBodyNodesNetworks &&) = default ;
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
    inline GetHyperNodeResponseBodyNodesNetworks& setBondName(string bondName) { DARABONBA_PTR_SET_VALUE(bondName_, bondName) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline GetHyperNodeResponseBodyNodesNetworks& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


  protected:
    std::shared_ptr<string> bondName_ = nullptr;
    std::shared_ptr<string> ip_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
