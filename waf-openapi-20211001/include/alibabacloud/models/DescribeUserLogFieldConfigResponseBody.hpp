// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERLOGFIELDCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERLOGFIELDCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeUserLogFieldConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserLogFieldConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AddList, addList_);
      DARABONBA_PTR_TO_JSON(ConfigStatus, configStatus_);
      DARABONBA_PTR_TO_JSON(DelList, delList_);
      DARABONBA_PTR_TO_JSON(DeliveryType, deliveryType_);
      DARABONBA_PTR_TO_JSON(ExtendConfig, extendConfig_);
      DARABONBA_PTR_TO_JSON(FieldList, fieldList_);
      DARABONBA_PTR_TO_JSON(LogDeliveryStrategy, logDeliveryStrategy_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserLogFieldConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AddList, addList_);
      DARABONBA_PTR_FROM_JSON(ConfigStatus, configStatus_);
      DARABONBA_PTR_FROM_JSON(DelList, delList_);
      DARABONBA_PTR_FROM_JSON(DeliveryType, deliveryType_);
      DARABONBA_PTR_FROM_JSON(ExtendConfig, extendConfig_);
      DARABONBA_PTR_FROM_JSON(FieldList, fieldList_);
      DARABONBA_PTR_FROM_JSON(LogDeliveryStrategy, logDeliveryStrategy_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeUserLogFieldConfigResponseBody() = default ;
    DescribeUserLogFieldConfigResponseBody(const DescribeUserLogFieldConfigResponseBody &) = default ;
    DescribeUserLogFieldConfigResponseBody(DescribeUserLogFieldConfigResponseBody &&) = default ;
    DescribeUserLogFieldConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserLogFieldConfigResponseBody() = default ;
    DescribeUserLogFieldConfigResponseBody& operator=(const DescribeUserLogFieldConfigResponseBody &) = default ;
    DescribeUserLogFieldConfigResponseBody& operator=(DescribeUserLogFieldConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addList_ == nullptr
        && this->configStatus_ == nullptr && this->delList_ == nullptr && this->deliveryType_ == nullptr && this->extendConfig_ == nullptr && this->fieldList_ == nullptr
        && this->logDeliveryStrategy_ == nullptr && this->requestId_ == nullptr; };
    // addList Field Functions 
    bool hasAddList() const { return this->addList_ != nullptr;};
    void deleteAddList() { this->addList_ = nullptr;};
    inline string getAddList() const { DARABONBA_PTR_GET_DEFAULT(addList_, "") };
    inline DescribeUserLogFieldConfigResponseBody& setAddList(string addList) { DARABONBA_PTR_SET_VALUE(addList_, addList) };


    // configStatus Field Functions 
    bool hasConfigStatus() const { return this->configStatus_ != nullptr;};
    void deleteConfigStatus() { this->configStatus_ = nullptr;};
    inline string getConfigStatus() const { DARABONBA_PTR_GET_DEFAULT(configStatus_, "") };
    inline DescribeUserLogFieldConfigResponseBody& setConfigStatus(string configStatus) { DARABONBA_PTR_SET_VALUE(configStatus_, configStatus) };


    // delList Field Functions 
    bool hasDelList() const { return this->delList_ != nullptr;};
    void deleteDelList() { this->delList_ = nullptr;};
    inline string getDelList() const { DARABONBA_PTR_GET_DEFAULT(delList_, "") };
    inline DescribeUserLogFieldConfigResponseBody& setDelList(string delList) { DARABONBA_PTR_SET_VALUE(delList_, delList) };


    // deliveryType Field Functions 
    bool hasDeliveryType() const { return this->deliveryType_ != nullptr;};
    void deleteDeliveryType() { this->deliveryType_ = nullptr;};
    inline string getDeliveryType() const { DARABONBA_PTR_GET_DEFAULT(deliveryType_, "") };
    inline DescribeUserLogFieldConfigResponseBody& setDeliveryType(string deliveryType) { DARABONBA_PTR_SET_VALUE(deliveryType_, deliveryType) };


    // extendConfig Field Functions 
    bool hasExtendConfig() const { return this->extendConfig_ != nullptr;};
    void deleteExtendConfig() { this->extendConfig_ = nullptr;};
    inline string getExtendConfig() const { DARABONBA_PTR_GET_DEFAULT(extendConfig_, "") };
    inline DescribeUserLogFieldConfigResponseBody& setExtendConfig(string extendConfig) { DARABONBA_PTR_SET_VALUE(extendConfig_, extendConfig) };


    // fieldList Field Functions 
    bool hasFieldList() const { return this->fieldList_ != nullptr;};
    void deleteFieldList() { this->fieldList_ = nullptr;};
    inline string getFieldList() const { DARABONBA_PTR_GET_DEFAULT(fieldList_, "") };
    inline DescribeUserLogFieldConfigResponseBody& setFieldList(string fieldList) { DARABONBA_PTR_SET_VALUE(fieldList_, fieldList) };


    // logDeliveryStrategy Field Functions 
    bool hasLogDeliveryStrategy() const { return this->logDeliveryStrategy_ != nullptr;};
    void deleteLogDeliveryStrategy() { this->logDeliveryStrategy_ = nullptr;};
    inline string getLogDeliveryStrategy() const { DARABONBA_PTR_GET_DEFAULT(logDeliveryStrategy_, "") };
    inline DescribeUserLogFieldConfigResponseBody& setLogDeliveryStrategy(string logDeliveryStrategy) { DARABONBA_PTR_SET_VALUE(logDeliveryStrategy_, logDeliveryStrategy) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUserLogFieldConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> addList_ {};
    shared_ptr<string> configStatus_ {};
    shared_ptr<string> delList_ {};
    shared_ptr<string> deliveryType_ {};
    shared_ptr<string> extendConfig_ {};
    shared_ptr<string> fieldList_ {};
    shared_ptr<string> logDeliveryStrategy_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
