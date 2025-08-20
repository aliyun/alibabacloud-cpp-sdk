// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENABLEDPRIVILEGESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENABLEDPRIVILEGESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeEnabledPrivilegesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnabledPrivilegesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnabledPrivilegesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeEnabledPrivilegesRequest() = default ;
    DescribeEnabledPrivilegesRequest(const DescribeEnabledPrivilegesRequest &) = default ;
    DescribeEnabledPrivilegesRequest(DescribeEnabledPrivilegesRequest &&) = default ;
    DescribeEnabledPrivilegesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnabledPrivilegesRequest() = default ;
    DescribeEnabledPrivilegesRequest& operator=(const DescribeEnabledPrivilegesRequest &) = default ;
    DescribeEnabledPrivilegesRequest& operator=(DescribeEnabledPrivilegesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountName_ != nullptr
        && this->DBClusterId_ != nullptr && this->regionId_ != nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline DescribeEnabledPrivilegesRequest& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeEnabledPrivilegesRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeEnabledPrivilegesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The name of the database account.
    // 
    // >  You can call the [DescribeAccounts](https://help.aliyun.com/document_detail/612430.html) operation to query the information about database accounts for a cluster, including the account name.
    std::shared_ptr<string> accountName_ = nullptr;
    // The ID of the AnalyticDB for MySQL Data Lakehouse Edition (V3.0) cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The region ID of the cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
