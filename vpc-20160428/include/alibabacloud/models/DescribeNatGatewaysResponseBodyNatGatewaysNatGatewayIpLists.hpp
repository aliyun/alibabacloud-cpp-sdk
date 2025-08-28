// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENATGATEWAYSRESPONSEBODYNATGATEWAYSNATGATEWAYIPLISTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENATGATEWAYSRESPONSEBODYNATGATEWAYSNATGATEWAYIPLISTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpListsIpList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpLists : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpLists& obj) { 
      DARABONBA_PTR_TO_JSON(IpList, ipList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpLists& obj) { 
      DARABONBA_PTR_FROM_JSON(IpList, ipList_);
    };
    DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpLists() = default ;
    DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpLists(const DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpLists &) = default ;
    DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpLists(DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpLists &&) = default ;
    DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpLists(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpLists() = default ;
    DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpLists& operator=(const DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpLists &) = default ;
    DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpLists& operator=(DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpLists &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ipList_ != nullptr; };
    // ipList Field Functions 
    bool hasIpList() const { return this->ipList_ != nullptr;};
    void deleteIpList() { this->ipList_ = nullptr;};
    inline const vector<Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpListsIpList> & ipList() const { DARABONBA_PTR_GET_CONST(ipList_, vector<Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpListsIpList>) };
    inline vector<Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpListsIpList> ipList() { DARABONBA_PTR_GET(ipList_, vector<Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpListsIpList>) };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpLists& setIpList(const vector<Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpListsIpList> & ipList) { DARABONBA_PTR_SET_VALUE(ipList_, ipList) };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpLists& setIpList(vector<Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpListsIpList> && ipList) { DARABONBA_PTR_SET_RVALUE(ipList_, ipList) };


  protected:
    std::shared_ptr<vector<Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpListsIpList>> ipList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
