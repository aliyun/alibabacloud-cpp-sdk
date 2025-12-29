// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLICYDETAILSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLICYDETAILSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribePolicyDetailsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolicyDetailsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(action, action_);
      DARABONBA_PTR_TO_JSON(category, category_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(is_deleted, isDeleted_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(no_config, noConfig_);
      DARABONBA_PTR_TO_JSON(severity, severity_);
      DARABONBA_PTR_TO_JSON(template, template_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolicyDetailsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(action, action_);
      DARABONBA_PTR_FROM_JSON(category, category_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(is_deleted, isDeleted_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(no_config, noConfig_);
      DARABONBA_PTR_FROM_JSON(severity, severity_);
      DARABONBA_PTR_FROM_JSON(template, template_);
    };
    DescribePolicyDetailsResponseBody() = default ;
    DescribePolicyDetailsResponseBody(const DescribePolicyDetailsResponseBody &) = default ;
    DescribePolicyDetailsResponseBody(DescribePolicyDetailsResponseBody &&) = default ;
    DescribePolicyDetailsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolicyDetailsResponseBody() = default ;
    DescribePolicyDetailsResponseBody& operator=(const DescribePolicyDetailsResponseBody &) = default ;
    DescribePolicyDetailsResponseBody& operator=(DescribePolicyDetailsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->action_ == nullptr
        && this->category_ == nullptr && this->description_ == nullptr && this->isDeleted_ == nullptr && this->name_ == nullptr && this->noConfig_ == nullptr
        && this->severity_ == nullptr && this->template_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline DescribePolicyDetailsResponseBody& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DescribePolicyDetailsResponseBody& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribePolicyDetailsResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // isDeleted Field Functions 
    bool hasIsDeleted() const { return this->isDeleted_ != nullptr;};
    void deleteIsDeleted() { this->isDeleted_ = nullptr;};
    inline int32_t getIsDeleted() const { DARABONBA_PTR_GET_DEFAULT(isDeleted_, 0) };
    inline DescribePolicyDetailsResponseBody& setIsDeleted(int32_t isDeleted) { DARABONBA_PTR_SET_VALUE(isDeleted_, isDeleted) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribePolicyDetailsResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // noConfig Field Functions 
    bool hasNoConfig() const { return this->noConfig_ != nullptr;};
    void deleteNoConfig() { this->noConfig_ = nullptr;};
    inline int32_t getNoConfig() const { DARABONBA_PTR_GET_DEFAULT(noConfig_, 0) };
    inline DescribePolicyDetailsResponseBody& setNoConfig(int32_t noConfig) { DARABONBA_PTR_SET_VALUE(noConfig_, noConfig) };


    // severity Field Functions 
    bool hasSeverity() const { return this->severity_ != nullptr;};
    void deleteSeverity() { this->severity_ = nullptr;};
    inline string getSeverity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
    inline DescribePolicyDetailsResponseBody& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
    inline DescribePolicyDetailsResponseBody& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


  protected:
    // The action of the policy. Valid values:
    // 
    // *   `enforce`: blocks deployments that match the policy.
    // *   `inform`: generates alerts for deployments that match the policy.
    shared_ptr<string> action_ {};
    // The type of the policy.
    shared_ptr<string> category_ {};
    // The description of the policy.
    shared_ptr<string> description_ {};
    // Indicates whether the policy is deleted. Valid values:
    // 
    // *   0: The policy is not deleted.
    // *   1: The policy is deleted.
    shared_ptr<int32_t> isDeleted_ {};
    // The name of the policy.
    shared_ptr<string> name_ {};
    // Indicates whether parameters are required. Valid values:
    // 
    // *   0: Parameters are required.
    // *   1: Parameters are optional.
    shared_ptr<int32_t> noConfig_ {};
    // The severity level of the policy. Valid values:
    // 
    // *   `high`
    // *   `medium`
    // *   `low`
    shared_ptr<string> severity_ {};
    // The content of the policy.
    shared_ptr<string> template_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
