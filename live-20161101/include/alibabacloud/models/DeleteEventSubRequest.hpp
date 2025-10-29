// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEEVENTSUBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEEVENTSUBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DeleteEventSubRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteEventSubRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(SubscribeId, subscribeId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteEventSubRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(SubscribeId, subscribeId_);
    };
    DeleteEventSubRequest() = default ;
    DeleteEventSubRequest(const DeleteEventSubRequest &) = default ;
    DeleteEventSubRequest(DeleteEventSubRequest &&) = default ;
    DeleteEventSubRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteEventSubRequest() = default ;
    DeleteEventSubRequest& operator=(const DeleteEventSubRequest &) = default ;
    DeleteEventSubRequest& operator=(DeleteEventSubRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->subscribeId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DeleteEventSubRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // subscribeId Field Functions 
    bool hasSubscribeId() const { return this->subscribeId_ != nullptr;};
    void deleteSubscribeId() { this->subscribeId_ = nullptr;};
    inline string subscribeId() const { DARABONBA_PTR_GET_DEFAULT(subscribeId_, "") };
    inline DeleteEventSubRequest& setSubscribeId(string subscribeId) { DARABONBA_PTR_SET_VALUE(subscribeId_, subscribeId) };


  protected:
    // The ID of the application.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The subscription ID. You can obtain the ID from the response to the [CreateEventSub](https://help.aliyun.com/document_detail/2848209.html) operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> subscribeId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
