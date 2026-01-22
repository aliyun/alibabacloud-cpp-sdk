// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFUNDACCOUNTCANALLOCATECREDITAMOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETFUNDACCOUNTCANALLOCATECREDITAMOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class GetFundAccountCanAllocateCreditAmountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFundAccountCanAllocateCreditAmountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Ecid, ecid_);
      DARABONBA_PTR_TO_JSON(EcidAllocatedCreditAmount, ecidAllocatedCreditAmount_);
      DARABONBA_PTR_TO_JSON(EcidCreditAmount, ecidCreditAmount_);
      DARABONBA_PTR_TO_JSON(FundAccountEcid, fundAccountEcid_);
      DARABONBA_PTR_TO_JSON(FundAccountId, fundAccountId_);
      DARABONBA_PTR_TO_JSON(FundAccountName, fundAccountName_);
      DARABONBA_PTR_TO_JSON(FundAccountOwnerAccountId, fundAccountOwnerAccountId_);
      DARABONBA_PTR_TO_JSON(MaxCanAllocateCreditAmount, maxCanAllocateCreditAmount_);
      DARABONBA_ANY_TO_JSON(Metadata, metadata_);
      DARABONBA_PTR_TO_JSON(MinCanAllocateCreditAmount, minCanAllocateCreditAmount_);
      DARABONBA_PTR_TO_JSON(Nbid, nbid_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Site, site_);
    };
    friend void from_json(const Darabonba::Json& j, GetFundAccountCanAllocateCreditAmountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Ecid, ecid_);
      DARABONBA_PTR_FROM_JSON(EcidAllocatedCreditAmount, ecidAllocatedCreditAmount_);
      DARABONBA_PTR_FROM_JSON(EcidCreditAmount, ecidCreditAmount_);
      DARABONBA_PTR_FROM_JSON(FundAccountEcid, fundAccountEcid_);
      DARABONBA_PTR_FROM_JSON(FundAccountId, fundAccountId_);
      DARABONBA_PTR_FROM_JSON(FundAccountName, fundAccountName_);
      DARABONBA_PTR_FROM_JSON(FundAccountOwnerAccountId, fundAccountOwnerAccountId_);
      DARABONBA_PTR_FROM_JSON(MaxCanAllocateCreditAmount, maxCanAllocateCreditAmount_);
      DARABONBA_ANY_FROM_JSON(Metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(MinCanAllocateCreditAmount, minCanAllocateCreditAmount_);
      DARABONBA_PTR_FROM_JSON(Nbid, nbid_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Site, site_);
    };
    GetFundAccountCanAllocateCreditAmountResponseBody() = default ;
    GetFundAccountCanAllocateCreditAmountResponseBody(const GetFundAccountCanAllocateCreditAmountResponseBody &) = default ;
    GetFundAccountCanAllocateCreditAmountResponseBody(GetFundAccountCanAllocateCreditAmountResponseBody &&) = default ;
    GetFundAccountCanAllocateCreditAmountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFundAccountCanAllocateCreditAmountResponseBody() = default ;
    GetFundAccountCanAllocateCreditAmountResponseBody& operator=(const GetFundAccountCanAllocateCreditAmountResponseBody &) = default ;
    GetFundAccountCanAllocateCreditAmountResponseBody& operator=(GetFundAccountCanAllocateCreditAmountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ecid_ == nullptr
        && this->ecidAllocatedCreditAmount_ == nullptr && this->ecidCreditAmount_ == nullptr && this->fundAccountEcid_ == nullptr && this->fundAccountId_ == nullptr && this->fundAccountName_ == nullptr
        && this->fundAccountOwnerAccountId_ == nullptr && this->maxCanAllocateCreditAmount_ == nullptr && this->metadata_ == nullptr && this->minCanAllocateCreditAmount_ == nullptr && this->nbid_ == nullptr
        && this->requestId_ == nullptr && this->site_ == nullptr; };
    // ecid Field Functions 
    bool hasEcid() const { return this->ecid_ != nullptr;};
    void deleteEcid() { this->ecid_ = nullptr;};
    inline string getEcid() const { DARABONBA_PTR_GET_DEFAULT(ecid_, "") };
    inline GetFundAccountCanAllocateCreditAmountResponseBody& setEcid(string ecid) { DARABONBA_PTR_SET_VALUE(ecid_, ecid) };


    // ecidAllocatedCreditAmount Field Functions 
    bool hasEcidAllocatedCreditAmount() const { return this->ecidAllocatedCreditAmount_ != nullptr;};
    void deleteEcidAllocatedCreditAmount() { this->ecidAllocatedCreditAmount_ = nullptr;};
    inline string getEcidAllocatedCreditAmount() const { DARABONBA_PTR_GET_DEFAULT(ecidAllocatedCreditAmount_, "") };
    inline GetFundAccountCanAllocateCreditAmountResponseBody& setEcidAllocatedCreditAmount(string ecidAllocatedCreditAmount) { DARABONBA_PTR_SET_VALUE(ecidAllocatedCreditAmount_, ecidAllocatedCreditAmount) };


    // ecidCreditAmount Field Functions 
    bool hasEcidCreditAmount() const { return this->ecidCreditAmount_ != nullptr;};
    void deleteEcidCreditAmount() { this->ecidCreditAmount_ = nullptr;};
    inline string getEcidCreditAmount() const { DARABONBA_PTR_GET_DEFAULT(ecidCreditAmount_, "") };
    inline GetFundAccountCanAllocateCreditAmountResponseBody& setEcidCreditAmount(string ecidCreditAmount) { DARABONBA_PTR_SET_VALUE(ecidCreditAmount_, ecidCreditAmount) };


    // fundAccountEcid Field Functions 
    bool hasFundAccountEcid() const { return this->fundAccountEcid_ != nullptr;};
    void deleteFundAccountEcid() { this->fundAccountEcid_ = nullptr;};
    inline string getFundAccountEcid() const { DARABONBA_PTR_GET_DEFAULT(fundAccountEcid_, "") };
    inline GetFundAccountCanAllocateCreditAmountResponseBody& setFundAccountEcid(string fundAccountEcid) { DARABONBA_PTR_SET_VALUE(fundAccountEcid_, fundAccountEcid) };


    // fundAccountId Field Functions 
    bool hasFundAccountId() const { return this->fundAccountId_ != nullptr;};
    void deleteFundAccountId() { this->fundAccountId_ = nullptr;};
    inline int64_t getFundAccountId() const { DARABONBA_PTR_GET_DEFAULT(fundAccountId_, 0L) };
    inline GetFundAccountCanAllocateCreditAmountResponseBody& setFundAccountId(int64_t fundAccountId) { DARABONBA_PTR_SET_VALUE(fundAccountId_, fundAccountId) };


    // fundAccountName Field Functions 
    bool hasFundAccountName() const { return this->fundAccountName_ != nullptr;};
    void deleteFundAccountName() { this->fundAccountName_ = nullptr;};
    inline string getFundAccountName() const { DARABONBA_PTR_GET_DEFAULT(fundAccountName_, "") };
    inline GetFundAccountCanAllocateCreditAmountResponseBody& setFundAccountName(string fundAccountName) { DARABONBA_PTR_SET_VALUE(fundAccountName_, fundAccountName) };


    // fundAccountOwnerAccountId Field Functions 
    bool hasFundAccountOwnerAccountId() const { return this->fundAccountOwnerAccountId_ != nullptr;};
    void deleteFundAccountOwnerAccountId() { this->fundAccountOwnerAccountId_ = nullptr;};
    inline int64_t getFundAccountOwnerAccountId() const { DARABONBA_PTR_GET_DEFAULT(fundAccountOwnerAccountId_, 0L) };
    inline GetFundAccountCanAllocateCreditAmountResponseBody& setFundAccountOwnerAccountId(int64_t fundAccountOwnerAccountId) { DARABONBA_PTR_SET_VALUE(fundAccountOwnerAccountId_, fundAccountOwnerAccountId) };


    // maxCanAllocateCreditAmount Field Functions 
    bool hasMaxCanAllocateCreditAmount() const { return this->maxCanAllocateCreditAmount_ != nullptr;};
    void deleteMaxCanAllocateCreditAmount() { this->maxCanAllocateCreditAmount_ = nullptr;};
    inline string getMaxCanAllocateCreditAmount() const { DARABONBA_PTR_GET_DEFAULT(maxCanAllocateCreditAmount_, "") };
    inline GetFundAccountCanAllocateCreditAmountResponseBody& setMaxCanAllocateCreditAmount(string maxCanAllocateCreditAmount) { DARABONBA_PTR_SET_VALUE(maxCanAllocateCreditAmount_, maxCanAllocateCreditAmount) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline     const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
    Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
    inline GetFundAccountCanAllocateCreditAmountResponseBody& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
    inline GetFundAccountCanAllocateCreditAmountResponseBody& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


    // minCanAllocateCreditAmount Field Functions 
    bool hasMinCanAllocateCreditAmount() const { return this->minCanAllocateCreditAmount_ != nullptr;};
    void deleteMinCanAllocateCreditAmount() { this->minCanAllocateCreditAmount_ = nullptr;};
    inline string getMinCanAllocateCreditAmount() const { DARABONBA_PTR_GET_DEFAULT(minCanAllocateCreditAmount_, "") };
    inline GetFundAccountCanAllocateCreditAmountResponseBody& setMinCanAllocateCreditAmount(string minCanAllocateCreditAmount) { DARABONBA_PTR_SET_VALUE(minCanAllocateCreditAmount_, minCanAllocateCreditAmount) };


    // nbid Field Functions 
    bool hasNbid() const { return this->nbid_ != nullptr;};
    void deleteNbid() { this->nbid_ = nullptr;};
    inline string getNbid() const { DARABONBA_PTR_GET_DEFAULT(nbid_, "") };
    inline GetFundAccountCanAllocateCreditAmountResponseBody& setNbid(string nbid) { DARABONBA_PTR_SET_VALUE(nbid_, nbid) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetFundAccountCanAllocateCreditAmountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // site Field Functions 
    bool hasSite() const { return this->site_ != nullptr;};
    void deleteSite() { this->site_ = nullptr;};
    inline string getSite() const { DARABONBA_PTR_GET_DEFAULT(site_, "") };
    inline GetFundAccountCanAllocateCreditAmountResponseBody& setSite(string site) { DARABONBA_PTR_SET_VALUE(site_, site) };


  protected:
    shared_ptr<string> ecid_ {};
    shared_ptr<string> ecidAllocatedCreditAmount_ {};
    shared_ptr<string> ecidCreditAmount_ {};
    shared_ptr<string> fundAccountEcid_ {};
    shared_ptr<int64_t> fundAccountId_ {};
    shared_ptr<string> fundAccountName_ {};
    shared_ptr<int64_t> fundAccountOwnerAccountId_ {};
    shared_ptr<string> maxCanAllocateCreditAmount_ {};
    Darabonba::Json metadata_ {};
    shared_ptr<string> minCanAllocateCreditAmount_ {};
    shared_ptr<string> nbid_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> site_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
