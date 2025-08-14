// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFUNDACCOUNTPAYRELATIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTFUNDACCOUNTPAYRELATIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class ListFundAccountPayRelationResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFundAccountPayRelationResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(Ecid, ecid_);
      DARABONBA_PTR_TO_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_TO_JSON(FundAccountId, fundAccountId_);
      DARABONBA_PTR_TO_JSON(FundAccountOwnerAccountId, fundAccountOwnerAccountId_);
      DARABONBA_PTR_TO_JSON(IneffectiveTime, ineffectiveTime_);
      DARABONBA_PTR_TO_JSON(Nbid, nbid_);
      DARABONBA_PTR_TO_JSON(OperatorName, operatorName_);
      DARABONBA_PTR_TO_JSON(OperatorNo, operatorNo_);
      DARABONBA_PTR_TO_JSON(OperatorType, operatorType_);
      DARABONBA_PTR_TO_JSON(RelationType, relationType_);
      DARABONBA_PTR_TO_JSON(Site, site_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListFundAccountPayRelationResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(Ecid, ecid_);
      DARABONBA_PTR_FROM_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_FROM_JSON(FundAccountId, fundAccountId_);
      DARABONBA_PTR_FROM_JSON(FundAccountOwnerAccountId, fundAccountOwnerAccountId_);
      DARABONBA_PTR_FROM_JSON(IneffectiveTime, ineffectiveTime_);
      DARABONBA_PTR_FROM_JSON(Nbid, nbid_);
      DARABONBA_PTR_FROM_JSON(OperatorName, operatorName_);
      DARABONBA_PTR_FROM_JSON(OperatorNo, operatorNo_);
      DARABONBA_PTR_FROM_JSON(OperatorType, operatorType_);
      DARABONBA_PTR_FROM_JSON(RelationType, relationType_);
      DARABONBA_PTR_FROM_JSON(Site, site_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListFundAccountPayRelationResponseBodyData() = default ;
    ListFundAccountPayRelationResponseBodyData(const ListFundAccountPayRelationResponseBodyData &) = default ;
    ListFundAccountPayRelationResponseBodyData(ListFundAccountPayRelationResponseBodyData &&) = default ;
    ListFundAccountPayRelationResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFundAccountPayRelationResponseBodyData() = default ;
    ListFundAccountPayRelationResponseBodyData& operator=(const ListFundAccountPayRelationResponseBodyData &) = default ;
    ListFundAccountPayRelationResponseBodyData& operator=(ListFundAccountPayRelationResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountId_ != nullptr
        && this->accountName_ != nullptr && this->ecid_ != nullptr && this->effectiveTime_ != nullptr && this->fundAccountId_ != nullptr && this->fundAccountOwnerAccountId_ != nullptr
        && this->ineffectiveTime_ != nullptr && this->nbid_ != nullptr && this->operatorName_ != nullptr && this->operatorNo_ != nullptr && this->operatorType_ != nullptr
        && this->relationType_ != nullptr && this->site_ != nullptr && this->status_ != nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline ListFundAccountPayRelationResponseBodyData& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline ListFundAccountPayRelationResponseBodyData& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // ecid Field Functions 
    bool hasEcid() const { return this->ecid_ != nullptr;};
    void deleteEcid() { this->ecid_ = nullptr;};
    inline string ecid() const { DARABONBA_PTR_GET_DEFAULT(ecid_, "") };
    inline ListFundAccountPayRelationResponseBodyData& setEcid(string ecid) { DARABONBA_PTR_SET_VALUE(ecid_, ecid) };


    // effectiveTime Field Functions 
    bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
    void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
    inline string effectiveTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveTime_, "") };
    inline ListFundAccountPayRelationResponseBodyData& setEffectiveTime(string effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };


    // fundAccountId Field Functions 
    bool hasFundAccountId() const { return this->fundAccountId_ != nullptr;};
    void deleteFundAccountId() { this->fundAccountId_ = nullptr;};
    inline string fundAccountId() const { DARABONBA_PTR_GET_DEFAULT(fundAccountId_, "") };
    inline ListFundAccountPayRelationResponseBodyData& setFundAccountId(string fundAccountId) { DARABONBA_PTR_SET_VALUE(fundAccountId_, fundAccountId) };


    // fundAccountOwnerAccountId Field Functions 
    bool hasFundAccountOwnerAccountId() const { return this->fundAccountOwnerAccountId_ != nullptr;};
    void deleteFundAccountOwnerAccountId() { this->fundAccountOwnerAccountId_ = nullptr;};
    inline string fundAccountOwnerAccountId() const { DARABONBA_PTR_GET_DEFAULT(fundAccountOwnerAccountId_, "") };
    inline ListFundAccountPayRelationResponseBodyData& setFundAccountOwnerAccountId(string fundAccountOwnerAccountId) { DARABONBA_PTR_SET_VALUE(fundAccountOwnerAccountId_, fundAccountOwnerAccountId) };


    // ineffectiveTime Field Functions 
    bool hasIneffectiveTime() const { return this->ineffectiveTime_ != nullptr;};
    void deleteIneffectiveTime() { this->ineffectiveTime_ = nullptr;};
    inline string ineffectiveTime() const { DARABONBA_PTR_GET_DEFAULT(ineffectiveTime_, "") };
    inline ListFundAccountPayRelationResponseBodyData& setIneffectiveTime(string ineffectiveTime) { DARABONBA_PTR_SET_VALUE(ineffectiveTime_, ineffectiveTime) };


    // nbid Field Functions 
    bool hasNbid() const { return this->nbid_ != nullptr;};
    void deleteNbid() { this->nbid_ = nullptr;};
    inline string nbid() const { DARABONBA_PTR_GET_DEFAULT(nbid_, "") };
    inline ListFundAccountPayRelationResponseBodyData& setNbid(string nbid) { DARABONBA_PTR_SET_VALUE(nbid_, nbid) };


    // operatorName Field Functions 
    bool hasOperatorName() const { return this->operatorName_ != nullptr;};
    void deleteOperatorName() { this->operatorName_ = nullptr;};
    inline string operatorName() const { DARABONBA_PTR_GET_DEFAULT(operatorName_, "") };
    inline ListFundAccountPayRelationResponseBodyData& setOperatorName(string operatorName) { DARABONBA_PTR_SET_VALUE(operatorName_, operatorName) };


    // operatorNo Field Functions 
    bool hasOperatorNo() const { return this->operatorNo_ != nullptr;};
    void deleteOperatorNo() { this->operatorNo_ = nullptr;};
    inline string operatorNo() const { DARABONBA_PTR_GET_DEFAULT(operatorNo_, "") };
    inline ListFundAccountPayRelationResponseBodyData& setOperatorNo(string operatorNo) { DARABONBA_PTR_SET_VALUE(operatorNo_, operatorNo) };


    // operatorType Field Functions 
    bool hasOperatorType() const { return this->operatorType_ != nullptr;};
    void deleteOperatorType() { this->operatorType_ = nullptr;};
    inline string operatorType() const { DARABONBA_PTR_GET_DEFAULT(operatorType_, "") };
    inline ListFundAccountPayRelationResponseBodyData& setOperatorType(string operatorType) { DARABONBA_PTR_SET_VALUE(operatorType_, operatorType) };


    // relationType Field Functions 
    bool hasRelationType() const { return this->relationType_ != nullptr;};
    void deleteRelationType() { this->relationType_ = nullptr;};
    inline string relationType() const { DARABONBA_PTR_GET_DEFAULT(relationType_, "") };
    inline ListFundAccountPayRelationResponseBodyData& setRelationType(string relationType) { DARABONBA_PTR_SET_VALUE(relationType_, relationType) };


    // site Field Functions 
    bool hasSite() const { return this->site_ != nullptr;};
    void deleteSite() { this->site_ = nullptr;};
    inline string site() const { DARABONBA_PTR_GET_DEFAULT(site_, "") };
    inline ListFundAccountPayRelationResponseBodyData& setSite(string site) { DARABONBA_PTR_SET_VALUE(site_, site) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListFundAccountPayRelationResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> accountId_ = nullptr;
    std::shared_ptr<string> accountName_ = nullptr;
    std::shared_ptr<string> ecid_ = nullptr;
    std::shared_ptr<string> effectiveTime_ = nullptr;
    std::shared_ptr<string> fundAccountId_ = nullptr;
    std::shared_ptr<string> fundAccountOwnerAccountId_ = nullptr;
    std::shared_ptr<string> ineffectiveTime_ = nullptr;
    std::shared_ptr<string> nbid_ = nullptr;
    std::shared_ptr<string> operatorName_ = nullptr;
    std::shared_ptr<string> operatorNo_ = nullptr;
    std::shared_ptr<string> operatorType_ = nullptr;
    std::shared_ptr<string> relationType_ = nullptr;
    std::shared_ptr<string> site_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
