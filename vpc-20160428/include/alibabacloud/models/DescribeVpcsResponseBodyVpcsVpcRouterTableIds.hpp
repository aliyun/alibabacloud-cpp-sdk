// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCSRESPONSEBODYVPCSVPCROUTERTABLEIDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCSRESPONSEBODYVPCSVPCROUTERTABLEIDS_HPP_
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
  class DescribeVpcsResponseBodyVpcsVpcRouterTableIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcsResponseBodyVpcsVpcRouterTableIds& obj) { 
      DARABONBA_PTR_TO_JSON(RouterTableIds, routerTableIds_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcsResponseBodyVpcsVpcRouterTableIds& obj) { 
      DARABONBA_PTR_FROM_JSON(RouterTableIds, routerTableIds_);
    };
    DescribeVpcsResponseBodyVpcsVpcRouterTableIds() = default ;
    DescribeVpcsResponseBodyVpcsVpcRouterTableIds(const DescribeVpcsResponseBodyVpcsVpcRouterTableIds &) = default ;
    DescribeVpcsResponseBodyVpcsVpcRouterTableIds(DescribeVpcsResponseBodyVpcsVpcRouterTableIds &&) = default ;
    DescribeVpcsResponseBodyVpcsVpcRouterTableIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcsResponseBodyVpcsVpcRouterTableIds() = default ;
    DescribeVpcsResponseBodyVpcsVpcRouterTableIds& operator=(const DescribeVpcsResponseBodyVpcsVpcRouterTableIds &) = default ;
    DescribeVpcsResponseBodyVpcsVpcRouterTableIds& operator=(DescribeVpcsResponseBodyVpcsVpcRouterTableIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->routerTableIds_ != nullptr; };
    // routerTableIds Field Functions 
    bool hasRouterTableIds() const { return this->routerTableIds_ != nullptr;};
    void deleteRouterTableIds() { this->routerTableIds_ = nullptr;};
    inline const vector<string> & routerTableIds() const { DARABONBA_PTR_GET_CONST(routerTableIds_, vector<string>) };
    inline vector<string> routerTableIds() { DARABONBA_PTR_GET(routerTableIds_, vector<string>) };
    inline DescribeVpcsResponseBodyVpcsVpcRouterTableIds& setRouterTableIds(const vector<string> & routerTableIds) { DARABONBA_PTR_SET_VALUE(routerTableIds_, routerTableIds) };
    inline DescribeVpcsResponseBodyVpcsVpcRouterTableIds& setRouterTableIds(vector<string> && routerTableIds) { DARABONBA_PTR_SET_RVALUE(routerTableIds_, routerTableIds) };


  protected:
    std::shared_ptr<vector<string>> routerTableIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
