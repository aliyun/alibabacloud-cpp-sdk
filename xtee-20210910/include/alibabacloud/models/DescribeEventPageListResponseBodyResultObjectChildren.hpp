// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTPAGELISTRESPONSEBODYRESULTOBJECTCHILDREN_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTPAGELISTRESPONSEBODYRESULTOBJECTCHILDREN_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeEventPageListResponseBodyResultObjectChildren : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventPageListResponseBodyResultObjectChildren& obj) { 
      DARABONBA_PTR_TO_JSON(eventCode, eventCode_);
      DARABONBA_PTR_TO_JSON(eventName, eventName_);
      DARABONBA_PTR_TO_JSON(eventStatus, eventStatus_);
      DARABONBA_PTR_TO_JSON(eventType, eventType_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(ruleCount, ruleCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventPageListResponseBodyResultObjectChildren& obj) { 
      DARABONBA_PTR_FROM_JSON(eventCode, eventCode_);
      DARABONBA_PTR_FROM_JSON(eventName, eventName_);
      DARABONBA_PTR_FROM_JSON(eventStatus, eventStatus_);
      DARABONBA_PTR_FROM_JSON(eventType, eventType_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(ruleCount, ruleCount_);
    };
    DescribeEventPageListResponseBodyResultObjectChildren() = default ;
    DescribeEventPageListResponseBodyResultObjectChildren(const DescribeEventPageListResponseBodyResultObjectChildren &) = default ;
    DescribeEventPageListResponseBodyResultObjectChildren(DescribeEventPageListResponseBodyResultObjectChildren &&) = default ;
    DescribeEventPageListResponseBodyResultObjectChildren(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventPageListResponseBodyResultObjectChildren() = default ;
    DescribeEventPageListResponseBodyResultObjectChildren& operator=(const DescribeEventPageListResponseBodyResultObjectChildren &) = default ;
    DescribeEventPageListResponseBodyResultObjectChildren& operator=(DescribeEventPageListResponseBodyResultObjectChildren &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventCode_ == nullptr
        && return this->eventName_ == nullptr && return this->eventStatus_ == nullptr && return this->eventType_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr
        && return this->id_ == nullptr && return this->ruleCount_ == nullptr; };
    // eventCode Field Functions 
    bool hasEventCode() const { return this->eventCode_ != nullptr;};
    void deleteEventCode() { this->eventCode_ = nullptr;};
    inline string eventCode() const { DARABONBA_PTR_GET_DEFAULT(eventCode_, "") };
    inline DescribeEventPageListResponseBodyResultObjectChildren& setEventCode(string eventCode) { DARABONBA_PTR_SET_VALUE(eventCode_, eventCode) };


    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string eventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline DescribeEventPageListResponseBodyResultObjectChildren& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


    // eventStatus Field Functions 
    bool hasEventStatus() const { return this->eventStatus_ != nullptr;};
    void deleteEventStatus() { this->eventStatus_ = nullptr;};
    inline string eventStatus() const { DARABONBA_PTR_GET_DEFAULT(eventStatus_, "") };
    inline DescribeEventPageListResponseBodyResultObjectChildren& setEventStatus(string eventStatus) { DARABONBA_PTR_SET_VALUE(eventStatus_, eventStatus) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string eventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline DescribeEventPageListResponseBodyResultObjectChildren& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline DescribeEventPageListResponseBodyResultObjectChildren& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline DescribeEventPageListResponseBodyResultObjectChildren& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeEventPageListResponseBodyResultObjectChildren& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // ruleCount Field Functions 
    bool hasRuleCount() const { return this->ruleCount_ != nullptr;};
    void deleteRuleCount() { this->ruleCount_ = nullptr;};
    inline int64_t ruleCount() const { DARABONBA_PTR_GET_DEFAULT(ruleCount_, 0L) };
    inline DescribeEventPageListResponseBodyResultObjectChildren& setRuleCount(int64_t ruleCount) { DARABONBA_PTR_SET_VALUE(ruleCount_, ruleCount) };


  protected:
    // Event code.
    std::shared_ptr<string> eventCode_ = nullptr;
    // Event name.
    std::shared_ptr<string> eventName_ = nullptr;
    // Event status.
    std::shared_ptr<string> eventStatus_ = nullptr;
    // Event type.
    std::shared_ptr<string> eventType_ = nullptr;
    // Creation time.
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    // Modification time
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    // Primary key ID
    std::shared_ptr<int64_t> id_ = nullptr;
    // Total number of rules.
    std::shared_ptr<int64_t> ruleCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
