// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIRMNOTIFYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIRMNOTIFYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ConfirmNotifyShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfirmNotifyShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Confirmor, confirmor_);
      DARABONBA_PTR_TO_JSON(NotifyIdList, notifyIdListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ConfirmNotifyShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Confirmor, confirmor_);
      DARABONBA_PTR_FROM_JSON(NotifyIdList, notifyIdListShrink_);
    };
    ConfirmNotifyShrinkRequest() = default ;
    ConfirmNotifyShrinkRequest(const ConfirmNotifyShrinkRequest &) = default ;
    ConfirmNotifyShrinkRequest(ConfirmNotifyShrinkRequest &&) = default ;
    ConfirmNotifyShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfirmNotifyShrinkRequest() = default ;
    ConfirmNotifyShrinkRequest& operator=(const ConfirmNotifyShrinkRequest &) = default ;
    ConfirmNotifyShrinkRequest& operator=(ConfirmNotifyShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->confirmor_ == nullptr
        && this->notifyIdListShrink_ == nullptr; };
    // confirmor Field Functions 
    bool hasConfirmor() const { return this->confirmor_ != nullptr;};
    void deleteConfirmor() { this->confirmor_ = nullptr;};
    inline int64_t getConfirmor() const { DARABONBA_PTR_GET_DEFAULT(confirmor_, 0L) };
    inline ConfirmNotifyShrinkRequest& setConfirmor(int64_t confirmor) { DARABONBA_PTR_SET_VALUE(confirmor_, confirmor) };


    // notifyIdListShrink Field Functions 
    bool hasNotifyIdListShrink() const { return this->notifyIdListShrink_ != nullptr;};
    void deleteNotifyIdListShrink() { this->notifyIdListShrink_ = nullptr;};
    inline string getNotifyIdListShrink() const { DARABONBA_PTR_GET_DEFAULT(notifyIdListShrink_, "") };
    inline ConfirmNotifyShrinkRequest& setNotifyIdListShrink(string notifyIdListShrink) { DARABONBA_PTR_SET_VALUE(notifyIdListShrink_, notifyIdListShrink) };


  protected:
    // The ID of the Alibaba Cloud account that is used to confirm the notification. You can set this parameter to **0**, which indicates that the notification is confirmed by the system.
    // 
    // This parameter is required.
    shared_ptr<int64_t> confirmor_ {};
    // The notification IDs.
    // 
    // This parameter is required.
    shared_ptr<string> notifyIdListShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
