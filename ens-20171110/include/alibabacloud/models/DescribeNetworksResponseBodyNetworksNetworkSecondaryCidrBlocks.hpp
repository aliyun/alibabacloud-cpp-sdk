// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKSRESPONSEBODYNETWORKSNETWORKSECONDARYCIDRBLOCKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKSRESPONSEBODYNETWORKSNETWORKSECONDARYCIDRBLOCKS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeNetworksResponseBodyNetworksNetworkSecondaryCidrBlocks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworksResponseBodyNetworksNetworkSecondaryCidrBlocks& obj) { 
      DARABONBA_PTR_TO_JSON(SecondaryCidrBlock, secondaryCidrBlock_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworksResponseBodyNetworksNetworkSecondaryCidrBlocks& obj) { 
      DARABONBA_PTR_FROM_JSON(SecondaryCidrBlock, secondaryCidrBlock_);
    };
    DescribeNetworksResponseBodyNetworksNetworkSecondaryCidrBlocks() = default ;
    DescribeNetworksResponseBodyNetworksNetworkSecondaryCidrBlocks(const DescribeNetworksResponseBodyNetworksNetworkSecondaryCidrBlocks &) = default ;
    DescribeNetworksResponseBodyNetworksNetworkSecondaryCidrBlocks(DescribeNetworksResponseBodyNetworksNetworkSecondaryCidrBlocks &&) = default ;
    DescribeNetworksResponseBodyNetworksNetworkSecondaryCidrBlocks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworksResponseBodyNetworksNetworkSecondaryCidrBlocks() = default ;
    DescribeNetworksResponseBodyNetworksNetworkSecondaryCidrBlocks& operator=(const DescribeNetworksResponseBodyNetworksNetworkSecondaryCidrBlocks &) = default ;
    DescribeNetworksResponseBodyNetworksNetworkSecondaryCidrBlocks& operator=(DescribeNetworksResponseBodyNetworksNetworkSecondaryCidrBlocks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->secondaryCidrBlock_ != nullptr; };
    // secondaryCidrBlock Field Functions 
    bool hasSecondaryCidrBlock() const { return this->secondaryCidrBlock_ != nullptr;};
    void deleteSecondaryCidrBlock() { this->secondaryCidrBlock_ = nullptr;};
    inline const vector<string> & secondaryCidrBlock() const { DARABONBA_PTR_GET_CONST(secondaryCidrBlock_, vector<string>) };
    inline vector<string> secondaryCidrBlock() { DARABONBA_PTR_GET(secondaryCidrBlock_, vector<string>) };
    inline DescribeNetworksResponseBodyNetworksNetworkSecondaryCidrBlocks& setSecondaryCidrBlock(const vector<string> & secondaryCidrBlock) { DARABONBA_PTR_SET_VALUE(secondaryCidrBlock_, secondaryCidrBlock) };
    inline DescribeNetworksResponseBodyNetworksNetworkSecondaryCidrBlocks& setSecondaryCidrBlock(vector<string> && secondaryCidrBlock) { DARABONBA_PTR_SET_RVALUE(secondaryCidrBlock_, secondaryCidrBlock) };


  protected:
    std::shared_ptr<vector<string>> secondaryCidrBlock_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
