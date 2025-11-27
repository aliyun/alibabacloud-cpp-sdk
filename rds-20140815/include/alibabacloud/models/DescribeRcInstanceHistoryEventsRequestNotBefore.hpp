// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCINSTANCEHISTORYEVENTSREQUESTNOTBEFORE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCINSTANCEHISTORYEVENTSREQUESTNOTBEFORE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCInstanceHistoryEventsRequestNotBefore : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCInstanceHistoryEventsRequestNotBefore& obj) { 
      DARABONBA_PTR_TO_JSON(End, end_);
      DARABONBA_PTR_TO_JSON(Start, start_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCInstanceHistoryEventsRequestNotBefore& obj) { 
      DARABONBA_PTR_FROM_JSON(End, end_);
      DARABONBA_PTR_FROM_JSON(Start, start_);
    };
    DescribeRCInstanceHistoryEventsRequestNotBefore() = default ;
    DescribeRCInstanceHistoryEventsRequestNotBefore(const DescribeRCInstanceHistoryEventsRequestNotBefore &) = default ;
    DescribeRCInstanceHistoryEventsRequestNotBefore(DescribeRCInstanceHistoryEventsRequestNotBefore &&) = default ;
    DescribeRCInstanceHistoryEventsRequestNotBefore(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCInstanceHistoryEventsRequestNotBefore() = default ;
    DescribeRCInstanceHistoryEventsRequestNotBefore& operator=(const DescribeRCInstanceHistoryEventsRequestNotBefore &) = default ;
    DescribeRCInstanceHistoryEventsRequestNotBefore& operator=(DescribeRCInstanceHistoryEventsRequestNotBefore &&) = default ;
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
    inline DescribeRCInstanceHistoryEventsRequestNotBefore& setEnd(string end) { DARABONBA_PTR_SET_VALUE(end_, end) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline string start() const { DARABONBA_PTR_GET_DEFAULT(start_, "") };
    inline DescribeRCInstanceHistoryEventsRequestNotBefore& setStart(string start) { DARABONBA_PTR_SET_VALUE(start_, start) };


  protected:
    // The end time of the scheduled execution period for the system event. Specify the time in the ISO 8601 standard in the `yyyy-MM-ddTHH:mm:ssZ` format. The time must be in UTC.
    std::shared_ptr<string> end_ = nullptr;
    // The start time of the scheduled execution period for the system event. Specify the time in the ISO 8601 standard in the `yyyy-MM-ddTHH:mm:ssZ` format. The time must be in UTC.
    std::shared_ptr<string> start_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
