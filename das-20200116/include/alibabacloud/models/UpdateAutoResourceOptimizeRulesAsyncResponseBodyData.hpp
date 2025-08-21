// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAUTORESOURCEOPTIMIZERULESASYNCRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAUTORESOURCEOPTIMIZERULESASYNCRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateAutoResourceOptimizeRulesAsyncResponseBodyDataConfigResponse.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class UpdateAutoResourceOptimizeRulesAsyncResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAutoResourceOptimizeRulesAsyncResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Complete, complete_);
      DARABONBA_PTR_TO_JSON(ConfigResponse, configResponse_);
      DARABONBA_PTR_TO_JSON(Fail, fail_);
      DARABONBA_PTR_TO_JSON(IsFinish, isFinish_);
      DARABONBA_PTR_TO_JSON(ResultId, resultId_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAutoResourceOptimizeRulesAsyncResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Complete, complete_);
      DARABONBA_PTR_FROM_JSON(ConfigResponse, configResponse_);
      DARABONBA_PTR_FROM_JSON(Fail, fail_);
      DARABONBA_PTR_FROM_JSON(IsFinish, isFinish_);
      DARABONBA_PTR_FROM_JSON(ResultId, resultId_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
    };
    UpdateAutoResourceOptimizeRulesAsyncResponseBodyData() = default ;
    UpdateAutoResourceOptimizeRulesAsyncResponseBodyData(const UpdateAutoResourceOptimizeRulesAsyncResponseBodyData &) = default ;
    UpdateAutoResourceOptimizeRulesAsyncResponseBodyData(UpdateAutoResourceOptimizeRulesAsyncResponseBodyData &&) = default ;
    UpdateAutoResourceOptimizeRulesAsyncResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAutoResourceOptimizeRulesAsyncResponseBodyData() = default ;
    UpdateAutoResourceOptimizeRulesAsyncResponseBodyData& operator=(const UpdateAutoResourceOptimizeRulesAsyncResponseBodyData &) = default ;
    UpdateAutoResourceOptimizeRulesAsyncResponseBodyData& operator=(UpdateAutoResourceOptimizeRulesAsyncResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->complete_ != nullptr
        && this->configResponse_ != nullptr && this->fail_ != nullptr && this->isFinish_ != nullptr && this->resultId_ != nullptr && this->state_ != nullptr
        && this->timestamp_ != nullptr; };
    // complete Field Functions 
    bool hasComplete() const { return this->complete_ != nullptr;};
    void deleteComplete() { this->complete_ = nullptr;};
    inline bool complete() const { DARABONBA_PTR_GET_DEFAULT(complete_, false) };
    inline UpdateAutoResourceOptimizeRulesAsyncResponseBodyData& setComplete(bool complete) { DARABONBA_PTR_SET_VALUE(complete_, complete) };


    // configResponse Field Functions 
    bool hasConfigResponse() const { return this->configResponse_ != nullptr;};
    void deleteConfigResponse() { this->configResponse_ = nullptr;};
    inline const Models::UpdateAutoResourceOptimizeRulesAsyncResponseBodyDataConfigResponse & configResponse() const { DARABONBA_PTR_GET_CONST(configResponse_, Models::UpdateAutoResourceOptimizeRulesAsyncResponseBodyDataConfigResponse) };
    inline Models::UpdateAutoResourceOptimizeRulesAsyncResponseBodyDataConfigResponse configResponse() { DARABONBA_PTR_GET(configResponse_, Models::UpdateAutoResourceOptimizeRulesAsyncResponseBodyDataConfigResponse) };
    inline UpdateAutoResourceOptimizeRulesAsyncResponseBodyData& setConfigResponse(const Models::UpdateAutoResourceOptimizeRulesAsyncResponseBodyDataConfigResponse & configResponse) { DARABONBA_PTR_SET_VALUE(configResponse_, configResponse) };
    inline UpdateAutoResourceOptimizeRulesAsyncResponseBodyData& setConfigResponse(Models::UpdateAutoResourceOptimizeRulesAsyncResponseBodyDataConfigResponse && configResponse) { DARABONBA_PTR_SET_RVALUE(configResponse_, configResponse) };


    // fail Field Functions 
    bool hasFail() const { return this->fail_ != nullptr;};
    void deleteFail() { this->fail_ = nullptr;};
    inline bool fail() const { DARABONBA_PTR_GET_DEFAULT(fail_, false) };
    inline UpdateAutoResourceOptimizeRulesAsyncResponseBodyData& setFail(bool fail) { DARABONBA_PTR_SET_VALUE(fail_, fail) };


    // isFinish Field Functions 
    bool hasIsFinish() const { return this->isFinish_ != nullptr;};
    void deleteIsFinish() { this->isFinish_ = nullptr;};
    inline bool isFinish() const { DARABONBA_PTR_GET_DEFAULT(isFinish_, false) };
    inline UpdateAutoResourceOptimizeRulesAsyncResponseBodyData& setIsFinish(bool isFinish) { DARABONBA_PTR_SET_VALUE(isFinish_, isFinish) };


    // resultId Field Functions 
    bool hasResultId() const { return this->resultId_ != nullptr;};
    void deleteResultId() { this->resultId_ = nullptr;};
    inline string resultId() const { DARABONBA_PTR_GET_DEFAULT(resultId_, "") };
    inline UpdateAutoResourceOptimizeRulesAsyncResponseBodyData& setResultId(string resultId) { DARABONBA_PTR_SET_VALUE(resultId_, resultId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline UpdateAutoResourceOptimizeRulesAsyncResponseBodyData& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline UpdateAutoResourceOptimizeRulesAsyncResponseBodyData& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    // Indicates whether the asynchronous request was complete. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> complete_ = nullptr;
    // The returned data of the configuration.
    // 
    // >  The data is returned only if the value of isFinish is **true**. This value indicates that the asynchronous request is complete.
    std::shared_ptr<Models::UpdateAutoResourceOptimizeRulesAsyncResponseBodyDataConfigResponse> configResponse_ = nullptr;
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
