// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHDELETECONSUMERAUTHORIZATIONRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHDELETECONSUMERAUTHORIZATIONRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class BatchDeleteConsumerAuthorizationRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchDeleteConsumerAuthorizationRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(consumerAuthorizationRuleIds, consumerAuthorizationRuleIds_);
    };
    friend void from_json(const Darabonba::Json& j, BatchDeleteConsumerAuthorizationRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(consumerAuthorizationRuleIds, consumerAuthorizationRuleIds_);
    };
    BatchDeleteConsumerAuthorizationRuleRequest() = default ;
    BatchDeleteConsumerAuthorizationRuleRequest(const BatchDeleteConsumerAuthorizationRuleRequest &) = default ;
    BatchDeleteConsumerAuthorizationRuleRequest(BatchDeleteConsumerAuthorizationRuleRequest &&) = default ;
    BatchDeleteConsumerAuthorizationRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchDeleteConsumerAuthorizationRuleRequest() = default ;
    BatchDeleteConsumerAuthorizationRuleRequest& operator=(const BatchDeleteConsumerAuthorizationRuleRequest &) = default ;
    BatchDeleteConsumerAuthorizationRuleRequest& operator=(BatchDeleteConsumerAuthorizationRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->consumerAuthorizationRuleIds_ == nullptr; };
    // consumerAuthorizationRuleIds Field Functions 
    bool hasConsumerAuthorizationRuleIds() const { return this->consumerAuthorizationRuleIds_ != nullptr;};
    void deleteConsumerAuthorizationRuleIds() { this->consumerAuthorizationRuleIds_ = nullptr;};
    inline string getConsumerAuthorizationRuleIds() const { DARABONBA_PTR_GET_DEFAULT(consumerAuthorizationRuleIds_, "") };
    inline BatchDeleteConsumerAuthorizationRuleRequest& setConsumerAuthorizationRuleIds(string consumerAuthorizationRuleIds) { DARABONBA_PTR_SET_VALUE(consumerAuthorizationRuleIds_, consumerAuthorizationRuleIds) };


  protected:
    // The rule IDs.
    shared_ptr<string> consumerAuthorizationRuleIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
