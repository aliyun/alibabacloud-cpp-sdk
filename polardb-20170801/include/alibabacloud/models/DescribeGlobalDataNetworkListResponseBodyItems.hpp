// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGLOBALDATANETWORKLISTRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGLOBALDATANETWORKLISTRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeGlobalDataNetworkListResponseBodyItemsNetworks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeGlobalDataNetworkListResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGlobalDataNetworkListResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(Networks, networks_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGlobalDataNetworkListResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Networks, networks_);
    };
    DescribeGlobalDataNetworkListResponseBodyItems() = default ;
    DescribeGlobalDataNetworkListResponseBodyItems(const DescribeGlobalDataNetworkListResponseBodyItems &) = default ;
    DescribeGlobalDataNetworkListResponseBodyItems(DescribeGlobalDataNetworkListResponseBodyItems &&) = default ;
    DescribeGlobalDataNetworkListResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGlobalDataNetworkListResponseBodyItems() = default ;
    DescribeGlobalDataNetworkListResponseBodyItems& operator=(const DescribeGlobalDataNetworkListResponseBodyItems &) = default ;
    DescribeGlobalDataNetworkListResponseBodyItems& operator=(DescribeGlobalDataNetworkListResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->networks_ != nullptr; };
    // networks Field Functions 
    bool hasNetworks() const { return this->networks_ != nullptr;};
    void deleteNetworks() { this->networks_ = nullptr;};
    inline const vector<Models::DescribeGlobalDataNetworkListResponseBodyItemsNetworks> & networks() const { DARABONBA_PTR_GET_CONST(networks_, vector<Models::DescribeGlobalDataNetworkListResponseBodyItemsNetworks>) };
    inline vector<Models::DescribeGlobalDataNetworkListResponseBodyItemsNetworks> networks() { DARABONBA_PTR_GET(networks_, vector<Models::DescribeGlobalDataNetworkListResponseBodyItemsNetworks>) };
    inline DescribeGlobalDataNetworkListResponseBodyItems& setNetworks(const vector<Models::DescribeGlobalDataNetworkListResponseBodyItemsNetworks> & networks) { DARABONBA_PTR_SET_VALUE(networks_, networks) };
    inline DescribeGlobalDataNetworkListResponseBodyItems& setNetworks(vector<Models::DescribeGlobalDataNetworkListResponseBodyItemsNetworks> && networks) { DARABONBA_PTR_SET_RVALUE(networks_, networks) };


  protected:
    std::shared_ptr<vector<Models::DescribeGlobalDataNetworkListResponseBodyItemsNetworks>> networks_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
