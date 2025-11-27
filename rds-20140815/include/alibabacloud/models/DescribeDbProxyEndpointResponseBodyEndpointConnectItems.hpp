// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBPROXYENDPOINTRESPONSEBODYENDPOINTCONNECTITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBPROXYENDPOINTRESPONSEBODYENDPOINTCONNECTITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBProxyEndpointResponseBodyEndpointConnectItemsEndpointConnectItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBProxyEndpointResponseBodyEndpointConnectItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBProxyEndpointResponseBodyEndpointConnectItems& obj) { 
      DARABONBA_PTR_TO_JSON(EndpointConnectItems, endpointConnectItems_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBProxyEndpointResponseBodyEndpointConnectItems& obj) { 
      DARABONBA_PTR_FROM_JSON(EndpointConnectItems, endpointConnectItems_);
    };
    DescribeDBProxyEndpointResponseBodyEndpointConnectItems() = default ;
    DescribeDBProxyEndpointResponseBodyEndpointConnectItems(const DescribeDBProxyEndpointResponseBodyEndpointConnectItems &) = default ;
    DescribeDBProxyEndpointResponseBodyEndpointConnectItems(DescribeDBProxyEndpointResponseBodyEndpointConnectItems &&) = default ;
    DescribeDBProxyEndpointResponseBodyEndpointConnectItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBProxyEndpointResponseBodyEndpointConnectItems() = default ;
    DescribeDBProxyEndpointResponseBodyEndpointConnectItems& operator=(const DescribeDBProxyEndpointResponseBodyEndpointConnectItems &) = default ;
    DescribeDBProxyEndpointResponseBodyEndpointConnectItems& operator=(DescribeDBProxyEndpointResponseBodyEndpointConnectItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endpointConnectItems_ == nullptr; };
    // endpointConnectItems Field Functions 
    bool hasEndpointConnectItems() const { return this->endpointConnectItems_ != nullptr;};
    void deleteEndpointConnectItems() { this->endpointConnectItems_ = nullptr;};
    inline const vector<Models::DescribeDBProxyEndpointResponseBodyEndpointConnectItemsEndpointConnectItems> & endpointConnectItems() const { DARABONBA_PTR_GET_CONST(endpointConnectItems_, vector<Models::DescribeDBProxyEndpointResponseBodyEndpointConnectItemsEndpointConnectItems>) };
    inline vector<Models::DescribeDBProxyEndpointResponseBodyEndpointConnectItemsEndpointConnectItems> endpointConnectItems() { DARABONBA_PTR_GET(endpointConnectItems_, vector<Models::DescribeDBProxyEndpointResponseBodyEndpointConnectItemsEndpointConnectItems>) };
    inline DescribeDBProxyEndpointResponseBodyEndpointConnectItems& setEndpointConnectItems(const vector<Models::DescribeDBProxyEndpointResponseBodyEndpointConnectItemsEndpointConnectItems> & endpointConnectItems) { DARABONBA_PTR_SET_VALUE(endpointConnectItems_, endpointConnectItems) };
    inline DescribeDBProxyEndpointResponseBodyEndpointConnectItems& setEndpointConnectItems(vector<Models::DescribeDBProxyEndpointResponseBodyEndpointConnectItemsEndpointConnectItems> && endpointConnectItems) { DARABONBA_PTR_SET_RVALUE(endpointConnectItems_, endpointConnectItems) };


  protected:
    std::shared_ptr<vector<Models::DescribeDBProxyEndpointResponseBodyEndpointConnectItemsEndpointConnectItems>> endpointConnectItems_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
