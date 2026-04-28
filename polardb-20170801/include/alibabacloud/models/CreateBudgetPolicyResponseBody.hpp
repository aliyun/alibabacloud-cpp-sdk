// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBUDGETPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEBUDGETPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CreateBudgetPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBudgetPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BudgetPolicyId, budgetPolicyId_);
      DARABONBA_PTR_TO_JSON(GwClusterId, gwClusterId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBudgetPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BudgetPolicyId, budgetPolicyId_);
      DARABONBA_PTR_FROM_JSON(GwClusterId, gwClusterId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateBudgetPolicyResponseBody() = default ;
    CreateBudgetPolicyResponseBody(const CreateBudgetPolicyResponseBody &) = default ;
    CreateBudgetPolicyResponseBody(CreateBudgetPolicyResponseBody &&) = default ;
    CreateBudgetPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBudgetPolicyResponseBody() = default ;
    CreateBudgetPolicyResponseBody& operator=(const CreateBudgetPolicyResponseBody &) = default ;
    CreateBudgetPolicyResponseBody& operator=(CreateBudgetPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->budgetPolicyId_ == nullptr
        && this->gwClusterId_ == nullptr && this->requestId_ == nullptr; };
    // budgetPolicyId Field Functions 
    bool hasBudgetPolicyId() const { return this->budgetPolicyId_ != nullptr;};
    void deleteBudgetPolicyId() { this->budgetPolicyId_ = nullptr;};
    inline string getBudgetPolicyId() const { DARABONBA_PTR_GET_DEFAULT(budgetPolicyId_, "") };
    inline CreateBudgetPolicyResponseBody& setBudgetPolicyId(string budgetPolicyId) { DARABONBA_PTR_SET_VALUE(budgetPolicyId_, budgetPolicyId) };


    // gwClusterId Field Functions 
    bool hasGwClusterId() const { return this->gwClusterId_ != nullptr;};
    void deleteGwClusterId() { this->gwClusterId_ = nullptr;};
    inline string getGwClusterId() const { DARABONBA_PTR_GET_DEFAULT(gwClusterId_, "") };
    inline CreateBudgetPolicyResponseBody& setGwClusterId(string gwClusterId) { DARABONBA_PTR_SET_VALUE(gwClusterId_, gwClusterId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateBudgetPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> budgetPolicyId_ {};
    shared_ptr<string> gwClusterId_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
