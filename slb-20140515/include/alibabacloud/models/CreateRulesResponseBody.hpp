// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATERULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateRulesResponseBodyRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class CreateRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
    };
    CreateRulesResponseBody() = default ;
    CreateRulesResponseBody(const CreateRulesResponseBody &) = default ;
    CreateRulesResponseBody(CreateRulesResponseBody &&) = default ;
    CreateRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRulesResponseBody() = default ;
    CreateRulesResponseBody& operator=(const CreateRulesResponseBody &) = default ;
    CreateRulesResponseBody& operator=(CreateRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->rules_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const CreateRulesResponseBodyRules & rules() const { DARABONBA_PTR_GET_CONST(rules_, CreateRulesResponseBodyRules) };
    inline CreateRulesResponseBodyRules rules() { DARABONBA_PTR_GET(rules_, CreateRulesResponseBodyRules) };
    inline CreateRulesResponseBody& setRules(const CreateRulesResponseBodyRules & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline CreateRulesResponseBody& setRules(CreateRulesResponseBodyRules && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The forwarding rules.
    std::shared_ptr<CreateRulesResponseBodyRules> rules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
