// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHENROLLACCOUNTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHENROLLACCOUNTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Governance20210120
{
namespace Models
{
  class BatchEnrollAccountsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchEnrollAccountsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Accounts, accounts_);
      DARABONBA_PTR_TO_JSON(BaselineId, baselineId_);
      DARABONBA_PTR_TO_JSON(BaselineItems, baselineItems_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchEnrollAccountsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Accounts, accounts_);
      DARABONBA_PTR_FROM_JSON(BaselineId, baselineId_);
      DARABONBA_PTR_FROM_JSON(BaselineItems, baselineItems_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    BatchEnrollAccountsRequest() = default ;
    BatchEnrollAccountsRequest(const BatchEnrollAccountsRequest &) = default ;
    BatchEnrollAccountsRequest(BatchEnrollAccountsRequest &&) = default ;
    BatchEnrollAccountsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchEnrollAccountsRequest() = default ;
    BatchEnrollAccountsRequest& operator=(const BatchEnrollAccountsRequest &) = default ;
    BatchEnrollAccountsRequest& operator=(BatchEnrollAccountsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BaselineItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BaselineItems& obj) { 
        DARABONBA_PTR_TO_JSON(Config, config_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Skip, skip_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, BaselineItems& obj) { 
        DARABONBA_PTR_FROM_JSON(Config, config_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Skip, skip_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
      };
      BaselineItems() = default ;
      BaselineItems(const BaselineItems &) = default ;
      BaselineItems(BaselineItems &&) = default ;
      BaselineItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BaselineItems() = default ;
      BaselineItems& operator=(const BaselineItems &) = default ;
      BaselineItems& operator=(BaselineItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->config_ == nullptr
        && this->name_ == nullptr && this->skip_ == nullptr && this->version_ == nullptr; };
      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
      inline BaselineItems& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline BaselineItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // skip Field Functions 
      bool hasSkip() const { return this->skip_ != nullptr;};
      void deleteSkip() { this->skip_ = nullptr;};
      inline bool getSkip() const { DARABONBA_PTR_GET_DEFAULT(skip_, false) };
      inline BaselineItems& setSkip(bool skip) { DARABONBA_PTR_SET_VALUE(skip_, skip) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline BaselineItems& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // The configurations of the baseline item.
      shared_ptr<string> config_ {};
      // The name of the baseline item.
      shared_ptr<string> name_ {};
      // Specifies whether to skip the baseline item. Valid values:
      // 
      // *   false
      // *   true
      shared_ptr<bool> skip_ {};
      // The version of the baseline item.
      shared_ptr<string> version_ {};
    };

    class Accounts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Accounts& obj) { 
        DARABONBA_PTR_TO_JSON(AccountUid, accountUid_);
      };
      friend void from_json(const Darabonba::Json& j, Accounts& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountUid, accountUid_);
      };
      Accounts() = default ;
      Accounts(const Accounts &) = default ;
      Accounts(Accounts &&) = default ;
      Accounts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Accounts() = default ;
      Accounts& operator=(const Accounts &) = default ;
      Accounts& operator=(Accounts &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accountUid_ == nullptr; };
      // accountUid Field Functions 
      bool hasAccountUid() const { return this->accountUid_ != nullptr;};
      void deleteAccountUid() { this->accountUid_ = nullptr;};
      inline int64_t getAccountUid() const { DARABONBA_PTR_GET_DEFAULT(accountUid_, 0L) };
      inline Accounts& setAccountUid(int64_t accountUid) { DARABONBA_PTR_SET_VALUE(accountUid_, accountUid) };


    protected:
      // The account ID. This parameter is required.
      shared_ptr<int64_t> accountUid_ {};
    };

    virtual bool empty() const override { return this->accounts_ == nullptr
        && this->baselineId_ == nullptr && this->baselineItems_ == nullptr && this->regionId_ == nullptr; };
    // accounts Field Functions 
    bool hasAccounts() const { return this->accounts_ != nullptr;};
    void deleteAccounts() { this->accounts_ = nullptr;};
    inline const vector<BatchEnrollAccountsRequest::Accounts> & getAccounts() const { DARABONBA_PTR_GET_CONST(accounts_, vector<BatchEnrollAccountsRequest::Accounts>) };
    inline vector<BatchEnrollAccountsRequest::Accounts> getAccounts() { DARABONBA_PTR_GET(accounts_, vector<BatchEnrollAccountsRequest::Accounts>) };
    inline BatchEnrollAccountsRequest& setAccounts(const vector<BatchEnrollAccountsRequest::Accounts> & accounts) { DARABONBA_PTR_SET_VALUE(accounts_, accounts) };
    inline BatchEnrollAccountsRequest& setAccounts(vector<BatchEnrollAccountsRequest::Accounts> && accounts) { DARABONBA_PTR_SET_RVALUE(accounts_, accounts) };


    // baselineId Field Functions 
    bool hasBaselineId() const { return this->baselineId_ != nullptr;};
    void deleteBaselineId() { this->baselineId_ = nullptr;};
    inline string getBaselineId() const { DARABONBA_PTR_GET_DEFAULT(baselineId_, "") };
    inline BatchEnrollAccountsRequest& setBaselineId(string baselineId) { DARABONBA_PTR_SET_VALUE(baselineId_, baselineId) };


    // baselineItems Field Functions 
    bool hasBaselineItems() const { return this->baselineItems_ != nullptr;};
    void deleteBaselineItems() { this->baselineItems_ = nullptr;};
    inline const vector<BatchEnrollAccountsRequest::BaselineItems> & getBaselineItems() const { DARABONBA_PTR_GET_CONST(baselineItems_, vector<BatchEnrollAccountsRequest::BaselineItems>) };
    inline vector<BatchEnrollAccountsRequest::BaselineItems> getBaselineItems() { DARABONBA_PTR_GET(baselineItems_, vector<BatchEnrollAccountsRequest::BaselineItems>) };
    inline BatchEnrollAccountsRequest& setBaselineItems(const vector<BatchEnrollAccountsRequest::BaselineItems> & baselineItems) { DARABONBA_PTR_SET_VALUE(baselineItems_, baselineItems) };
    inline BatchEnrollAccountsRequest& setBaselineItems(vector<BatchEnrollAccountsRequest::BaselineItems> && baselineItems) { DARABONBA_PTR_SET_RVALUE(baselineItems_, baselineItems) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline BatchEnrollAccountsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The resource accounts.
    shared_ptr<vector<BatchEnrollAccountsRequest::Accounts>> accounts_ {};
    // The baseline ID.
    // 
    // If this parameter is left empty, the default baseline is used.
    shared_ptr<string> baselineId_ {};
    // The baseline items.
    // 
    // If this parameter is specified, the configurations of the baseline items are merged with the baseline applied to the specified account. The configurations of the same baseline items are subject to the configurations of this parameter. We recommend that you leave this parameter empty and configure the `BaselineId` parameter to specify an account baseline and apply the configurations of the account baseline to the account.
    shared_ptr<vector<BatchEnrollAccountsRequest::BaselineItems>> baselineItems_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Governance20210120
#endif
