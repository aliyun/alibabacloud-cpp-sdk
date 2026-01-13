// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IRACCOUNTENTITY_HPP_
#define ALIBABACLOUD_MODELS_IRACCOUNTENTITY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241121
{
namespace Models
{
  class IrAccountEntity : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IrAccountEntity& obj) { 
      DARABONBA_PTR_TO_JSON(accountId, accountId_);
      DARABONBA_PTR_TO_JSON(accountName, accountName_);
      DARABONBA_PTR_TO_JSON(accountStatus, accountStatus_);
      DARABONBA_PTR_TO_JSON(adjustedNormalQps, adjustedNormalQps_);
      DARABONBA_PTR_TO_JSON(configuration, configuration_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(isDeleted, isDeleted_);
      DARABONBA_PTR_TO_JSON(modifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(quarkKey, quarkKey_);
      DARABONBA_PTR_TO_JSON(quarkOsr, quarkOsr_);
      DARABONBA_PTR_TO_JSON(quarkUsername, quarkUsername_);
      DARABONBA_PTR_TO_JSON(searchType, searchType_);
      DARABONBA_PTR_TO_JSON(testQps, testQps_);
      DARABONBA_PTR_TO_JSON(testQueryPerDay, testQueryPerDay_);
      DARABONBA_PTR_TO_JSON(testStartTime, testStartTime_);
    };
    friend void from_json(const Darabonba::Json& j, IrAccountEntity& obj) { 
      DARABONBA_PTR_FROM_JSON(accountId, accountId_);
      DARABONBA_PTR_FROM_JSON(accountName, accountName_);
      DARABONBA_PTR_FROM_JSON(accountStatus, accountStatus_);
      DARABONBA_PTR_FROM_JSON(adjustedNormalQps, adjustedNormalQps_);
      DARABONBA_PTR_FROM_JSON(configuration, configuration_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(isDeleted, isDeleted_);
      DARABONBA_PTR_FROM_JSON(modifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(quarkKey, quarkKey_);
      DARABONBA_PTR_FROM_JSON(quarkOsr, quarkOsr_);
      DARABONBA_PTR_FROM_JSON(quarkUsername, quarkUsername_);
      DARABONBA_PTR_FROM_JSON(searchType, searchType_);
      DARABONBA_PTR_FROM_JSON(testQps, testQps_);
      DARABONBA_PTR_FROM_JSON(testQueryPerDay, testQueryPerDay_);
      DARABONBA_PTR_FROM_JSON(testStartTime, testStartTime_);
    };
    IrAccountEntity() = default ;
    IrAccountEntity(const IrAccountEntity &) = default ;
    IrAccountEntity(IrAccountEntity &&) = default ;
    IrAccountEntity(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IrAccountEntity() = default ;
    IrAccountEntity& operator=(const IrAccountEntity &) = default ;
    IrAccountEntity& operator=(IrAccountEntity &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && this->accountName_ == nullptr && this->accountStatus_ == nullptr && this->adjustedNormalQps_ == nullptr && this->configuration_ == nullptr && this->createTime_ == nullptr
        && this->id_ == nullptr && this->isDeleted_ == nullptr && this->modifiedTime_ == nullptr && this->quarkKey_ == nullptr && this->quarkOsr_ == nullptr
        && this->quarkUsername_ == nullptr && this->searchType_ == nullptr && this->testQps_ == nullptr && this->testQueryPerDay_ == nullptr && this->testStartTime_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline IrAccountEntity& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline IrAccountEntity& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // accountStatus Field Functions 
    bool hasAccountStatus() const { return this->accountStatus_ != nullptr;};
    void deleteAccountStatus() { this->accountStatus_ = nullptr;};
    inline string getAccountStatus() const { DARABONBA_PTR_GET_DEFAULT(accountStatus_, "") };
    inline IrAccountEntity& setAccountStatus(string accountStatus) { DARABONBA_PTR_SET_VALUE(accountStatus_, accountStatus) };


    // adjustedNormalQps Field Functions 
    bool hasAdjustedNormalQps() const { return this->adjustedNormalQps_ != nullptr;};
    void deleteAdjustedNormalQps() { this->adjustedNormalQps_ = nullptr;};
    inline int32_t getAdjustedNormalQps() const { DARABONBA_PTR_GET_DEFAULT(adjustedNormalQps_, 0) };
    inline IrAccountEntity& setAdjustedNormalQps(int32_t adjustedNormalQps) { DARABONBA_PTR_SET_VALUE(adjustedNormalQps_, adjustedNormalQps) };


    // configuration Field Functions 
    bool hasConfiguration() const { return this->configuration_ != nullptr;};
    void deleteConfiguration() { this->configuration_ = nullptr;};
    inline string getConfiguration() const { DARABONBA_PTR_GET_DEFAULT(configuration_, "") };
    inline IrAccountEntity& setConfiguration(string configuration) { DARABONBA_PTR_SET_VALUE(configuration_, configuration) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline IrAccountEntity& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline IrAccountEntity& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // isDeleted Field Functions 
    bool hasIsDeleted() const { return this->isDeleted_ != nullptr;};
    void deleteIsDeleted() { this->isDeleted_ = nullptr;};
    inline int32_t getIsDeleted() const { DARABONBA_PTR_GET_DEFAULT(isDeleted_, 0) };
    inline IrAccountEntity& setIsDeleted(int32_t isDeleted) { DARABONBA_PTR_SET_VALUE(isDeleted_, isDeleted) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline IrAccountEntity& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // quarkKey Field Functions 
    bool hasQuarkKey() const { return this->quarkKey_ != nullptr;};
    void deleteQuarkKey() { this->quarkKey_ = nullptr;};
    inline string getQuarkKey() const { DARABONBA_PTR_GET_DEFAULT(quarkKey_, "") };
    inline IrAccountEntity& setQuarkKey(string quarkKey) { DARABONBA_PTR_SET_VALUE(quarkKey_, quarkKey) };


    // quarkOsr Field Functions 
    bool hasQuarkOsr() const { return this->quarkOsr_ != nullptr;};
    void deleteQuarkOsr() { this->quarkOsr_ = nullptr;};
    inline string getQuarkOsr() const { DARABONBA_PTR_GET_DEFAULT(quarkOsr_, "") };
    inline IrAccountEntity& setQuarkOsr(string quarkOsr) { DARABONBA_PTR_SET_VALUE(quarkOsr_, quarkOsr) };


    // quarkUsername Field Functions 
    bool hasQuarkUsername() const { return this->quarkUsername_ != nullptr;};
    void deleteQuarkUsername() { this->quarkUsername_ = nullptr;};
    inline string getQuarkUsername() const { DARABONBA_PTR_GET_DEFAULT(quarkUsername_, "") };
    inline IrAccountEntity& setQuarkUsername(string quarkUsername) { DARABONBA_PTR_SET_VALUE(quarkUsername_, quarkUsername) };


    // searchType Field Functions 
    bool hasSearchType() const { return this->searchType_ != nullptr;};
    void deleteSearchType() { this->searchType_ = nullptr;};
    inline string getSearchType() const { DARABONBA_PTR_GET_DEFAULT(searchType_, "") };
    inline IrAccountEntity& setSearchType(string searchType) { DARABONBA_PTR_SET_VALUE(searchType_, searchType) };


    // testQps Field Functions 
    bool hasTestQps() const { return this->testQps_ != nullptr;};
    void deleteTestQps() { this->testQps_ = nullptr;};
    inline int32_t getTestQps() const { DARABONBA_PTR_GET_DEFAULT(testQps_, 0) };
    inline IrAccountEntity& setTestQps(int32_t testQps) { DARABONBA_PTR_SET_VALUE(testQps_, testQps) };


    // testQueryPerDay Field Functions 
    bool hasTestQueryPerDay() const { return this->testQueryPerDay_ != nullptr;};
    void deleteTestQueryPerDay() { this->testQueryPerDay_ = nullptr;};
    inline int32_t getTestQueryPerDay() const { DARABONBA_PTR_GET_DEFAULT(testQueryPerDay_, 0) };
    inline IrAccountEntity& setTestQueryPerDay(int32_t testQueryPerDay) { DARABONBA_PTR_SET_VALUE(testQueryPerDay_, testQueryPerDay) };


    // testStartTime Field Functions 
    bool hasTestStartTime() const { return this->testStartTime_ != nullptr;};
    void deleteTestStartTime() { this->testStartTime_ = nullptr;};
    inline string getTestStartTime() const { DARABONBA_PTR_GET_DEFAULT(testStartTime_, "") };
    inline IrAccountEntity& setTestStartTime(string testStartTime) { DARABONBA_PTR_SET_VALUE(testStartTime_, testStartTime) };


  protected:
    shared_ptr<string> accountId_ {};
    shared_ptr<string> accountName_ {};
    shared_ptr<string> accountStatus_ {};
    shared_ptr<int32_t> adjustedNormalQps_ {};
    shared_ptr<string> configuration_ {};
    shared_ptr<string> createTime_ {};
    shared_ptr<int64_t> id_ {};
    shared_ptr<int32_t> isDeleted_ {};
    shared_ptr<string> modifiedTime_ {};
    shared_ptr<string> quarkKey_ {};
    shared_ptr<string> quarkOsr_ {};
    shared_ptr<string> quarkUsername_ {};
    shared_ptr<string> searchType_ {};
    shared_ptr<int32_t> testQps_ {};
    shared_ptr<int32_t> testQueryPerDay_ {};
    shared_ptr<string> testStartTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241121
#endif
