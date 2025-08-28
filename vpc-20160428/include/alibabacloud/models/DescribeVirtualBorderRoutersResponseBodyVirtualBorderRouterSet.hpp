// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVIRTUALBORDERROUTERSRESPONSEBODYVIRTUALBORDERROUTERSET_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVIRTUALBORDERROUTERSRESPONSEBODYVIRTUALBORDERROUTERSET_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSet : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSet& obj) { 
      DARABONBA_PTR_TO_JSON(VirtualBorderRouterType, virtualBorderRouterType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSet& obj) { 
      DARABONBA_PTR_FROM_JSON(VirtualBorderRouterType, virtualBorderRouterType_);
    };
    DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSet() = default ;
    DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSet(const DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSet &) = default ;
    DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSet(DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSet &&) = default ;
    DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSet(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSet() = default ;
    DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSet& operator=(const DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSet &) = default ;
    DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSet& operator=(DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSet &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->virtualBorderRouterType_ != nullptr; };
    // virtualBorderRouterType Field Functions 
    bool hasVirtualBorderRouterType() const { return this->virtualBorderRouterType_ != nullptr;};
    void deleteVirtualBorderRouterType() { this->virtualBorderRouterType_ = nullptr;};
    inline const vector<Models::DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType> & virtualBorderRouterType() const { DARABONBA_PTR_GET_CONST(virtualBorderRouterType_, vector<Models::DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType>) };
    inline vector<Models::DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType> virtualBorderRouterType() { DARABONBA_PTR_GET(virtualBorderRouterType_, vector<Models::DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType>) };
    inline DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSet& setVirtualBorderRouterType(const vector<Models::DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType> & virtualBorderRouterType) { DARABONBA_PTR_SET_VALUE(virtualBorderRouterType_, virtualBorderRouterType) };
    inline DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSet& setVirtualBorderRouterType(vector<Models::DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType> && virtualBorderRouterType) { DARABONBA_PTR_SET_RVALUE(virtualBorderRouterType_, virtualBorderRouterType) };


  protected:
    std::shared_ptr<vector<Models::DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType>> virtualBorderRouterType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
