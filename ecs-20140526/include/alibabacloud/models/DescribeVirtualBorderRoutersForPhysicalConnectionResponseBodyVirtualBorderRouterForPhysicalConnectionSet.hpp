// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVIRTUALBORDERROUTERSFORPHYSICALCONNECTIONRESPONSEBODYVIRTUALBORDERROUTERFORPHYSICALCONNECTIONSET_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVIRTUALBORDERROUTERSFORPHYSICALCONNECTIONRESPONSEBODYVIRTUALBORDERROUTERFORPHYSICALCONNECTIONSET_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVirtualBorderRoutersForPhysicalConnectionResponseBodyVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeVirtualBorderRoutersForPhysicalConnectionResponseBodyVirtualBorderRouterForPhysicalConnectionSet : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVirtualBorderRoutersForPhysicalConnectionResponseBodyVirtualBorderRouterForPhysicalConnectionSet& obj) { 
      DARABONBA_PTR_TO_JSON(VirtualBorderRouterForPhysicalConnectionType, virtualBorderRouterForPhysicalConnectionType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVirtualBorderRoutersForPhysicalConnectionResponseBodyVirtualBorderRouterForPhysicalConnectionSet& obj) { 
      DARABONBA_PTR_FROM_JSON(VirtualBorderRouterForPhysicalConnectionType, virtualBorderRouterForPhysicalConnectionType_);
    };
    DescribeVirtualBorderRoutersForPhysicalConnectionResponseBodyVirtualBorderRouterForPhysicalConnectionSet() = default ;
    DescribeVirtualBorderRoutersForPhysicalConnectionResponseBodyVirtualBorderRouterForPhysicalConnectionSet(const DescribeVirtualBorderRoutersForPhysicalConnectionResponseBodyVirtualBorderRouterForPhysicalConnectionSet &) = default ;
    DescribeVirtualBorderRoutersForPhysicalConnectionResponseBodyVirtualBorderRouterForPhysicalConnectionSet(DescribeVirtualBorderRoutersForPhysicalConnectionResponseBodyVirtualBorderRouterForPhysicalConnectionSet &&) = default ;
    DescribeVirtualBorderRoutersForPhysicalConnectionResponseBodyVirtualBorderRouterForPhysicalConnectionSet(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVirtualBorderRoutersForPhysicalConnectionResponseBodyVirtualBorderRouterForPhysicalConnectionSet() = default ;
    DescribeVirtualBorderRoutersForPhysicalConnectionResponseBodyVirtualBorderRouterForPhysicalConnectionSet& operator=(const DescribeVirtualBorderRoutersForPhysicalConnectionResponseBodyVirtualBorderRouterForPhysicalConnectionSet &) = default ;
    DescribeVirtualBorderRoutersForPhysicalConnectionResponseBodyVirtualBorderRouterForPhysicalConnectionSet& operator=(DescribeVirtualBorderRoutersForPhysicalConnectionResponseBodyVirtualBorderRouterForPhysicalConnectionSet &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->virtualBorderRouterForPhysicalConnectionType_ == nullptr; };
    // virtualBorderRouterForPhysicalConnectionType Field Functions 
    bool hasVirtualBorderRouterForPhysicalConnectionType() const { return this->virtualBorderRouterForPhysicalConnectionType_ != nullptr;};
    void deleteVirtualBorderRouterForPhysicalConnectionType() { this->virtualBorderRouterForPhysicalConnectionType_ = nullptr;};
    inline const vector<Models::DescribeVirtualBorderRoutersForPhysicalConnectionResponseBodyVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType> & virtualBorderRouterForPhysicalConnectionType() const { DARABONBA_PTR_GET_CONST(virtualBorderRouterForPhysicalConnectionType_, vector<Models::DescribeVirtualBorderRoutersForPhysicalConnectionResponseBodyVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType>) };
    inline vector<Models::DescribeVirtualBorderRoutersForPhysicalConnectionResponseBodyVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType> virtualBorderRouterForPhysicalConnectionType() { DARABONBA_PTR_GET(virtualBorderRouterForPhysicalConnectionType_, vector<Models::DescribeVirtualBorderRoutersForPhysicalConnectionResponseBodyVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType>) };
    inline DescribeVirtualBorderRoutersForPhysicalConnectionResponseBodyVirtualBorderRouterForPhysicalConnectionSet& setVirtualBorderRouterForPhysicalConnectionType(const vector<Models::DescribeVirtualBorderRoutersForPhysicalConnectionResponseBodyVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType> & virtualBorderRouterForPhysicalConnectionType) { DARABONBA_PTR_SET_VALUE(virtualBorderRouterForPhysicalConnectionType_, virtualBorderRouterForPhysicalConnectionType) };
    inline DescribeVirtualBorderRoutersForPhysicalConnectionResponseBodyVirtualBorderRouterForPhysicalConnectionSet& setVirtualBorderRouterForPhysicalConnectionType(vector<Models::DescribeVirtualBorderRoutersForPhysicalConnectionResponseBodyVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType> && virtualBorderRouterForPhysicalConnectionType) { DARABONBA_PTR_SET_RVALUE(virtualBorderRouterForPhysicalConnectionType_, virtualBorderRouterForPhysicalConnectionType) };


  protected:
    std::shared_ptr<vector<Models::DescribeVirtualBorderRoutersForPhysicalConnectionResponseBodyVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType>> virtualBorderRouterForPhysicalConnectionType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
