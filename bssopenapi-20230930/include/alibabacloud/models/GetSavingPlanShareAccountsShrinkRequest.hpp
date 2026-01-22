// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSAVINGPLANSHAREACCOUNTSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSAVINGPLANSHAREACCOUNTSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class GetSavingPlanShareAccountsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSavingPlanShareAccountsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(EcIdAccountIds, ecIdAccountIdsShrink_);
      DARABONBA_PTR_TO_JSON(Nbid, nbid_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SpnInstanceCode, spnInstanceCode_);
    };
    friend void from_json(const Darabonba::Json& j, GetSavingPlanShareAccountsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(EcIdAccountIds, ecIdAccountIdsShrink_);
      DARABONBA_PTR_FROM_JSON(Nbid, nbid_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SpnInstanceCode, spnInstanceCode_);
    };
    GetSavingPlanShareAccountsShrinkRequest() = default ;
    GetSavingPlanShareAccountsShrinkRequest(const GetSavingPlanShareAccountsShrinkRequest &) = default ;
    GetSavingPlanShareAccountsShrinkRequest(GetSavingPlanShareAccountsShrinkRequest &&) = default ;
    GetSavingPlanShareAccountsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSavingPlanShareAccountsShrinkRequest() = default ;
    GetSavingPlanShareAccountsShrinkRequest& operator=(const GetSavingPlanShareAccountsShrinkRequest &) = default ;
    GetSavingPlanShareAccountsShrinkRequest& operator=(GetSavingPlanShareAccountsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->ecIdAccountIdsShrink_ == nullptr && this->nbid_ == nullptr && this->pageSize_ == nullptr && this->spnInstanceCode_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline GetSavingPlanShareAccountsShrinkRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // ecIdAccountIdsShrink Field Functions 
    bool hasEcIdAccountIdsShrink() const { return this->ecIdAccountIdsShrink_ != nullptr;};
    void deleteEcIdAccountIdsShrink() { this->ecIdAccountIdsShrink_ = nullptr;};
    inline string getEcIdAccountIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(ecIdAccountIdsShrink_, "") };
    inline GetSavingPlanShareAccountsShrinkRequest& setEcIdAccountIdsShrink(string ecIdAccountIdsShrink) { DARABONBA_PTR_SET_VALUE(ecIdAccountIdsShrink_, ecIdAccountIdsShrink) };


    // nbid Field Functions 
    bool hasNbid() const { return this->nbid_ != nullptr;};
    void deleteNbid() { this->nbid_ = nullptr;};
    inline string getNbid() const { DARABONBA_PTR_GET_DEFAULT(nbid_, "") };
    inline GetSavingPlanShareAccountsShrinkRequest& setNbid(string nbid) { DARABONBA_PTR_SET_VALUE(nbid_, nbid) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetSavingPlanShareAccountsShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // spnInstanceCode Field Functions 
    bool hasSpnInstanceCode() const { return this->spnInstanceCode_ != nullptr;};
    void deleteSpnInstanceCode() { this->spnInstanceCode_ = nullptr;};
    inline string getSpnInstanceCode() const { DARABONBA_PTR_GET_DEFAULT(spnInstanceCode_, "") };
    inline GetSavingPlanShareAccountsShrinkRequest& setSpnInstanceCode(string spnInstanceCode) { DARABONBA_PTR_SET_VALUE(spnInstanceCode_, spnInstanceCode) };


  protected:
    shared_ptr<int32_t> currentPage_ {};
    shared_ptr<string> ecIdAccountIdsShrink_ {};
    shared_ptr<string> nbid_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> spnInstanceCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
