// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIMAGECACHERESPONSEBODYEVENTS_HPP_
#define ALIBABACLOUD_MODELS_GETIMAGECACHERESPONSEBODYEVENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Acc20240402
{
namespace Models
{
  class GetImageCacheResponseBodyEvents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetImageCacheResponseBodyEvents& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(FirstTimestamp, firstTimestamp_);
      DARABONBA_PTR_TO_JSON(LastTimestamp, lastTimestamp_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetImageCacheResponseBodyEvents& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(FirstTimestamp, firstTimestamp_);
      DARABONBA_PTR_FROM_JSON(LastTimestamp, lastTimestamp_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetImageCacheResponseBodyEvents() = default ;
    GetImageCacheResponseBodyEvents(const GetImageCacheResponseBodyEvents &) = default ;
    GetImageCacheResponseBodyEvents(GetImageCacheResponseBodyEvents &&) = default ;
    GetImageCacheResponseBodyEvents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetImageCacheResponseBodyEvents() = default ;
    GetImageCacheResponseBodyEvents& operator=(const GetImageCacheResponseBodyEvents &) = default ;
    GetImageCacheResponseBodyEvents& operator=(GetImageCacheResponseBodyEvents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr
        && this->firstTimestamp_ != nullptr && this->lastTimestamp_ != nullptr && this->message_ != nullptr && this->name_ != nullptr && this->reason_ != nullptr
        && this->type_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline GetImageCacheResponseBodyEvents& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // firstTimestamp Field Functions 
    bool hasFirstTimestamp() const { return this->firstTimestamp_ != nullptr;};
    void deleteFirstTimestamp() { this->firstTimestamp_ = nullptr;};
    inline string firstTimestamp() const { DARABONBA_PTR_GET_DEFAULT(firstTimestamp_, "") };
    inline GetImageCacheResponseBodyEvents& setFirstTimestamp(string firstTimestamp) { DARABONBA_PTR_SET_VALUE(firstTimestamp_, firstTimestamp) };


    // lastTimestamp Field Functions 
    bool hasLastTimestamp() const { return this->lastTimestamp_ != nullptr;};
    void deleteLastTimestamp() { this->lastTimestamp_ = nullptr;};
    inline string lastTimestamp() const { DARABONBA_PTR_GET_DEFAULT(lastTimestamp_, "") };
    inline GetImageCacheResponseBodyEvents& setLastTimestamp(string lastTimestamp) { DARABONBA_PTR_SET_VALUE(lastTimestamp_, lastTimestamp) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetImageCacheResponseBodyEvents& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetImageCacheResponseBodyEvents& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline GetImageCacheResponseBodyEvents& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetImageCacheResponseBodyEvents& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<int32_t> count_ = nullptr;
    std::shared_ptr<string> firstTimestamp_ = nullptr;
    std::shared_ptr<string> lastTimestamp_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> reason_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Acc20240402
#endif
