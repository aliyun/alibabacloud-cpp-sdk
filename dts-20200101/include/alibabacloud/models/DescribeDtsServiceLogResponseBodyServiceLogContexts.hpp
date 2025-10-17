// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDTSSERVICELOGRESPONSEBODYSERVICELOGCONTEXTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDTSSERVICELOGRESPONSEBODYSERVICELOGCONTEXTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeDtsServiceLogResponseBodyServiceLogContexts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDtsServiceLogResponseBodyServiceLogContexts& obj) { 
      DARABONBA_PTR_TO_JSON(Context, context_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(Time, time_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDtsServiceLogResponseBodyServiceLogContexts& obj) { 
      DARABONBA_PTR_FROM_JSON(Context, context_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
    };
    DescribeDtsServiceLogResponseBodyServiceLogContexts() = default ;
    DescribeDtsServiceLogResponseBodyServiceLogContexts(const DescribeDtsServiceLogResponseBodyServiceLogContexts &) = default ;
    DescribeDtsServiceLogResponseBodyServiceLogContexts(DescribeDtsServiceLogResponseBodyServiceLogContexts &&) = default ;
    DescribeDtsServiceLogResponseBodyServiceLogContexts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDtsServiceLogResponseBodyServiceLogContexts() = default ;
    DescribeDtsServiceLogResponseBodyServiceLogContexts& operator=(const DescribeDtsServiceLogResponseBodyServiceLogContexts &) = default ;
    DescribeDtsServiceLogResponseBodyServiceLogContexts& operator=(DescribeDtsServiceLogResponseBodyServiceLogContexts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->context_ == nullptr
        && return this->state_ == nullptr && return this->time_ == nullptr; };
    // context Field Functions 
    bool hasContext() const { return this->context_ != nullptr;};
    void deleteContext() { this->context_ = nullptr;};
    inline string context() const { DARABONBA_PTR_GET_DEFAULT(context_, "") };
    inline DescribeDtsServiceLogResponseBodyServiceLogContexts& setContext(string context) { DARABONBA_PTR_SET_VALUE(context_, context) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeDtsServiceLogResponseBodyServiceLogContexts& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string time() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline DescribeDtsServiceLogResponseBodyServiceLogContexts& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    // The log content.
    std::shared_ptr<string> context_ = nullptr;
    // The log level.
    std::shared_ptr<string> state_ = nullptr;
    // The time when the logs were collected. The time follows the ISO 8601 standard in the yyyy-MM-ddThh:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> time_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
