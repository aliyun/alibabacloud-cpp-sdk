// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEROUTETABLESRESPONSEBODYROUTETABLESROUTETABLEVSWITCHIDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEROUTETABLESRESPONSEBODYROUTETABLESROUTETABLEVSWITCHIDS_HPP_
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
  class DescribeRouteTablesResponseBodyRouteTablesRouteTableVSwitchIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRouteTablesResponseBodyRouteTablesRouteTableVSwitchIds& obj) { 
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRouteTablesResponseBodyRouteTablesRouteTableVSwitchIds& obj) { 
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
    };
    DescribeRouteTablesResponseBodyRouteTablesRouteTableVSwitchIds() = default ;
    DescribeRouteTablesResponseBodyRouteTablesRouteTableVSwitchIds(const DescribeRouteTablesResponseBodyRouteTablesRouteTableVSwitchIds &) = default ;
    DescribeRouteTablesResponseBodyRouteTablesRouteTableVSwitchIds(DescribeRouteTablesResponseBodyRouteTablesRouteTableVSwitchIds &&) = default ;
    DescribeRouteTablesResponseBodyRouteTablesRouteTableVSwitchIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRouteTablesResponseBodyRouteTablesRouteTableVSwitchIds() = default ;
    DescribeRouteTablesResponseBodyRouteTablesRouteTableVSwitchIds& operator=(const DescribeRouteTablesResponseBodyRouteTablesRouteTableVSwitchIds &) = default ;
    DescribeRouteTablesResponseBodyRouteTablesRouteTableVSwitchIds& operator=(DescribeRouteTablesResponseBodyRouteTablesRouteTableVSwitchIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->vSwitchId_ == nullptr; };
    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline const vector<string> & vSwitchId() const { DARABONBA_PTR_GET_CONST(vSwitchId_, vector<string>) };
    inline vector<string> vSwitchId() { DARABONBA_PTR_GET(vSwitchId_, vector<string>) };
    inline DescribeRouteTablesResponseBodyRouteTablesRouteTableVSwitchIds& setVSwitchId(const vector<string> & vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };
    inline DescribeRouteTablesResponseBodyRouteTablesRouteTableVSwitchIds& setVSwitchId(vector<string> && vSwitchId) { DARABONBA_PTR_SET_RVALUE(vSwitchId_, vSwitchId) };


  protected:
    std::shared_ptr<vector<string>> vSwitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
