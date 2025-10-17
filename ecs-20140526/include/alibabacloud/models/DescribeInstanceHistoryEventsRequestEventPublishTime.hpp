// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEHISTORYEVENTSREQUESTEVENTPUBLISHTIME_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEHISTORYEVENTSREQUESTEVENTPUBLISHTIME_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInstanceHistoryEventsRequestEventPublishTime : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceHistoryEventsRequestEventPublishTime& obj) { 
      DARABONBA_PTR_TO_JSON(End, end_);
      DARABONBA_PTR_TO_JSON(Start, start_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceHistoryEventsRequestEventPublishTime& obj) { 
      DARABONBA_PTR_FROM_JSON(End, end_);
      DARABONBA_PTR_FROM_JSON(Start, start_);
    };
    DescribeInstanceHistoryEventsRequestEventPublishTime() = default ;
    DescribeInstanceHistoryEventsRequestEventPublishTime(const DescribeInstanceHistoryEventsRequestEventPublishTime &) = default ;
    DescribeInstanceHistoryEventsRequestEventPublishTime(DescribeInstanceHistoryEventsRequestEventPublishTime &&) = default ;
    DescribeInstanceHistoryEventsRequestEventPublishTime(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceHistoryEventsRequestEventPublishTime() = default ;
    DescribeInstanceHistoryEventsRequestEventPublishTime& operator=(const DescribeInstanceHistoryEventsRequestEventPublishTime &) = default ;
    DescribeInstanceHistoryEventsRequestEventPublishTime& operator=(DescribeInstanceHistoryEventsRequestEventPublishTime &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->end_ == nullptr
        && return this->start_ == nullptr; };
    // end Field Functions 
    bool hasEnd() const { return this->end_ != nullptr;};
    void deleteEnd() { this->end_ = nullptr;};
    inline string end() const { DARABONBA_PTR_GET_DEFAULT(end_, "") };
    inline DescribeInstanceHistoryEventsRequestEventPublishTime& setEnd(string end) { DARABONBA_PTR_SET_VALUE(end_, end) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline string start() const { DARABONBA_PTR_GET_DEFAULT(start_, "") };
    inline DescribeInstanceHistoryEventsRequestEventPublishTime& setStart(string start) { DARABONBA_PTR_SET_VALUE(start_, start) };


  protected:
    // The end of the time range in which to query published system events. Specify the time in the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    std::shared_ptr<string> end_ = nullptr;
    // The beginning of the time range in which to query published system events. Specify the time in the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    std::shared_ptr<string> start_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
