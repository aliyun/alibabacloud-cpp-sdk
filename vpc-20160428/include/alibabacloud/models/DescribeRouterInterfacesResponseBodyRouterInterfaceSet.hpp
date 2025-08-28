// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEROUTERINTERFACESRESPONSEBODYROUTERINTERFACESET_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEROUTERINTERFACESRESPONSEBODYROUTERINTERFACESET_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceType.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeRouterInterfacesResponseBodyRouterInterfaceSet : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRouterInterfacesResponseBodyRouterInterfaceSet& obj) { 
      DARABONBA_PTR_TO_JSON(RouterInterfaceType, routerInterfaceType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRouterInterfacesResponseBodyRouterInterfaceSet& obj) { 
      DARABONBA_PTR_FROM_JSON(RouterInterfaceType, routerInterfaceType_);
    };
    DescribeRouterInterfacesResponseBodyRouterInterfaceSet() = default ;
    DescribeRouterInterfacesResponseBodyRouterInterfaceSet(const DescribeRouterInterfacesResponseBodyRouterInterfaceSet &) = default ;
    DescribeRouterInterfacesResponseBodyRouterInterfaceSet(DescribeRouterInterfacesResponseBodyRouterInterfaceSet &&) = default ;
    DescribeRouterInterfacesResponseBodyRouterInterfaceSet(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRouterInterfacesResponseBodyRouterInterfaceSet() = default ;
    DescribeRouterInterfacesResponseBodyRouterInterfaceSet& operator=(const DescribeRouterInterfacesResponseBodyRouterInterfaceSet &) = default ;
    DescribeRouterInterfacesResponseBodyRouterInterfaceSet& operator=(DescribeRouterInterfacesResponseBodyRouterInterfaceSet &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->routerInterfaceType_ != nullptr; };
    // routerInterfaceType Field Functions 
    bool hasRouterInterfaceType() const { return this->routerInterfaceType_ != nullptr;};
    void deleteRouterInterfaceType() { this->routerInterfaceType_ = nullptr;};
    inline const vector<Models::DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceType> & routerInterfaceType() const { DARABONBA_PTR_GET_CONST(routerInterfaceType_, vector<Models::DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceType>) };
    inline vector<Models::DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceType> routerInterfaceType() { DARABONBA_PTR_GET(routerInterfaceType_, vector<Models::DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceType>) };
    inline DescribeRouterInterfacesResponseBodyRouterInterfaceSet& setRouterInterfaceType(const vector<Models::DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceType> & routerInterfaceType) { DARABONBA_PTR_SET_VALUE(routerInterfaceType_, routerInterfaceType) };
    inline DescribeRouterInterfacesResponseBodyRouterInterfaceSet& setRouterInterfaceType(vector<Models::DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceType> && routerInterfaceType) { DARABONBA_PTR_SET_RVALUE(routerInterfaceType_, routerInterfaceType) };


  protected:
    std::shared_ptr<vector<Models::DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceType>> routerInterfaceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
