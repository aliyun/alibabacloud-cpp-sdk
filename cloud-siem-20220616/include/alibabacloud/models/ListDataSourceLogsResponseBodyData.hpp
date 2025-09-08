// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASOURCELOGSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASOURCELOGSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDataSourceLogsResponseBodyDataDataSourceInstanceLogs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class ListDataSourceLogsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataSourceLogsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(CloudCode, cloudCode_);
      DARABONBA_PTR_TO_JSON(DataSourceInstanceId, dataSourceInstanceId_);
      DARABONBA_PTR_TO_JSON(DataSourceInstanceLogs, dataSourceInstanceLogs_);
      DARABONBA_PTR_TO_JSON(DataSourceInstanceName, dataSourceInstanceName_);
      DARABONBA_PTR_TO_JSON(DataSourceInstanceRemark, dataSourceInstanceRemark_);
      DARABONBA_PTR_TO_JSON(SubUserId, subUserId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataSourceLogsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(CloudCode, cloudCode_);
      DARABONBA_PTR_FROM_JSON(DataSourceInstanceId, dataSourceInstanceId_);
      DARABONBA_PTR_FROM_JSON(DataSourceInstanceLogs, dataSourceInstanceLogs_);
      DARABONBA_PTR_FROM_JSON(DataSourceInstanceName, dataSourceInstanceName_);
      DARABONBA_PTR_FROM_JSON(DataSourceInstanceRemark, dataSourceInstanceRemark_);
      DARABONBA_PTR_FROM_JSON(SubUserId, subUserId_);
    };
    ListDataSourceLogsResponseBodyData() = default ;
    ListDataSourceLogsResponseBodyData(const ListDataSourceLogsResponseBodyData &) = default ;
    ListDataSourceLogsResponseBodyData(ListDataSourceLogsResponseBodyData &&) = default ;
    ListDataSourceLogsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataSourceLogsResponseBodyData() = default ;
    ListDataSourceLogsResponseBodyData& operator=(const ListDataSourceLogsResponseBodyData &) = default ;
    ListDataSourceLogsResponseBodyData& operator=(ListDataSourceLogsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountId_ != nullptr
        && this->cloudCode_ != nullptr && this->dataSourceInstanceId_ != nullptr && this->dataSourceInstanceLogs_ != nullptr && this->dataSourceInstanceName_ != nullptr && this->dataSourceInstanceRemark_ != nullptr
        && this->subUserId_ != nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline ListDataSourceLogsResponseBodyData& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // cloudCode Field Functions 
    bool hasCloudCode() const { return this->cloudCode_ != nullptr;};
    void deleteCloudCode() { this->cloudCode_ = nullptr;};
    inline string cloudCode() const { DARABONBA_PTR_GET_DEFAULT(cloudCode_, "") };
    inline ListDataSourceLogsResponseBodyData& setCloudCode(string cloudCode) { DARABONBA_PTR_SET_VALUE(cloudCode_, cloudCode) };


    // dataSourceInstanceId Field Functions 
    bool hasDataSourceInstanceId() const { return this->dataSourceInstanceId_ != nullptr;};
    void deleteDataSourceInstanceId() { this->dataSourceInstanceId_ = nullptr;};
    inline string dataSourceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceInstanceId_, "") };
    inline ListDataSourceLogsResponseBodyData& setDataSourceInstanceId(string dataSourceInstanceId) { DARABONBA_PTR_SET_VALUE(dataSourceInstanceId_, dataSourceInstanceId) };


    // dataSourceInstanceLogs Field Functions 
    bool hasDataSourceInstanceLogs() const { return this->dataSourceInstanceLogs_ != nullptr;};
    void deleteDataSourceInstanceLogs() { this->dataSourceInstanceLogs_ = nullptr;};
    inline const vector<Models::ListDataSourceLogsResponseBodyDataDataSourceInstanceLogs> & dataSourceInstanceLogs() const { DARABONBA_PTR_GET_CONST(dataSourceInstanceLogs_, vector<Models::ListDataSourceLogsResponseBodyDataDataSourceInstanceLogs>) };
    inline vector<Models::ListDataSourceLogsResponseBodyDataDataSourceInstanceLogs> dataSourceInstanceLogs() { DARABONBA_PTR_GET(dataSourceInstanceLogs_, vector<Models::ListDataSourceLogsResponseBodyDataDataSourceInstanceLogs>) };
    inline ListDataSourceLogsResponseBodyData& setDataSourceInstanceLogs(const vector<Models::ListDataSourceLogsResponseBodyDataDataSourceInstanceLogs> & dataSourceInstanceLogs) { DARABONBA_PTR_SET_VALUE(dataSourceInstanceLogs_, dataSourceInstanceLogs) };
    inline ListDataSourceLogsResponseBodyData& setDataSourceInstanceLogs(vector<Models::ListDataSourceLogsResponseBodyDataDataSourceInstanceLogs> && dataSourceInstanceLogs) { DARABONBA_PTR_SET_RVALUE(dataSourceInstanceLogs_, dataSourceInstanceLogs) };


    // dataSourceInstanceName Field Functions 
    bool hasDataSourceInstanceName() const { return this->dataSourceInstanceName_ != nullptr;};
    void deleteDataSourceInstanceName() { this->dataSourceInstanceName_ = nullptr;};
    inline string dataSourceInstanceName() const { DARABONBA_PTR_GET_DEFAULT(dataSourceInstanceName_, "") };
    inline ListDataSourceLogsResponseBodyData& setDataSourceInstanceName(string dataSourceInstanceName) { DARABONBA_PTR_SET_VALUE(dataSourceInstanceName_, dataSourceInstanceName) };


    // dataSourceInstanceRemark Field Functions 
    bool hasDataSourceInstanceRemark() const { return this->dataSourceInstanceRemark_ != nullptr;};
    void deleteDataSourceInstanceRemark() { this->dataSourceInstanceRemark_ = nullptr;};
    inline string dataSourceInstanceRemark() const { DARABONBA_PTR_GET_DEFAULT(dataSourceInstanceRemark_, "") };
    inline ListDataSourceLogsResponseBodyData& setDataSourceInstanceRemark(string dataSourceInstanceRemark) { DARABONBA_PTR_SET_VALUE(dataSourceInstanceRemark_, dataSourceInstanceRemark) };


    // subUserId Field Functions 
    bool hasSubUserId() const { return this->subUserId_ != nullptr;};
    void deleteSubUserId() { this->subUserId_ = nullptr;};
    inline int64_t subUserId() const { DARABONBA_PTR_GET_DEFAULT(subUserId_, 0L) };
    inline ListDataSourceLogsResponseBodyData& setSubUserId(int64_t subUserId) { DARABONBA_PTR_SET_VALUE(subUserId_, subUserId) };


  protected:
    // The ID of the cloud account.
    std::shared_ptr<string> accountId_ = nullptr;
    // The code that is used for multi-cloud environments. Valid values:
    // 
    // *   qcloud: Tencent Cloud
    // *   aliyun: Alibaba Cloud
    // *   hcloud: Huawei Cloud
    std::shared_ptr<string> cloudCode_ = nullptr;
    // The ID of the data source. The value is obtained after the threat analysis feature calculates the MD5 hash value of a parameter.
    std::shared_ptr<string> dataSourceInstanceId_ = nullptr;
    // The logs of the data source.
    std::shared_ptr<vector<Models::ListDataSourceLogsResponseBodyDataDataSourceInstanceLogs>> dataSourceInstanceLogs_ = nullptr;
    // The name of the data source.
    std::shared_ptr<string> dataSourceInstanceName_ = nullptr;
    // The remarks of the data source.
    std::shared_ptr<string> dataSourceInstanceRemark_ = nullptr;
    // The ID of the Alibaba Cloud account.
    std::shared_ptr<int64_t> subUserId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
