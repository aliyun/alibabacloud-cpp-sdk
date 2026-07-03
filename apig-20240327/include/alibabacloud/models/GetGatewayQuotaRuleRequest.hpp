// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGATEWAYQUOTARULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETGATEWAYQUOTARULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetGatewayQuotaRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGatewayQuotaRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(consumerPageNumber, consumerPageNumber_);
      DARABONBA_PTR_TO_JSON(consumerPageSize, consumerPageSize_);
      DARABONBA_PTR_TO_JSON(withConsumers, withConsumers_);
    };
    friend void from_json(const Darabonba::Json& j, GetGatewayQuotaRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(consumerPageNumber, consumerPageNumber_);
      DARABONBA_PTR_FROM_JSON(consumerPageSize, consumerPageSize_);
      DARABONBA_PTR_FROM_JSON(withConsumers, withConsumers_);
    };
    GetGatewayQuotaRuleRequest() = default ;
    GetGatewayQuotaRuleRequest(const GetGatewayQuotaRuleRequest &) = default ;
    GetGatewayQuotaRuleRequest(GetGatewayQuotaRuleRequest &&) = default ;
    GetGatewayQuotaRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGatewayQuotaRuleRequest() = default ;
    GetGatewayQuotaRuleRequest& operator=(const GetGatewayQuotaRuleRequest &) = default ;
    GetGatewayQuotaRuleRequest& operator=(GetGatewayQuotaRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->consumerPageNumber_ == nullptr
        && this->consumerPageSize_ == nullptr && this->withConsumers_ == nullptr; };
    // consumerPageNumber Field Functions 
    bool hasConsumerPageNumber() const { return this->consumerPageNumber_ != nullptr;};
    void deleteConsumerPageNumber() { this->consumerPageNumber_ = nullptr;};
    inline string getConsumerPageNumber() const { DARABONBA_PTR_GET_DEFAULT(consumerPageNumber_, "") };
    inline GetGatewayQuotaRuleRequest& setConsumerPageNumber(string consumerPageNumber) { DARABONBA_PTR_SET_VALUE(consumerPageNumber_, consumerPageNumber) };


    // consumerPageSize Field Functions 
    bool hasConsumerPageSize() const { return this->consumerPageSize_ != nullptr;};
    void deleteConsumerPageSize() { this->consumerPageSize_ = nullptr;};
    inline string getConsumerPageSize() const { DARABONBA_PTR_GET_DEFAULT(consumerPageSize_, "") };
    inline GetGatewayQuotaRuleRequest& setConsumerPageSize(string consumerPageSize) { DARABONBA_PTR_SET_VALUE(consumerPageSize_, consumerPageSize) };


    // withConsumers Field Functions 
    bool hasWithConsumers() const { return this->withConsumers_ != nullptr;};
    void deleteWithConsumers() { this->withConsumers_ = nullptr;};
    inline bool getWithConsumers() const { DARABONBA_PTR_GET_DEFAULT(withConsumers_, false) };
    inline GetGatewayQuotaRuleRequest& setWithConsumers(bool withConsumers) { DARABONBA_PTR_SET_VALUE(withConsumers_, withConsumers) };


  protected:
    // The page number of the consumer list.
    shared_ptr<string> consumerPageNumber_ {};
    // The page size of the consumer list.
    shared_ptr<string> consumerPageSize_ {};
    // Specifies whether to return the consumer list.
    shared_ptr<bool> withConsumers_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
