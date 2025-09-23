// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELAYER7RULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELAYER7RULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class CreateLayer7RuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLayer7RuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(RsType, rsType_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLayer7RuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RsType, rsType_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
    };
    CreateLayer7RuleRequest() = default ;
    CreateLayer7RuleRequest(const CreateLayer7RuleRequest &) = default ;
    CreateLayer7RuleRequest(CreateLayer7RuleRequest &&) = default ;
    CreateLayer7RuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLayer7RuleRequest() = default ;
    CreateLayer7RuleRequest& operator=(const CreateLayer7RuleRequest &) = default ;
    CreateLayer7RuleRequest& operator=(CreateLayer7RuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domain_ != nullptr
        && this->instanceIds_ != nullptr && this->resourceGroupId_ != nullptr && this->rsType_ != nullptr && this->rules_ != nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline CreateLayer7RuleRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & instanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> instanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline CreateLayer7RuleRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline CreateLayer7RuleRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateLayer7RuleRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // rsType Field Functions 
    bool hasRsType() const { return this->rsType_ != nullptr;};
    void deleteRsType() { this->rsType_ = nullptr;};
    inline int32_t rsType() const { DARABONBA_PTR_GET_DEFAULT(rsType_, 0) };
    inline CreateLayer7RuleRequest& setRsType(int32_t rsType) { DARABONBA_PTR_SET_VALUE(rsType_, rsType) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline string rules() const { DARABONBA_PTR_GET_DEFAULT(rules_, "") };
    inline CreateLayer7RuleRequest& setRules(string rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> domain_ = nullptr;
    std::shared_ptr<vector<string>> instanceIds_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> rsType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> rules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
