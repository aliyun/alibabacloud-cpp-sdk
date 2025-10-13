// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HTTPAPIROUTEPOLICIESTIMEOUT_HPP_
#define ALIBABACLOUD_MODELS_HTTPAPIROUTEPOLICIESTIMEOUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class HttpApiRoutePoliciesTimeout : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HttpApiRoutePoliciesTimeout& obj) { 
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(TimeUnit, timeUnit_);
      DARABONBA_PTR_TO_JSON(UnitNum, unitNum_);
    };
    friend void from_json(const Darabonba::Json& j, HttpApiRoutePoliciesTimeout& obj) { 
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(TimeUnit, timeUnit_);
      DARABONBA_PTR_FROM_JSON(UnitNum, unitNum_);
    };
    HttpApiRoutePoliciesTimeout() = default ;
    HttpApiRoutePoliciesTimeout(const HttpApiRoutePoliciesTimeout &) = default ;
    HttpApiRoutePoliciesTimeout(HttpApiRoutePoliciesTimeout &&) = default ;
    HttpApiRoutePoliciesTimeout(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HttpApiRoutePoliciesTimeout() = default ;
    HttpApiRoutePoliciesTimeout& operator=(const HttpApiRoutePoliciesTimeout &) = default ;
    HttpApiRoutePoliciesTimeout& operator=(HttpApiRoutePoliciesTimeout &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enable_ == nullptr
        && return this->timeUnit_ == nullptr && return this->unitNum_ == nullptr; };
    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline HttpApiRoutePoliciesTimeout& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // timeUnit Field Functions 
    bool hasTimeUnit() const { return this->timeUnit_ != nullptr;};
    void deleteTimeUnit() { this->timeUnit_ = nullptr;};
    inline string timeUnit() const { DARABONBA_PTR_GET_DEFAULT(timeUnit_, "") };
    inline HttpApiRoutePoliciesTimeout& setTimeUnit(string timeUnit) { DARABONBA_PTR_SET_VALUE(timeUnit_, timeUnit) };


    // unitNum Field Functions 
    bool hasUnitNum() const { return this->unitNum_ != nullptr;};
    void deleteUnitNum() { this->unitNum_ = nullptr;};
    inline int64_t unitNum() const { DARABONBA_PTR_GET_DEFAULT(unitNum_, 0L) };
    inline HttpApiRoutePoliciesTimeout& setUnitNum(int64_t unitNum) { DARABONBA_PTR_SET_VALUE(unitNum_, unitNum) };


  protected:
    std::shared_ptr<bool> enable_ = nullptr;
    std::shared_ptr<string> timeUnit_ = nullptr;
    std::shared_ptr<int64_t> unitNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
