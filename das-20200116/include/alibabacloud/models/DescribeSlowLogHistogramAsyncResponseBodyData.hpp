// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESLOWLOGHISTOGRAMASYNCRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESLOWLOGHISTOGRAMASYNCRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSlowLogHistogramAsyncResponseBodyDataData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeSlowLogHistogramAsyncResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSlowLogHistogramAsyncResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(IsFinish, isFinish_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestKey, requestKey_);
      DARABONBA_PTR_TO_JSON(ResultId, resultId_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSlowLogHistogramAsyncResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(IsFinish, isFinish_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestKey, requestKey_);
      DARABONBA_PTR_FROM_JSON(ResultId, resultId_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
    };
    DescribeSlowLogHistogramAsyncResponseBodyData() = default ;
    DescribeSlowLogHistogramAsyncResponseBodyData(const DescribeSlowLogHistogramAsyncResponseBodyData &) = default ;
    DescribeSlowLogHistogramAsyncResponseBodyData(DescribeSlowLogHistogramAsyncResponseBodyData &&) = default ;
    DescribeSlowLogHistogramAsyncResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSlowLogHistogramAsyncResponseBodyData() = default ;
    DescribeSlowLogHistogramAsyncResponseBodyData& operator=(const DescribeSlowLogHistogramAsyncResponseBodyData &) = default ;
    DescribeSlowLogHistogramAsyncResponseBodyData& operator=(DescribeSlowLogHistogramAsyncResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->errorCode_ != nullptr && this->isFinish_ != nullptr && this->message_ != nullptr && this->requestKey_ != nullptr && this->resultId_ != nullptr
        && this->state_ != nullptr && this->timestamp_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const Models::DescribeSlowLogHistogramAsyncResponseBodyDataData & data() const { DARABONBA_PTR_GET_CONST(data_, Models::DescribeSlowLogHistogramAsyncResponseBodyDataData) };
    inline Models::DescribeSlowLogHistogramAsyncResponseBodyDataData data() { DARABONBA_PTR_GET(data_, Models::DescribeSlowLogHistogramAsyncResponseBodyDataData) };
    inline DescribeSlowLogHistogramAsyncResponseBodyData& setData(const Models::DescribeSlowLogHistogramAsyncResponseBodyDataData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeSlowLogHistogramAsyncResponseBodyData& setData(Models::DescribeSlowLogHistogramAsyncResponseBodyDataData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline int32_t errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, 0) };
    inline DescribeSlowLogHistogramAsyncResponseBodyData& setErrorCode(int32_t errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // isFinish Field Functions 
    bool hasIsFinish() const { return this->isFinish_ != nullptr;};
    void deleteIsFinish() { this->isFinish_ = nullptr;};
    inline bool isFinish() const { DARABONBA_PTR_GET_DEFAULT(isFinish_, false) };
    inline DescribeSlowLogHistogramAsyncResponseBodyData& setIsFinish(bool isFinish) { DARABONBA_PTR_SET_VALUE(isFinish_, isFinish) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeSlowLogHistogramAsyncResponseBodyData& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestKey Field Functions 
    bool hasRequestKey() const { return this->requestKey_ != nullptr;};
    void deleteRequestKey() { this->requestKey_ = nullptr;};
    inline string requestKey() const { DARABONBA_PTR_GET_DEFAULT(requestKey_, "") };
    inline DescribeSlowLogHistogramAsyncResponseBodyData& setRequestKey(string requestKey) { DARABONBA_PTR_SET_VALUE(requestKey_, requestKey) };


    // resultId Field Functions 
    bool hasResultId() const { return this->resultId_ != nullptr;};
    void deleteResultId() { this->resultId_ = nullptr;};
    inline string resultId() const { DARABONBA_PTR_GET_DEFAULT(resultId_, "") };
    inline DescribeSlowLogHistogramAsyncResponseBodyData& setResultId(string resultId) { DARABONBA_PTR_SET_VALUE(resultId_, resultId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeSlowLogHistogramAsyncResponseBodyData& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline DescribeSlowLogHistogramAsyncResponseBodyData& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    std::shared_ptr<Models::DescribeSlowLogHistogramAsyncResponseBodyDataData> data_ = nullptr;
    std::shared_ptr<int32_t> errorCode_ = nullptr;
    std::shared_ptr<bool> isFinish_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> requestKey_ = nullptr;
    std::shared_ptr<string> resultId_ = nullptr;
    std::shared_ptr<string> state_ = nullptr;
    std::shared_ptr<int64_t> timestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
