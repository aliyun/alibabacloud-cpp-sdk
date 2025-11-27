// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCEGROUPSRESPONSEBODYRESOURCEGROUPTIMERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCEGROUPSRESPONSEBODYRESOURCEGROUPTIMERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class DescribeResourceGroupsResponseBodyResourceGroupTimers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourceGroupsResponseBodyResourceGroupTimers& obj) { 
      DARABONBA_PTR_TO_JSON(BindStatus, bindStatus_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(TimerStatus, timerStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourceGroupsResponseBodyResourceGroupTimers& obj) { 
      DARABONBA_PTR_FROM_JSON(BindStatus, bindStatus_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(TimerStatus, timerStatus_);
    };
    DescribeResourceGroupsResponseBodyResourceGroupTimers() = default ;
    DescribeResourceGroupsResponseBodyResourceGroupTimers(const DescribeResourceGroupsResponseBodyResourceGroupTimers &) = default ;
    DescribeResourceGroupsResponseBodyResourceGroupTimers(DescribeResourceGroupsResponseBodyResourceGroupTimers &&) = default ;
    DescribeResourceGroupsResponseBodyResourceGroupTimers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourceGroupsResponseBodyResourceGroupTimers() = default ;
    DescribeResourceGroupsResponseBodyResourceGroupTimers& operator=(const DescribeResourceGroupsResponseBodyResourceGroupTimers &) = default ;
    DescribeResourceGroupsResponseBodyResourceGroupTimers& operator=(DescribeResourceGroupsResponseBodyResourceGroupTimers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bindStatus_ == nullptr
        && return this->id_ == nullptr && return this->name_ == nullptr && return this->timerStatus_ == nullptr; };
    // bindStatus Field Functions 
    bool hasBindStatus() const { return this->bindStatus_ != nullptr;};
    void deleteBindStatus() { this->bindStatus_ = nullptr;};
    inline string bindStatus() const { DARABONBA_PTR_GET_DEFAULT(bindStatus_, "") };
    inline DescribeResourceGroupsResponseBodyResourceGroupTimers& setBindStatus(string bindStatus) { DARABONBA_PTR_SET_VALUE(bindStatus_, bindStatus) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeResourceGroupsResponseBodyResourceGroupTimers& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeResourceGroupsResponseBodyResourceGroupTimers& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // timerStatus Field Functions 
    bool hasTimerStatus() const { return this->timerStatus_ != nullptr;};
    void deleteTimerStatus() { this->timerStatus_ = nullptr;};
    inline string timerStatus() const { DARABONBA_PTR_GET_DEFAULT(timerStatus_, "") };
    inline DescribeResourceGroupsResponseBodyResourceGroupTimers& setTimerStatus(string timerStatus) { DARABONBA_PTR_SET_VALUE(timerStatus_, timerStatus) };


  protected:
    std::shared_ptr<string> bindStatus_ = nullptr;
    // The ID of the scheduled task.
    std::shared_ptr<string> id_ = nullptr;
    // The name of the scheduled task.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> timerStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
