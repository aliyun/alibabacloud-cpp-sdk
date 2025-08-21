// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSWITCHATTRIBUTESRESPONSEBODYNATGATEWAYIDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSWITCHATTRIBUTESRESPONSEBODYNATGATEWAYIDS_HPP_
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
  class DescribeVSwitchAttributesResponseBodyNatGatewayIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVSwitchAttributesResponseBodyNatGatewayIds& obj) { 
      DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVSwitchAttributesResponseBodyNatGatewayIds& obj) { 
      DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
    };
    DescribeVSwitchAttributesResponseBodyNatGatewayIds() = default ;
    DescribeVSwitchAttributesResponseBodyNatGatewayIds(const DescribeVSwitchAttributesResponseBodyNatGatewayIds &) = default ;
    DescribeVSwitchAttributesResponseBodyNatGatewayIds(DescribeVSwitchAttributesResponseBodyNatGatewayIds &&) = default ;
    DescribeVSwitchAttributesResponseBodyNatGatewayIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVSwitchAttributesResponseBodyNatGatewayIds() = default ;
    DescribeVSwitchAttributesResponseBodyNatGatewayIds& operator=(const DescribeVSwitchAttributesResponseBodyNatGatewayIds &) = default ;
    DescribeVSwitchAttributesResponseBodyNatGatewayIds& operator=(DescribeVSwitchAttributesResponseBodyNatGatewayIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->natGatewayId_ != nullptr; };
    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline const vector<string> & natGatewayId() const { DARABONBA_PTR_GET_CONST(natGatewayId_, vector<string>) };
    inline vector<string> natGatewayId() { DARABONBA_PTR_GET(natGatewayId_, vector<string>) };
    inline DescribeVSwitchAttributesResponseBodyNatGatewayIds& setNatGatewayId(const vector<string> & natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };
    inline DescribeVSwitchAttributesResponseBodyNatGatewayIds& setNatGatewayId(vector<string> && natGatewayId) { DARABONBA_PTR_SET_RVALUE(natGatewayId_, natGatewayId) };


  protected:
    std::shared_ptr<vector<string>> natGatewayId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
