// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMONITORGROUPNOTIFYPOLICYLISTRESPONSEBODYNOTIFYPOLICYLISTNOTIFYPOLICY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMONITORGROUPNOTIFYPOLICYLISTRESPONSEBODYNOTIFYPOLICYLISTNOTIFYPOLICY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMonitorGroupNotifyPolicyListResponseBodyNotifyPolicyListNotifyPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMonitorGroupNotifyPolicyListResponseBodyNotifyPolicyListNotifyPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMonitorGroupNotifyPolicyListResponseBodyNotifyPolicyListNotifyPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeMonitorGroupNotifyPolicyListResponseBodyNotifyPolicyListNotifyPolicy() = default ;
    DescribeMonitorGroupNotifyPolicyListResponseBodyNotifyPolicyListNotifyPolicy(const DescribeMonitorGroupNotifyPolicyListResponseBodyNotifyPolicyListNotifyPolicy &) = default ;
    DescribeMonitorGroupNotifyPolicyListResponseBodyNotifyPolicyListNotifyPolicy(DescribeMonitorGroupNotifyPolicyListResponseBodyNotifyPolicyListNotifyPolicy &&) = default ;
    DescribeMonitorGroupNotifyPolicyListResponseBodyNotifyPolicyListNotifyPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMonitorGroupNotifyPolicyListResponseBodyNotifyPolicyListNotifyPolicy() = default ;
    DescribeMonitorGroupNotifyPolicyListResponseBodyNotifyPolicyListNotifyPolicy& operator=(const DescribeMonitorGroupNotifyPolicyListResponseBodyNotifyPolicyListNotifyPolicy &) = default ;
    DescribeMonitorGroupNotifyPolicyListResponseBodyNotifyPolicyListNotifyPolicy& operator=(DescribeMonitorGroupNotifyPolicyListResponseBodyNotifyPolicyListNotifyPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && return this->groupId_ == nullptr && return this->id_ == nullptr && return this->startTime_ == nullptr && return this->type_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeMonitorGroupNotifyPolicyListResponseBodyNotifyPolicyListNotifyPolicy& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeMonitorGroupNotifyPolicyListResponseBodyNotifyPolicyListNotifyPolicy& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeMonitorGroupNotifyPolicyListResponseBodyNotifyPolicyListNotifyPolicy& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeMonitorGroupNotifyPolicyListResponseBodyNotifyPolicyListNotifyPolicy& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeMonitorGroupNotifyPolicyListResponseBodyNotifyPolicyListNotifyPolicy& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The end of the time range to query.
    // 
    // Unit: milliseconds.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The ID of the application group.
    std::shared_ptr<string> groupId_ = nullptr;
    // The policy ID.
    std::shared_ptr<string> id_ = nullptr;
    // The beginning of the time range to query.
    // 
    // Unit: milliseconds.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The policy type.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
