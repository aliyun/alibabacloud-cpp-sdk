// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCESSPOINTSRESPONSEBODYACCESSPOINTSET_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCESSPOINTSRESPONSEBODYACCESSPOINTSET_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAccessPointsResponseBodyAccessPointSetAccessPointType.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeAccessPointsResponseBodyAccessPointSet : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccessPointsResponseBodyAccessPointSet& obj) { 
      DARABONBA_PTR_TO_JSON(AccessPointType, accessPointType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccessPointsResponseBodyAccessPointSet& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessPointType, accessPointType_);
    };
    DescribeAccessPointsResponseBodyAccessPointSet() = default ;
    DescribeAccessPointsResponseBodyAccessPointSet(const DescribeAccessPointsResponseBodyAccessPointSet &) = default ;
    DescribeAccessPointsResponseBodyAccessPointSet(DescribeAccessPointsResponseBodyAccessPointSet &&) = default ;
    DescribeAccessPointsResponseBodyAccessPointSet(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccessPointsResponseBodyAccessPointSet() = default ;
    DescribeAccessPointsResponseBodyAccessPointSet& operator=(const DescribeAccessPointsResponseBodyAccessPointSet &) = default ;
    DescribeAccessPointsResponseBodyAccessPointSet& operator=(DescribeAccessPointsResponseBodyAccessPointSet &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessPointType_ == nullptr; };
    // accessPointType Field Functions 
    bool hasAccessPointType() const { return this->accessPointType_ != nullptr;};
    void deleteAccessPointType() { this->accessPointType_ = nullptr;};
    inline const vector<Models::DescribeAccessPointsResponseBodyAccessPointSetAccessPointType> & accessPointType() const { DARABONBA_PTR_GET_CONST(accessPointType_, vector<Models::DescribeAccessPointsResponseBodyAccessPointSetAccessPointType>) };
    inline vector<Models::DescribeAccessPointsResponseBodyAccessPointSetAccessPointType> accessPointType() { DARABONBA_PTR_GET(accessPointType_, vector<Models::DescribeAccessPointsResponseBodyAccessPointSetAccessPointType>) };
    inline DescribeAccessPointsResponseBodyAccessPointSet& setAccessPointType(const vector<Models::DescribeAccessPointsResponseBodyAccessPointSetAccessPointType> & accessPointType) { DARABONBA_PTR_SET_VALUE(accessPointType_, accessPointType) };
    inline DescribeAccessPointsResponseBodyAccessPointSet& setAccessPointType(vector<Models::DescribeAccessPointsResponseBodyAccessPointSetAccessPointType> && accessPointType) { DARABONBA_PTR_SET_RVALUE(accessPointType_, accessPointType) };


  protected:
    std::shared_ptr<vector<Models::DescribeAccessPointsResponseBodyAccessPointSetAccessPointType>> accessPointType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
