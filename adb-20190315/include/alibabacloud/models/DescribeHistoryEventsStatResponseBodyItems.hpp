// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHISTORYEVENTSSTATRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHISTORYEVENTSSTATRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeHistoryEventsStatResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHistoryEventsStatResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(EventCategory, eventCategory_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHistoryEventsStatResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(EventCategory, eventCategory_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeHistoryEventsStatResponseBodyItems() = default ;
    DescribeHistoryEventsStatResponseBodyItems(const DescribeHistoryEventsStatResponseBodyItems &) = default ;
    DescribeHistoryEventsStatResponseBodyItems(DescribeHistoryEventsStatResponseBodyItems &&) = default ;
    DescribeHistoryEventsStatResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHistoryEventsStatResponseBodyItems() = default ;
    DescribeHistoryEventsStatResponseBodyItems& operator=(const DescribeHistoryEventsStatResponseBodyItems &) = default ;
    DescribeHistoryEventsStatResponseBodyItems& operator=(DescribeHistoryEventsStatResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eventCategory_ != nullptr
        && this->totalCount_ != nullptr; };
    // eventCategory Field Functions 
    bool hasEventCategory() const { return this->eventCategory_ != nullptr;};
    void deleteEventCategory() { this->eventCategory_ = nullptr;};
    inline string eventCategory() const { DARABONBA_PTR_GET_DEFAULT(eventCategory_, "") };
    inline DescribeHistoryEventsStatResponseBodyItems& setEventCategory(string eventCategory) { DARABONBA_PTR_SET_VALUE(eventCategory_, eventCategory) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeHistoryEventsStatResponseBodyItems& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The system event category. Valid values:
    // 
    // *   Exception
    // *   Optimize
    // *   Notification
    // *   Maintenance
    std::shared_ptr<string> eventCategory_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
