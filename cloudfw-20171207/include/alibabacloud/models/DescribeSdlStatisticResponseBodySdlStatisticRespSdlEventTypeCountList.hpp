// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESDLSTATISTICRESPONSEBODYSDLSTATISTICRESPSDLEVENTTYPECOUNTLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESDLSTATISTICRESPONSEBODYSDLSTATISTICRESPSDLEVENTTYPECOUNTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeSdlStatisticResponseBodySdlStatisticRespSdlEventTypeCountList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSdlStatisticResponseBodySdlStatisticRespSdlEventTypeCountList& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(EventType, eventType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSdlStatisticResponseBodySdlStatisticRespSdlEventTypeCountList& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(EventType, eventType_);
    };
    DescribeSdlStatisticResponseBodySdlStatisticRespSdlEventTypeCountList() = default ;
    DescribeSdlStatisticResponseBodySdlStatisticRespSdlEventTypeCountList(const DescribeSdlStatisticResponseBodySdlStatisticRespSdlEventTypeCountList &) = default ;
    DescribeSdlStatisticResponseBodySdlStatisticRespSdlEventTypeCountList(DescribeSdlStatisticResponseBodySdlStatisticRespSdlEventTypeCountList &&) = default ;
    DescribeSdlStatisticResponseBodySdlStatisticRespSdlEventTypeCountList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSdlStatisticResponseBodySdlStatisticRespSdlEventTypeCountList() = default ;
    DescribeSdlStatisticResponseBodySdlStatisticRespSdlEventTypeCountList& operator=(const DescribeSdlStatisticResponseBodySdlStatisticRespSdlEventTypeCountList &) = default ;
    DescribeSdlStatisticResponseBodySdlStatisticRespSdlEventTypeCountList& operator=(DescribeSdlStatisticResponseBodySdlStatisticRespSdlEventTypeCountList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->eventType_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline string count() const { DARABONBA_PTR_GET_DEFAULT(count_, "") };
    inline DescribeSdlStatisticResponseBodySdlStatisticRespSdlEventTypeCountList& setCount(string count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string eventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline DescribeSdlStatisticResponseBodySdlStatisticRespSdlEventTypeCountList& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


  protected:
    std::shared_ptr<string> count_ = nullptr;
    std::shared_ptr<string> eventType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
