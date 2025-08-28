// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEROUTETABLELISTRESPONSEBODYROUTERTABLELISTROUTERTABLELISTTYPEVSWITCHIDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEROUTETABLELISTRESPONSEBODYROUTERTABLELISTROUTERTABLELISTTYPEVSWITCHIDS_HPP_
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
  class DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeVSwitchIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeVSwitchIds& obj) { 
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeVSwitchIds& obj) { 
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
    };
    DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeVSwitchIds() = default ;
    DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeVSwitchIds(const DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeVSwitchIds &) = default ;
    DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeVSwitchIds(DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeVSwitchIds &&) = default ;
    DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeVSwitchIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeVSwitchIds() = default ;
    DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeVSwitchIds& operator=(const DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeVSwitchIds &) = default ;
    DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeVSwitchIds& operator=(DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeVSwitchIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->vSwitchId_ != nullptr; };
    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline const vector<string> & vSwitchId() const { DARABONBA_PTR_GET_CONST(vSwitchId_, vector<string>) };
    inline vector<string> vSwitchId() { DARABONBA_PTR_GET(vSwitchId_, vector<string>) };
    inline DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeVSwitchIds& setVSwitchId(const vector<string> & vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };
    inline DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeVSwitchIds& setVSwitchId(vector<string> && vSwitchId) { DARABONBA_PTR_SET_RVALUE(vSwitchId_, vSwitchId) };


  protected:
    std::shared_ptr<vector<string>> vSwitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
