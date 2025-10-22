// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REQUESTPAYDEMANDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REQUESTPAYDEMANDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class RequestPayDemandRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RequestPayDemandRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Price, price_);
      DARABONBA_PTR_TO_JSON(ProduceType, produceType_);
    };
    friend void from_json(const Darabonba::Json& j, RequestPayDemandRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Price, price_);
      DARABONBA_PTR_FROM_JSON(ProduceType, produceType_);
    };
    RequestPayDemandRequest() = default ;
    RequestPayDemandRequest(const RequestPayDemandRequest &) = default ;
    RequestPayDemandRequest(RequestPayDemandRequest &&) = default ;
    RequestPayDemandRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RequestPayDemandRequest() = default ;
    RequestPayDemandRequest& operator=(const RequestPayDemandRequest &) = default ;
    RequestPayDemandRequest& operator=(RequestPayDemandRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && return this->domainName_ == nullptr && return this->message_ == nullptr && return this->price_ == nullptr && return this->produceType_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string bizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline RequestPayDemandRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline RequestPayDemandRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline RequestPayDemandRequest& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // price Field Functions 
    bool hasPrice() const { return this->price_ != nullptr;};
    void deletePrice() { this->price_ = nullptr;};
    inline float price() const { DARABONBA_PTR_GET_DEFAULT(price_, 0.0) };
    inline RequestPayDemandRequest& setPrice(float price) { DARABONBA_PTR_SET_VALUE(price_, price) };


    // produceType Field Functions 
    bool hasProduceType() const { return this->produceType_ != nullptr;};
    void deleteProduceType() { this->produceType_ = nullptr;};
    inline int32_t produceType() const { DARABONBA_PTR_GET_DEFAULT(produceType_, 0) };
    inline RequestPayDemandRequest& setProduceType(int32_t produceType) { DARABONBA_PTR_SET_VALUE(produceType_, produceType) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> bizId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    // This parameter is required.
    std::shared_ptr<float> price_ = nullptr;
    std::shared_ptr<int32_t> produceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
