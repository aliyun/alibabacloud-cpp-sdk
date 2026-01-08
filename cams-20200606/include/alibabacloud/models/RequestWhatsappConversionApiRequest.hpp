// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REQUESTWHATSAPPCONVERSIONAPIREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REQUESTWHATSAPPCONVERSIONAPIREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class RequestWhatsappConversionApiRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RequestWhatsappConversionApiRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageId, pageId_);
      DARABONBA_PTR_TO_JSON(RequestData, requestData_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, RequestWhatsappConversionApiRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageId, pageId_);
      DARABONBA_PTR_FROM_JSON(RequestData, requestData_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    RequestWhatsappConversionApiRequest() = default ;
    RequestWhatsappConversionApiRequest(const RequestWhatsappConversionApiRequest &) = default ;
    RequestWhatsappConversionApiRequest(RequestWhatsappConversionApiRequest &&) = default ;
    RequestWhatsappConversionApiRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RequestWhatsappConversionApiRequest() = default ;
    RequestWhatsappConversionApiRequest& operator=(const RequestWhatsappConversionApiRequest &) = default ;
    RequestWhatsappConversionApiRequest& operator=(RequestWhatsappConversionApiRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RequestData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RequestData& obj) { 
        DARABONBA_PTR_TO_JSON(ActionSource, actionSource_);
        DARABONBA_ANY_TO_JSON(AppData, appData_);
        DARABONBA_ANY_TO_JSON(CustomData, customData_);
        DARABONBA_PTR_TO_JSON(DataProcessingOptions, dataProcessingOptions_);
        DARABONBA_PTR_TO_JSON(DataProcessingOptionsCountry, dataProcessingOptionsCountry_);
        DARABONBA_PTR_TO_JSON(DataProcessingOptionsState, dataProcessingOptionsState_);
        DARABONBA_PTR_TO_JSON(EventId, eventId_);
        DARABONBA_PTR_TO_JSON(EventName, eventName_);
        DARABONBA_PTR_TO_JSON(EventSourceUrl, eventSourceUrl_);
        DARABONBA_PTR_TO_JSON(EventTime, eventTime_);
        DARABONBA_ANY_TO_JSON(ExtInfo, extInfo_);
        DARABONBA_PTR_TO_JSON(MessagingChannel, messagingChannel_);
        DARABONBA_PTR_TO_JSON(OptOut, optOut_);
        DARABONBA_ANY_TO_JSON(UserData, userData_);
      };
      friend void from_json(const Darabonba::Json& j, RequestData& obj) { 
        DARABONBA_PTR_FROM_JSON(ActionSource, actionSource_);
        DARABONBA_ANY_FROM_JSON(AppData, appData_);
        DARABONBA_ANY_FROM_JSON(CustomData, customData_);
        DARABONBA_PTR_FROM_JSON(DataProcessingOptions, dataProcessingOptions_);
        DARABONBA_PTR_FROM_JSON(DataProcessingOptionsCountry, dataProcessingOptionsCountry_);
        DARABONBA_PTR_FROM_JSON(DataProcessingOptionsState, dataProcessingOptionsState_);
        DARABONBA_PTR_FROM_JSON(EventId, eventId_);
        DARABONBA_PTR_FROM_JSON(EventName, eventName_);
        DARABONBA_PTR_FROM_JSON(EventSourceUrl, eventSourceUrl_);
        DARABONBA_PTR_FROM_JSON(EventTime, eventTime_);
        DARABONBA_ANY_FROM_JSON(ExtInfo, extInfo_);
        DARABONBA_PTR_FROM_JSON(MessagingChannel, messagingChannel_);
        DARABONBA_PTR_FROM_JSON(OptOut, optOut_);
        DARABONBA_ANY_FROM_JSON(UserData, userData_);
      };
      RequestData() = default ;
      RequestData(const RequestData &) = default ;
      RequestData(RequestData &&) = default ;
      RequestData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RequestData() = default ;
      RequestData& operator=(const RequestData &) = default ;
      RequestData& operator=(RequestData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->actionSource_ == nullptr
        && this->appData_ == nullptr && this->customData_ == nullptr && this->dataProcessingOptions_ == nullptr && this->dataProcessingOptionsCountry_ == nullptr && this->dataProcessingOptionsState_ == nullptr
        && this->eventId_ == nullptr && this->eventName_ == nullptr && this->eventSourceUrl_ == nullptr && this->eventTime_ == nullptr && this->extInfo_ == nullptr
        && this->messagingChannel_ == nullptr && this->optOut_ == nullptr && this->userData_ == nullptr; };
      // actionSource Field Functions 
      bool hasActionSource() const { return this->actionSource_ != nullptr;};
      void deleteActionSource() { this->actionSource_ = nullptr;};
      inline string getActionSource() const { DARABONBA_PTR_GET_DEFAULT(actionSource_, "") };
      inline RequestData& setActionSource(string actionSource) { DARABONBA_PTR_SET_VALUE(actionSource_, actionSource) };


      // appData Field Functions 
      bool hasAppData() const { return this->appData_ != nullptr;};
      void deleteAppData() { this->appData_ = nullptr;};
      inline       const Darabonba::Json & getAppData() const { DARABONBA_GET(appData_) };
      Darabonba::Json & getAppData() { DARABONBA_GET(appData_) };
      inline RequestData& setAppData(const Darabonba::Json & appData) { DARABONBA_SET_VALUE(appData_, appData) };
      inline RequestData& setAppData(Darabonba::Json && appData) { DARABONBA_SET_RVALUE(appData_, appData) };


      // customData Field Functions 
      bool hasCustomData() const { return this->customData_ != nullptr;};
      void deleteCustomData() { this->customData_ = nullptr;};
      inline       const Darabonba::Json & getCustomData() const { DARABONBA_GET(customData_) };
      Darabonba::Json & getCustomData() { DARABONBA_GET(customData_) };
      inline RequestData& setCustomData(const Darabonba::Json & customData) { DARABONBA_SET_VALUE(customData_, customData) };
      inline RequestData& setCustomData(Darabonba::Json && customData) { DARABONBA_SET_RVALUE(customData_, customData) };


      // dataProcessingOptions Field Functions 
      bool hasDataProcessingOptions() const { return this->dataProcessingOptions_ != nullptr;};
      void deleteDataProcessingOptions() { this->dataProcessingOptions_ = nullptr;};
      inline const vector<string> & getDataProcessingOptions() const { DARABONBA_PTR_GET_CONST(dataProcessingOptions_, vector<string>) };
      inline vector<string> getDataProcessingOptions() { DARABONBA_PTR_GET(dataProcessingOptions_, vector<string>) };
      inline RequestData& setDataProcessingOptions(const vector<string> & dataProcessingOptions) { DARABONBA_PTR_SET_VALUE(dataProcessingOptions_, dataProcessingOptions) };
      inline RequestData& setDataProcessingOptions(vector<string> && dataProcessingOptions) { DARABONBA_PTR_SET_RVALUE(dataProcessingOptions_, dataProcessingOptions) };


      // dataProcessingOptionsCountry Field Functions 
      bool hasDataProcessingOptionsCountry() const { return this->dataProcessingOptionsCountry_ != nullptr;};
      void deleteDataProcessingOptionsCountry() { this->dataProcessingOptionsCountry_ = nullptr;};
      inline int64_t getDataProcessingOptionsCountry() const { DARABONBA_PTR_GET_DEFAULT(dataProcessingOptionsCountry_, 0L) };
      inline RequestData& setDataProcessingOptionsCountry(int64_t dataProcessingOptionsCountry) { DARABONBA_PTR_SET_VALUE(dataProcessingOptionsCountry_, dataProcessingOptionsCountry) };


      // dataProcessingOptionsState Field Functions 
      bool hasDataProcessingOptionsState() const { return this->dataProcessingOptionsState_ != nullptr;};
      void deleteDataProcessingOptionsState() { this->dataProcessingOptionsState_ = nullptr;};
      inline int64_t getDataProcessingOptionsState() const { DARABONBA_PTR_GET_DEFAULT(dataProcessingOptionsState_, 0L) };
      inline RequestData& setDataProcessingOptionsState(int64_t dataProcessingOptionsState) { DARABONBA_PTR_SET_VALUE(dataProcessingOptionsState_, dataProcessingOptionsState) };


      // eventId Field Functions 
      bool hasEventId() const { return this->eventId_ != nullptr;};
      void deleteEventId() { this->eventId_ = nullptr;};
      inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
      inline RequestData& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


      // eventName Field Functions 
      bool hasEventName() const { return this->eventName_ != nullptr;};
      void deleteEventName() { this->eventName_ = nullptr;};
      inline string getEventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
      inline RequestData& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


      // eventSourceUrl Field Functions 
      bool hasEventSourceUrl() const { return this->eventSourceUrl_ != nullptr;};
      void deleteEventSourceUrl() { this->eventSourceUrl_ = nullptr;};
      inline string getEventSourceUrl() const { DARABONBA_PTR_GET_DEFAULT(eventSourceUrl_, "") };
      inline RequestData& setEventSourceUrl(string eventSourceUrl) { DARABONBA_PTR_SET_VALUE(eventSourceUrl_, eventSourceUrl) };


      // eventTime Field Functions 
      bool hasEventTime() const { return this->eventTime_ != nullptr;};
      void deleteEventTime() { this->eventTime_ = nullptr;};
      inline int64_t getEventTime() const { DARABONBA_PTR_GET_DEFAULT(eventTime_, 0L) };
      inline RequestData& setEventTime(int64_t eventTime) { DARABONBA_PTR_SET_VALUE(eventTime_, eventTime) };


      // extInfo Field Functions 
      bool hasExtInfo() const { return this->extInfo_ != nullptr;};
      void deleteExtInfo() { this->extInfo_ = nullptr;};
      inline       const Darabonba::Json & getExtInfo() const { DARABONBA_GET(extInfo_) };
      Darabonba::Json & getExtInfo() { DARABONBA_GET(extInfo_) };
      inline RequestData& setExtInfo(const Darabonba::Json & extInfo) { DARABONBA_SET_VALUE(extInfo_, extInfo) };
      inline RequestData& setExtInfo(Darabonba::Json && extInfo) { DARABONBA_SET_RVALUE(extInfo_, extInfo) };


      // messagingChannel Field Functions 
      bool hasMessagingChannel() const { return this->messagingChannel_ != nullptr;};
      void deleteMessagingChannel() { this->messagingChannel_ = nullptr;};
      inline string getMessagingChannel() const { DARABONBA_PTR_GET_DEFAULT(messagingChannel_, "") };
      inline RequestData& setMessagingChannel(string messagingChannel) { DARABONBA_PTR_SET_VALUE(messagingChannel_, messagingChannel) };


      // optOut Field Functions 
      bool hasOptOut() const { return this->optOut_ != nullptr;};
      void deleteOptOut() { this->optOut_ = nullptr;};
      inline bool getOptOut() const { DARABONBA_PTR_GET_DEFAULT(optOut_, false) };
      inline RequestData& setOptOut(bool optOut) { DARABONBA_PTR_SET_VALUE(optOut_, optOut) };


      // userData Field Functions 
      bool hasUserData() const { return this->userData_ != nullptr;};
      void deleteUserData() { this->userData_ = nullptr;};
      inline       const Darabonba::Json & getUserData() const { DARABONBA_GET(userData_) };
      Darabonba::Json & getUserData() { DARABONBA_GET(userData_) };
      inline RequestData& setUserData(const Darabonba::Json & userData) { DARABONBA_SET_VALUE(userData_, userData) };
      inline RequestData& setUserData(Darabonba::Json && userData) { DARABONBA_SET_RVALUE(userData_, userData) };


    protected:
      // This parameter is required.
      shared_ptr<string> actionSource_ {};
      Darabonba::Json appData_ {};
      Darabonba::Json customData_ {};
      shared_ptr<vector<string>> dataProcessingOptions_ {};
      shared_ptr<int64_t> dataProcessingOptionsCountry_ {};
      shared_ptr<int64_t> dataProcessingOptionsState_ {};
      shared_ptr<string> eventId_ {};
      // This parameter is required.
      shared_ptr<string> eventName_ {};
      shared_ptr<string> eventSourceUrl_ {};
      // This parameter is required.
      shared_ptr<int64_t> eventTime_ {};
      Darabonba::Json extInfo_ {};
      shared_ptr<string> messagingChannel_ {};
      shared_ptr<bool> optOut_ {};
      // This parameter is required.
      Darabonba::Json userData_ {};
    };

    virtual bool empty() const override { return this->custSpaceId_ == nullptr
        && this->ownerId_ == nullptr && this->pageId_ == nullptr && this->requestData_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // custSpaceId Field Functions 
    bool hasCustSpaceId() const { return this->custSpaceId_ != nullptr;};
    void deleteCustSpaceId() { this->custSpaceId_ = nullptr;};
    inline string getCustSpaceId() const { DARABONBA_PTR_GET_DEFAULT(custSpaceId_, "") };
    inline RequestWhatsappConversionApiRequest& setCustSpaceId(string custSpaceId) { DARABONBA_PTR_SET_VALUE(custSpaceId_, custSpaceId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline RequestWhatsappConversionApiRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageId Field Functions 
    bool hasPageId() const { return this->pageId_ != nullptr;};
    void deletePageId() { this->pageId_ = nullptr;};
    inline string getPageId() const { DARABONBA_PTR_GET_DEFAULT(pageId_, "") };
    inline RequestWhatsappConversionApiRequest& setPageId(string pageId) { DARABONBA_PTR_SET_VALUE(pageId_, pageId) };


    // requestData Field Functions 
    bool hasRequestData() const { return this->requestData_ != nullptr;};
    void deleteRequestData() { this->requestData_ = nullptr;};
    inline const vector<RequestWhatsappConversionApiRequest::RequestData> & getRequestData() const { DARABONBA_PTR_GET_CONST(requestData_, vector<RequestWhatsappConversionApiRequest::RequestData>) };
    inline vector<RequestWhatsappConversionApiRequest::RequestData> getRequestData() { DARABONBA_PTR_GET(requestData_, vector<RequestWhatsappConversionApiRequest::RequestData>) };
    inline RequestWhatsappConversionApiRequest& setRequestData(const vector<RequestWhatsappConversionApiRequest::RequestData> & requestData) { DARABONBA_PTR_SET_VALUE(requestData_, requestData) };
    inline RequestWhatsappConversionApiRequest& setRequestData(vector<RequestWhatsappConversionApiRequest::RequestData> && requestData) { DARABONBA_PTR_SET_RVALUE(requestData_, requestData) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline RequestWhatsappConversionApiRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline RequestWhatsappConversionApiRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // This parameter is required.
    shared_ptr<string> custSpaceId_ {};
    shared_ptr<int64_t> ownerId_ {};
    // This parameter is required.
    shared_ptr<string> pageId_ {};
    shared_ptr<vector<RequestWhatsappConversionApiRequest::RequestData>> requestData_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
