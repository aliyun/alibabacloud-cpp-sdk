// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYRELATIONLISTRESPONSEBODYDATAFINANCIALRELATIONINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYRELATIONLISTRESPONSEBODYDATAFINANCIALRELATIONINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryRelationListResponseBodyDataFinancialRelationInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryRelationListResponseBodyDataFinancialRelationInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(AccountNickName, accountNickName_);
      DARABONBA_PTR_TO_JSON(AccountType, accountType_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RelationId, relationId_);
      DARABONBA_PTR_TO_JSON(RelationType, relationType_);
      DARABONBA_PTR_TO_JSON(SetupTime, setupTime_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, QueryRelationListResponseBodyDataFinancialRelationInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(AccountNickName, accountNickName_);
      DARABONBA_PTR_FROM_JSON(AccountType, accountType_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RelationId, relationId_);
      DARABONBA_PTR_FROM_JSON(RelationType, relationType_);
      DARABONBA_PTR_FROM_JSON(SetupTime, setupTime_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    QueryRelationListResponseBodyDataFinancialRelationInfoList() = default ;
    QueryRelationListResponseBodyDataFinancialRelationInfoList(const QueryRelationListResponseBodyDataFinancialRelationInfoList &) = default ;
    QueryRelationListResponseBodyDataFinancialRelationInfoList(QueryRelationListResponseBodyDataFinancialRelationInfoList &&) = default ;
    QueryRelationListResponseBodyDataFinancialRelationInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryRelationListResponseBodyDataFinancialRelationInfoList() = default ;
    QueryRelationListResponseBodyDataFinancialRelationInfoList& operator=(const QueryRelationListResponseBodyDataFinancialRelationInfoList &) = default ;
    QueryRelationListResponseBodyDataFinancialRelationInfoList& operator=(QueryRelationListResponseBodyDataFinancialRelationInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountId_ != nullptr
        && this->accountName_ != nullptr && this->accountNickName_ != nullptr && this->accountType_ != nullptr && this->endTime_ != nullptr && this->relationId_ != nullptr
        && this->relationType_ != nullptr && this->setupTime_ != nullptr && this->startTime_ != nullptr && this->state_ != nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline int64_t accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
    inline QueryRelationListResponseBodyDataFinancialRelationInfoList& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline QueryRelationListResponseBodyDataFinancialRelationInfoList& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // accountNickName Field Functions 
    bool hasAccountNickName() const { return this->accountNickName_ != nullptr;};
    void deleteAccountNickName() { this->accountNickName_ = nullptr;};
    inline string accountNickName() const { DARABONBA_PTR_GET_DEFAULT(accountNickName_, "") };
    inline QueryRelationListResponseBodyDataFinancialRelationInfoList& setAccountNickName(string accountNickName) { DARABONBA_PTR_SET_VALUE(accountNickName_, accountNickName) };


    // accountType Field Functions 
    bool hasAccountType() const { return this->accountType_ != nullptr;};
    void deleteAccountType() { this->accountType_ = nullptr;};
    inline string accountType() const { DARABONBA_PTR_GET_DEFAULT(accountType_, "") };
    inline QueryRelationListResponseBodyDataFinancialRelationInfoList& setAccountType(string accountType) { DARABONBA_PTR_SET_VALUE(accountType_, accountType) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline QueryRelationListResponseBodyDataFinancialRelationInfoList& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // relationId Field Functions 
    bool hasRelationId() const { return this->relationId_ != nullptr;};
    void deleteRelationId() { this->relationId_ = nullptr;};
    inline int64_t relationId() const { DARABONBA_PTR_GET_DEFAULT(relationId_, 0L) };
    inline QueryRelationListResponseBodyDataFinancialRelationInfoList& setRelationId(int64_t relationId) { DARABONBA_PTR_SET_VALUE(relationId_, relationId) };


    // relationType Field Functions 
    bool hasRelationType() const { return this->relationType_ != nullptr;};
    void deleteRelationType() { this->relationType_ = nullptr;};
    inline string relationType() const { DARABONBA_PTR_GET_DEFAULT(relationType_, "") };
    inline QueryRelationListResponseBodyDataFinancialRelationInfoList& setRelationType(string relationType) { DARABONBA_PTR_SET_VALUE(relationType_, relationType) };


    // setupTime Field Functions 
    bool hasSetupTime() const { return this->setupTime_ != nullptr;};
    void deleteSetupTime() { this->setupTime_ = nullptr;};
    inline string setupTime() const { DARABONBA_PTR_GET_DEFAULT(setupTime_, "") };
    inline QueryRelationListResponseBodyDataFinancialRelationInfoList& setSetupTime(string setupTime) { DARABONBA_PTR_SET_VALUE(setupTime_, setupTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline QueryRelationListResponseBodyDataFinancialRelationInfoList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline QueryRelationListResponseBodyDataFinancialRelationInfoList& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    // The ID of the Alibaba Cloud account.
    std::shared_ptr<int64_t> accountId_ = nullptr;
    // The name of the account.
    std::shared_ptr<string> accountName_ = nullptr;
    // The display name of the account.
    std::shared_ptr<string> accountNickName_ = nullptr;
    // The type of the account. Valid values: MASTER and MEMBER.
    std::shared_ptr<string> accountType_ = nullptr;
    // The time when the relationship became invalid. If no value is returned, the relationship is still valid.
    std::shared_ptr<string> endTime_ = nullptr;
    // The ID of the relationship.
    std::shared_ptr<int64_t> relationId_ = nullptr;
    // The type of the relationship. Valid values: FinancialManagement and FinancialTrusteeship.
    std::shared_ptr<string> relationType_ = nullptr;
    // The time when the relationship was established. The time follows the ISO 8601 standard in the yyyy-MM-ddThh:mm:ssZ format. The time is displayed in UTC. Example: 2016-05-23T12:00:00Z.
    std::shared_ptr<string> setupTime_ = nullptr;
    // The time when the relationship became valid. The time follows the ISO 8601 standard in the yyyy-MM-ddThh:mm:ssZ format. The time is displayed in UTC. Example: 2016-05-23T12:00:00Z.
    std::shared_ptr<string> startTime_ = nullptr;
    // The state of the relationship. One of the enumeration members of the RelationshipStatusEnum data type is returned.
    std::shared_ptr<string> state_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
