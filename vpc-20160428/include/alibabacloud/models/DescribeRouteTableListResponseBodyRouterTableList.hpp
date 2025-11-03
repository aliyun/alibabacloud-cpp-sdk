// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEROUTETABLELISTRESPONSEBODYROUTERTABLELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEROUTETABLELISTRESPONSEBODYROUTERTABLELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRouteTableListResponseBodyRouterTableListRouterTableListType.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeRouteTableListResponseBodyRouterTableList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRouteTableListResponseBodyRouterTableList& obj) { 
      DARABONBA_PTR_TO_JSON(RouterTableListType, routerTableListType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRouteTableListResponseBodyRouterTableList& obj) { 
      DARABONBA_PTR_FROM_JSON(RouterTableListType, routerTableListType_);
    };
    DescribeRouteTableListResponseBodyRouterTableList() = default ;
    DescribeRouteTableListResponseBodyRouterTableList(const DescribeRouteTableListResponseBodyRouterTableList &) = default ;
    DescribeRouteTableListResponseBodyRouterTableList(DescribeRouteTableListResponseBodyRouterTableList &&) = default ;
    DescribeRouteTableListResponseBodyRouterTableList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRouteTableListResponseBodyRouterTableList() = default ;
    DescribeRouteTableListResponseBodyRouterTableList& operator=(const DescribeRouteTableListResponseBodyRouterTableList &) = default ;
    DescribeRouteTableListResponseBodyRouterTableList& operator=(DescribeRouteTableListResponseBodyRouterTableList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->routerTableListType_ == nullptr; };
    // routerTableListType Field Functions 
    bool hasRouterTableListType() const { return this->routerTableListType_ != nullptr;};
    void deleteRouterTableListType() { this->routerTableListType_ = nullptr;};
    inline const vector<Models::DescribeRouteTableListResponseBodyRouterTableListRouterTableListType> & routerTableListType() const { DARABONBA_PTR_GET_CONST(routerTableListType_, vector<Models::DescribeRouteTableListResponseBodyRouterTableListRouterTableListType>) };
    inline vector<Models::DescribeRouteTableListResponseBodyRouterTableListRouterTableListType> routerTableListType() { DARABONBA_PTR_GET(routerTableListType_, vector<Models::DescribeRouteTableListResponseBodyRouterTableListRouterTableListType>) };
    inline DescribeRouteTableListResponseBodyRouterTableList& setRouterTableListType(const vector<Models::DescribeRouteTableListResponseBodyRouterTableListRouterTableListType> & routerTableListType) { DARABONBA_PTR_SET_VALUE(routerTableListType_, routerTableListType) };
    inline DescribeRouteTableListResponseBodyRouterTableList& setRouterTableListType(vector<Models::DescribeRouteTableListResponseBodyRouterTableListRouterTableListType> && routerTableListType) { DARABONBA_PTR_SET_RVALUE(routerTableListType_, routerTableListType) };


  protected:
    std::shared_ptr<vector<Models::DescribeRouteTableListResponseBodyRouterTableListRouterTableListType>> routerTableListType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
