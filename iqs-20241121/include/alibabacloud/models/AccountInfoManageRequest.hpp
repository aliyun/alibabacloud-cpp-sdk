// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ACCOUNTINFOMANAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ACCOUNTINFOMANAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241121
{
namespace Models
{
  class AccountInfoManageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AccountInfoManageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(accountId, accountId_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(quarkKey, quarkKey_);
      DARABONBA_PTR_TO_JSON(quarkName, quarkName_);
      DARABONBA_PTR_TO_JSON(testQps, testQps_);
      DARABONBA_PTR_TO_JSON(testQueryPerDay, testQueryPerDay_);
    };
    friend void from_json(const Darabonba::Json& j, AccountInfoManageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(accountId, accountId_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(quarkKey, quarkKey_);
      DARABONBA_PTR_FROM_JSON(quarkName, quarkName_);
      DARABONBA_PTR_FROM_JSON(testQps, testQps_);
      DARABONBA_PTR_FROM_JSON(testQueryPerDay, testQueryPerDay_);
    };
    AccountInfoManageRequest() = default ;
    AccountInfoManageRequest(const AccountInfoManageRequest &) = default ;
    AccountInfoManageRequest(AccountInfoManageRequest &&) = default ;
    AccountInfoManageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AccountInfoManageRequest() = default ;
    AccountInfoManageRequest& operator=(const AccountInfoManageRequest &) = default ;
    AccountInfoManageRequest& operator=(AccountInfoManageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && this->name_ == nullptr && this->quarkKey_ == nullptr && this->quarkName_ == nullptr && this->testQps_ == nullptr && this->testQueryPerDay_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline AccountInfoManageRequest& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AccountInfoManageRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // quarkKey Field Functions 
    bool hasQuarkKey() const { return this->quarkKey_ != nullptr;};
    void deleteQuarkKey() { this->quarkKey_ = nullptr;};
    inline string getQuarkKey() const { DARABONBA_PTR_GET_DEFAULT(quarkKey_, "") };
    inline AccountInfoManageRequest& setQuarkKey(string quarkKey) { DARABONBA_PTR_SET_VALUE(quarkKey_, quarkKey) };


    // quarkName Field Functions 
    bool hasQuarkName() const { return this->quarkName_ != nullptr;};
    void deleteQuarkName() { this->quarkName_ = nullptr;};
    inline string getQuarkName() const { DARABONBA_PTR_GET_DEFAULT(quarkName_, "") };
    inline AccountInfoManageRequest& setQuarkName(string quarkName) { DARABONBA_PTR_SET_VALUE(quarkName_, quarkName) };


    // testQps Field Functions 
    bool hasTestQps() const { return this->testQps_ != nullptr;};
    void deleteTestQps() { this->testQps_ = nullptr;};
    inline int32_t getTestQps() const { DARABONBA_PTR_GET_DEFAULT(testQps_, 0) };
    inline AccountInfoManageRequest& setTestQps(int32_t testQps) { DARABONBA_PTR_SET_VALUE(testQps_, testQps) };


    // testQueryPerDay Field Functions 
    bool hasTestQueryPerDay() const { return this->testQueryPerDay_ != nullptr;};
    void deleteTestQueryPerDay() { this->testQueryPerDay_ = nullptr;};
    inline int32_t getTestQueryPerDay() const { DARABONBA_PTR_GET_DEFAULT(testQueryPerDay_, 0) };
    inline AccountInfoManageRequest& setTestQueryPerDay(int32_t testQueryPerDay) { DARABONBA_PTR_SET_VALUE(testQueryPerDay_, testQueryPerDay) };


  protected:
    shared_ptr<string> accountId_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> quarkKey_ {};
    shared_ptr<string> quarkName_ {};
    shared_ptr<int32_t> testQps_ {};
    shared_ptr<int32_t> testQueryPerDay_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241121
#endif
