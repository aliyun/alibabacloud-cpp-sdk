// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDDATASOURCELOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDDATASOURCELOGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class AddDataSourceLogRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddDataSourceLogRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(CloudCode, cloudCode_);
      DARABONBA_PTR_TO_JSON(DataSourceInstanceId, dataSourceInstanceId_);
      DARABONBA_PTR_TO_JSON(DataSourceInstanceLogs, dataSourceInstanceLogs_);
      DARABONBA_PTR_TO_JSON(LogCode, logCode_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, AddDataSourceLogRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(CloudCode, cloudCode_);
      DARABONBA_PTR_FROM_JSON(DataSourceInstanceId, dataSourceInstanceId_);
      DARABONBA_PTR_FROM_JSON(DataSourceInstanceLogs, dataSourceInstanceLogs_);
      DARABONBA_PTR_FROM_JSON(LogCode, logCode_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    AddDataSourceLogRequest() = default ;
    AddDataSourceLogRequest(const AddDataSourceLogRequest &) = default ;
    AddDataSourceLogRequest(AddDataSourceLogRequest &&) = default ;
    AddDataSourceLogRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddDataSourceLogRequest() = default ;
    AddDataSourceLogRequest& operator=(const AddDataSourceLogRequest &) = default ;
    AddDataSourceLogRequest& operator=(AddDataSourceLogRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountId_ != nullptr
        && this->cloudCode_ != nullptr && this->dataSourceInstanceId_ != nullptr && this->dataSourceInstanceLogs_ != nullptr && this->logCode_ != nullptr && this->regionId_ != nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline AddDataSourceLogRequest& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // cloudCode Field Functions 
    bool hasCloudCode() const { return this->cloudCode_ != nullptr;};
    void deleteCloudCode() { this->cloudCode_ = nullptr;};
    inline string cloudCode() const { DARABONBA_PTR_GET_DEFAULT(cloudCode_, "") };
    inline AddDataSourceLogRequest& setCloudCode(string cloudCode) { DARABONBA_PTR_SET_VALUE(cloudCode_, cloudCode) };


    // dataSourceInstanceId Field Functions 
    bool hasDataSourceInstanceId() const { return this->dataSourceInstanceId_ != nullptr;};
    void deleteDataSourceInstanceId() { this->dataSourceInstanceId_ = nullptr;};
    inline string dataSourceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceInstanceId_, "") };
    inline AddDataSourceLogRequest& setDataSourceInstanceId(string dataSourceInstanceId) { DARABONBA_PTR_SET_VALUE(dataSourceInstanceId_, dataSourceInstanceId) };


    // dataSourceInstanceLogs Field Functions 
    bool hasDataSourceInstanceLogs() const { return this->dataSourceInstanceLogs_ != nullptr;};
    void deleteDataSourceInstanceLogs() { this->dataSourceInstanceLogs_ = nullptr;};
    inline string dataSourceInstanceLogs() const { DARABONBA_PTR_GET_DEFAULT(dataSourceInstanceLogs_, "") };
    inline AddDataSourceLogRequest& setDataSourceInstanceLogs(string dataSourceInstanceLogs) { DARABONBA_PTR_SET_VALUE(dataSourceInstanceLogs_, dataSourceInstanceLogs) };


    // logCode Field Functions 
    bool hasLogCode() const { return this->logCode_ != nullptr;};
    void deleteLogCode() { this->logCode_ = nullptr;};
    inline string logCode() const { DARABONBA_PTR_GET_DEFAULT(logCode_, "") };
    inline AddDataSourceLogRequest& setLogCode(string logCode) { DARABONBA_PTR_SET_VALUE(logCode_, logCode) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddDataSourceLogRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


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
    // The parameters of the data source. Set this parameter to a JSON array.
    // 
    // This parameter is required.
    std::shared_ptr<string> dataSourceInstanceLogs_ = nullptr;
    // The log code.
    std::shared_ptr<string> logCode_ = nullptr;
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
