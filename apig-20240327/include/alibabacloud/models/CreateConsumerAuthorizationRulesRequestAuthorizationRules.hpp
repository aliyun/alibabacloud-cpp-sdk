// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECONSUMERAUTHORIZATIONRULESREQUESTAUTHORIZATIONRULES_HPP_
#define ALIBABACLOUD_MODELS_CREATECONSUMERAUTHORIZATIONRULESREQUESTAUTHORIZATIONRULES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateConsumerAuthorizationRulesRequestAuthorizationRulesResourceIdentifier.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class CreateConsumerAuthorizationRulesRequestAuthorizationRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateConsumerAuthorizationRulesRequestAuthorizationRules& obj) { 
      DARABONBA_PTR_TO_JSON(consumerId, consumerId_);
      DARABONBA_PTR_TO_JSON(expireMode, expireMode_);
      DARABONBA_PTR_TO_JSON(expireTimestamp, expireTimestamp_);
      DARABONBA_PTR_TO_JSON(resourceIdentifier, resourceIdentifier_);
      DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateConsumerAuthorizationRulesRequestAuthorizationRules& obj) { 
      DARABONBA_PTR_FROM_JSON(consumerId, consumerId_);
      DARABONBA_PTR_FROM_JSON(expireMode, expireMode_);
      DARABONBA_PTR_FROM_JSON(expireTimestamp, expireTimestamp_);
      DARABONBA_PTR_FROM_JSON(resourceIdentifier, resourceIdentifier_);
      DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
    };
    CreateConsumerAuthorizationRulesRequestAuthorizationRules() = default ;
    CreateConsumerAuthorizationRulesRequestAuthorizationRules(const CreateConsumerAuthorizationRulesRequestAuthorizationRules &) = default ;
    CreateConsumerAuthorizationRulesRequestAuthorizationRules(CreateConsumerAuthorizationRulesRequestAuthorizationRules &&) = default ;
    CreateConsumerAuthorizationRulesRequestAuthorizationRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateConsumerAuthorizationRulesRequestAuthorizationRules() = default ;
    CreateConsumerAuthorizationRulesRequestAuthorizationRules& operator=(const CreateConsumerAuthorizationRulesRequestAuthorizationRules &) = default ;
    CreateConsumerAuthorizationRulesRequestAuthorizationRules& operator=(CreateConsumerAuthorizationRulesRequestAuthorizationRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->consumerId_ != nullptr
        && this->expireMode_ != nullptr && this->expireTimestamp_ != nullptr && this->resourceIdentifier_ != nullptr && this->resourceType_ != nullptr; };
    // consumerId Field Functions 
    bool hasConsumerId() const { return this->consumerId_ != nullptr;};
    void deleteConsumerId() { this->consumerId_ = nullptr;};
    inline string consumerId() const { DARABONBA_PTR_GET_DEFAULT(consumerId_, "") };
    inline CreateConsumerAuthorizationRulesRequestAuthorizationRules& setConsumerId(string consumerId) { DARABONBA_PTR_SET_VALUE(consumerId_, consumerId) };


    // expireMode Field Functions 
    bool hasExpireMode() const { return this->expireMode_ != nullptr;};
    void deleteExpireMode() { this->expireMode_ = nullptr;};
    inline string expireMode() const { DARABONBA_PTR_GET_DEFAULT(expireMode_, "") };
    inline CreateConsumerAuthorizationRulesRequestAuthorizationRules& setExpireMode(string expireMode) { DARABONBA_PTR_SET_VALUE(expireMode_, expireMode) };


    // expireTimestamp Field Functions 
    bool hasExpireTimestamp() const { return this->expireTimestamp_ != nullptr;};
    void deleteExpireTimestamp() { this->expireTimestamp_ = nullptr;};
    inline int64_t expireTimestamp() const { DARABONBA_PTR_GET_DEFAULT(expireTimestamp_, 0L) };
    inline CreateConsumerAuthorizationRulesRequestAuthorizationRules& setExpireTimestamp(int64_t expireTimestamp) { DARABONBA_PTR_SET_VALUE(expireTimestamp_, expireTimestamp) };


    // resourceIdentifier Field Functions 
    bool hasResourceIdentifier() const { return this->resourceIdentifier_ != nullptr;};
    void deleteResourceIdentifier() { this->resourceIdentifier_ = nullptr;};
    inline const Models::CreateConsumerAuthorizationRulesRequestAuthorizationRulesResourceIdentifier & resourceIdentifier() const { DARABONBA_PTR_GET_CONST(resourceIdentifier_, Models::CreateConsumerAuthorizationRulesRequestAuthorizationRulesResourceIdentifier) };
    inline Models::CreateConsumerAuthorizationRulesRequestAuthorizationRulesResourceIdentifier resourceIdentifier() { DARABONBA_PTR_GET(resourceIdentifier_, Models::CreateConsumerAuthorizationRulesRequestAuthorizationRulesResourceIdentifier) };
    inline CreateConsumerAuthorizationRulesRequestAuthorizationRules& setResourceIdentifier(const Models::CreateConsumerAuthorizationRulesRequestAuthorizationRulesResourceIdentifier & resourceIdentifier) { DARABONBA_PTR_SET_VALUE(resourceIdentifier_, resourceIdentifier) };
    inline CreateConsumerAuthorizationRulesRequestAuthorizationRules& setResourceIdentifier(Models::CreateConsumerAuthorizationRulesRequestAuthorizationRulesResourceIdentifier && resourceIdentifier) { DARABONBA_PTR_SET_RVALUE(resourceIdentifier_, resourceIdentifier) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline CreateConsumerAuthorizationRulesRequestAuthorizationRules& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The consumer ID.
    std::shared_ptr<string> consumerId_ = nullptr;
    // The expiration mode. Valid values: LongTerm and ShortTerm.
    std::shared_ptr<string> expireMode_ = nullptr;
    // The expiration timestamp.
    std::shared_ptr<int64_t> expireTimestamp_ = nullptr;
    // The resource identifier, which is provided to non-standard code sources for space reuse.
    std::shared_ptr<Models::CreateConsumerAuthorizationRulesRequestAuthorizationRulesResourceIdentifier> resourceIdentifier_ = nullptr;
    // The resource type.
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
