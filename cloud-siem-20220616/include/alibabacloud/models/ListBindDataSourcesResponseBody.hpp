// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBINDDATASOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTBINDDATASOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class ListBindDataSourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBindDataSourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListBindDataSourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListBindDataSourcesResponseBody() = default ;
    ListBindDataSourcesResponseBody(const ListBindDataSourcesResponseBody &) = default ;
    ListBindDataSourcesResponseBody(ListBindDataSourcesResponseBody &&) = default ;
    ListBindDataSourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBindDataSourcesResponseBody() = default ;
    ListBindDataSourcesResponseBody& operator=(const ListBindDataSourcesResponseBody &) = default ;
    ListBindDataSourcesResponseBody& operator=(ListBindDataSourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accountId_ == nullptr
        && this->accountName_ == nullptr && this->cloudCode_ == nullptr && this->dataSourceInstanceId_ == nullptr && this->dataSourceName_ == nullptr && this->dataSourceRemark_ == nullptr
        && this->dataSourceType_ == nullptr && this->logCount_ == nullptr && this->taskCount_ == nullptr; };
      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
      inline Data& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


      // accountName Field Functions 
      bool hasAccountName() const { return this->accountName_ != nullptr;};
      void deleteAccountName() { this->accountName_ = nullptr;};
      inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
      inline Data& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


      // cloudCode Field Functions 
      bool hasCloudCode() const { return this->cloudCode_ != nullptr;};
      void deleteCloudCode() { this->cloudCode_ = nullptr;};
      inline string getCloudCode() const { DARABONBA_PTR_GET_DEFAULT(cloudCode_, "") };
      inline Data& setCloudCode(string cloudCode) { DARABONBA_PTR_SET_VALUE(cloudCode_, cloudCode) };


      // dataSourceInstanceId Field Functions 
      bool hasDataSourceInstanceId() const { return this->dataSourceInstanceId_ != nullptr;};
      void deleteDataSourceInstanceId() { this->dataSourceInstanceId_ = nullptr;};
      inline string getDataSourceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceInstanceId_, "") };
      inline Data& setDataSourceInstanceId(string dataSourceInstanceId) { DARABONBA_PTR_SET_VALUE(dataSourceInstanceId_, dataSourceInstanceId) };


      // dataSourceName Field Functions 
      bool hasDataSourceName() const { return this->dataSourceName_ != nullptr;};
      void deleteDataSourceName() { this->dataSourceName_ = nullptr;};
      inline string getDataSourceName() const { DARABONBA_PTR_GET_DEFAULT(dataSourceName_, "") };
      inline Data& setDataSourceName(string dataSourceName) { DARABONBA_PTR_SET_VALUE(dataSourceName_, dataSourceName) };


      // dataSourceRemark Field Functions 
      bool hasDataSourceRemark() const { return this->dataSourceRemark_ != nullptr;};
      void deleteDataSourceRemark() { this->dataSourceRemark_ = nullptr;};
      inline string getDataSourceRemark() const { DARABONBA_PTR_GET_DEFAULT(dataSourceRemark_, "") };
      inline Data& setDataSourceRemark(string dataSourceRemark) { DARABONBA_PTR_SET_VALUE(dataSourceRemark_, dataSourceRemark) };


      // dataSourceType Field Functions 
      bool hasDataSourceType() const { return this->dataSourceType_ != nullptr;};
      void deleteDataSourceType() { this->dataSourceType_ = nullptr;};
      inline string getDataSourceType() const { DARABONBA_PTR_GET_DEFAULT(dataSourceType_, "") };
      inline Data& setDataSourceType(string dataSourceType) { DARABONBA_PTR_SET_VALUE(dataSourceType_, dataSourceType) };


      // logCount Field Functions 
      bool hasLogCount() const { return this->logCount_ != nullptr;};
      void deleteLogCount() { this->logCount_ = nullptr;};
      inline int32_t getLogCount() const { DARABONBA_PTR_GET_DEFAULT(logCount_, 0) };
      inline Data& setLogCount(int32_t logCount) { DARABONBA_PTR_SET_VALUE(logCount_, logCount) };


      // taskCount Field Functions 
      bool hasTaskCount() const { return this->taskCount_ != nullptr;};
      void deleteTaskCount() { this->taskCount_ = nullptr;};
      inline int32_t getTaskCount() const { DARABONBA_PTR_GET_DEFAULT(taskCount_, 0) };
      inline Data& setTaskCount(int32_t taskCount) { DARABONBA_PTR_SET_VALUE(taskCount_, taskCount) };


    protected:
      // The ID of the cloud account.
      shared_ptr<string> accountId_ {};
      // The username of the cloud account.
      shared_ptr<string> accountName_ {};
      // The code of the cloud service provider. Valid values:
      // 
      // *   qcloud: Tencent Cloud
      // *   aliyun: Alibaba Cloud
      // *   hcloud: Huawei Cloud
      shared_ptr<string> cloudCode_ {};
      // The ID of the data source. The ID is an MD5 hash value that is calculated by the threat analysis feature based on specific parameters.
      shared_ptr<string> dataSourceInstanceId_ {};
      // The name of the data source.
      shared_ptr<string> dataSourceName_ {};
      // The remarks on the data source.
      shared_ptr<string> dataSourceRemark_ {};
      // The type of the data source. Valid values:
      // 
      // *   obs: Huawei Cloud Object Storage Service (OBS)
      // *   wafApi: download API of Tencent Cloud Web Application Firewall (WAF)
      // *   ckafka: Tencent Cloud Kafka (CKafka)
      shared_ptr<string> dataSourceType_ {};
      // The number of logs that are added within the data source.
      shared_ptr<int32_t> logCount_ {};
      // The number of existing tasks that are created to add logs within the data source.
      shared_ptr<int32_t> taskCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListBindDataSourcesResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListBindDataSourcesResponseBody::Data>) };
    inline vector<ListBindDataSourcesResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListBindDataSourcesResponseBody::Data>) };
    inline ListBindDataSourcesResponseBody& setData(const vector<ListBindDataSourcesResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListBindDataSourcesResponseBody& setData(vector<ListBindDataSourcesResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListBindDataSourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    shared_ptr<vector<ListBindDataSourcesResponseBody::Data>> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
