// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTDISPOSERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTDISPOSERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEventDisposeResponseBodyDataReceiverInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeEventDisposeResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventDisposeResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(EventDispose, eventDispose_);
      DARABONBA_PTR_TO_JSON(ReceiverInfo, receiverInfo_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventDisposeResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(EventDispose, eventDispose_);
      DARABONBA_PTR_FROM_JSON(ReceiverInfo, receiverInfo_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeEventDisposeResponseBodyData() = default ;
    DescribeEventDisposeResponseBodyData(const DescribeEventDisposeResponseBodyData &) = default ;
    DescribeEventDisposeResponseBodyData(DescribeEventDisposeResponseBodyData &&) = default ;
    DescribeEventDisposeResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventDisposeResponseBodyData() = default ;
    DescribeEventDisposeResponseBodyData& operator=(const DescribeEventDisposeResponseBodyData &) = default ;
    DescribeEventDisposeResponseBodyData& operator=(DescribeEventDisposeResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eventDispose_ != nullptr
        && this->receiverInfo_ != nullptr && this->remark_ != nullptr && this->status_ != nullptr; };
    // eventDispose Field Functions 
    bool hasEventDispose() const { return this->eventDispose_ != nullptr;};
    void deleteEventDispose() { this->eventDispose_ = nullptr;};
    inline const vector<Darabonba::Json> & eventDispose() const { DARABONBA_PTR_GET_CONST(eventDispose_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> eventDispose() { DARABONBA_PTR_GET(eventDispose_, vector<Darabonba::Json>) };
    inline DescribeEventDisposeResponseBodyData& setEventDispose(const vector<Darabonba::Json> & eventDispose) { DARABONBA_PTR_SET_VALUE(eventDispose_, eventDispose) };
    inline DescribeEventDisposeResponseBodyData& setEventDispose(vector<Darabonba::Json> && eventDispose) { DARABONBA_PTR_SET_RVALUE(eventDispose_, eventDispose) };


    // receiverInfo Field Functions 
    bool hasReceiverInfo() const { return this->receiverInfo_ != nullptr;};
    void deleteReceiverInfo() { this->receiverInfo_ = nullptr;};
    inline const Models::DescribeEventDisposeResponseBodyDataReceiverInfo & receiverInfo() const { DARABONBA_PTR_GET_CONST(receiverInfo_, Models::DescribeEventDisposeResponseBodyDataReceiverInfo) };
    inline Models::DescribeEventDisposeResponseBodyDataReceiverInfo receiverInfo() { DARABONBA_PTR_GET(receiverInfo_, Models::DescribeEventDisposeResponseBodyDataReceiverInfo) };
    inline DescribeEventDisposeResponseBodyData& setReceiverInfo(const Models::DescribeEventDisposeResponseBodyDataReceiverInfo & receiverInfo) { DARABONBA_PTR_SET_VALUE(receiverInfo_, receiverInfo) };
    inline DescribeEventDisposeResponseBodyData& setReceiverInfo(Models::DescribeEventDisposeResponseBodyDataReceiverInfo && receiverInfo) { DARABONBA_PTR_SET_RVALUE(receiverInfo_, receiverInfo) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline DescribeEventDisposeResponseBodyData& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeEventDisposeResponseBodyData& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // An array consisting of JSON objects that are configured for event handling.
    std::shared_ptr<vector<Darabonba::Json>> eventDispose_ = nullptr;
    // The JSON object that is configured for an alert recipient.
    std::shared_ptr<Models::DescribeEventDisposeResponseBodyDataReceiverInfo> receiverInfo_ = nullptr;
    // The description of the event.
    std::shared_ptr<string> remark_ = nullptr;
    // The status of the event. Valid values:
    // 
    // *   0: not handled
    // *   1: handing
    // *   5: handling failed
    // *   10: handled
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
