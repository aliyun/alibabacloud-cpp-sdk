// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKSRESPONSEBODYNETWORKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKSRESPONSEBODYNETWORKS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeNetworksResponseBodyNetworksNetwork.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeNetworksResponseBodyNetworks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworksResponseBodyNetworks& obj) { 
      DARABONBA_PTR_TO_JSON(Network, network_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworksResponseBodyNetworks& obj) { 
      DARABONBA_PTR_FROM_JSON(Network, network_);
    };
    DescribeNetworksResponseBodyNetworks() = default ;
    DescribeNetworksResponseBodyNetworks(const DescribeNetworksResponseBodyNetworks &) = default ;
    DescribeNetworksResponseBodyNetworks(DescribeNetworksResponseBodyNetworks &&) = default ;
    DescribeNetworksResponseBodyNetworks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworksResponseBodyNetworks() = default ;
    DescribeNetworksResponseBodyNetworks& operator=(const DescribeNetworksResponseBodyNetworks &) = default ;
    DescribeNetworksResponseBodyNetworks& operator=(DescribeNetworksResponseBodyNetworks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->network_ != nullptr; };
    // network Field Functions 
    bool hasNetwork() const { return this->network_ != nullptr;};
    void deleteNetwork() { this->network_ = nullptr;};
    inline const vector<Models::DescribeNetworksResponseBodyNetworksNetwork> & network() const { DARABONBA_PTR_GET_CONST(network_, vector<Models::DescribeNetworksResponseBodyNetworksNetwork>) };
    inline vector<Models::DescribeNetworksResponseBodyNetworksNetwork> network() { DARABONBA_PTR_GET(network_, vector<Models::DescribeNetworksResponseBodyNetworksNetwork>) };
    inline DescribeNetworksResponseBodyNetworks& setNetwork(const vector<Models::DescribeNetworksResponseBodyNetworksNetwork> & network) { DARABONBA_PTR_SET_VALUE(network_, network) };
    inline DescribeNetworksResponseBodyNetworks& setNetwork(vector<Models::DescribeNetworksResponseBodyNetworksNetwork> && network) { DARABONBA_PTR_SET_RVALUE(network_, network) };


  protected:
    std::shared_ptr<vector<Models::DescribeNetworksResponseBodyNetworksNetwork>> network_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
