// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTHREPORTINTERVAL_HPP_
#define ALIBABACLOUD_MODELS_AUTHREPORTINTERVAL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class AuthReportInterval : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AuthReportInterval& obj) { 
      DARABONBA_PTR_TO_JSON(TimeUnit, timeUnit_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, AuthReportInterval& obj) { 
      DARABONBA_PTR_FROM_JSON(TimeUnit, timeUnit_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    AuthReportInterval() = default ;
    AuthReportInterval(const AuthReportInterval &) = default ;
    AuthReportInterval(AuthReportInterval &&) = default ;
    AuthReportInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AuthReportInterval() = default ;
    AuthReportInterval& operator=(const AuthReportInterval &) = default ;
    AuthReportInterval& operator=(AuthReportInterval &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->timeUnit_ != nullptr
        && this->value_ != nullptr; };
    // timeUnit Field Functions 
    bool hasTimeUnit() const { return this->timeUnit_ != nullptr;};
    void deleteTimeUnit() { this->timeUnit_ = nullptr;};
    inline string timeUnit() const { DARABONBA_PTR_GET_DEFAULT(timeUnit_, "") };
    inline AuthReportInterval& setTimeUnit(string timeUnit) { DARABONBA_PTR_SET_VALUE(timeUnit_, timeUnit) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline int64_t value() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
    inline AuthReportInterval& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> timeUnit_ = nullptr;
    std::shared_ptr<int64_t> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
