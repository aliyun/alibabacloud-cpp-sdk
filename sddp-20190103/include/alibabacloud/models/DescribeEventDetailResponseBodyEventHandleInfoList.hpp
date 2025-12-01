// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTDETAILRESPONSEBODYEVENTHANDLEINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTDETAILRESPONSEBODYEVENTHANDLEINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeEventDetailResponseBodyEventHandleInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventDetailResponseBodyEventHandleInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentValue, currentValue_);
      DARABONBA_PTR_TO_JSON(DisableTime, disableTime_);
      DARABONBA_PTR_TO_JSON(EnableTime, enableTime_);
      DARABONBA_PTR_TO_JSON(HandlerName, handlerName_);
      DARABONBA_PTR_TO_JSON(HandlerType, handlerType_);
      DARABONBA_PTR_TO_JSON(HandlerValue, handlerValue_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventDetailResponseBodyEventHandleInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentValue, currentValue_);
      DARABONBA_PTR_FROM_JSON(DisableTime, disableTime_);
      DARABONBA_PTR_FROM_JSON(EnableTime, enableTime_);
      DARABONBA_PTR_FROM_JSON(HandlerName, handlerName_);
      DARABONBA_PTR_FROM_JSON(HandlerType, handlerType_);
      DARABONBA_PTR_FROM_JSON(HandlerValue, handlerValue_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeEventDetailResponseBodyEventHandleInfoList() = default ;
    DescribeEventDetailResponseBodyEventHandleInfoList(const DescribeEventDetailResponseBodyEventHandleInfoList &) = default ;
    DescribeEventDetailResponseBodyEventHandleInfoList(DescribeEventDetailResponseBodyEventHandleInfoList &&) = default ;
    DescribeEventDetailResponseBodyEventHandleInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventDetailResponseBodyEventHandleInfoList() = default ;
    DescribeEventDetailResponseBodyEventHandleInfoList& operator=(const DescribeEventDetailResponseBodyEventHandleInfoList &) = default ;
    DescribeEventDetailResponseBodyEventHandleInfoList& operator=(DescribeEventDetailResponseBodyEventHandleInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentValue_ == nullptr
        && return this->disableTime_ == nullptr && return this->enableTime_ == nullptr && return this->handlerName_ == nullptr && return this->handlerType_ == nullptr && return this->handlerValue_ == nullptr
        && return this->id_ == nullptr && return this->status_ == nullptr; };
    // currentValue Field Functions 
    bool hasCurrentValue() const { return this->currentValue_ != nullptr;};
    void deleteCurrentValue() { this->currentValue_ = nullptr;};
    inline string currentValue() const { DARABONBA_PTR_GET_DEFAULT(currentValue_, "") };
    inline DescribeEventDetailResponseBodyEventHandleInfoList& setCurrentValue(string currentValue) { DARABONBA_PTR_SET_VALUE(currentValue_, currentValue) };


    // disableTime Field Functions 
    bool hasDisableTime() const { return this->disableTime_ != nullptr;};
    void deleteDisableTime() { this->disableTime_ = nullptr;};
    inline int64_t disableTime() const { DARABONBA_PTR_GET_DEFAULT(disableTime_, 0L) };
    inline DescribeEventDetailResponseBodyEventHandleInfoList& setDisableTime(int64_t disableTime) { DARABONBA_PTR_SET_VALUE(disableTime_, disableTime) };


    // enableTime Field Functions 
    bool hasEnableTime() const { return this->enableTime_ != nullptr;};
    void deleteEnableTime() { this->enableTime_ = nullptr;};
    inline int64_t enableTime() const { DARABONBA_PTR_GET_DEFAULT(enableTime_, 0L) };
    inline DescribeEventDetailResponseBodyEventHandleInfoList& setEnableTime(int64_t enableTime) { DARABONBA_PTR_SET_VALUE(enableTime_, enableTime) };


    // handlerName Field Functions 
    bool hasHandlerName() const { return this->handlerName_ != nullptr;};
    void deleteHandlerName() { this->handlerName_ = nullptr;};
    inline string handlerName() const { DARABONBA_PTR_GET_DEFAULT(handlerName_, "") };
    inline DescribeEventDetailResponseBodyEventHandleInfoList& setHandlerName(string handlerName) { DARABONBA_PTR_SET_VALUE(handlerName_, handlerName) };


    // handlerType Field Functions 
    bool hasHandlerType() const { return this->handlerType_ != nullptr;};
    void deleteHandlerType() { this->handlerType_ = nullptr;};
    inline string handlerType() const { DARABONBA_PTR_GET_DEFAULT(handlerType_, "") };
    inline DescribeEventDetailResponseBodyEventHandleInfoList& setHandlerType(string handlerType) { DARABONBA_PTR_SET_VALUE(handlerType_, handlerType) };


    // handlerValue Field Functions 
    bool hasHandlerValue() const { return this->handlerValue_ != nullptr;};
    void deleteHandlerValue() { this->handlerValue_ = nullptr;};
    inline int32_t handlerValue() const { DARABONBA_PTR_GET_DEFAULT(handlerValue_, 0) };
    inline DescribeEventDetailResponseBodyEventHandleInfoList& setHandlerValue(int32_t handlerValue) { DARABONBA_PTR_SET_VALUE(handlerValue_, handlerValue) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeEventDetailResponseBodyEventHandleInfoList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeEventDetailResponseBodyEventHandleInfoList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The account that is used to handle the anomalous event.
    std::shared_ptr<string> currentValue_ = nullptr;
    // The time when the account is disabled. The value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> disableTime_ = nullptr;
    // The time when the disabled account is enabled. The value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> enableTime_ = nullptr;
    // The handling method.
    std::shared_ptr<string> handlerName_ = nullptr;
    // The type of the handling method.
    std::shared_ptr<string> handlerType_ = nullptr;
    // The duration for which the handling operation takes effect. If you leave this parameter empty, the handling operation is permanently valid. Unit: minutes.
    std::shared_ptr<int32_t> handlerValue_ = nullptr;
    // The ID of the handling rule.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The status of the account that triggered the anomalous event. Valid values:
    // 
    // *   **0**: disabled
    // *   **1**: enabled
    // *   **-1**: failed to disable the account
    // *   **-2**: failed to enable the account
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
