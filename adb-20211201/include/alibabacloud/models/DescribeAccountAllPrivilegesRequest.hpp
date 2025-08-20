// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCOUNTALLPRIVILEGESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCOUNTALLPRIVILEGESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeAccountAllPrivilegesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccountAllPrivilegesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(Marker, marker_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccountAllPrivilegesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(Marker, marker_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeAccountAllPrivilegesRequest() = default ;
    DescribeAccountAllPrivilegesRequest(const DescribeAccountAllPrivilegesRequest &) = default ;
    DescribeAccountAllPrivilegesRequest(DescribeAccountAllPrivilegesRequest &&) = default ;
    DescribeAccountAllPrivilegesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccountAllPrivilegesRequest() = default ;
    DescribeAccountAllPrivilegesRequest& operator=(const DescribeAccountAllPrivilegesRequest &) = default ;
    DescribeAccountAllPrivilegesRequest& operator=(DescribeAccountAllPrivilegesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountName_ != nullptr
        && this->DBClusterId_ != nullptr && this->marker_ != nullptr && this->regionId_ != nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline DescribeAccountAllPrivilegesRequest& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeAccountAllPrivilegesRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // marker Field Functions 
    bool hasMarker() const { return this->marker_ != nullptr;};
    void deleteMarker() { this->marker_ = nullptr;};
    inline string marker() const { DARABONBA_PTR_GET_DEFAULT(marker_, "") };
    inline DescribeAccountAllPrivilegesRequest& setMarker(string marker) { DARABONBA_PTR_SET_VALUE(marker_, marker) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeAccountAllPrivilegesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The name of the database account.
    // 
    // This parameter is required.
    std::shared_ptr<string> accountName_ = nullptr;
    // The ID of the AnalyticDB for MySQL Data Lakehouse Edition (V3.0) cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // Specifies the start position marker from which to return results. If you receive a response indicating that the results are truncated, set this parameter to the value of the `Marker` parameter in the response that you received.
    std::shared_ptr<string> marker_ = nullptr;
    // The region ID of the cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
