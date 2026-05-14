// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBUDGETSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBUDGETSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class DescribeBudgetsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBudgetsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BudgetName, budgetName_);
      DARABONBA_PTR_TO_JSON(BudgetType, budgetType_);
      DARABONBA_PTR_TO_JSON(ExpireStatus, expireStatus_);
      DARABONBA_PTR_TO_JSON(Nbid, nbid_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBudgetsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BudgetName, budgetName_);
      DARABONBA_PTR_FROM_JSON(BudgetType, budgetType_);
      DARABONBA_PTR_FROM_JSON(ExpireStatus, expireStatus_);
      DARABONBA_PTR_FROM_JSON(Nbid, nbid_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    DescribeBudgetsRequest() = default ;
    DescribeBudgetsRequest(const DescribeBudgetsRequest &) = default ;
    DescribeBudgetsRequest(DescribeBudgetsRequest &&) = default ;
    DescribeBudgetsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBudgetsRequest() = default ;
    DescribeBudgetsRequest& operator=(const DescribeBudgetsRequest &) = default ;
    DescribeBudgetsRequest& operator=(DescribeBudgetsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->budgetName_ == nullptr
        && this->budgetType_ == nullptr && this->expireStatus_ == nullptr && this->nbid_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr; };
    // budgetName Field Functions 
    bool hasBudgetName() const { return this->budgetName_ != nullptr;};
    void deleteBudgetName() { this->budgetName_ = nullptr;};
    inline string getBudgetName() const { DARABONBA_PTR_GET_DEFAULT(budgetName_, "") };
    inline DescribeBudgetsRequest& setBudgetName(string budgetName) { DARABONBA_PTR_SET_VALUE(budgetName_, budgetName) };


    // budgetType Field Functions 
    bool hasBudgetType() const { return this->budgetType_ != nullptr;};
    void deleteBudgetType() { this->budgetType_ = nullptr;};
    inline string getBudgetType() const { DARABONBA_PTR_GET_DEFAULT(budgetType_, "") };
    inline DescribeBudgetsRequest& setBudgetType(string budgetType) { DARABONBA_PTR_SET_VALUE(budgetType_, budgetType) };


    // expireStatus Field Functions 
    bool hasExpireStatus() const { return this->expireStatus_ != nullptr;};
    void deleteExpireStatus() { this->expireStatus_ = nullptr;};
    inline string getExpireStatus() const { DARABONBA_PTR_GET_DEFAULT(expireStatus_, "") };
    inline DescribeBudgetsRequest& setExpireStatus(string expireStatus) { DARABONBA_PTR_SET_VALUE(expireStatus_, expireStatus) };


    // nbid Field Functions 
    bool hasNbid() const { return this->nbid_ != nullptr;};
    void deleteNbid() { this->nbid_ = nullptr;};
    inline string getNbid() const { DARABONBA_PTR_GET_DEFAULT(nbid_, "") };
    inline DescribeBudgetsRequest& setNbid(string nbid) { DARABONBA_PTR_SET_VALUE(nbid_, nbid) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline DescribeBudgetsRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeBudgetsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    shared_ptr<string> budgetName_ {};
    shared_ptr<string> budgetType_ {};
    shared_ptr<string> expireStatus_ {};
    shared_ptr<string> nbid_ {};
    shared_ptr<int32_t> pageNo_ {};
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
