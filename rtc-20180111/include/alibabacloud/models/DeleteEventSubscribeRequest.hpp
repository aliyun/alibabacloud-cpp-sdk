// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEEVENTSUBSCRIBEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEEVENTSUBSCRIBEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DeleteEventSubscribeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteEventSubscribeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(SubscribeId, subscribeId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteEventSubscribeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(SubscribeId, subscribeId_);
    };
    DeleteEventSubscribeRequest() = default ;
    DeleteEventSubscribeRequest(const DeleteEventSubscribeRequest &) = default ;
    DeleteEventSubscribeRequest(DeleteEventSubscribeRequest &&) = default ;
    DeleteEventSubscribeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteEventSubscribeRequest() = default ;
    DeleteEventSubscribeRequest& operator=(const DeleteEventSubscribeRequest &) = default ;
    DeleteEventSubscribeRequest& operator=(DeleteEventSubscribeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->ownerId_ == nullptr && return this->subscribeId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DeleteEventSubscribeRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DeleteEventSubscribeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // subscribeId Field Functions 
    bool hasSubscribeId() const { return this->subscribeId_ != nullptr;};
    void deleteSubscribeId() { this->subscribeId_ = nullptr;};
    inline string subscribeId() const { DARABONBA_PTR_GET_DEFAULT(subscribeId_, "") };
    inline DeleteEventSubscribeRequest& setSubscribeId(string subscribeId) { DARABONBA_PTR_SET_VALUE(subscribeId_, subscribeId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> subscribeId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
