// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFULLREQUESTSTATRESULTBYINSTANCEIDRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETFULLREQUESTSTATRESULTBYINSTANCEIDRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetFullRequestStatResultByInstanceIdResponseBodyDataResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetFullRequestStatResultByInstanceIdResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFullRequestStatResultByInstanceIdResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Fail, fail_);
      DARABONBA_PTR_TO_JSON(IsFinish, isFinish_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(ResultId, resultId_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, GetFullRequestStatResultByInstanceIdResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Fail, fail_);
      DARABONBA_PTR_FROM_JSON(IsFinish, isFinish_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(ResultId, resultId_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
    };
    GetFullRequestStatResultByInstanceIdResponseBodyData() = default ;
    GetFullRequestStatResultByInstanceIdResponseBodyData(const GetFullRequestStatResultByInstanceIdResponseBodyData &) = default ;
    GetFullRequestStatResultByInstanceIdResponseBodyData(GetFullRequestStatResultByInstanceIdResponseBodyData &&) = default ;
    GetFullRequestStatResultByInstanceIdResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFullRequestStatResultByInstanceIdResponseBodyData() = default ;
    GetFullRequestStatResultByInstanceIdResponseBodyData& operator=(const GetFullRequestStatResultByInstanceIdResponseBodyData &) = default ;
    GetFullRequestStatResultByInstanceIdResponseBodyData& operator=(GetFullRequestStatResultByInstanceIdResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fail_ == nullptr
        && return this->isFinish_ == nullptr && return this->result_ == nullptr && return this->resultId_ == nullptr && return this->state_ == nullptr && return this->timestamp_ == nullptr; };
    // fail Field Functions 
    bool hasFail() const { return this->fail_ != nullptr;};
    void deleteFail() { this->fail_ = nullptr;};
    inline bool fail() const { DARABONBA_PTR_GET_DEFAULT(fail_, false) };
    inline GetFullRequestStatResultByInstanceIdResponseBodyData& setFail(bool fail) { DARABONBA_PTR_SET_VALUE(fail_, fail) };


    // isFinish Field Functions 
    bool hasIsFinish() const { return this->isFinish_ != nullptr;};
    void deleteIsFinish() { this->isFinish_ = nullptr;};
    inline bool isFinish() const { DARABONBA_PTR_GET_DEFAULT(isFinish_, false) };
    inline GetFullRequestStatResultByInstanceIdResponseBodyData& setIsFinish(bool isFinish) { DARABONBA_PTR_SET_VALUE(isFinish_, isFinish) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const Models::GetFullRequestStatResultByInstanceIdResponseBodyDataResult & result() const { DARABONBA_PTR_GET_CONST(result_, Models::GetFullRequestStatResultByInstanceIdResponseBodyDataResult) };
    inline Models::GetFullRequestStatResultByInstanceIdResponseBodyDataResult result() { DARABONBA_PTR_GET(result_, Models::GetFullRequestStatResultByInstanceIdResponseBodyDataResult) };
    inline GetFullRequestStatResultByInstanceIdResponseBodyData& setResult(const Models::GetFullRequestStatResultByInstanceIdResponseBodyDataResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetFullRequestStatResultByInstanceIdResponseBodyData& setResult(Models::GetFullRequestStatResultByInstanceIdResponseBodyDataResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // resultId Field Functions 
    bool hasResultId() const { return this->resultId_ != nullptr;};
    void deleteResultId() { this->resultId_ = nullptr;};
    inline string resultId() const { DARABONBA_PTR_GET_DEFAULT(resultId_, "") };
    inline GetFullRequestStatResultByInstanceIdResponseBodyData& setResultId(string resultId) { DARABONBA_PTR_SET_VALUE(resultId_, resultId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline GetFullRequestStatResultByInstanceIdResponseBodyData& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline GetFullRequestStatResultByInstanceIdResponseBodyData& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    // Indicates whether the asynchronous request failed. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> fail_ = nullptr;
    // Indicates whether the asynchronous request was complete. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> isFinish_ = nullptr;
    // The returned full request data.
    std::shared_ptr<Models::GetFullRequestStatResultByInstanceIdResponseBodyDataResult> result_ = nullptr;
    // The request ID.
    std::shared_ptr<string> resultId_ = nullptr;
    // The state of the asynchronous request. Valid values:
    // 
    // *   **RUNNING**
    // *   **SUCCESS**
    // *   **FAIL**
    std::shared_ptr<string> state_ = nullptr;
    // The time when the asynchronous request was sent. The value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> timestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
