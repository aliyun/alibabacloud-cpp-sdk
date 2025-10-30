// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHENROLLACCOUNTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHENROLLACCOUNTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BatchEnrollAccountsRequestAccounts.hpp>
#include <alibabacloud/models/BatchEnrollAccountsRequestBaselineItems.hpp>
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
    virtual bool empty() const override { return this->accounts_ == nullptr
        && return this->baselineId_ == nullptr && return this->baselineItems_ == nullptr && return this->regionId_ == nullptr; };
    // accounts Field Functions 
    bool hasAccounts() const { return this->accounts_ != nullptr;};
    void deleteAccounts() { this->accounts_ = nullptr;};
    inline const vector<BatchEnrollAccountsRequestAccounts> & accounts() const { DARABONBA_PTR_GET_CONST(accounts_, vector<BatchEnrollAccountsRequestAccounts>) };
    inline vector<BatchEnrollAccountsRequestAccounts> accounts() { DARABONBA_PTR_GET(accounts_, vector<BatchEnrollAccountsRequestAccounts>) };
    inline BatchEnrollAccountsRequest& setAccounts(const vector<BatchEnrollAccountsRequestAccounts> & accounts) { DARABONBA_PTR_SET_VALUE(accounts_, accounts) };
    inline BatchEnrollAccountsRequest& setAccounts(vector<BatchEnrollAccountsRequestAccounts> && accounts) { DARABONBA_PTR_SET_RVALUE(accounts_, accounts) };


    // baselineId Field Functions 
    bool hasBaselineId() const { return this->baselineId_ != nullptr;};
    void deleteBaselineId() { this->baselineId_ = nullptr;};
    inline string baselineId() const { DARABONBA_PTR_GET_DEFAULT(baselineId_, "") };
    inline BatchEnrollAccountsRequest& setBaselineId(string baselineId) { DARABONBA_PTR_SET_VALUE(baselineId_, baselineId) };


    // baselineItems Field Functions 
    bool hasBaselineItems() const { return this->baselineItems_ != nullptr;};
    void deleteBaselineItems() { this->baselineItems_ = nullptr;};
    inline const vector<BatchEnrollAccountsRequestBaselineItems> & baselineItems() const { DARABONBA_PTR_GET_CONST(baselineItems_, vector<BatchEnrollAccountsRequestBaselineItems>) };
    inline vector<BatchEnrollAccountsRequestBaselineItems> baselineItems() { DARABONBA_PTR_GET(baselineItems_, vector<BatchEnrollAccountsRequestBaselineItems>) };
    inline BatchEnrollAccountsRequest& setBaselineItems(const vector<BatchEnrollAccountsRequestBaselineItems> & baselineItems) { DARABONBA_PTR_SET_VALUE(baselineItems_, baselineItems) };
    inline BatchEnrollAccountsRequest& setBaselineItems(vector<BatchEnrollAccountsRequestBaselineItems> && baselineItems) { DARABONBA_PTR_SET_RVALUE(baselineItems_, baselineItems) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline BatchEnrollAccountsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The resource accounts.
    std::shared_ptr<vector<BatchEnrollAccountsRequestAccounts>> accounts_ = nullptr;
    // The baseline ID.
    // 
    // If this parameter is left empty, the default baseline is used.
    std::shared_ptr<string> baselineId_ = nullptr;
    // The baseline items.
    // 
    // If this parameter is specified, the configurations of the baseline items are merged with the baseline applied to the specified account. The configurations of the same baseline items are subject to the configurations of this parameter. We recommend that you leave this parameter empty and configure the `BaselineId` parameter to specify an account baseline and apply the configurations of the account baseline to the account.
    std::shared_ptr<vector<BatchEnrollAccountsRequestBaselineItems>> baselineItems_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Governance20210120
#endif
