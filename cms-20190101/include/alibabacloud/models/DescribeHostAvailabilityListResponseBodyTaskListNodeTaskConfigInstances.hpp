// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHOSTAVAILABILITYLISTRESPONSEBODYTASKLISTNODETASKCONFIGINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHOSTAVAILABILITYLISTRESPONSEBODYTASKLISTNODETASKCONFIGINSTANCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigInstances& obj) { 
      DARABONBA_PTR_TO_JSON(Instance, instance_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(Instance, instance_);
    };
    DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigInstances() = default ;
    DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigInstances(const DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigInstances &) = default ;
    DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigInstances(DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigInstances &&) = default ;
    DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigInstances() = default ;
    DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigInstances& operator=(const DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigInstances &) = default ;
    DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigInstances& operator=(DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instance_ == nullptr; };
    // instance Field Functions 
    bool hasInstance() const { return this->instance_ != nullptr;};
    void deleteInstance() { this->instance_ = nullptr;};
    inline const vector<string> & instance() const { DARABONBA_PTR_GET_CONST(instance_, vector<string>) };
    inline vector<string> instance() { DARABONBA_PTR_GET(instance_, vector<string>) };
    inline DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigInstances& setInstance(const vector<string> & instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };
    inline DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigInstances& setInstance(vector<string> && instance) { DARABONBA_PTR_SET_RVALUE(instance_, instance) };


  protected:
    std::shared_ptr<vector<string>> instance_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
