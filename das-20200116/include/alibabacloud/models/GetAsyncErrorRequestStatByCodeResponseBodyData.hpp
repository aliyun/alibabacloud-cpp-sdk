// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETASYNCERRORREQUESTSTATBYCODERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETASYNCERRORREQUESTSTATBYCODERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAsyncErrorRequestStatByCodeResponseBodyDataResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetAsyncErrorRequestStatByCodeResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAsyncErrorRequestStatByCodeResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(complete, complete_);
      DARABONBA_PTR_TO_JSON(fail, fail_);
      DARABONBA_PTR_TO_JSON(isFinish, isFinish_);
      DARABONBA_PTR_TO_JSON(result, result_);
      DARABONBA_PTR_TO_JSON(resultId, resultId_);
      DARABONBA_PTR_TO_JSON(state, state_);
      DARABONBA_PTR_TO_JSON(timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, GetAsyncErrorRequestStatByCodeResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(complete, complete_);
      DARABONBA_PTR_FROM_JSON(fail, fail_);
      DARABONBA_PTR_FROM_JSON(isFinish, isFinish_);
      DARABONBA_PTR_FROM_JSON(result, result_);
      DARABONBA_PTR_FROM_JSON(resultId, resultId_);
      DARABONBA_PTR_FROM_JSON(state, state_);
      DARABONBA_PTR_FROM_JSON(timestamp, timestamp_);
    };
    GetAsyncErrorRequestStatByCodeResponseBodyData() = default ;
    GetAsyncErrorRequestStatByCodeResponseBodyData(const GetAsyncErrorRequestStatByCodeResponseBodyData &) = default ;
    GetAsyncErrorRequestStatByCodeResponseBodyData(GetAsyncErrorRequestStatByCodeResponseBodyData &&) = default ;
    GetAsyncErrorRequestStatByCodeResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAsyncErrorRequestStatByCodeResponseBodyData() = default ;
    GetAsyncErrorRequestStatByCodeResponseBodyData& operator=(const GetAsyncErrorRequestStatByCodeResponseBodyData &) = default ;
    GetAsyncErrorRequestStatByCodeResponseBodyData& operator=(GetAsyncErrorRequestStatByCodeResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->complete_ == nullptr
        && return this->fail_ == nullptr && return this->isFinish_ == nullptr && return this->result_ == nullptr && return this->resultId_ == nullptr && return this->state_ == nullptr
        && return this->timestamp_ == nullptr; };
    // complete Field Functions 
    bool hasComplete() const { return this->complete_ != nullptr;};
    void deleteComplete() { this->complete_ = nullptr;};
    inline bool complete() const { DARABONBA_PTR_GET_DEFAULT(complete_, false) };
    inline GetAsyncErrorRequestStatByCodeResponseBodyData& setComplete(bool complete) { DARABONBA_PTR_SET_VALUE(complete_, complete) };


    // fail Field Functions 
    bool hasFail() const { return this->fail_ != nullptr;};
    void deleteFail() { this->fail_ = nullptr;};
    inline bool fail() const { DARABONBA_PTR_GET_DEFAULT(fail_, false) };
    inline GetAsyncErrorRequestStatByCodeResponseBodyData& setFail(bool fail) { DARABONBA_PTR_SET_VALUE(fail_, fail) };


    // isFinish Field Functions 
    bool hasIsFinish() const { return this->isFinish_ != nullptr;};
    void deleteIsFinish() { this->isFinish_ = nullptr;};
    inline bool isFinish() const { DARABONBA_PTR_GET_DEFAULT(isFinish_, false) };
    inline GetAsyncErrorRequestStatByCodeResponseBodyData& setIsFinish(bool isFinish) { DARABONBA_PTR_SET_VALUE(isFinish_, isFinish) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<Models::GetAsyncErrorRequestStatByCodeResponseBodyDataResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<Models::GetAsyncErrorRequestStatByCodeResponseBodyDataResult>) };
    inline vector<Models::GetAsyncErrorRequestStatByCodeResponseBodyDataResult> result() { DARABONBA_PTR_GET(result_, vector<Models::GetAsyncErrorRequestStatByCodeResponseBodyDataResult>) };
    inline GetAsyncErrorRequestStatByCodeResponseBodyData& setResult(const vector<Models::GetAsyncErrorRequestStatByCodeResponseBodyDataResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetAsyncErrorRequestStatByCodeResponseBodyData& setResult(vector<Models::GetAsyncErrorRequestStatByCodeResponseBodyDataResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // resultId Field Functions 
    bool hasResultId() const { return this->resultId_ != nullptr;};
    void deleteResultId() { this->resultId_ = nullptr;};
    inline string resultId() const { DARABONBA_PTR_GET_DEFAULT(resultId_, "") };
    inline GetAsyncErrorRequestStatByCodeResponseBodyData& setResultId(string resultId) { DARABONBA_PTR_SET_VALUE(resultId_, resultId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline GetAsyncErrorRequestStatByCodeResponseBodyData& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline GetAsyncErrorRequestStatByCodeResponseBodyData& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    // Indicates whether the asynchronous request was complete.
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> complete_ = nullptr;
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
    // The number of SQL queries corresponding to the error code.
    std::shared_ptr<vector<Models::GetAsyncErrorRequestStatByCodeResponseBodyDataResult>> result_ = nullptr;
    // The ID of the asynchronous request.
    std::shared_ptr<string> resultId_ = nullptr;
    // The state of the asynchronous request. Valid values:
    // 
    // *   **RUNNING**
    // *   **SUCCESS**
    // *   **FAIL**
    std::shared_ptr<string> state_ = nullptr;
    // The time when the asynchronous request was made. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> timestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
