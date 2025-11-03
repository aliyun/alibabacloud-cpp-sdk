// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENATGATEWAYSRESPONSEBODYNATGATEWAYSNATGATEWAYFULLNATTABLEIDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENATGATEWAYSRESPONSEBODYNATGATEWAYSNATGATEWAYFULLNATTABLEIDS_HPP_
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
  class DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayFullNatTableIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayFullNatTableIds& obj) { 
      DARABONBA_PTR_TO_JSON(FullNatTableId, fullNatTableId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayFullNatTableIds& obj) { 
      DARABONBA_PTR_FROM_JSON(FullNatTableId, fullNatTableId_);
    };
    DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayFullNatTableIds() = default ;
    DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayFullNatTableIds(const DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayFullNatTableIds &) = default ;
    DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayFullNatTableIds(DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayFullNatTableIds &&) = default ;
    DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayFullNatTableIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayFullNatTableIds() = default ;
    DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayFullNatTableIds& operator=(const DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayFullNatTableIds &) = default ;
    DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayFullNatTableIds& operator=(DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayFullNatTableIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fullNatTableId_ == nullptr; };
    // fullNatTableId Field Functions 
    bool hasFullNatTableId() const { return this->fullNatTableId_ != nullptr;};
    void deleteFullNatTableId() { this->fullNatTableId_ = nullptr;};
    inline const vector<string> & fullNatTableId() const { DARABONBA_PTR_GET_CONST(fullNatTableId_, vector<string>) };
    inline vector<string> fullNatTableId() { DARABONBA_PTR_GET(fullNatTableId_, vector<string>) };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayFullNatTableIds& setFullNatTableId(const vector<string> & fullNatTableId) { DARABONBA_PTR_SET_VALUE(fullNatTableId_, fullNatTableId) };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayFullNatTableIds& setFullNatTableId(vector<string> && fullNatTableId) { DARABONBA_PTR_SET_RVALUE(fullNatTableId_, fullNatTableId) };


  protected:
    std::shared_ptr<vector<string>> fullNatTableId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
