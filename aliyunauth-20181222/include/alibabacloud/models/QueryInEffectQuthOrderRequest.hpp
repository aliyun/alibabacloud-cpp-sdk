// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYINEFFECTQUTHORDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYINEFFECTQUTHORDERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliyunAuth20181222
{
namespace Models
{
  class QueryInEffectQuthOrderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryInEffectQuthOrderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizCode, bizCode_);
      DARABONBA_PTR_TO_JSON(Channel, channel_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(OperatorTypeEnum, operatorTypeEnum_);
      DARABONBA_PTR_TO_JSON(RequestFromApp, requestFromApp_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RequestWay, requestWay_);
      DARABONBA_PTR_TO_JSON(UserNo, userNo_);
    };
    friend void from_json(const Darabonba::Json& j, QueryInEffectQuthOrderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizCode, bizCode_);
      DARABONBA_PTR_FROM_JSON(Channel, channel_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(OperatorTypeEnum, operatorTypeEnum_);
      DARABONBA_PTR_FROM_JSON(RequestFromApp, requestFromApp_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RequestWay, requestWay_);
      DARABONBA_PTR_FROM_JSON(UserNo, userNo_);
    };
    QueryInEffectQuthOrderRequest() = default ;
    QueryInEffectQuthOrderRequest(const QueryInEffectQuthOrderRequest &) = default ;
    QueryInEffectQuthOrderRequest(QueryInEffectQuthOrderRequest &&) = default ;
    QueryInEffectQuthOrderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryInEffectQuthOrderRequest() = default ;
    QueryInEffectQuthOrderRequest& operator=(const QueryInEffectQuthOrderRequest &) = default ;
    QueryInEffectQuthOrderRequest& operator=(QueryInEffectQuthOrderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizCode_ == nullptr
        && this->channel_ == nullptr && this->language_ == nullptr && this->operatorTypeEnum_ == nullptr && this->requestFromApp_ == nullptr && this->requestId_ == nullptr
        && this->requestWay_ == nullptr && this->userNo_ == nullptr; };
    // bizCode Field Functions 
    bool hasBizCode() const { return this->bizCode_ != nullptr;};
    void deleteBizCode() { this->bizCode_ = nullptr;};
    inline string getBizCode() const { DARABONBA_PTR_GET_DEFAULT(bizCode_, "") };
    inline QueryInEffectQuthOrderRequest& setBizCode(string bizCode) { DARABONBA_PTR_SET_VALUE(bizCode_, bizCode) };


    // channel Field Functions 
    bool hasChannel() const { return this->channel_ != nullptr;};
    void deleteChannel() { this->channel_ = nullptr;};
    inline string getChannel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
    inline QueryInEffectQuthOrderRequest& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline QueryInEffectQuthOrderRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // operatorTypeEnum Field Functions 
    bool hasOperatorTypeEnum() const { return this->operatorTypeEnum_ != nullptr;};
    void deleteOperatorTypeEnum() { this->operatorTypeEnum_ = nullptr;};
    inline string getOperatorTypeEnum() const { DARABONBA_PTR_GET_DEFAULT(operatorTypeEnum_, "") };
    inline QueryInEffectQuthOrderRequest& setOperatorTypeEnum(string operatorTypeEnum) { DARABONBA_PTR_SET_VALUE(operatorTypeEnum_, operatorTypeEnum) };


    // requestFromApp Field Functions 
    bool hasRequestFromApp() const { return this->requestFromApp_ != nullptr;};
    void deleteRequestFromApp() { this->requestFromApp_ = nullptr;};
    inline string getRequestFromApp() const { DARABONBA_PTR_GET_DEFAULT(requestFromApp_, "") };
    inline QueryInEffectQuthOrderRequest& setRequestFromApp(string requestFromApp) { DARABONBA_PTR_SET_VALUE(requestFromApp_, requestFromApp) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryInEffectQuthOrderRequest& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // requestWay Field Functions 
    bool hasRequestWay() const { return this->requestWay_ != nullptr;};
    void deleteRequestWay() { this->requestWay_ = nullptr;};
    inline string getRequestWay() const { DARABONBA_PTR_GET_DEFAULT(requestWay_, "") };
    inline QueryInEffectQuthOrderRequest& setRequestWay(string requestWay) { DARABONBA_PTR_SET_VALUE(requestWay_, requestWay) };


    // userNo Field Functions 
    bool hasUserNo() const { return this->userNo_ != nullptr;};
    void deleteUserNo() { this->userNo_ = nullptr;};
    inline string getUserNo() const { DARABONBA_PTR_GET_DEFAULT(userNo_, "") };
    inline QueryInEffectQuthOrderRequest& setUserNo(string userNo) { DARABONBA_PTR_SET_VALUE(userNo_, userNo) };


  protected:
    shared_ptr<string> bizCode_ {};
    shared_ptr<string> channel_ {};
    shared_ptr<string> language_ {};
    shared_ptr<string> operatorTypeEnum_ {};
    shared_ptr<string> requestFromApp_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> requestWay_ {};
    shared_ptr<string> userNo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliyunAuth20181222
#endif
