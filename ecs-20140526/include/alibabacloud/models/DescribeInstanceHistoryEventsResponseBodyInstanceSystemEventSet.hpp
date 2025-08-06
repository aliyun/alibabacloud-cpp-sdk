// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEHISTORYEVENTSRESPONSEBODYINSTANCESYSTEMEVENTSET_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEHISTORYEVENTSRESPONSEBODYINSTANCESYSTEMEVENTSET_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventType.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSet : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSet& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceSystemEventType, instanceSystemEventType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSet& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceSystemEventType, instanceSystemEventType_);
    };
    DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSet() = default ;
    DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSet(const DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSet &) = default ;
    DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSet(DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSet &&) = default ;
    DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSet(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSet() = default ;
    DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSet& operator=(const DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSet &) = default ;
    DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSet& operator=(DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSet &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceSystemEventType_ != nullptr; };
    // instanceSystemEventType Field Functions 
    bool hasInstanceSystemEventType() const { return this->instanceSystemEventType_ != nullptr;};
    void deleteInstanceSystemEventType() { this->instanceSystemEventType_ = nullptr;};
    inline const vector<Models::DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventType> & instanceSystemEventType() const { DARABONBA_PTR_GET_CONST(instanceSystemEventType_, vector<Models::DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventType>) };
    inline vector<Models::DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventType> instanceSystemEventType() { DARABONBA_PTR_GET(instanceSystemEventType_, vector<Models::DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventType>) };
    inline DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSet& setInstanceSystemEventType(const vector<Models::DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventType> & instanceSystemEventType) { DARABONBA_PTR_SET_VALUE(instanceSystemEventType_, instanceSystemEventType) };
    inline DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSet& setInstanceSystemEventType(vector<Models::DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventType> && instanceSystemEventType) { DARABONBA_PTR_SET_RVALUE(instanceSystemEventType_, instanceSystemEventType) };


  protected:
    std::shared_ptr<vector<Models::DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventType>> instanceSystemEventType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
