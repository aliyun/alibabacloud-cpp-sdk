// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECONSUMERAUTHORIZATIONRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECONSUMERAUTHORIZATIONRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateConsumerAuthorizationRulesRequestAuthorizationRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class CreateConsumerAuthorizationRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateConsumerAuthorizationRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(authorizationRules, authorizationRules_);
    };
    friend void from_json(const Darabonba::Json& j, CreateConsumerAuthorizationRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(authorizationRules, authorizationRules_);
    };
    CreateConsumerAuthorizationRulesRequest() = default ;
    CreateConsumerAuthorizationRulesRequest(const CreateConsumerAuthorizationRulesRequest &) = default ;
    CreateConsumerAuthorizationRulesRequest(CreateConsumerAuthorizationRulesRequest &&) = default ;
    CreateConsumerAuthorizationRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateConsumerAuthorizationRulesRequest() = default ;
    CreateConsumerAuthorizationRulesRequest& operator=(const CreateConsumerAuthorizationRulesRequest &) = default ;
    CreateConsumerAuthorizationRulesRequest& operator=(CreateConsumerAuthorizationRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorizationRules_ == nullptr; };
    // authorizationRules Field Functions 
    bool hasAuthorizationRules() const { return this->authorizationRules_ != nullptr;};
    void deleteAuthorizationRules() { this->authorizationRules_ = nullptr;};
    inline const vector<CreateConsumerAuthorizationRulesRequestAuthorizationRules> & authorizationRules() const { DARABONBA_PTR_GET_CONST(authorizationRules_, vector<CreateConsumerAuthorizationRulesRequestAuthorizationRules>) };
    inline vector<CreateConsumerAuthorizationRulesRequestAuthorizationRules> authorizationRules() { DARABONBA_PTR_GET(authorizationRules_, vector<CreateConsumerAuthorizationRulesRequestAuthorizationRules>) };
    inline CreateConsumerAuthorizationRulesRequest& setAuthorizationRules(const vector<CreateConsumerAuthorizationRulesRequestAuthorizationRules> & authorizationRules) { DARABONBA_PTR_SET_VALUE(authorizationRules_, authorizationRules) };
    inline CreateConsumerAuthorizationRulesRequest& setAuthorizationRules(vector<CreateConsumerAuthorizationRulesRequestAuthorizationRules> && authorizationRules) { DARABONBA_PTR_SET_RVALUE(authorizationRules_, authorizationRules) };


  protected:
    // The consumer authentication rules to be created.
    std::shared_ptr<vector<CreateConsumerAuthorizationRulesRequestAuthorizationRules>> authorizationRules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
