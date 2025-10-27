// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHONEYPOTEVENTTRENDRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETHONEYPOTEVENTTRENDRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetHoneypotEventTrendResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHoneypotEventTrendResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(KeyName, keyName_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
    };
    friend void from_json(const Darabonba::Json& j, GetHoneypotEventTrendResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(KeyName, keyName_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
    };
    GetHoneypotEventTrendResponseBodyData() = default ;
    GetHoneypotEventTrendResponseBodyData(const GetHoneypotEventTrendResponseBodyData &) = default ;
    GetHoneypotEventTrendResponseBodyData(GetHoneypotEventTrendResponseBodyData &&) = default ;
    GetHoneypotEventTrendResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHoneypotEventTrendResponseBodyData() = default ;
    GetHoneypotEventTrendResponseBodyData& operator=(const GetHoneypotEventTrendResponseBodyData &) = default ;
    GetHoneypotEventTrendResponseBodyData& operator=(GetHoneypotEventTrendResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->keyName_ == nullptr && return this->timeStamp_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline GetHoneypotEventTrendResponseBodyData& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // keyName Field Functions 
    bool hasKeyName() const { return this->keyName_ != nullptr;};
    void deleteKeyName() { this->keyName_ = nullptr;};
    inline string keyName() const { DARABONBA_PTR_GET_DEFAULT(keyName_, "") };
    inline GetHoneypotEventTrendResponseBodyData& setKeyName(string keyName) { DARABONBA_PTR_SET_VALUE(keyName_, keyName) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline int64_t timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, 0L) };
    inline GetHoneypotEventTrendResponseBodyData& setTimeStamp(int64_t timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


  protected:
    // The number of attacks that occurred.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The name of the attack.
    std::shared_ptr<string> keyName_ = nullptr;
    // The timestamp when the attack event occurred.
    std::shared_ptr<int64_t> timeStamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
