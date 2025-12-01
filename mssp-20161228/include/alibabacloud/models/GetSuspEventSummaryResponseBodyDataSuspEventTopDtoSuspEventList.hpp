// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUSPEVENTSUMMARYRESPONSEBODYDATASUSPEVENTTOPDTOSUSPEVENTLIST_HPP_
#define ALIBABACLOUD_MODELS_GETSUSPEVENTSUMMARYRESPONSEBODYDATASUSPEVENTTOPDTOSUSPEVENTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mssp20161228
{
namespace Models
{
  class GetSuspEventSummaryResponseBodyDataSuspEventTopDTOSuspEventList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSuspEventSummaryResponseBodyDataSuspEventTopDTOSuspEventList& obj) { 
      DARABONBA_PTR_TO_JSON(EventName, eventName_);
      DARABONBA_PTR_TO_JSON(TaskCount, taskCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetSuspEventSummaryResponseBodyDataSuspEventTopDTOSuspEventList& obj) { 
      DARABONBA_PTR_FROM_JSON(EventName, eventName_);
      DARABONBA_PTR_FROM_JSON(TaskCount, taskCount_);
    };
    GetSuspEventSummaryResponseBodyDataSuspEventTopDTOSuspEventList() = default ;
    GetSuspEventSummaryResponseBodyDataSuspEventTopDTOSuspEventList(const GetSuspEventSummaryResponseBodyDataSuspEventTopDTOSuspEventList &) = default ;
    GetSuspEventSummaryResponseBodyDataSuspEventTopDTOSuspEventList(GetSuspEventSummaryResponseBodyDataSuspEventTopDTOSuspEventList &&) = default ;
    GetSuspEventSummaryResponseBodyDataSuspEventTopDTOSuspEventList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSuspEventSummaryResponseBodyDataSuspEventTopDTOSuspEventList() = default ;
    GetSuspEventSummaryResponseBodyDataSuspEventTopDTOSuspEventList& operator=(const GetSuspEventSummaryResponseBodyDataSuspEventTopDTOSuspEventList &) = default ;
    GetSuspEventSummaryResponseBodyDataSuspEventTopDTOSuspEventList& operator=(GetSuspEventSummaryResponseBodyDataSuspEventTopDTOSuspEventList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventName_ == nullptr
        && return this->taskCount_ == nullptr; };
    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string eventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline GetSuspEventSummaryResponseBodyDataSuspEventTopDTOSuspEventList& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


    // taskCount Field Functions 
    bool hasTaskCount() const { return this->taskCount_ != nullptr;};
    void deleteTaskCount() { this->taskCount_ = nullptr;};
    inline int64_t taskCount() const { DARABONBA_PTR_GET_DEFAULT(taskCount_, 0L) };
    inline GetSuspEventSummaryResponseBodyDataSuspEventTopDTOSuspEventList& setTaskCount(int64_t taskCount) { DARABONBA_PTR_SET_VALUE(taskCount_, taskCount) };


  protected:
    // Alert name.
    std::shared_ptr<string> eventName_ = nullptr;
    // Count.
    std::shared_ptr<int64_t> taskCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mssp20161228
#endif
