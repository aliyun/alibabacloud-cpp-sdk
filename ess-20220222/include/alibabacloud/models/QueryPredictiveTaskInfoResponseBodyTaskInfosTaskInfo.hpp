// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPREDICTIVETASKINFORESPONSEBODYTASKINFOSTASKINFO_HPP_
#define ALIBABACLOUD_MODELS_QUERYPREDICTIVETASKINFORESPONSEBODYTASKINFOSTASKINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class QueryPredictiveTaskInfoResponseBodyTaskInfosTaskInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPredictiveTaskInfoResponseBodyTaskInfosTaskInfo& obj) { 
      DARABONBA_PTR_TO_JSON(MaxValue, maxValue_);
      DARABONBA_PTR_TO_JSON(MinValue, minValue_);
      DARABONBA_PTR_TO_JSON(Time, time_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPredictiveTaskInfoResponseBodyTaskInfosTaskInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxValue, maxValue_);
      DARABONBA_PTR_FROM_JSON(MinValue, minValue_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
    };
    QueryPredictiveTaskInfoResponseBodyTaskInfosTaskInfo() = default ;
    QueryPredictiveTaskInfoResponseBodyTaskInfosTaskInfo(const QueryPredictiveTaskInfoResponseBodyTaskInfosTaskInfo &) = default ;
    QueryPredictiveTaskInfoResponseBodyTaskInfosTaskInfo(QueryPredictiveTaskInfoResponseBodyTaskInfosTaskInfo &&) = default ;
    QueryPredictiveTaskInfoResponseBodyTaskInfosTaskInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPredictiveTaskInfoResponseBodyTaskInfosTaskInfo() = default ;
    QueryPredictiveTaskInfoResponseBodyTaskInfosTaskInfo& operator=(const QueryPredictiveTaskInfoResponseBodyTaskInfosTaskInfo &) = default ;
    QueryPredictiveTaskInfoResponseBodyTaskInfosTaskInfo& operator=(QueryPredictiveTaskInfoResponseBodyTaskInfosTaskInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxValue_ == nullptr
        && return this->minValue_ == nullptr && return this->time_ == nullptr; };
    // maxValue Field Functions 
    bool hasMaxValue() const { return this->maxValue_ != nullptr;};
    void deleteMaxValue() { this->maxValue_ = nullptr;};
    inline int32_t maxValue() const { DARABONBA_PTR_GET_DEFAULT(maxValue_, 0) };
    inline QueryPredictiveTaskInfoResponseBodyTaskInfosTaskInfo& setMaxValue(int32_t maxValue) { DARABONBA_PTR_SET_VALUE(maxValue_, maxValue) };


    // minValue Field Functions 
    bool hasMinValue() const { return this->minValue_ != nullptr;};
    void deleteMinValue() { this->minValue_ = nullptr;};
    inline int32_t minValue() const { DARABONBA_PTR_GET_DEFAULT(minValue_, 0) };
    inline QueryPredictiveTaskInfoResponseBodyTaskInfosTaskInfo& setMinValue(int32_t minValue) { DARABONBA_PTR_SET_VALUE(minValue_, minValue) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string time() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline QueryPredictiveTaskInfoResponseBodyTaskInfosTaskInfo& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    std::shared_ptr<int32_t> maxValue_ = nullptr;
    std::shared_ptr<int32_t> minValue_ = nullptr;
    std::shared_ptr<string> time_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
