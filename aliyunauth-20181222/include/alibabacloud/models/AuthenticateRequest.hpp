// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTHENTICATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_AUTHENTICATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliyunAuth20181222
{
namespace Models
{
  class AuthenticateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AuthenticateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(OperateCode, operateCode_);
      DARABONBA_PTR_TO_JSON(OperatorTypeEnum, operatorTypeEnum_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(RequestFromApp, requestFromApp_);
      DARABONBA_PTR_TO_JSON(RequestWay, requestWay_);
      DARABONBA_PTR_TO_JSON(UserNo, userNo_);
    };
    friend void from_json(const Darabonba::Json& j, AuthenticateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(OperateCode, operateCode_);
      DARABONBA_PTR_FROM_JSON(OperatorTypeEnum, operatorTypeEnum_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(RequestFromApp, requestFromApp_);
      DARABONBA_PTR_FROM_JSON(RequestWay, requestWay_);
      DARABONBA_PTR_FROM_JSON(UserNo, userNo_);
    };
    AuthenticateRequest() = default ;
    AuthenticateRequest(const AuthenticateRequest &) = default ;
    AuthenticateRequest(AuthenticateRequest &&) = default ;
    AuthenticateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AuthenticateRequest() = default ;
    AuthenticateRequest& operator=(const AuthenticateRequest &) = default ;
    AuthenticateRequest& operator=(AuthenticateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->language_ == nullptr && this->operateCode_ == nullptr && this->operatorTypeEnum_ == nullptr && this->productCode_ == nullptr && this->requestFromApp_ == nullptr
        && this->requestWay_ == nullptr && this->userNo_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AuthenticateRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline AuthenticateRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // operateCode Field Functions 
    bool hasOperateCode() const { return this->operateCode_ != nullptr;};
    void deleteOperateCode() { this->operateCode_ = nullptr;};
    inline string getOperateCode() const { DARABONBA_PTR_GET_DEFAULT(operateCode_, "") };
    inline AuthenticateRequest& setOperateCode(string operateCode) { DARABONBA_PTR_SET_VALUE(operateCode_, operateCode) };


    // operatorTypeEnum Field Functions 
    bool hasOperatorTypeEnum() const { return this->operatorTypeEnum_ != nullptr;};
    void deleteOperatorTypeEnum() { this->operatorTypeEnum_ = nullptr;};
    inline string getOperatorTypeEnum() const { DARABONBA_PTR_GET_DEFAULT(operatorTypeEnum_, "") };
    inline AuthenticateRequest& setOperatorTypeEnum(string operatorTypeEnum) { DARABONBA_PTR_SET_VALUE(operatorTypeEnum_, operatorTypeEnum) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline AuthenticateRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // requestFromApp Field Functions 
    bool hasRequestFromApp() const { return this->requestFromApp_ != nullptr;};
    void deleteRequestFromApp() { this->requestFromApp_ = nullptr;};
    inline string getRequestFromApp() const { DARABONBA_PTR_GET_DEFAULT(requestFromApp_, "") };
    inline AuthenticateRequest& setRequestFromApp(string requestFromApp) { DARABONBA_PTR_SET_VALUE(requestFromApp_, requestFromApp) };


    // requestWay Field Functions 
    bool hasRequestWay() const { return this->requestWay_ != nullptr;};
    void deleteRequestWay() { this->requestWay_ = nullptr;};
    inline string getRequestWay() const { DARABONBA_PTR_GET_DEFAULT(requestWay_, "") };
    inline AuthenticateRequest& setRequestWay(string requestWay) { DARABONBA_PTR_SET_VALUE(requestWay_, requestWay) };


    // userNo Field Functions 
    bool hasUserNo() const { return this->userNo_ != nullptr;};
    void deleteUserNo() { this->userNo_ = nullptr;};
    inline string getUserNo() const { DARABONBA_PTR_GET_DEFAULT(userNo_, "") };
    inline AuthenticateRequest& setUserNo(string userNo) { DARABONBA_PTR_SET_VALUE(userNo_, userNo) };


  protected:
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> language_ {};
    shared_ptr<string> operateCode_ {};
    shared_ptr<string> operatorTypeEnum_ {};
    shared_ptr<string> productCode_ {};
    shared_ptr<string> requestFromApp_ {};
    shared_ptr<string> requestWay_ {};
    shared_ptr<string> userNo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliyunAuth20181222
#endif
