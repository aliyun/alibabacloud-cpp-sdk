// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKBUDGETNAMEEXISTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKBUDGETNAMEEXISTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class CheckBudgetNameExistsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckBudgetNameExistsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BudgetName, budgetName_);
      DARABONBA_PTR_TO_JSON(Exists, exists_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckBudgetNameExistsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BudgetName, budgetName_);
      DARABONBA_PTR_FROM_JSON(Exists, exists_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CheckBudgetNameExistsResponseBody() = default ;
    CheckBudgetNameExistsResponseBody(const CheckBudgetNameExistsResponseBody &) = default ;
    CheckBudgetNameExistsResponseBody(CheckBudgetNameExistsResponseBody &&) = default ;
    CheckBudgetNameExistsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckBudgetNameExistsResponseBody() = default ;
    CheckBudgetNameExistsResponseBody& operator=(const CheckBudgetNameExistsResponseBody &) = default ;
    CheckBudgetNameExistsResponseBody& operator=(CheckBudgetNameExistsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->budgetName_ == nullptr
        && this->exists_ == nullptr && this->requestId_ == nullptr; };
    // budgetName Field Functions 
    bool hasBudgetName() const { return this->budgetName_ != nullptr;};
    void deleteBudgetName() { this->budgetName_ = nullptr;};
    inline string getBudgetName() const { DARABONBA_PTR_GET_DEFAULT(budgetName_, "") };
    inline CheckBudgetNameExistsResponseBody& setBudgetName(string budgetName) { DARABONBA_PTR_SET_VALUE(budgetName_, budgetName) };


    // exists Field Functions 
    bool hasExists() const { return this->exists_ != nullptr;};
    void deleteExists() { this->exists_ = nullptr;};
    inline bool getExists() const { DARABONBA_PTR_GET_DEFAULT(exists_, false) };
    inline CheckBudgetNameExistsResponseBody& setExists(bool exists) { DARABONBA_PTR_SET_VALUE(exists_, exists) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckBudgetNameExistsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> budgetName_ {};
    shared_ptr<bool> exists_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
