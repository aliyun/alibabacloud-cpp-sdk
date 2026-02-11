// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDATASOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDATASOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class ModifyDataSourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDataSourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(CloudCode, cloudCode_);
      DARABONBA_PTR_TO_JSON(DataSourceInstanceId, dataSourceInstanceId_);
      DARABONBA_PTR_TO_JSON(DataSourceInstanceName, dataSourceInstanceName_);
      DARABONBA_PTR_TO_JSON(DataSourceInstanceParams, dataSourceInstanceParams_);
      DARABONBA_PTR_TO_JSON(DataSourceInstanceRemark, dataSourceInstanceRemark_);
      DARABONBA_PTR_TO_JSON(DataSourceType, dataSourceType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDataSourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(CloudCode, cloudCode_);
      DARABONBA_PTR_FROM_JSON(DataSourceInstanceId, dataSourceInstanceId_);
      DARABONBA_PTR_FROM_JSON(DataSourceInstanceName, dataSourceInstanceName_);
      DARABONBA_PTR_FROM_JSON(DataSourceInstanceParams, dataSourceInstanceParams_);
      DARABONBA_PTR_FROM_JSON(DataSourceInstanceRemark, dataSourceInstanceRemark_);
      DARABONBA_PTR_FROM_JSON(DataSourceType, dataSourceType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyDataSourceRequest() = default ;
    ModifyDataSourceRequest(const ModifyDataSourceRequest &) = default ;
    ModifyDataSourceRequest(ModifyDataSourceRequest &&) = default ;
    ModifyDataSourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDataSourceRequest() = default ;
    ModifyDataSourceRequest& operator=(const ModifyDataSourceRequest &) = default ;
    ModifyDataSourceRequest& operator=(ModifyDataSourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && this->cloudCode_ == nullptr && this->dataSourceInstanceId_ == nullptr && this->dataSourceInstanceName_ == nullptr && this->dataSourceInstanceParams_ == nullptr && this->dataSourceInstanceRemark_ == nullptr
        && this->dataSourceType_ == nullptr && this->regionId_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline ModifyDataSourceRequest& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // cloudCode Field Functions 
    bool hasCloudCode() const { return this->cloudCode_ != nullptr;};
    void deleteCloudCode() { this->cloudCode_ = nullptr;};
    inline string getCloudCode() const { DARABONBA_PTR_GET_DEFAULT(cloudCode_, "") };
    inline ModifyDataSourceRequest& setCloudCode(string cloudCode) { DARABONBA_PTR_SET_VALUE(cloudCode_, cloudCode) };


    // dataSourceInstanceId Field Functions 
    bool hasDataSourceInstanceId() const { return this->dataSourceInstanceId_ != nullptr;};
    void deleteDataSourceInstanceId() { this->dataSourceInstanceId_ = nullptr;};
    inline string getDataSourceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceInstanceId_, "") };
    inline ModifyDataSourceRequest& setDataSourceInstanceId(string dataSourceInstanceId) { DARABONBA_PTR_SET_VALUE(dataSourceInstanceId_, dataSourceInstanceId) };


    // dataSourceInstanceName Field Functions 
    bool hasDataSourceInstanceName() const { return this->dataSourceInstanceName_ != nullptr;};
    void deleteDataSourceInstanceName() { this->dataSourceInstanceName_ = nullptr;};
    inline string getDataSourceInstanceName() const { DARABONBA_PTR_GET_DEFAULT(dataSourceInstanceName_, "") };
    inline ModifyDataSourceRequest& setDataSourceInstanceName(string dataSourceInstanceName) { DARABONBA_PTR_SET_VALUE(dataSourceInstanceName_, dataSourceInstanceName) };


    // dataSourceInstanceParams Field Functions 
    bool hasDataSourceInstanceParams() const { return this->dataSourceInstanceParams_ != nullptr;};
    void deleteDataSourceInstanceParams() { this->dataSourceInstanceParams_ = nullptr;};
    inline string getDataSourceInstanceParams() const { DARABONBA_PTR_GET_DEFAULT(dataSourceInstanceParams_, "") };
    inline ModifyDataSourceRequest& setDataSourceInstanceParams(string dataSourceInstanceParams) { DARABONBA_PTR_SET_VALUE(dataSourceInstanceParams_, dataSourceInstanceParams) };


    // dataSourceInstanceRemark Field Functions 
    bool hasDataSourceInstanceRemark() const { return this->dataSourceInstanceRemark_ != nullptr;};
    void deleteDataSourceInstanceRemark() { this->dataSourceInstanceRemark_ = nullptr;};
    inline string getDataSourceInstanceRemark() const { DARABONBA_PTR_GET_DEFAULT(dataSourceInstanceRemark_, "") };
    inline ModifyDataSourceRequest& setDataSourceInstanceRemark(string dataSourceInstanceRemark) { DARABONBA_PTR_SET_VALUE(dataSourceInstanceRemark_, dataSourceInstanceRemark) };


    // dataSourceType Field Functions 
    bool hasDataSourceType() const { return this->dataSourceType_ != nullptr;};
    void deleteDataSourceType() { this->dataSourceType_ = nullptr;};
    inline string getDataSourceType() const { DARABONBA_PTR_GET_DEFAULT(dataSourceType_, "") };
    inline ModifyDataSourceRequest& setDataSourceType(string dataSourceType) { DARABONBA_PTR_SET_VALUE(dataSourceType_, dataSourceType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyDataSourceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the cloud account.
    shared_ptr<string> accountId_ {};
    // The code of the cloud service provider. Valid values:
    // 
    // *   qcloud: Tencent Cloud
    // *   aliyun: Alibaba Cloud
    // *   hcloud: Huawei Cloud
    // 
    // This parameter is required.
    shared_ptr<string> cloudCode_ {};
    // The ID of the data source. The ID is an MD5 hash value that is calculated by the threat analysis feature based on specific parameters. You can call the [DescribeDataSourceInstance](https://api.aliyun-inc.com/#/publishment/document/cloud-siem/863fdf54478f4cc5877e27c2a5fe9e44?tenantUuid=f382fccd88b94c5c8c864def6815b854\\&activeTabKey=api%7CDescribeDataSourceInstance) operation to query the IDs of data sources.
    // 
    // This parameter is required.
    shared_ptr<string> dataSourceInstanceId_ {};
    // The name of the data source.
    shared_ptr<string> dataSourceInstanceName_ {};
    // The parameters of the data source in the JSON string format.
    shared_ptr<string> dataSourceInstanceParams_ {};
    // The remarks on the data source.
    shared_ptr<string> dataSourceInstanceRemark_ {};
    // The type of the data source. Valid values:
    // 
    // *   ckafka: Tencent Cloud Kafka (CKafka)
    // *   obs: Huawei Cloud Object Storage Service (OBS)
    // *   wafApi: download API of Tencent Cloud Web Application Firewall (WAF)
    // 
    // This parameter is required.
    shared_ptr<string> dataSourceType_ {};
    // The region in which the data management center of the threat analysis feature resides. Specify this parameter based on the regions in which your assets reside. Valid values:
    // 
    // *   cn-hangzhou: Your assets reside in regions in China.
    // *   ap-southeast-1: Your assets reside in regions outside China.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
