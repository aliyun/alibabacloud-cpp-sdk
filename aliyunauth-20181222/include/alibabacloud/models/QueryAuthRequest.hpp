// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAUTHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYAUTHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliyunAuth20181222
{
namespace Models
{
  class QueryAuthRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAuthRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizNo, bizNo_);
      DARABONBA_PTR_TO_JSON(Channel, channel_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(OperatorTypeEnum, operatorTypeEnum_);
      DARABONBA_PTR_TO_JSON(OrderVid, orderVid_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(RequestFromApp, requestFromApp_);
      DARABONBA_PTR_TO_JSON(RequestWay, requestWay_);
      DARABONBA_PTR_TO_JSON(UserNo, userNo_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAuthRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizNo, bizNo_);
      DARABONBA_PTR_FROM_JSON(Channel, channel_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(OperatorTypeEnum, operatorTypeEnum_);
      DARABONBA_PTR_FROM_JSON(OrderVid, orderVid_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(RequestFromApp, requestFromApp_);
      DARABONBA_PTR_FROM_JSON(RequestWay, requestWay_);
      DARABONBA_PTR_FROM_JSON(UserNo, userNo_);
    };
    QueryAuthRequest() = default ;
    QueryAuthRequest(const QueryAuthRequest &) = default ;
    QueryAuthRequest(QueryAuthRequest &&) = default ;
    QueryAuthRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAuthRequest() = default ;
    QueryAuthRequest& operator=(const QueryAuthRequest &) = default ;
    QueryAuthRequest& operator=(QueryAuthRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizNo_ == nullptr
        && this->channel_ == nullptr && this->instanceId_ == nullptr && this->language_ == nullptr && this->operatorTypeEnum_ == nullptr && this->orderVid_ == nullptr
        && this->productCode_ == nullptr && this->requestFromApp_ == nullptr && this->requestWay_ == nullptr && this->userNo_ == nullptr; };
    // bizNo Field Functions 
    bool hasBizNo() const { return this->bizNo_ != nullptr;};
    void deleteBizNo() { this->bizNo_ = nullptr;};
    inline string getBizNo() const { DARABONBA_PTR_GET_DEFAULT(bizNo_, "") };
    inline QueryAuthRequest& setBizNo(string bizNo) { DARABONBA_PTR_SET_VALUE(bizNo_, bizNo) };


    // channel Field Functions 
    bool hasChannel() const { return this->channel_ != nullptr;};
    void deleteChannel() { this->channel_ = nullptr;};
    inline string getChannel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
    inline QueryAuthRequest& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline QueryAuthRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline QueryAuthRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // operatorTypeEnum Field Functions 
    bool hasOperatorTypeEnum() const { return this->operatorTypeEnum_ != nullptr;};
    void deleteOperatorTypeEnum() { this->operatorTypeEnum_ = nullptr;};
    inline string getOperatorTypeEnum() const { DARABONBA_PTR_GET_DEFAULT(operatorTypeEnum_, "") };
    inline QueryAuthRequest& setOperatorTypeEnum(string operatorTypeEnum) { DARABONBA_PTR_SET_VALUE(operatorTypeEnum_, operatorTypeEnum) };


    // orderVid Field Functions 
    bool hasOrderVid() const { return this->orderVid_ != nullptr;};
    void deleteOrderVid() { this->orderVid_ = nullptr;};
    inline string getOrderVid() const { DARABONBA_PTR_GET_DEFAULT(orderVid_, "") };
    inline QueryAuthRequest& setOrderVid(string orderVid) { DARABONBA_PTR_SET_VALUE(orderVid_, orderVid) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline QueryAuthRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // requestFromApp Field Functions 
    bool hasRequestFromApp() const { return this->requestFromApp_ != nullptr;};
    void deleteRequestFromApp() { this->requestFromApp_ = nullptr;};
    inline string getRequestFromApp() const { DARABONBA_PTR_GET_DEFAULT(requestFromApp_, "") };
    inline QueryAuthRequest& setRequestFromApp(string requestFromApp) { DARABONBA_PTR_SET_VALUE(requestFromApp_, requestFromApp) };


    // requestWay Field Functions 
    bool hasRequestWay() const { return this->requestWay_ != nullptr;};
    void deleteRequestWay() { this->requestWay_ = nullptr;};
    inline string getRequestWay() const { DARABONBA_PTR_GET_DEFAULT(requestWay_, "") };
    inline QueryAuthRequest& setRequestWay(string requestWay) { DARABONBA_PTR_SET_VALUE(requestWay_, requestWay) };


    // userNo Field Functions 
    bool hasUserNo() const { return this->userNo_ != nullptr;};
    void deleteUserNo() { this->userNo_ = nullptr;};
    inline string getUserNo() const { DARABONBA_PTR_GET_DEFAULT(userNo_, "") };
    inline QueryAuthRequest& setUserNo(string userNo) { DARABONBA_PTR_SET_VALUE(userNo_, userNo) };


  protected:
    shared_ptr<string> bizNo_ {};
    shared_ptr<string> channel_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> language_ {};
    shared_ptr<string> operatorTypeEnum_ {};
    shared_ptr<string> orderVid_ {};
    shared_ptr<string> productCode_ {};
    shared_ptr<string> requestFromApp_ {};
    shared_ptr<string> requestWay_ {};
    shared_ptr<string> userNo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliyunAuth20181222
#endif
