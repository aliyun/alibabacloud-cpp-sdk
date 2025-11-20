// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECONSUMERAUTHORIZATIONRULERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATECONSUMERAUTHORIZATIONRULERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class CreateConsumerAuthorizationRuleResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateConsumerAuthorizationRuleResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(consumerAuthorizationRuleId, consumerAuthorizationRuleId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateConsumerAuthorizationRuleResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(consumerAuthorizationRuleId, consumerAuthorizationRuleId_);
    };
    CreateConsumerAuthorizationRuleResponseBodyData() = default ;
    CreateConsumerAuthorizationRuleResponseBodyData(const CreateConsumerAuthorizationRuleResponseBodyData &) = default ;
    CreateConsumerAuthorizationRuleResponseBodyData(CreateConsumerAuthorizationRuleResponseBodyData &&) = default ;
    CreateConsumerAuthorizationRuleResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateConsumerAuthorizationRuleResponseBodyData() = default ;
    CreateConsumerAuthorizationRuleResponseBodyData& operator=(const CreateConsumerAuthorizationRuleResponseBodyData &) = default ;
    CreateConsumerAuthorizationRuleResponseBodyData& operator=(CreateConsumerAuthorizationRuleResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->consumerAuthorizationRuleId_ == nullptr; };
    // consumerAuthorizationRuleId Field Functions 
    bool hasConsumerAuthorizationRuleId() const { return this->consumerAuthorizationRuleId_ != nullptr;};
    void deleteConsumerAuthorizationRuleId() { this->consumerAuthorizationRuleId_ = nullptr;};
    inline string consumerAuthorizationRuleId() const { DARABONBA_PTR_GET_DEFAULT(consumerAuthorizationRuleId_, "") };
    inline CreateConsumerAuthorizationRuleResponseBodyData& setConsumerAuthorizationRuleId(string consumerAuthorizationRuleId) { DARABONBA_PTR_SET_VALUE(consumerAuthorizationRuleId_, consumerAuthorizationRuleId) };


  protected:
    // Filters the list of operations based on a specific consumer authorization rule ID. Only authorized operations are returned in the response.
    std::shared_ptr<string> consumerAuthorizationRuleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
