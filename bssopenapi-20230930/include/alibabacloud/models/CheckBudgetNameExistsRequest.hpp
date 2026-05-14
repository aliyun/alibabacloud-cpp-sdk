// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKBUDGETNAMEEXISTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKBUDGETNAMEEXISTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class CheckBudgetNameExistsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckBudgetNameExistsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BudgetName, budgetName_);
      DARABONBA_PTR_TO_JSON(Nbid, nbid_);
    };
    friend void from_json(const Darabonba::Json& j, CheckBudgetNameExistsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BudgetName, budgetName_);
      DARABONBA_PTR_FROM_JSON(Nbid, nbid_);
    };
    CheckBudgetNameExistsRequest() = default ;
    CheckBudgetNameExistsRequest(const CheckBudgetNameExistsRequest &) = default ;
    CheckBudgetNameExistsRequest(CheckBudgetNameExistsRequest &&) = default ;
    CheckBudgetNameExistsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckBudgetNameExistsRequest() = default ;
    CheckBudgetNameExistsRequest& operator=(const CheckBudgetNameExistsRequest &) = default ;
    CheckBudgetNameExistsRequest& operator=(CheckBudgetNameExistsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->budgetName_ == nullptr
        && this->nbid_ == nullptr; };
    // budgetName Field Functions 
    bool hasBudgetName() const { return this->budgetName_ != nullptr;};
    void deleteBudgetName() { this->budgetName_ = nullptr;};
    inline string getBudgetName() const { DARABONBA_PTR_GET_DEFAULT(budgetName_, "") };
    inline CheckBudgetNameExistsRequest& setBudgetName(string budgetName) { DARABONBA_PTR_SET_VALUE(budgetName_, budgetName) };


    // nbid Field Functions 
    bool hasNbid() const { return this->nbid_ != nullptr;};
    void deleteNbid() { this->nbid_ = nullptr;};
    inline string getNbid() const { DARABONBA_PTR_GET_DEFAULT(nbid_, "") };
    inline CheckBudgetNameExistsRequest& setNbid(string nbid) { DARABONBA_PTR_SET_VALUE(nbid_, nbid) };


  protected:
    // This parameter is required.
    shared_ptr<string> budgetName_ {};
    shared_ptr<string> nbid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
