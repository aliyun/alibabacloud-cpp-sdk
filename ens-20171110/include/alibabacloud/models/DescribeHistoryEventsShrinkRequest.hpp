// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHISTORYEVENTSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHISTORYEVENTSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeHistoryEventsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHistoryEventsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EventLevels, eventLevelsShrink_);
      DARABONBA_PTR_TO_JSON(EventStatus, eventStatusShrink_);
      DARABONBA_PTR_TO_JSON(EventTypes, eventTypesShrink_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResourceIds, resourceIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHistoryEventsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EventLevels, eventLevelsShrink_);
      DARABONBA_PTR_FROM_JSON(EventStatus, eventStatusShrink_);
      DARABONBA_PTR_FROM_JSON(EventTypes, eventTypesShrink_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResourceIds, resourceIdsShrink_);
    };
    DescribeHistoryEventsShrinkRequest() = default ;
    DescribeHistoryEventsShrinkRequest(const DescribeHistoryEventsShrinkRequest &) = default ;
    DescribeHistoryEventsShrinkRequest(DescribeHistoryEventsShrinkRequest &&) = default ;
    DescribeHistoryEventsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHistoryEventsShrinkRequest() = default ;
    DescribeHistoryEventsShrinkRequest& operator=(const DescribeHistoryEventsShrinkRequest &) = default ;
    DescribeHistoryEventsShrinkRequest& operator=(DescribeHistoryEventsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eventLevelsShrink_ != nullptr
        && this->eventStatusShrink_ != nullptr && this->eventTypesShrink_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->resourceIdsShrink_ != nullptr; };
    // eventLevelsShrink Field Functions 
    bool hasEventLevelsShrink() const { return this->eventLevelsShrink_ != nullptr;};
    void deleteEventLevelsShrink() { this->eventLevelsShrink_ = nullptr;};
    inline string eventLevelsShrink() const { DARABONBA_PTR_GET_DEFAULT(eventLevelsShrink_, "") };
    inline DescribeHistoryEventsShrinkRequest& setEventLevelsShrink(string eventLevelsShrink) { DARABONBA_PTR_SET_VALUE(eventLevelsShrink_, eventLevelsShrink) };


    // eventStatusShrink Field Functions 
    bool hasEventStatusShrink() const { return this->eventStatusShrink_ != nullptr;};
    void deleteEventStatusShrink() { this->eventStatusShrink_ = nullptr;};
    inline string eventStatusShrink() const { DARABONBA_PTR_GET_DEFAULT(eventStatusShrink_, "") };
    inline DescribeHistoryEventsShrinkRequest& setEventStatusShrink(string eventStatusShrink) { DARABONBA_PTR_SET_VALUE(eventStatusShrink_, eventStatusShrink) };


    // eventTypesShrink Field Functions 
    bool hasEventTypesShrink() const { return this->eventTypesShrink_ != nullptr;};
    void deleteEventTypesShrink() { this->eventTypesShrink_ = nullptr;};
    inline string eventTypesShrink() const { DARABONBA_PTR_GET_DEFAULT(eventTypesShrink_, "") };
    inline DescribeHistoryEventsShrinkRequest& setEventTypesShrink(string eventTypesShrink) { DARABONBA_PTR_SET_VALUE(eventTypesShrink_, eventTypesShrink) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeHistoryEventsShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeHistoryEventsShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceIdsShrink Field Functions 
    bool hasResourceIdsShrink() const { return this->resourceIdsShrink_ != nullptr;};
    void deleteResourceIdsShrink() { this->resourceIdsShrink_ = nullptr;};
    inline string resourceIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(resourceIdsShrink_, "") };
    inline DescribeHistoryEventsShrinkRequest& setResourceIdsShrink(string resourceIdsShrink) { DARABONBA_PTR_SET_VALUE(resourceIdsShrink_, resourceIdsShrink) };


  protected:
    std::shared_ptr<string> eventLevelsShrink_ = nullptr;
    std::shared_ptr<string> eventStatusShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> eventTypesShrink_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> resourceIdsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
