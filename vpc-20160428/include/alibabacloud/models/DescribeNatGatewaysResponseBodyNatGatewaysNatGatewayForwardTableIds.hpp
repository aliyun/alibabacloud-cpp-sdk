// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENATGATEWAYSRESPONSEBODYNATGATEWAYSNATGATEWAYFORWARDTABLEIDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENATGATEWAYSRESPONSEBODYNATGATEWAYSNATGATEWAYFORWARDTABLEIDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayForwardTableIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayForwardTableIds& obj) { 
      DARABONBA_PTR_TO_JSON(ForwardTableId, forwardTableId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayForwardTableIds& obj) { 
      DARABONBA_PTR_FROM_JSON(ForwardTableId, forwardTableId_);
    };
    DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayForwardTableIds() = default ;
    DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayForwardTableIds(const DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayForwardTableIds &) = default ;
    DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayForwardTableIds(DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayForwardTableIds &&) = default ;
    DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayForwardTableIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayForwardTableIds() = default ;
    DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayForwardTableIds& operator=(const DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayForwardTableIds &) = default ;
    DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayForwardTableIds& operator=(DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayForwardTableIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->forwardTableId_ == nullptr; };
    // forwardTableId Field Functions 
    bool hasForwardTableId() const { return this->forwardTableId_ != nullptr;};
    void deleteForwardTableId() { this->forwardTableId_ = nullptr;};
    inline const vector<string> & forwardTableId() const { DARABONBA_PTR_GET_CONST(forwardTableId_, vector<string>) };
    inline vector<string> forwardTableId() { DARABONBA_PTR_GET(forwardTableId_, vector<string>) };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayForwardTableIds& setForwardTableId(const vector<string> & forwardTableId) { DARABONBA_PTR_SET_VALUE(forwardTableId_, forwardTableId) };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayForwardTableIds& setForwardTableId(vector<string> && forwardTableId) { DARABONBA_PTR_SET_RVALUE(forwardTableId_, forwardTableId) };


  protected:
    std::shared_ptr<vector<string>> forwardTableId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
