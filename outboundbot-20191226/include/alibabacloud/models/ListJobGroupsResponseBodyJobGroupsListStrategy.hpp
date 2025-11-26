// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBGROUPSRESPONSEBODYJOBGROUPSLISTSTRATEGY_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBGROUPSRESPONSEBODYJOBGROUPSLISTSTRATEGY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ListJobGroupsResponseBodyJobGroupsListStrategy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobGroupsResponseBodyJobGroupsListStrategy& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobGroupsResponseBodyJobGroupsListStrategy& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    ListJobGroupsResponseBodyJobGroupsListStrategy() = default ;
    ListJobGroupsResponseBodyJobGroupsListStrategy(const ListJobGroupsResponseBodyJobGroupsListStrategy &) = default ;
    ListJobGroupsResponseBodyJobGroupsListStrategy(ListJobGroupsResponseBodyJobGroupsListStrategy &&) = default ;
    ListJobGroupsResponseBodyJobGroupsListStrategy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobGroupsResponseBodyJobGroupsListStrategy() = default ;
    ListJobGroupsResponseBodyJobGroupsListStrategy& operator=(const ListJobGroupsResponseBodyJobGroupsListStrategy &) = default ;
    ListJobGroupsResponseBodyJobGroupsListStrategy& operator=(ListJobGroupsResponseBodyJobGroupsListStrategy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && return this->startTime_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListJobGroupsResponseBodyJobGroupsListStrategy& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListJobGroupsResponseBodyJobGroupsListStrategy& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
