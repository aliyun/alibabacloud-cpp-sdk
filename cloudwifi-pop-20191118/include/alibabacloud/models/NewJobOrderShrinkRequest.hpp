// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NEWJOBORDERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_NEWJOBORDERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudwifiPop20191118
{
namespace Models
{
  class NewJobOrderShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NewJobOrderShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppCode, appCode_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(CallbackUrl, callbackUrl_);
      DARABONBA_PTR_TO_JSON(ChangeType, changeType_);
      DARABONBA_PTR_TO_JSON(ClientSystem, clientSystem_);
      DARABONBA_PTR_TO_JSON(ClientUniqueId, clientUniqueId_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(Params, paramsShrink_);
      DARABONBA_PTR_TO_JSON(ReferUrl, referUrl_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, NewJobOrderShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(CallbackUrl, callbackUrl_);
      DARABONBA_PTR_FROM_JSON(ChangeType, changeType_);
      DARABONBA_PTR_FROM_JSON(ClientSystem, clientSystem_);
      DARABONBA_PTR_FROM_JSON(ClientUniqueId, clientUniqueId_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(Params, paramsShrink_);
      DARABONBA_PTR_FROM_JSON(ReferUrl, referUrl_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    NewJobOrderShrinkRequest() = default ;
    NewJobOrderShrinkRequest(const NewJobOrderShrinkRequest &) = default ;
    NewJobOrderShrinkRequest(NewJobOrderShrinkRequest &&) = default ;
    NewJobOrderShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NewJobOrderShrinkRequest() = default ;
    NewJobOrderShrinkRequest& operator=(const NewJobOrderShrinkRequest &) = default ;
    NewJobOrderShrinkRequest& operator=(NewJobOrderShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appCode_ == nullptr
        && this->appName_ == nullptr && this->callbackUrl_ == nullptr && this->changeType_ == nullptr && this->clientSystem_ == nullptr && this->clientUniqueId_ == nullptr
        && this->creator_ == nullptr && this->paramsShrink_ == nullptr && this->referUrl_ == nullptr && this->requestId_ == nullptr && this->title_ == nullptr; };
    // appCode Field Functions 
    bool hasAppCode() const { return this->appCode_ != nullptr;};
    void deleteAppCode() { this->appCode_ = nullptr;};
    inline string getAppCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
    inline NewJobOrderShrinkRequest& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline NewJobOrderShrinkRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // callbackUrl Field Functions 
    bool hasCallbackUrl() const { return this->callbackUrl_ != nullptr;};
    void deleteCallbackUrl() { this->callbackUrl_ = nullptr;};
    inline string getCallbackUrl() const { DARABONBA_PTR_GET_DEFAULT(callbackUrl_, "") };
    inline NewJobOrderShrinkRequest& setCallbackUrl(string callbackUrl) { DARABONBA_PTR_SET_VALUE(callbackUrl_, callbackUrl) };


    // changeType Field Functions 
    bool hasChangeType() const { return this->changeType_ != nullptr;};
    void deleteChangeType() { this->changeType_ = nullptr;};
    inline string getChangeType() const { DARABONBA_PTR_GET_DEFAULT(changeType_, "") };
    inline NewJobOrderShrinkRequest& setChangeType(string changeType) { DARABONBA_PTR_SET_VALUE(changeType_, changeType) };


    // clientSystem Field Functions 
    bool hasClientSystem() const { return this->clientSystem_ != nullptr;};
    void deleteClientSystem() { this->clientSystem_ = nullptr;};
    inline string getClientSystem() const { DARABONBA_PTR_GET_DEFAULT(clientSystem_, "") };
    inline NewJobOrderShrinkRequest& setClientSystem(string clientSystem) { DARABONBA_PTR_SET_VALUE(clientSystem_, clientSystem) };


    // clientUniqueId Field Functions 
    bool hasClientUniqueId() const { return this->clientUniqueId_ != nullptr;};
    void deleteClientUniqueId() { this->clientUniqueId_ = nullptr;};
    inline string getClientUniqueId() const { DARABONBA_PTR_GET_DEFAULT(clientUniqueId_, "") };
    inline NewJobOrderShrinkRequest& setClientUniqueId(string clientUniqueId) { DARABONBA_PTR_SET_VALUE(clientUniqueId_, clientUniqueId) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline NewJobOrderShrinkRequest& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // paramsShrink Field Functions 
    bool hasParamsShrink() const { return this->paramsShrink_ != nullptr;};
    void deleteParamsShrink() { this->paramsShrink_ = nullptr;};
    inline string getParamsShrink() const { DARABONBA_PTR_GET_DEFAULT(paramsShrink_, "") };
    inline NewJobOrderShrinkRequest& setParamsShrink(string paramsShrink) { DARABONBA_PTR_SET_VALUE(paramsShrink_, paramsShrink) };


    // referUrl Field Functions 
    bool hasReferUrl() const { return this->referUrl_ != nullptr;};
    void deleteReferUrl() { this->referUrl_ = nullptr;};
    inline string getReferUrl() const { DARABONBA_PTR_GET_DEFAULT(referUrl_, "") };
    inline NewJobOrderShrinkRequest& setReferUrl(string referUrl) { DARABONBA_PTR_SET_VALUE(referUrl_, referUrl) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline NewJobOrderShrinkRequest& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline NewJobOrderShrinkRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    shared_ptr<string> appCode_ {};
    shared_ptr<string> appName_ {};
    shared_ptr<string> callbackUrl_ {};
    // This parameter is required.
    shared_ptr<string> changeType_ {};
    // This parameter is required.
    shared_ptr<string> clientSystem_ {};
    // This parameter is required.
    shared_ptr<string> clientUniqueId_ {};
    shared_ptr<string> creator_ {};
    // This parameter is required.
    shared_ptr<string> paramsShrink_ {};
    shared_ptr<string> referUrl_ {};
    // This parameter is required.
    shared_ptr<string> requestId_ {};
    // This parameter is required.
    shared_ptr<string> title_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudwifiPop20191118
#endif
