// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRIPCCINFOQUERYRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_TRIPCCINFOQUERYRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TripCCInfoQueryResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TripCCInfoQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(notifier, notifier_);
      DARABONBA_PTR_TO_JSON(notify_start_time, notifyStartTime_);
    };
    friend void from_json(const Darabonba::Json& j, TripCCInfoQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(notifier, notifier_);
      DARABONBA_PTR_FROM_JSON(notify_start_time, notifyStartTime_);
    };
    TripCCInfoQueryResponseBodyModule() = default ;
    TripCCInfoQueryResponseBodyModule(const TripCCInfoQueryResponseBodyModule &) = default ;
    TripCCInfoQueryResponseBodyModule(TripCCInfoQueryResponseBodyModule &&) = default ;
    TripCCInfoQueryResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TripCCInfoQueryResponseBodyModule() = default ;
    TripCCInfoQueryResponseBodyModule& operator=(const TripCCInfoQueryResponseBodyModule &) = default ;
    TripCCInfoQueryResponseBodyModule& operator=(TripCCInfoQueryResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->notifier_ != nullptr
        && this->notifyStartTime_ != nullptr; };
    // notifier Field Functions 
    bool hasNotifier() const { return this->notifier_ != nullptr;};
    void deleteNotifier() { this->notifier_ = nullptr;};
    inline string notifier() const { DARABONBA_PTR_GET_DEFAULT(notifier_, "") };
    inline TripCCInfoQueryResponseBodyModule& setNotifier(string notifier) { DARABONBA_PTR_SET_VALUE(notifier_, notifier) };


    // notifyStartTime Field Functions 
    bool hasNotifyStartTime() const { return this->notifyStartTime_ != nullptr;};
    void deleteNotifyStartTime() { this->notifyStartTime_ = nullptr;};
    inline int64_t notifyStartTime() const { DARABONBA_PTR_GET_DEFAULT(notifyStartTime_, 0L) };
    inline TripCCInfoQueryResponseBodyModule& setNotifyStartTime(int64_t notifyStartTime) { DARABONBA_PTR_SET_VALUE(notifyStartTime_, notifyStartTime) };


  protected:
    std::shared_ptr<string> notifier_ = nullptr;
    std::shared_ptr<int64_t> notifyStartTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
