// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMESSAGECAMPAIGNINSIGHTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMESSAGECAMPAIGNINSIGHTSRESPONSEBODY_HPP_
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
  class GetMessageCampaignInsightsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMessageCampaignInsightsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetMessageCampaignInsightsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetMessageCampaignInsightsResponseBody() = default ;
    GetMessageCampaignInsightsResponseBody(const GetMessageCampaignInsightsResponseBody &) = default ;
    GetMessageCampaignInsightsResponseBody(GetMessageCampaignInsightsResponseBody &&) = default ;
    GetMessageCampaignInsightsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMessageCampaignInsightsResponseBody() = default ;
    GetMessageCampaignInsightsResponseBody& operator=(const GetMessageCampaignInsightsResponseBody &) = default ;
    GetMessageCampaignInsightsResponseBody& operator=(GetMessageCampaignInsightsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DateStart, dateStart_);
        DARABONBA_PTR_TO_JSON(DateStop, dateStop_);
        DARABONBA_PTR_TO_JSON(MarketingMessagesCostPerDelivered, marketingMessagesCostPerDelivered_);
        DARABONBA_PTR_TO_JSON(MarketingMessagesCostPerLinkBtnClick, marketingMessagesCostPerLinkBtnClick_);
        DARABONBA_PTR_TO_JSON(MarketingMessagesDelivered, marketingMessagesDelivered_);
        DARABONBA_PTR_TO_JSON(MarketingMessagesDeliveryRate, marketingMessagesDeliveryRate_);
        DARABONBA_PTR_TO_JSON(MarketingMessagesLinkBtnClick, marketingMessagesLinkBtnClick_);
        DARABONBA_PTR_TO_JSON(MarketingMessagesLinkBtnClickRate, marketingMessagesLinkBtnClickRate_);
        DARABONBA_PTR_TO_JSON(MarketingMessagesReadRate, marketingMessagesReadRate_);
        DARABONBA_PTR_TO_JSON(MarketingMessagesSpend, marketingMessagesSpend_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DateStart, dateStart_);
        DARABONBA_PTR_FROM_JSON(DateStop, dateStop_);
        DARABONBA_PTR_FROM_JSON(MarketingMessagesCostPerDelivered, marketingMessagesCostPerDelivered_);
        DARABONBA_PTR_FROM_JSON(MarketingMessagesCostPerLinkBtnClick, marketingMessagesCostPerLinkBtnClick_);
        DARABONBA_PTR_FROM_JSON(MarketingMessagesDelivered, marketingMessagesDelivered_);
        DARABONBA_PTR_FROM_JSON(MarketingMessagesDeliveryRate, marketingMessagesDeliveryRate_);
        DARABONBA_PTR_FROM_JSON(MarketingMessagesLinkBtnClick, marketingMessagesLinkBtnClick_);
        DARABONBA_PTR_FROM_JSON(MarketingMessagesLinkBtnClickRate, marketingMessagesLinkBtnClickRate_);
        DARABONBA_PTR_FROM_JSON(MarketingMessagesReadRate, marketingMessagesReadRate_);
        DARABONBA_PTR_FROM_JSON(MarketingMessagesSpend, marketingMessagesSpend_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dateStart_ == nullptr
        && this->dateStop_ == nullptr && this->marketingMessagesCostPerDelivered_ == nullptr && this->marketingMessagesCostPerLinkBtnClick_ == nullptr && this->marketingMessagesDelivered_ == nullptr && this->marketingMessagesDeliveryRate_ == nullptr
        && this->marketingMessagesLinkBtnClick_ == nullptr && this->marketingMessagesLinkBtnClickRate_ == nullptr && this->marketingMessagesReadRate_ == nullptr && this->marketingMessagesSpend_ == nullptr; };
      // dateStart Field Functions 
      bool hasDateStart() const { return this->dateStart_ != nullptr;};
      void deleteDateStart() { this->dateStart_ = nullptr;};
      inline string getDateStart() const { DARABONBA_PTR_GET_DEFAULT(dateStart_, "") };
      inline Data& setDateStart(string dateStart) { DARABONBA_PTR_SET_VALUE(dateStart_, dateStart) };


      // dateStop Field Functions 
      bool hasDateStop() const { return this->dateStop_ != nullptr;};
      void deleteDateStop() { this->dateStop_ = nullptr;};
      inline string getDateStop() const { DARABONBA_PTR_GET_DEFAULT(dateStop_, "") };
      inline Data& setDateStop(string dateStop) { DARABONBA_PTR_SET_VALUE(dateStop_, dateStop) };


      // marketingMessagesCostPerDelivered Field Functions 
      bool hasMarketingMessagesCostPerDelivered() const { return this->marketingMessagesCostPerDelivered_ != nullptr;};
      void deleteMarketingMessagesCostPerDelivered() { this->marketingMessagesCostPerDelivered_ = nullptr;};
      inline string getMarketingMessagesCostPerDelivered() const { DARABONBA_PTR_GET_DEFAULT(marketingMessagesCostPerDelivered_, "") };
      inline Data& setMarketingMessagesCostPerDelivered(string marketingMessagesCostPerDelivered) { DARABONBA_PTR_SET_VALUE(marketingMessagesCostPerDelivered_, marketingMessagesCostPerDelivered) };


      // marketingMessagesCostPerLinkBtnClick Field Functions 
      bool hasMarketingMessagesCostPerLinkBtnClick() const { return this->marketingMessagesCostPerLinkBtnClick_ != nullptr;};
      void deleteMarketingMessagesCostPerLinkBtnClick() { this->marketingMessagesCostPerLinkBtnClick_ = nullptr;};
      inline string getMarketingMessagesCostPerLinkBtnClick() const { DARABONBA_PTR_GET_DEFAULT(marketingMessagesCostPerLinkBtnClick_, "") };
      inline Data& setMarketingMessagesCostPerLinkBtnClick(string marketingMessagesCostPerLinkBtnClick) { DARABONBA_PTR_SET_VALUE(marketingMessagesCostPerLinkBtnClick_, marketingMessagesCostPerLinkBtnClick) };


      // marketingMessagesDelivered Field Functions 
      bool hasMarketingMessagesDelivered() const { return this->marketingMessagesDelivered_ != nullptr;};
      void deleteMarketingMessagesDelivered() { this->marketingMessagesDelivered_ = nullptr;};
      inline string getMarketingMessagesDelivered() const { DARABONBA_PTR_GET_DEFAULT(marketingMessagesDelivered_, "") };
      inline Data& setMarketingMessagesDelivered(string marketingMessagesDelivered) { DARABONBA_PTR_SET_VALUE(marketingMessagesDelivered_, marketingMessagesDelivered) };


      // marketingMessagesDeliveryRate Field Functions 
      bool hasMarketingMessagesDeliveryRate() const { return this->marketingMessagesDeliveryRate_ != nullptr;};
      void deleteMarketingMessagesDeliveryRate() { this->marketingMessagesDeliveryRate_ = nullptr;};
      inline string getMarketingMessagesDeliveryRate() const { DARABONBA_PTR_GET_DEFAULT(marketingMessagesDeliveryRate_, "") };
      inline Data& setMarketingMessagesDeliveryRate(string marketingMessagesDeliveryRate) { DARABONBA_PTR_SET_VALUE(marketingMessagesDeliveryRate_, marketingMessagesDeliveryRate) };


      // marketingMessagesLinkBtnClick Field Functions 
      bool hasMarketingMessagesLinkBtnClick() const { return this->marketingMessagesLinkBtnClick_ != nullptr;};
      void deleteMarketingMessagesLinkBtnClick() { this->marketingMessagesLinkBtnClick_ = nullptr;};
      inline string getMarketingMessagesLinkBtnClick() const { DARABONBA_PTR_GET_DEFAULT(marketingMessagesLinkBtnClick_, "") };
      inline Data& setMarketingMessagesLinkBtnClick(string marketingMessagesLinkBtnClick) { DARABONBA_PTR_SET_VALUE(marketingMessagesLinkBtnClick_, marketingMessagesLinkBtnClick) };


      // marketingMessagesLinkBtnClickRate Field Functions 
      bool hasMarketingMessagesLinkBtnClickRate() const { return this->marketingMessagesLinkBtnClickRate_ != nullptr;};
      void deleteMarketingMessagesLinkBtnClickRate() { this->marketingMessagesLinkBtnClickRate_ = nullptr;};
      inline string getMarketingMessagesLinkBtnClickRate() const { DARABONBA_PTR_GET_DEFAULT(marketingMessagesLinkBtnClickRate_, "") };
      inline Data& setMarketingMessagesLinkBtnClickRate(string marketingMessagesLinkBtnClickRate) { DARABONBA_PTR_SET_VALUE(marketingMessagesLinkBtnClickRate_, marketingMessagesLinkBtnClickRate) };


      // marketingMessagesReadRate Field Functions 
      bool hasMarketingMessagesReadRate() const { return this->marketingMessagesReadRate_ != nullptr;};
      void deleteMarketingMessagesReadRate() { this->marketingMessagesReadRate_ = nullptr;};
      inline string getMarketingMessagesReadRate() const { DARABONBA_PTR_GET_DEFAULT(marketingMessagesReadRate_, "") };
      inline Data& setMarketingMessagesReadRate(string marketingMessagesReadRate) { DARABONBA_PTR_SET_VALUE(marketingMessagesReadRate_, marketingMessagesReadRate) };


      // marketingMessagesSpend Field Functions 
      bool hasMarketingMessagesSpend() const { return this->marketingMessagesSpend_ != nullptr;};
      void deleteMarketingMessagesSpend() { this->marketingMessagesSpend_ = nullptr;};
      inline string getMarketingMessagesSpend() const { DARABONBA_PTR_GET_DEFAULT(marketingMessagesSpend_, "") };
      inline Data& setMarketingMessagesSpend(string marketingMessagesSpend) { DARABONBA_PTR_SET_VALUE(marketingMessagesSpend_, marketingMessagesSpend) };


    protected:
      shared_ptr<string> dateStart_ {};
      shared_ptr<string> dateStop_ {};
      shared_ptr<string> marketingMessagesCostPerDelivered_ {};
      shared_ptr<string> marketingMessagesCostPerLinkBtnClick_ {};
      shared_ptr<string> marketingMessagesDelivered_ {};
      shared_ptr<string> marketingMessagesDeliveryRate_ {};
      shared_ptr<string> marketingMessagesLinkBtnClick_ {};
      shared_ptr<string> marketingMessagesLinkBtnClickRate_ {};
      shared_ptr<string> marketingMessagesReadRate_ {};
      shared_ptr<string> marketingMessagesSpend_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline GetMessageCampaignInsightsResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetMessageCampaignInsightsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetMessageCampaignInsightsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetMessageCampaignInsightsResponseBody::Data>) };
    inline vector<GetMessageCampaignInsightsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetMessageCampaignInsightsResponseBody::Data>) };
    inline GetMessageCampaignInsightsResponseBody& setData(const vector<GetMessageCampaignInsightsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetMessageCampaignInsightsResponseBody& setData(vector<GetMessageCampaignInsightsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetMessageCampaignInsightsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMessageCampaignInsightsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetMessageCampaignInsightsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<vector<GetMessageCampaignInsightsResponseBody::Data>> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
