// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDDOSSTATUSRESPONSEBODYDDOSSTATUS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDDOSSTATUSRESPONSEBODYDDOSSTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeDDoSStatusResponseBodyDDoSStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDDoSStatusResponseBodyDDoSStatus& obj) { 
      DARABONBA_PTR_TO_JSON(EventType, eventType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDDoSStatusResponseBodyDDoSStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(EventType, eventType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeDDoSStatusResponseBodyDDoSStatus() = default ;
    DescribeDDoSStatusResponseBodyDDoSStatus(const DescribeDDoSStatusResponseBodyDDoSStatus &) = default ;
    DescribeDDoSStatusResponseBodyDDoSStatus(DescribeDDoSStatusResponseBodyDDoSStatus &&) = default ;
    DescribeDDoSStatusResponseBodyDDoSStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDDoSStatusResponseBodyDDoSStatus() = default ;
    DescribeDDoSStatusResponseBodyDDoSStatus& operator=(const DescribeDDoSStatusResponseBodyDDoSStatus &) = default ;
    DescribeDDoSStatusResponseBodyDDoSStatus& operator=(DescribeDDoSStatusResponseBodyDDoSStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eventType_ != nullptr
        && this->status_ != nullptr; };
    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string eventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline DescribeDDoSStatusResponseBodyDDoSStatus& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDDoSStatusResponseBodyDDoSStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The type of events that are triggered by DDoS attacks. Valid values:
    // 
    // *   defense: traffic scrubbing events.
    // *   blackhole: blackhole filtering events.
    std::shared_ptr<string> eventType_ = nullptr;
    // Indicates whether DDoS attacks occur on specific domain names. Valid value:
    // 
    // *   **doing**: DDoS attacks occur on specific domain names.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
