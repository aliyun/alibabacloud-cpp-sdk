// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CTRIPORDERPUSHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CTRIPORDERPUSHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieiap_1_0
{
namespace Models
{
  class CtripOrderPushRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CtripOrderPushRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JourneyId, journeyId_);
      DARABONBA_PTR_TO_JSON(ScheduleItem, scheduleItem_);
      DARABONBA_PTR_TO_JSON(Uid, uid_);
    };
    friend void from_json(const Darabonba::Json& j, CtripOrderPushRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JourneyId, journeyId_);
      DARABONBA_PTR_FROM_JSON(ScheduleItem, scheduleItem_);
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
    };
    CtripOrderPushRequest() = default ;
    CtripOrderPushRequest(const CtripOrderPushRequest &) = default ;
    CtripOrderPushRequest(CtripOrderPushRequest &&) = default ;
    CtripOrderPushRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CtripOrderPushRequest() = default ;
    CtripOrderPushRequest& operator=(const CtripOrderPushRequest &) = default ;
    CtripOrderPushRequest& operator=(CtripOrderPushRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->journeyId_ == nullptr
        && this->scheduleItem_ == nullptr && this->uid_ == nullptr; };
    // journeyId Field Functions 
    bool hasJourneyId() const { return this->journeyId_ != nullptr;};
    void deleteJourneyId() { this->journeyId_ = nullptr;};
    inline string getJourneyId() const { DARABONBA_PTR_GET_DEFAULT(journeyId_, "") };
    inline CtripOrderPushRequest& setJourneyId(string journeyId) { DARABONBA_PTR_SET_VALUE(journeyId_, journeyId) };


    // scheduleItem Field Functions 
    bool hasScheduleItem() const { return this->scheduleItem_ != nullptr;};
    void deleteScheduleItem() { this->scheduleItem_ = nullptr;};
    inline string getScheduleItem() const { DARABONBA_PTR_GET_DEFAULT(scheduleItem_, "") };
    inline CtripOrderPushRequest& setScheduleItem(string scheduleItem) { DARABONBA_PTR_SET_VALUE(scheduleItem_, scheduleItem) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline CtripOrderPushRequest& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


  protected:
    shared_ptr<string> journeyId_ {};
    shared_ptr<string> scheduleItem_ {};
    shared_ptr<string> uid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieiap_1_0
#endif
