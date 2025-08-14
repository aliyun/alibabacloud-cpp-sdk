// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFUNDACCOUNTCANRECYCLEAMOUNTRESPONSEBODYRECYCLETOFUNDACCOUNTLIST_HPP_
#define ALIBABACLOUD_MODELS_GETFUNDACCOUNTCANRECYCLEAMOUNTRESPONSEBODYRECYCLETOFUNDACCOUNTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class GetFundAccountCanRecycleAmountResponseBodyRecycleToFundAccountList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFundAccountCanRecycleAmountResponseBodyRecycleToFundAccountList& obj) { 
      DARABONBA_PTR_TO_JSON(FundAccountId, fundAccountId_);
      DARABONBA_PTR_TO_JSON(FundAccountName, fundAccountName_);
      DARABONBA_PTR_TO_JSON(FundAccountOwnerAccountId, fundAccountOwnerAccountId_);
      DARABONBA_PTR_TO_JSON(MaxRecyclableAmount, maxRecyclableAmount_);
      DARABONBA_PTR_TO_JSON(OriginalTransferRemainAmount, originalTransferRemainAmount_);
    };
    friend void from_json(const Darabonba::Json& j, GetFundAccountCanRecycleAmountResponseBodyRecycleToFundAccountList& obj) { 
      DARABONBA_PTR_FROM_JSON(FundAccountId, fundAccountId_);
      DARABONBA_PTR_FROM_JSON(FundAccountName, fundAccountName_);
      DARABONBA_PTR_FROM_JSON(FundAccountOwnerAccountId, fundAccountOwnerAccountId_);
      DARABONBA_PTR_FROM_JSON(MaxRecyclableAmount, maxRecyclableAmount_);
      DARABONBA_PTR_FROM_JSON(OriginalTransferRemainAmount, originalTransferRemainAmount_);
    };
    GetFundAccountCanRecycleAmountResponseBodyRecycleToFundAccountList() = default ;
    GetFundAccountCanRecycleAmountResponseBodyRecycleToFundAccountList(const GetFundAccountCanRecycleAmountResponseBodyRecycleToFundAccountList &) = default ;
    GetFundAccountCanRecycleAmountResponseBodyRecycleToFundAccountList(GetFundAccountCanRecycleAmountResponseBodyRecycleToFundAccountList &&) = default ;
    GetFundAccountCanRecycleAmountResponseBodyRecycleToFundAccountList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFundAccountCanRecycleAmountResponseBodyRecycleToFundAccountList() = default ;
    GetFundAccountCanRecycleAmountResponseBodyRecycleToFundAccountList& operator=(const GetFundAccountCanRecycleAmountResponseBodyRecycleToFundAccountList &) = default ;
    GetFundAccountCanRecycleAmountResponseBodyRecycleToFundAccountList& operator=(GetFundAccountCanRecycleAmountResponseBodyRecycleToFundAccountList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fundAccountId_ != nullptr
        && this->fundAccountName_ != nullptr && this->fundAccountOwnerAccountId_ != nullptr && this->maxRecyclableAmount_ != nullptr && this->originalTransferRemainAmount_ != nullptr; };
    // fundAccountId Field Functions 
    bool hasFundAccountId() const { return this->fundAccountId_ != nullptr;};
    void deleteFundAccountId() { this->fundAccountId_ = nullptr;};
    inline string fundAccountId() const { DARABONBA_PTR_GET_DEFAULT(fundAccountId_, "") };
    inline GetFundAccountCanRecycleAmountResponseBodyRecycleToFundAccountList& setFundAccountId(string fundAccountId) { DARABONBA_PTR_SET_VALUE(fundAccountId_, fundAccountId) };


    // fundAccountName Field Functions 
    bool hasFundAccountName() const { return this->fundAccountName_ != nullptr;};
    void deleteFundAccountName() { this->fundAccountName_ = nullptr;};
    inline string fundAccountName() const { DARABONBA_PTR_GET_DEFAULT(fundAccountName_, "") };
    inline GetFundAccountCanRecycleAmountResponseBodyRecycleToFundAccountList& setFundAccountName(string fundAccountName) { DARABONBA_PTR_SET_VALUE(fundAccountName_, fundAccountName) };


    // fundAccountOwnerAccountId Field Functions 
    bool hasFundAccountOwnerAccountId() const { return this->fundAccountOwnerAccountId_ != nullptr;};
    void deleteFundAccountOwnerAccountId() { this->fundAccountOwnerAccountId_ = nullptr;};
    inline string fundAccountOwnerAccountId() const { DARABONBA_PTR_GET_DEFAULT(fundAccountOwnerAccountId_, "") };
    inline GetFundAccountCanRecycleAmountResponseBodyRecycleToFundAccountList& setFundAccountOwnerAccountId(string fundAccountOwnerAccountId) { DARABONBA_PTR_SET_VALUE(fundAccountOwnerAccountId_, fundAccountOwnerAccountId) };


    // maxRecyclableAmount Field Functions 
    bool hasMaxRecyclableAmount() const { return this->maxRecyclableAmount_ != nullptr;};
    void deleteMaxRecyclableAmount() { this->maxRecyclableAmount_ = nullptr;};
    inline string maxRecyclableAmount() const { DARABONBA_PTR_GET_DEFAULT(maxRecyclableAmount_, "") };
    inline GetFundAccountCanRecycleAmountResponseBodyRecycleToFundAccountList& setMaxRecyclableAmount(string maxRecyclableAmount) { DARABONBA_PTR_SET_VALUE(maxRecyclableAmount_, maxRecyclableAmount) };


    // originalTransferRemainAmount Field Functions 
    bool hasOriginalTransferRemainAmount() const { return this->originalTransferRemainAmount_ != nullptr;};
    void deleteOriginalTransferRemainAmount() { this->originalTransferRemainAmount_ = nullptr;};
    inline string originalTransferRemainAmount() const { DARABONBA_PTR_GET_DEFAULT(originalTransferRemainAmount_, "") };
    inline GetFundAccountCanRecycleAmountResponseBodyRecycleToFundAccountList& setOriginalTransferRemainAmount(string originalTransferRemainAmount) { DARABONBA_PTR_SET_VALUE(originalTransferRemainAmount_, originalTransferRemainAmount) };


  protected:
    std::shared_ptr<string> fundAccountId_ = nullptr;
    std::shared_ptr<string> fundAccountName_ = nullptr;
    std::shared_ptr<string> fundAccountOwnerAccountId_ = nullptr;
    std::shared_ptr<string> maxRecyclableAmount_ = nullptr;
    std::shared_ptr<string> originalTransferRemainAmount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
