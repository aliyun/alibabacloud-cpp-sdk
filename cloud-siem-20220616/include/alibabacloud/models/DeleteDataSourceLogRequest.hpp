// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDATASOURCELOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDATASOURCELOGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DeleteDataSourceLogRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDataSourceLogRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(CloudCode, cloudCode_);
      DARABONBA_PTR_TO_JSON(DataSourceInstanceId, dataSourceInstanceId_);
      DARABONBA_PTR_TO_JSON(LogInstanceId, logInstanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDataSourceLogRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(CloudCode, cloudCode_);
      DARABONBA_PTR_FROM_JSON(DataSourceInstanceId, dataSourceInstanceId_);
      DARABONBA_PTR_FROM_JSON(LogInstanceId, logInstanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteDataSourceLogRequest() = default ;
    DeleteDataSourceLogRequest(const DeleteDataSourceLogRequest &) = default ;
    DeleteDataSourceLogRequest(DeleteDataSourceLogRequest &&) = default ;
    DeleteDataSourceLogRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDataSourceLogRequest() = default ;
    DeleteDataSourceLogRequest& operator=(const DeleteDataSourceLogRequest &) = default ;
    DeleteDataSourceLogRequest& operator=(DeleteDataSourceLogRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountId_ != nullptr
        && this->cloudCode_ != nullptr && this->dataSourceInstanceId_ != nullptr && this->logInstanceId_ != nullptr && this->regionId_ != nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline DeleteDataSourceLogRequest& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // cloudCode Field Functions 
    bool hasCloudCode() const { return this->cloudCode_ != nullptr;};
    void deleteCloudCode() { this->cloudCode_ = nullptr;};
    inline string cloudCode() const { DARABONBA_PTR_GET_DEFAULT(cloudCode_, "") };
    inline DeleteDataSourceLogRequest& setCloudCode(string cloudCode) { DARABONBA_PTR_SET_VALUE(cloudCode_, cloudCode) };


    // dataSourceInstanceId Field Functions 
    bool hasDataSourceInstanceId() const { return this->dataSourceInstanceId_ != nullptr;};
    void deleteDataSourceInstanceId() { this->dataSourceInstanceId_ = nullptr;};
    inline string dataSourceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceInstanceId_, "") };
    inline DeleteDataSourceLogRequest& setDataSourceInstanceId(string dataSourceInstanceId) { DARABONBA_PTR_SET_VALUE(dataSourceInstanceId_, dataSourceInstanceId) };


    // logInstanceId Field Functions 
    bool hasLogInstanceId() const { return this->logInstanceId_ != nullptr;};
    void deleteLogInstanceId() { this->logInstanceId_ = nullptr;};
    inline string logInstanceId() const { DARABONBA_PTR_GET_DEFAULT(logInstanceId_, "") };
    inline DeleteDataSourceLogRequest& setLogInstanceId(string logInstanceId) { DARABONBA_PTR_SET_VALUE(logInstanceId_, logInstanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteDataSourceLogRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the cloud account.
    // 
    // This parameter is required.
    std::shared_ptr<string> accountId_ = nullptr;
    // The code of the cloud service provider. Valid values:
    // 
    // *   qcloud: Tencent Cloud
    // *   aliyun: Alibaba Cloud
    // *   hcloud: Huawei Cloud
    // 
    // This parameter is required.
    std::shared_ptr<string> cloudCode_ = nullptr;
    // The ID of the data source. The ID is an MD5 hash value that is calculated by the threat analysis feature based on specific parameters. You can call the [ListDataSourceLogs](https://api.aliyun-inc.com/#/publishment/document/cloud-siem/863fdf54478f4cc5877e27c2a5fe9e44?tenantUuid=f382fccd88b94c5c8c864def6815b854\\&activeTabKey=api%7CListDataSourceLogs) operation to query the IDs of data sources.
    // 
    // This parameter is required.
    std::shared_ptr<string> dataSourceInstanceId_ = nullptr;
    // The ID of the log. The ID is an MD5 hash value that is calculated by the threat analysis feature based on specific parameters. You can call the [ListDataSourceLogs](https://api.aliyun-inc.com/#/publishment/document/cloud-siem/863fdf54478f4cc5877e27c2a5fe9e44?tenantUuid=f382fccd88b94c5c8c864def6815b854\\&activeTabKey=api%7CListDataSourceLogs) operation to query the IDs of logs.
    // 
    // This parameter is required.
    std::shared_ptr<string> logInstanceId_ = nullptr;
    // The region in which the data management center of the threat analysis feature resides. Specify this parameter based on the regions in which your assets reside. Valid values:
    // 
    // *   cn-hangzhou: Your assets reside in regions in China.
    // *   ap-southeast-1: Your assets reside in regions outside China.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
