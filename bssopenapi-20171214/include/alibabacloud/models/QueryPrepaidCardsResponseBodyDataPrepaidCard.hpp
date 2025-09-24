// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPREPAIDCARDSRESPONSEBODYDATAPREPAIDCARD_HPP_
#define ALIBABACLOUD_MODELS_QUERYPREPAIDCARDSRESPONSEBODYDATAPREPAIDCARD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryPrepaidCardsResponseBodyDataPrepaidCard : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPrepaidCardsResponseBodyDataPrepaidCard& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicableProducts, applicableProducts_);
      DARABONBA_PTR_TO_JSON(ApplicableScenarios, applicableScenarios_);
      DARABONBA_PTR_TO_JSON(Balance, balance_);
      DARABONBA_PTR_TO_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_TO_JSON(ExpiryTime, expiryTime_);
      DARABONBA_PTR_TO_JSON(GrantedTime, grantedTime_);
      DARABONBA_PTR_TO_JSON(NominalValue, nominalValue_);
      DARABONBA_PTR_TO_JSON(PrepaidCardId, prepaidCardId_);
      DARABONBA_PTR_TO_JSON(PrepaidCardNo, prepaidCardNo_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPrepaidCardsResponseBodyDataPrepaidCard& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicableProducts, applicableProducts_);
      DARABONBA_PTR_FROM_JSON(ApplicableScenarios, applicableScenarios_);
      DARABONBA_PTR_FROM_JSON(Balance, balance_);
      DARABONBA_PTR_FROM_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_FROM_JSON(ExpiryTime, expiryTime_);
      DARABONBA_PTR_FROM_JSON(GrantedTime, grantedTime_);
      DARABONBA_PTR_FROM_JSON(NominalValue, nominalValue_);
      DARABONBA_PTR_FROM_JSON(PrepaidCardId, prepaidCardId_);
      DARABONBA_PTR_FROM_JSON(PrepaidCardNo, prepaidCardNo_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    QueryPrepaidCardsResponseBodyDataPrepaidCard() = default ;
    QueryPrepaidCardsResponseBodyDataPrepaidCard(const QueryPrepaidCardsResponseBodyDataPrepaidCard &) = default ;
    QueryPrepaidCardsResponseBodyDataPrepaidCard(QueryPrepaidCardsResponseBodyDataPrepaidCard &&) = default ;
    QueryPrepaidCardsResponseBodyDataPrepaidCard(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPrepaidCardsResponseBodyDataPrepaidCard() = default ;
    QueryPrepaidCardsResponseBodyDataPrepaidCard& operator=(const QueryPrepaidCardsResponseBodyDataPrepaidCard &) = default ;
    QueryPrepaidCardsResponseBodyDataPrepaidCard& operator=(QueryPrepaidCardsResponseBodyDataPrepaidCard &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicableProducts_ != nullptr
        && this->applicableScenarios_ != nullptr && this->balance_ != nullptr && this->effectiveTime_ != nullptr && this->expiryTime_ != nullptr && this->grantedTime_ != nullptr
        && this->nominalValue_ != nullptr && this->prepaidCardId_ != nullptr && this->prepaidCardNo_ != nullptr && this->status_ != nullptr; };
    // applicableProducts Field Functions 
    bool hasApplicableProducts() const { return this->applicableProducts_ != nullptr;};
    void deleteApplicableProducts() { this->applicableProducts_ = nullptr;};
    inline string applicableProducts() const { DARABONBA_PTR_GET_DEFAULT(applicableProducts_, "") };
    inline QueryPrepaidCardsResponseBodyDataPrepaidCard& setApplicableProducts(string applicableProducts) { DARABONBA_PTR_SET_VALUE(applicableProducts_, applicableProducts) };


    // applicableScenarios Field Functions 
    bool hasApplicableScenarios() const { return this->applicableScenarios_ != nullptr;};
    void deleteApplicableScenarios() { this->applicableScenarios_ = nullptr;};
    inline string applicableScenarios() const { DARABONBA_PTR_GET_DEFAULT(applicableScenarios_, "") };
    inline QueryPrepaidCardsResponseBodyDataPrepaidCard& setApplicableScenarios(string applicableScenarios) { DARABONBA_PTR_SET_VALUE(applicableScenarios_, applicableScenarios) };


    // balance Field Functions 
    bool hasBalance() const { return this->balance_ != nullptr;};
    void deleteBalance() { this->balance_ = nullptr;};
    inline string balance() const { DARABONBA_PTR_GET_DEFAULT(balance_, "") };
    inline QueryPrepaidCardsResponseBodyDataPrepaidCard& setBalance(string balance) { DARABONBA_PTR_SET_VALUE(balance_, balance) };


    // effectiveTime Field Functions 
    bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
    void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
    inline string effectiveTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveTime_, "") };
    inline QueryPrepaidCardsResponseBodyDataPrepaidCard& setEffectiveTime(string effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };


    // expiryTime Field Functions 
    bool hasExpiryTime() const { return this->expiryTime_ != nullptr;};
    void deleteExpiryTime() { this->expiryTime_ = nullptr;};
    inline string expiryTime() const { DARABONBA_PTR_GET_DEFAULT(expiryTime_, "") };
    inline QueryPrepaidCardsResponseBodyDataPrepaidCard& setExpiryTime(string expiryTime) { DARABONBA_PTR_SET_VALUE(expiryTime_, expiryTime) };


    // grantedTime Field Functions 
    bool hasGrantedTime() const { return this->grantedTime_ != nullptr;};
    void deleteGrantedTime() { this->grantedTime_ = nullptr;};
    inline string grantedTime() const { DARABONBA_PTR_GET_DEFAULT(grantedTime_, "") };
    inline QueryPrepaidCardsResponseBodyDataPrepaidCard& setGrantedTime(string grantedTime) { DARABONBA_PTR_SET_VALUE(grantedTime_, grantedTime) };


    // nominalValue Field Functions 
    bool hasNominalValue() const { return this->nominalValue_ != nullptr;};
    void deleteNominalValue() { this->nominalValue_ = nullptr;};
    inline string nominalValue() const { DARABONBA_PTR_GET_DEFAULT(nominalValue_, "") };
    inline QueryPrepaidCardsResponseBodyDataPrepaidCard& setNominalValue(string nominalValue) { DARABONBA_PTR_SET_VALUE(nominalValue_, nominalValue) };


    // prepaidCardId Field Functions 
    bool hasPrepaidCardId() const { return this->prepaidCardId_ != nullptr;};
    void deletePrepaidCardId() { this->prepaidCardId_ = nullptr;};
    inline int64_t prepaidCardId() const { DARABONBA_PTR_GET_DEFAULT(prepaidCardId_, 0L) };
    inline QueryPrepaidCardsResponseBodyDataPrepaidCard& setPrepaidCardId(int64_t prepaidCardId) { DARABONBA_PTR_SET_VALUE(prepaidCardId_, prepaidCardId) };


    // prepaidCardNo Field Functions 
    bool hasPrepaidCardNo() const { return this->prepaidCardNo_ != nullptr;};
    void deletePrepaidCardNo() { this->prepaidCardNo_ = nullptr;};
    inline string prepaidCardNo() const { DARABONBA_PTR_GET_DEFAULT(prepaidCardNo_, "") };
    inline QueryPrepaidCardsResponseBodyDataPrepaidCard& setPrepaidCardNo(string prepaidCardNo) { DARABONBA_PTR_SET_VALUE(prepaidCardNo_, prepaidCardNo) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline QueryPrepaidCardsResponseBodyDataPrepaidCard& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The services to which the prepaid card is applicable.
    std::shared_ptr<string> applicableProducts_ = nullptr;
    // The scenario to which the prepaid card is applicable.
    std::shared_ptr<string> applicableScenarios_ = nullptr;
    // The balance of the prepaid card.
    std::shared_ptr<string> balance_ = nullptr;
    // The time when the prepaid card took effect.
    std::shared_ptr<string> effectiveTime_ = nullptr;
    // The time when the prepaid card expired.
    std::shared_ptr<string> expiryTime_ = nullptr;
    // The time when the prepaid card was issued.
    std::shared_ptr<string> grantedTime_ = nullptr;
    // The nominal value of the prepaid card.
    std::shared_ptr<string> nominalValue_ = nullptr;
    // The ID of the prepaid card.
    std::shared_ptr<int64_t> prepaidCardId_ = nullptr;
    // The number of the prepaid card.
    std::shared_ptr<string> prepaidCardNo_ = nullptr;
    // The status of the prepaid card. Valid values:
    // 
    // *   Available: The prepaid card is valid.
    // *   Expired: The prepaid card expired.
    // *   Cancelled: The prepaid card is invalid.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
