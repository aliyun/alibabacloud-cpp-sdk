// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTRESULTLISTRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTRESULTLISTRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeEventResultListResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventResultListResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(eventCode, eventCode_);
      DARABONBA_PTR_TO_JSON(eventName, eventName_);
      DARABONBA_PTR_TO_JSON(passNum, passNum_);
      DARABONBA_PTR_TO_JSON(pendingNum, pendingNum_);
      DARABONBA_PTR_TO_JSON(rejectNum, rejectNum_);
      DARABONBA_PTR_TO_JSON(totalNum, totalNum_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventResultListResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(eventCode, eventCode_);
      DARABONBA_PTR_FROM_JSON(eventName, eventName_);
      DARABONBA_PTR_FROM_JSON(passNum, passNum_);
      DARABONBA_PTR_FROM_JSON(pendingNum, pendingNum_);
      DARABONBA_PTR_FROM_JSON(rejectNum, rejectNum_);
      DARABONBA_PTR_FROM_JSON(totalNum, totalNum_);
    };
    DescribeEventResultListResponseBodyResultObject() = default ;
    DescribeEventResultListResponseBodyResultObject(const DescribeEventResultListResponseBodyResultObject &) = default ;
    DescribeEventResultListResponseBodyResultObject(DescribeEventResultListResponseBodyResultObject &&) = default ;
    DescribeEventResultListResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventResultListResponseBodyResultObject() = default ;
    DescribeEventResultListResponseBodyResultObject& operator=(const DescribeEventResultListResponseBodyResultObject &) = default ;
    DescribeEventResultListResponseBodyResultObject& operator=(DescribeEventResultListResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventCode_ == nullptr
        && return this->eventName_ == nullptr && return this->passNum_ == nullptr && return this->pendingNum_ == nullptr && return this->rejectNum_ == nullptr && return this->totalNum_ == nullptr; };
    // eventCode Field Functions 
    bool hasEventCode() const { return this->eventCode_ != nullptr;};
    void deleteEventCode() { this->eventCode_ = nullptr;};
    inline string eventCode() const { DARABONBA_PTR_GET_DEFAULT(eventCode_, "") };
    inline DescribeEventResultListResponseBodyResultObject& setEventCode(string eventCode) { DARABONBA_PTR_SET_VALUE(eventCode_, eventCode) };


    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string eventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline DescribeEventResultListResponseBodyResultObject& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


    // passNum Field Functions 
    bool hasPassNum() const { return this->passNum_ != nullptr;};
    void deletePassNum() { this->passNum_ = nullptr;};
    inline int64_t passNum() const { DARABONBA_PTR_GET_DEFAULT(passNum_, 0L) };
    inline DescribeEventResultListResponseBodyResultObject& setPassNum(int64_t passNum) { DARABONBA_PTR_SET_VALUE(passNum_, passNum) };


    // pendingNum Field Functions 
    bool hasPendingNum() const { return this->pendingNum_ != nullptr;};
    void deletePendingNum() { this->pendingNum_ = nullptr;};
    inline int64_t pendingNum() const { DARABONBA_PTR_GET_DEFAULT(pendingNum_, 0L) };
    inline DescribeEventResultListResponseBodyResultObject& setPendingNum(int64_t pendingNum) { DARABONBA_PTR_SET_VALUE(pendingNum_, pendingNum) };


    // rejectNum Field Functions 
    bool hasRejectNum() const { return this->rejectNum_ != nullptr;};
    void deleteRejectNum() { this->rejectNum_ = nullptr;};
    inline int64_t rejectNum() const { DARABONBA_PTR_GET_DEFAULT(rejectNum_, 0L) };
    inline DescribeEventResultListResponseBodyResultObject& setRejectNum(int64_t rejectNum) { DARABONBA_PTR_SET_VALUE(rejectNum_, rejectNum) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int64_t totalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0L) };
    inline DescribeEventResultListResponseBodyResultObject& setTotalNum(int64_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


  protected:
    // Event code
    std::shared_ptr<string> eventCode_ = nullptr;
    // Event name.
    std::shared_ptr<string> eventName_ = nullptr;
    // Number of passed checks.
    std::shared_ptr<int64_t> passNum_ = nullptr;
    // Number of pending items.
    std::shared_ptr<int64_t> pendingNum_ = nullptr;
    // Number of rejected approvals.
    std::shared_ptr<int64_t> rejectNum_ = nullptr;
    // Total number of items.
    std::shared_ptr<int64_t> totalNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
