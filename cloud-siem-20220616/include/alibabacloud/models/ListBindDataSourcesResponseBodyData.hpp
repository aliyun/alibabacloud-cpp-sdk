// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBINDDATASOURCESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTBINDDATASOURCESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class ListBindDataSourcesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBindDataSourcesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(CloudCode, cloudCode_);
      DARABONBA_PTR_TO_JSON(DataSourceInstanceId, dataSourceInstanceId_);
      DARABONBA_PTR_TO_JSON(DataSourceName, dataSourceName_);
      DARABONBA_PTR_TO_JSON(DataSourceRemark, dataSourceRemark_);
      DARABONBA_PTR_TO_JSON(DataSourceType, dataSourceType_);
      DARABONBA_PTR_TO_JSON(LogCount, logCount_);
      DARABONBA_PTR_TO_JSON(TaskCount, taskCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListBindDataSourcesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(CloudCode, cloudCode_);
      DARABONBA_PTR_FROM_JSON(DataSourceInstanceId, dataSourceInstanceId_);
      DARABONBA_PTR_FROM_JSON(DataSourceName, dataSourceName_);
      DARABONBA_PTR_FROM_JSON(DataSourceRemark, dataSourceRemark_);
      DARABONBA_PTR_FROM_JSON(DataSourceType, dataSourceType_);
      DARABONBA_PTR_FROM_JSON(LogCount, logCount_);
      DARABONBA_PTR_FROM_JSON(TaskCount, taskCount_);
    };
    ListBindDataSourcesResponseBodyData() = default ;
    ListBindDataSourcesResponseBodyData(const ListBindDataSourcesResponseBodyData &) = default ;
    ListBindDataSourcesResponseBodyData(ListBindDataSourcesResponseBodyData &&) = default ;
    ListBindDataSourcesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBindDataSourcesResponseBodyData() = default ;
    ListBindDataSourcesResponseBodyData& operator=(const ListBindDataSourcesResponseBodyData &) = default ;
    ListBindDataSourcesResponseBodyData& operator=(ListBindDataSourcesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountId_ != nullptr
        && this->accountName_ != nullptr && this->cloudCode_ != nullptr && this->dataSourceInstanceId_ != nullptr && this->dataSourceName_ != nullptr && this->dataSourceRemark_ != nullptr
        && this->dataSourceType_ != nullptr && this->logCount_ != nullptr && this->taskCount_ != nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline ListBindDataSourcesResponseBodyData& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline ListBindDataSourcesResponseBodyData& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // cloudCode Field Functions 
    bool hasCloudCode() const { return this->cloudCode_ != nullptr;};
    void deleteCloudCode() { this->cloudCode_ = nullptr;};
    inline string cloudCode() const { DARABONBA_PTR_GET_DEFAULT(cloudCode_, "") };
    inline ListBindDataSourcesResponseBodyData& setCloudCode(string cloudCode) { DARABONBA_PTR_SET_VALUE(cloudCode_, cloudCode) };


    // dataSourceInstanceId Field Functions 
    bool hasDataSourceInstanceId() const { return this->dataSourceInstanceId_ != nullptr;};
    void deleteDataSourceInstanceId() { this->dataSourceInstanceId_ = nullptr;};
    inline string dataSourceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceInstanceId_, "") };
    inline ListBindDataSourcesResponseBodyData& setDataSourceInstanceId(string dataSourceInstanceId) { DARABONBA_PTR_SET_VALUE(dataSourceInstanceId_, dataSourceInstanceId) };


    // dataSourceName Field Functions 
    bool hasDataSourceName() const { return this->dataSourceName_ != nullptr;};
    void deleteDataSourceName() { this->dataSourceName_ = nullptr;};
    inline string dataSourceName() const { DARABONBA_PTR_GET_DEFAULT(dataSourceName_, "") };
    inline ListBindDataSourcesResponseBodyData& setDataSourceName(string dataSourceName) { DARABONBA_PTR_SET_VALUE(dataSourceName_, dataSourceName) };


    // dataSourceRemark Field Functions 
    bool hasDataSourceRemark() const { return this->dataSourceRemark_ != nullptr;};
    void deleteDataSourceRemark() { this->dataSourceRemark_ = nullptr;};
    inline string dataSourceRemark() const { DARABONBA_PTR_GET_DEFAULT(dataSourceRemark_, "") };
    inline ListBindDataSourcesResponseBodyData& setDataSourceRemark(string dataSourceRemark) { DARABONBA_PTR_SET_VALUE(dataSourceRemark_, dataSourceRemark) };


    // dataSourceType Field Functions 
    bool hasDataSourceType() const { return this->dataSourceType_ != nullptr;};
    void deleteDataSourceType() { this->dataSourceType_ = nullptr;};
    inline string dataSourceType() const { DARABONBA_PTR_GET_DEFAULT(dataSourceType_, "") };
    inline ListBindDataSourcesResponseBodyData& setDataSourceType(string dataSourceType) { DARABONBA_PTR_SET_VALUE(dataSourceType_, dataSourceType) };


    // logCount Field Functions 
    bool hasLogCount() const { return this->logCount_ != nullptr;};
    void deleteLogCount() { this->logCount_ = nullptr;};
    inline int32_t logCount() const { DARABONBA_PTR_GET_DEFAULT(logCount_, 0) };
    inline ListBindDataSourcesResponseBodyData& setLogCount(int32_t logCount) { DARABONBA_PTR_SET_VALUE(logCount_, logCount) };


    // taskCount Field Functions 
    bool hasTaskCount() const { return this->taskCount_ != nullptr;};
    void deleteTaskCount() { this->taskCount_ = nullptr;};
    inline int32_t taskCount() const { DARABONBA_PTR_GET_DEFAULT(taskCount_, 0) };
    inline ListBindDataSourcesResponseBodyData& setTaskCount(int32_t taskCount) { DARABONBA_PTR_SET_VALUE(taskCount_, taskCount) };


  protected:
    // The ID of the cloud account.
    std::shared_ptr<string> accountId_ = nullptr;
    // The username of the cloud account.
    std::shared_ptr<string> accountName_ = nullptr;
    // The code of the cloud service provider. Valid values:
    // 
    // *   qcloud: Tencent Cloud
    // *   aliyun: Alibaba Cloud
    // *   hcloud: Huawei Cloud
    std::shared_ptr<string> cloudCode_ = nullptr;
    // The ID of the data source. The ID is an MD5 hash value that is calculated by the threat analysis feature based on specific parameters.
    std::shared_ptr<string> dataSourceInstanceId_ = nullptr;
    // The name of the data source.
    std::shared_ptr<string> dataSourceName_ = nullptr;
    // The remarks on the data source.
    std::shared_ptr<string> dataSourceRemark_ = nullptr;
    // The type of the data source. Valid values:
    // 
    // *   obs: Huawei Cloud Object Storage Service (OBS)
    // *   wafApi: download API of Tencent Cloud Web Application Firewall (WAF)
    // *   ckafka: Tencent Cloud Kafka (CKafka)
    std::shared_ptr<string> dataSourceType_ = nullptr;
    // The number of logs that are added within the data source.
    std::shared_ptr<int32_t> logCount_ = nullptr;
    // The number of existing tasks that are created to add logs within the data source.
    std::shared_ptr<int32_t> taskCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
