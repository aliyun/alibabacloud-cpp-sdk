// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENATGATEWAYASSOCIATENETWORKINTERFACESRESPONSEBODYASSOCIATENETWORKINTERFACES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENATGATEWAYASSOCIATENETWORKINTERFACESRESPONSEBODYASSOCIATENETWORKINTERFACES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeNatGatewayAssociateNetworkInterfacesResponseBodyAssociateNetworkInterfacesAssociateNetworkInterface.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeNatGatewayAssociateNetworkInterfacesResponseBodyAssociateNetworkInterfaces : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNatGatewayAssociateNetworkInterfacesResponseBodyAssociateNetworkInterfaces& obj) { 
      DARABONBA_PTR_TO_JSON(AssociateNetworkInterface, associateNetworkInterface_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNatGatewayAssociateNetworkInterfacesResponseBodyAssociateNetworkInterfaces& obj) { 
      DARABONBA_PTR_FROM_JSON(AssociateNetworkInterface, associateNetworkInterface_);
    };
    DescribeNatGatewayAssociateNetworkInterfacesResponseBodyAssociateNetworkInterfaces() = default ;
    DescribeNatGatewayAssociateNetworkInterfacesResponseBodyAssociateNetworkInterfaces(const DescribeNatGatewayAssociateNetworkInterfacesResponseBodyAssociateNetworkInterfaces &) = default ;
    DescribeNatGatewayAssociateNetworkInterfacesResponseBodyAssociateNetworkInterfaces(DescribeNatGatewayAssociateNetworkInterfacesResponseBodyAssociateNetworkInterfaces &&) = default ;
    DescribeNatGatewayAssociateNetworkInterfacesResponseBodyAssociateNetworkInterfaces(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNatGatewayAssociateNetworkInterfacesResponseBodyAssociateNetworkInterfaces() = default ;
    DescribeNatGatewayAssociateNetworkInterfacesResponseBodyAssociateNetworkInterfaces& operator=(const DescribeNatGatewayAssociateNetworkInterfacesResponseBodyAssociateNetworkInterfaces &) = default ;
    DescribeNatGatewayAssociateNetworkInterfacesResponseBodyAssociateNetworkInterfaces& operator=(DescribeNatGatewayAssociateNetworkInterfacesResponseBodyAssociateNetworkInterfaces &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->associateNetworkInterface_ == nullptr; };
    // associateNetworkInterface Field Functions 
    bool hasAssociateNetworkInterface() const { return this->associateNetworkInterface_ != nullptr;};
    void deleteAssociateNetworkInterface() { this->associateNetworkInterface_ = nullptr;};
    inline const vector<Models::DescribeNatGatewayAssociateNetworkInterfacesResponseBodyAssociateNetworkInterfacesAssociateNetworkInterface> & associateNetworkInterface() const { DARABONBA_PTR_GET_CONST(associateNetworkInterface_, vector<Models::DescribeNatGatewayAssociateNetworkInterfacesResponseBodyAssociateNetworkInterfacesAssociateNetworkInterface>) };
    inline vector<Models::DescribeNatGatewayAssociateNetworkInterfacesResponseBodyAssociateNetworkInterfacesAssociateNetworkInterface> associateNetworkInterface() { DARABONBA_PTR_GET(associateNetworkInterface_, vector<Models::DescribeNatGatewayAssociateNetworkInterfacesResponseBodyAssociateNetworkInterfacesAssociateNetworkInterface>) };
    inline DescribeNatGatewayAssociateNetworkInterfacesResponseBodyAssociateNetworkInterfaces& setAssociateNetworkInterface(const vector<Models::DescribeNatGatewayAssociateNetworkInterfacesResponseBodyAssociateNetworkInterfacesAssociateNetworkInterface> & associateNetworkInterface) { DARABONBA_PTR_SET_VALUE(associateNetworkInterface_, associateNetworkInterface) };
    inline DescribeNatGatewayAssociateNetworkInterfacesResponseBodyAssociateNetworkInterfaces& setAssociateNetworkInterface(vector<Models::DescribeNatGatewayAssociateNetworkInterfacesResponseBodyAssociateNetworkInterfacesAssociateNetworkInterface> && associateNetworkInterface) { DARABONBA_PTR_SET_RVALUE(associateNetworkInterface_, associateNetworkInterface) };


  protected:
    std::shared_ptr<vector<Models::DescribeNatGatewayAssociateNetworkInterfacesResponseBodyAssociateNetworkInterfacesAssociateNetworkInterface>> associateNetworkInterface_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
