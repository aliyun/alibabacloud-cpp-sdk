// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPNGATEWAYSRESPONSEBODYVPNGATEWAYSVPNGATEWAYENIINSTANCEIDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPNGATEWAYSRESPONSEBODYVPNGATEWAYSVPNGATEWAYENIINSTANCEIDS_HPP_
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
  class DescribeVpnGatewaysResponseBodyVpnGatewaysVpnGatewayEniInstanceIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpnGatewaysResponseBodyVpnGatewaysVpnGatewayEniInstanceIds& obj) { 
      DARABONBA_PTR_TO_JSON(EniInstanceId, eniInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpnGatewaysResponseBodyVpnGatewaysVpnGatewayEniInstanceIds& obj) { 
      DARABONBA_PTR_FROM_JSON(EniInstanceId, eniInstanceId_);
    };
    DescribeVpnGatewaysResponseBodyVpnGatewaysVpnGatewayEniInstanceIds() = default ;
    DescribeVpnGatewaysResponseBodyVpnGatewaysVpnGatewayEniInstanceIds(const DescribeVpnGatewaysResponseBodyVpnGatewaysVpnGatewayEniInstanceIds &) = default ;
    DescribeVpnGatewaysResponseBodyVpnGatewaysVpnGatewayEniInstanceIds(DescribeVpnGatewaysResponseBodyVpnGatewaysVpnGatewayEniInstanceIds &&) = default ;
    DescribeVpnGatewaysResponseBodyVpnGatewaysVpnGatewayEniInstanceIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpnGatewaysResponseBodyVpnGatewaysVpnGatewayEniInstanceIds() = default ;
    DescribeVpnGatewaysResponseBodyVpnGatewaysVpnGatewayEniInstanceIds& operator=(const DescribeVpnGatewaysResponseBodyVpnGatewaysVpnGatewayEniInstanceIds &) = default ;
    DescribeVpnGatewaysResponseBodyVpnGatewaysVpnGatewayEniInstanceIds& operator=(DescribeVpnGatewaysResponseBodyVpnGatewaysVpnGatewayEniInstanceIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eniInstanceId_ == nullptr; };
    // eniInstanceId Field Functions 
    bool hasEniInstanceId() const { return this->eniInstanceId_ != nullptr;};
    void deleteEniInstanceId() { this->eniInstanceId_ = nullptr;};
    inline const vector<string> & eniInstanceId() const { DARABONBA_PTR_GET_CONST(eniInstanceId_, vector<string>) };
    inline vector<string> eniInstanceId() { DARABONBA_PTR_GET(eniInstanceId_, vector<string>) };
    inline DescribeVpnGatewaysResponseBodyVpnGatewaysVpnGatewayEniInstanceIds& setEniInstanceId(const vector<string> & eniInstanceId) { DARABONBA_PTR_SET_VALUE(eniInstanceId_, eniInstanceId) };
    inline DescribeVpnGatewaysResponseBodyVpnGatewaysVpnGatewayEniInstanceIds& setEniInstanceId(vector<string> && eniInstanceId) { DARABONBA_PTR_SET_RVALUE(eniInstanceId_, eniInstanceId) };


  protected:
    std::shared_ptr<vector<string>> eniInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
