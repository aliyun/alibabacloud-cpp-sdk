// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIRMNOTIFYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIRMNOTIFYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ConfirmNotifyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfirmNotifyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Confirmor, confirmor_);
      DARABONBA_PTR_TO_JSON(NotifyIdList, notifyIdList_);
    };
    friend void from_json(const Darabonba::Json& j, ConfirmNotifyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Confirmor, confirmor_);
      DARABONBA_PTR_FROM_JSON(NotifyIdList, notifyIdList_);
    };
    ConfirmNotifyRequest() = default ;
    ConfirmNotifyRequest(const ConfirmNotifyRequest &) = default ;
    ConfirmNotifyRequest(ConfirmNotifyRequest &&) = default ;
    ConfirmNotifyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfirmNotifyRequest() = default ;
    ConfirmNotifyRequest& operator=(const ConfirmNotifyRequest &) = default ;
    ConfirmNotifyRequest& operator=(ConfirmNotifyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->confirmor_ == nullptr
        && this->notifyIdList_ == nullptr; };
    // confirmor Field Functions 
    bool hasConfirmor() const { return this->confirmor_ != nullptr;};
    void deleteConfirmor() { this->confirmor_ = nullptr;};
    inline int64_t getConfirmor() const { DARABONBA_PTR_GET_DEFAULT(confirmor_, 0L) };
    inline ConfirmNotifyRequest& setConfirmor(int64_t confirmor) { DARABONBA_PTR_SET_VALUE(confirmor_, confirmor) };


    // notifyIdList Field Functions 
    bool hasNotifyIdList() const { return this->notifyIdList_ != nullptr;};
    void deleteNotifyIdList() { this->notifyIdList_ = nullptr;};
    inline const vector<int64_t> & getNotifyIdList() const { DARABONBA_PTR_GET_CONST(notifyIdList_, vector<int64_t>) };
    inline vector<int64_t> getNotifyIdList() { DARABONBA_PTR_GET(notifyIdList_, vector<int64_t>) };
    inline ConfirmNotifyRequest& setNotifyIdList(const vector<int64_t> & notifyIdList) { DARABONBA_PTR_SET_VALUE(notifyIdList_, notifyIdList) };
    inline ConfirmNotifyRequest& setNotifyIdList(vector<int64_t> && notifyIdList) { DARABONBA_PTR_SET_RVALUE(notifyIdList_, notifyIdList) };


  protected:
    // The ID of the Alibaba Cloud account that is used to confirm the notification. You can set this parameter to **0**, which indicates that the notification is confirmed by the system.
    // 
    // This parameter is required.
    shared_ptr<int64_t> confirmor_ {};
    // The notification IDs.
    // 
    // This parameter is required.
    shared_ptr<vector<int64_t>> notifyIdList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
