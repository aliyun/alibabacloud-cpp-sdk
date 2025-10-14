// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUNHEALTHYHOSTAVAILABILITYRESPONSEBODYUNHEALTHYLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUNHEALTHYHOSTAVAILABILITYRESPONSEBODYUNHEALTHYLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeUnhealthyHostAvailabilityResponseBodyUnhealthyListNodeTaskInstance.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeUnhealthyHostAvailabilityResponseBodyUnhealthyList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUnhealthyHostAvailabilityResponseBodyUnhealthyList& obj) { 
      DARABONBA_PTR_TO_JSON(NodeTaskInstance, nodeTaskInstance_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUnhealthyHostAvailabilityResponseBodyUnhealthyList& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeTaskInstance, nodeTaskInstance_);
    };
    DescribeUnhealthyHostAvailabilityResponseBodyUnhealthyList() = default ;
    DescribeUnhealthyHostAvailabilityResponseBodyUnhealthyList(const DescribeUnhealthyHostAvailabilityResponseBodyUnhealthyList &) = default ;
    DescribeUnhealthyHostAvailabilityResponseBodyUnhealthyList(DescribeUnhealthyHostAvailabilityResponseBodyUnhealthyList &&) = default ;
    DescribeUnhealthyHostAvailabilityResponseBodyUnhealthyList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUnhealthyHostAvailabilityResponseBodyUnhealthyList() = default ;
    DescribeUnhealthyHostAvailabilityResponseBodyUnhealthyList& operator=(const DescribeUnhealthyHostAvailabilityResponseBodyUnhealthyList &) = default ;
    DescribeUnhealthyHostAvailabilityResponseBodyUnhealthyList& operator=(DescribeUnhealthyHostAvailabilityResponseBodyUnhealthyList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nodeTaskInstance_ == nullptr; };
    // nodeTaskInstance Field Functions 
    bool hasNodeTaskInstance() const { return this->nodeTaskInstance_ != nullptr;};
    void deleteNodeTaskInstance() { this->nodeTaskInstance_ = nullptr;};
    inline const vector<Models::DescribeUnhealthyHostAvailabilityResponseBodyUnhealthyListNodeTaskInstance> & nodeTaskInstance() const { DARABONBA_PTR_GET_CONST(nodeTaskInstance_, vector<Models::DescribeUnhealthyHostAvailabilityResponseBodyUnhealthyListNodeTaskInstance>) };
    inline vector<Models::DescribeUnhealthyHostAvailabilityResponseBodyUnhealthyListNodeTaskInstance> nodeTaskInstance() { DARABONBA_PTR_GET(nodeTaskInstance_, vector<Models::DescribeUnhealthyHostAvailabilityResponseBodyUnhealthyListNodeTaskInstance>) };
    inline DescribeUnhealthyHostAvailabilityResponseBodyUnhealthyList& setNodeTaskInstance(const vector<Models::DescribeUnhealthyHostAvailabilityResponseBodyUnhealthyListNodeTaskInstance> & nodeTaskInstance) { DARABONBA_PTR_SET_VALUE(nodeTaskInstance_, nodeTaskInstance) };
    inline DescribeUnhealthyHostAvailabilityResponseBodyUnhealthyList& setNodeTaskInstance(vector<Models::DescribeUnhealthyHostAvailabilityResponseBodyUnhealthyListNodeTaskInstance> && nodeTaskInstance) { DARABONBA_PTR_SET_RVALUE(nodeTaskInstance_, nodeTaskInstance) };


  protected:
    std::shared_ptr<vector<Models::DescribeUnhealthyHostAvailabilityResponseBodyUnhealthyListNodeTaskInstance>> nodeTaskInstance_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
