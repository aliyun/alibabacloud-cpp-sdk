// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUNHEALTHYHOSTAVAILABILITYRESPONSEBODYUNHEALTHYLISTNODETASKINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUNHEALTHYHOSTAVAILABILITYRESPONSEBODYUNHEALTHYLISTNODETASKINSTANCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeUnhealthyHostAvailabilityResponseBodyUnhealthyListNodeTaskInstanceInstanceList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeUnhealthyHostAvailabilityResponseBodyUnhealthyListNodeTaskInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUnhealthyHostAvailabilityResponseBodyUnhealthyListNodeTaskInstance& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InstanceList, instanceList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUnhealthyHostAvailabilityResponseBodyUnhealthyListNodeTaskInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InstanceList, instanceList_);
    };
    DescribeUnhealthyHostAvailabilityResponseBodyUnhealthyListNodeTaskInstance() = default ;
    DescribeUnhealthyHostAvailabilityResponseBodyUnhealthyListNodeTaskInstance(const DescribeUnhealthyHostAvailabilityResponseBodyUnhealthyListNodeTaskInstance &) = default ;
    DescribeUnhealthyHostAvailabilityResponseBodyUnhealthyListNodeTaskInstance(DescribeUnhealthyHostAvailabilityResponseBodyUnhealthyListNodeTaskInstance &&) = default ;
    DescribeUnhealthyHostAvailabilityResponseBodyUnhealthyListNodeTaskInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUnhealthyHostAvailabilityResponseBodyUnhealthyListNodeTaskInstance() = default ;
    DescribeUnhealthyHostAvailabilityResponseBodyUnhealthyListNodeTaskInstance& operator=(const DescribeUnhealthyHostAvailabilityResponseBodyUnhealthyListNodeTaskInstance &) = default ;
    DescribeUnhealthyHostAvailabilityResponseBodyUnhealthyListNodeTaskInstance& operator=(DescribeUnhealthyHostAvailabilityResponseBodyUnhealthyListNodeTaskInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->instanceList_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeUnhealthyHostAvailabilityResponseBodyUnhealthyListNodeTaskInstance& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceList Field Functions 
    bool hasInstanceList() const { return this->instanceList_ != nullptr;};
    void deleteInstanceList() { this->instanceList_ = nullptr;};
    inline const Models::DescribeUnhealthyHostAvailabilityResponseBodyUnhealthyListNodeTaskInstanceInstanceList & instanceList() const { DARABONBA_PTR_GET_CONST(instanceList_, Models::DescribeUnhealthyHostAvailabilityResponseBodyUnhealthyListNodeTaskInstanceInstanceList) };
    inline Models::DescribeUnhealthyHostAvailabilityResponseBodyUnhealthyListNodeTaskInstanceInstanceList instanceList() { DARABONBA_PTR_GET(instanceList_, Models::DescribeUnhealthyHostAvailabilityResponseBodyUnhealthyListNodeTaskInstanceInstanceList) };
    inline DescribeUnhealthyHostAvailabilityResponseBodyUnhealthyListNodeTaskInstance& setInstanceList(const Models::DescribeUnhealthyHostAvailabilityResponseBodyUnhealthyListNodeTaskInstanceInstanceList & instanceList) { DARABONBA_PTR_SET_VALUE(instanceList_, instanceList) };
    inline DescribeUnhealthyHostAvailabilityResponseBodyUnhealthyListNodeTaskInstance& setInstanceList(Models::DescribeUnhealthyHostAvailabilityResponseBodyUnhealthyListNodeTaskInstanceInstanceList && instanceList) { DARABONBA_PTR_SET_RVALUE(instanceList_, instanceList) };


  protected:
    // The ID of the availability monitoring task.
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<Models::DescribeUnhealthyHostAvailabilityResponseBodyUnhealthyListNodeTaskInstanceInstanceList> instanceList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
