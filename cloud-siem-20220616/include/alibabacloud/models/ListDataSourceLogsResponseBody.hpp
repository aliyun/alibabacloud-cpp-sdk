// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASOURCELOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASOURCELOGSRESPONSEBODY_HPP_
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
  class ListDataSourceLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataSourceLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataSourceLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDataSourceLogsResponseBody() = default ;
    ListDataSourceLogsResponseBody(const ListDataSourceLogsResponseBody &) = default ;
    ListDataSourceLogsResponseBody(ListDataSourceLogsResponseBody &&) = default ;
    ListDataSourceLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataSourceLogsResponseBody() = default ;
    ListDataSourceLogsResponseBody& operator=(const ListDataSourceLogsResponseBody &) = default ;
    ListDataSourceLogsResponseBody& operator=(ListDataSourceLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AccountId, accountId_);
        DARABONBA_PTR_TO_JSON(CloudCode, cloudCode_);
        DARABONBA_PTR_TO_JSON(DataSourceInstanceId, dataSourceInstanceId_);
        DARABONBA_PTR_TO_JSON(DataSourceInstanceLogs, dataSourceInstanceLogs_);
        DARABONBA_PTR_TO_JSON(DataSourceInstanceName, dataSourceInstanceName_);
        DARABONBA_PTR_TO_JSON(DataSourceInstanceRemark, dataSourceInstanceRemark_);
        DARABONBA_PTR_TO_JSON(SubUserId, subUserId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
        DARABONBA_PTR_FROM_JSON(CloudCode, cloudCode_);
        DARABONBA_PTR_FROM_JSON(DataSourceInstanceId, dataSourceInstanceId_);
        DARABONBA_PTR_FROM_JSON(DataSourceInstanceLogs, dataSourceInstanceLogs_);
        DARABONBA_PTR_FROM_JSON(DataSourceInstanceName, dataSourceInstanceName_);
        DARABONBA_PTR_FROM_JSON(DataSourceInstanceRemark, dataSourceInstanceRemark_);
        DARABONBA_PTR_FROM_JSON(SubUserId, subUserId_);
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
      class DataSourceInstanceLogs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataSourceInstanceLogs& obj) { 
          DARABONBA_PTR_TO_JSON(LogCode, logCode_);
          DARABONBA_PTR_TO_JSON(LogInstanceId, logInstanceId_);
          DARABONBA_PTR_TO_JSON(LogMdsCode, logMdsCode_);
          DARABONBA_PTR_TO_JSON(LogParams, logParams_);
          DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
        };
        friend void from_json(const Darabonba::Json& j, DataSourceInstanceLogs& obj) { 
          DARABONBA_PTR_FROM_JSON(LogCode, logCode_);
          DARABONBA_PTR_FROM_JSON(LogInstanceId, logInstanceId_);
          DARABONBA_PTR_FROM_JSON(LogMdsCode, logMdsCode_);
          DARABONBA_PTR_FROM_JSON(LogParams, logParams_);
          DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
        };
        DataSourceInstanceLogs() = default ;
        DataSourceInstanceLogs(const DataSourceInstanceLogs &) = default ;
        DataSourceInstanceLogs(DataSourceInstanceLogs &&) = default ;
        DataSourceInstanceLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataSourceInstanceLogs() = default ;
        DataSourceInstanceLogs& operator=(const DataSourceInstanceLogs &) = default ;
        DataSourceInstanceLogs& operator=(DataSourceInstanceLogs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class LogParams : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const LogParams& obj) { 
            DARABONBA_PTR_TO_JSON(ParaCode, paraCode_);
            DARABONBA_PTR_TO_JSON(ParaValue, paraValue_);
          };
          friend void from_json(const Darabonba::Json& j, LogParams& obj) { 
            DARABONBA_PTR_FROM_JSON(ParaCode, paraCode_);
            DARABONBA_PTR_FROM_JSON(ParaValue, paraValue_);
          };
          LogParams() = default ;
          LogParams(const LogParams &) = default ;
          LogParams(LogParams &&) = default ;
          LogParams(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~LogParams() = default ;
          LogParams& operator=(const LogParams &) = default ;
          LogParams& operator=(LogParams &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->paraCode_ == nullptr
        && this->paraValue_ == nullptr; };
          // paraCode Field Functions 
          bool hasParaCode() const { return this->paraCode_ != nullptr;};
          void deleteParaCode() { this->paraCode_ = nullptr;};
          inline string getParaCode() const { DARABONBA_PTR_GET_DEFAULT(paraCode_, "") };
          inline LogParams& setParaCode(string paraCode) { DARABONBA_PTR_SET_VALUE(paraCode_, paraCode) };


          // paraValue Field Functions 
          bool hasParaValue() const { return this->paraValue_ != nullptr;};
          void deleteParaValue() { this->paraValue_ = nullptr;};
          inline string getParaValue() const { DARABONBA_PTR_GET_DEFAULT(paraValue_, "") };
          inline LogParams& setParaValue(string paraValue) { DARABONBA_PTR_SET_VALUE(paraValue_, paraValue) };


        protected:
          // The parameter code of the log.
          shared_ptr<string> paraCode_ {};
          // The parameter value of the log.
          shared_ptr<string> paraValue_ {};
        };

        virtual bool empty() const override { return this->logCode_ == nullptr
        && this->logInstanceId_ == nullptr && this->logMdsCode_ == nullptr && this->logParams_ == nullptr && this->taskStatus_ == nullptr; };
        // logCode Field Functions 
        bool hasLogCode() const { return this->logCode_ != nullptr;};
        void deleteLogCode() { this->logCode_ = nullptr;};
        inline string getLogCode() const { DARABONBA_PTR_GET_DEFAULT(logCode_, "") };
        inline DataSourceInstanceLogs& setLogCode(string logCode) { DARABONBA_PTR_SET_VALUE(logCode_, logCode) };


        // logInstanceId Field Functions 
        bool hasLogInstanceId() const { return this->logInstanceId_ != nullptr;};
        void deleteLogInstanceId() { this->logInstanceId_ = nullptr;};
        inline string getLogInstanceId() const { DARABONBA_PTR_GET_DEFAULT(logInstanceId_, "") };
        inline DataSourceInstanceLogs& setLogInstanceId(string logInstanceId) { DARABONBA_PTR_SET_VALUE(logInstanceId_, logInstanceId) };


        // logMdsCode Field Functions 
        bool hasLogMdsCode() const { return this->logMdsCode_ != nullptr;};
        void deleteLogMdsCode() { this->logMdsCode_ = nullptr;};
        inline string getLogMdsCode() const { DARABONBA_PTR_GET_DEFAULT(logMdsCode_, "") };
        inline DataSourceInstanceLogs& setLogMdsCode(string logMdsCode) { DARABONBA_PTR_SET_VALUE(logMdsCode_, logMdsCode) };


        // logParams Field Functions 
        bool hasLogParams() const { return this->logParams_ != nullptr;};
        void deleteLogParams() { this->logParams_ = nullptr;};
        inline const vector<DataSourceInstanceLogs::LogParams> & getLogParams() const { DARABONBA_PTR_GET_CONST(logParams_, vector<DataSourceInstanceLogs::LogParams>) };
        inline vector<DataSourceInstanceLogs::LogParams> getLogParams() { DARABONBA_PTR_GET(logParams_, vector<DataSourceInstanceLogs::LogParams>) };
        inline DataSourceInstanceLogs& setLogParams(const vector<DataSourceInstanceLogs::LogParams> & logParams) { DARABONBA_PTR_SET_VALUE(logParams_, logParams) };
        inline DataSourceInstanceLogs& setLogParams(vector<DataSourceInstanceLogs::LogParams> && logParams) { DARABONBA_PTR_SET_RVALUE(logParams_, logParams) };


        // taskStatus Field Functions 
        bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
        void deleteTaskStatus() { this->taskStatus_ = nullptr;};
        inline int32_t getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, 0) };
        inline DataSourceInstanceLogs& setTaskStatus(int32_t taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


      protected:
        // The code of the log.
        shared_ptr<string> logCode_ {};
        // The ID of the log. The value is obtained after the threat analysis feature calculates the MD5 hash value of a parameter.
        shared_ptr<string> logInstanceId_ {};
        // The display code of the log.
        shared_ptr<string> logMdsCode_ {};
        // The parameters of the log.
        shared_ptr<vector<DataSourceInstanceLogs::LogParams>> logParams_ {};
        // Indicates whether the task for which logs are collected is enabled. Valid values:
        // 
        // *   1: yes
        // *   0: no
        shared_ptr<int32_t> taskStatus_ {};
      };

      virtual bool empty() const override { return this->accountId_ == nullptr
        && this->cloudCode_ == nullptr && this->dataSourceInstanceId_ == nullptr && this->dataSourceInstanceLogs_ == nullptr && this->dataSourceInstanceName_ == nullptr && this->dataSourceInstanceRemark_ == nullptr
        && this->subUserId_ == nullptr; };
      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
      inline Data& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


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


      // dataSourceInstanceLogs Field Functions 
      bool hasDataSourceInstanceLogs() const { return this->dataSourceInstanceLogs_ != nullptr;};
      void deleteDataSourceInstanceLogs() { this->dataSourceInstanceLogs_ = nullptr;};
      inline const vector<Data::DataSourceInstanceLogs> & getDataSourceInstanceLogs() const { DARABONBA_PTR_GET_CONST(dataSourceInstanceLogs_, vector<Data::DataSourceInstanceLogs>) };
      inline vector<Data::DataSourceInstanceLogs> getDataSourceInstanceLogs() { DARABONBA_PTR_GET(dataSourceInstanceLogs_, vector<Data::DataSourceInstanceLogs>) };
      inline Data& setDataSourceInstanceLogs(const vector<Data::DataSourceInstanceLogs> & dataSourceInstanceLogs) { DARABONBA_PTR_SET_VALUE(dataSourceInstanceLogs_, dataSourceInstanceLogs) };
      inline Data& setDataSourceInstanceLogs(vector<Data::DataSourceInstanceLogs> && dataSourceInstanceLogs) { DARABONBA_PTR_SET_RVALUE(dataSourceInstanceLogs_, dataSourceInstanceLogs) };


      // dataSourceInstanceName Field Functions 
      bool hasDataSourceInstanceName() const { return this->dataSourceInstanceName_ != nullptr;};
      void deleteDataSourceInstanceName() { this->dataSourceInstanceName_ = nullptr;};
      inline string getDataSourceInstanceName() const { DARABONBA_PTR_GET_DEFAULT(dataSourceInstanceName_, "") };
      inline Data& setDataSourceInstanceName(string dataSourceInstanceName) { DARABONBA_PTR_SET_VALUE(dataSourceInstanceName_, dataSourceInstanceName) };


      // dataSourceInstanceRemark Field Functions 
      bool hasDataSourceInstanceRemark() const { return this->dataSourceInstanceRemark_ != nullptr;};
      void deleteDataSourceInstanceRemark() { this->dataSourceInstanceRemark_ = nullptr;};
      inline string getDataSourceInstanceRemark() const { DARABONBA_PTR_GET_DEFAULT(dataSourceInstanceRemark_, "") };
      inline Data& setDataSourceInstanceRemark(string dataSourceInstanceRemark) { DARABONBA_PTR_SET_VALUE(dataSourceInstanceRemark_, dataSourceInstanceRemark) };


      // subUserId Field Functions 
      bool hasSubUserId() const { return this->subUserId_ != nullptr;};
      void deleteSubUserId() { this->subUserId_ = nullptr;};
      inline int64_t getSubUserId() const { DARABONBA_PTR_GET_DEFAULT(subUserId_, 0L) };
      inline Data& setSubUserId(int64_t subUserId) { DARABONBA_PTR_SET_VALUE(subUserId_, subUserId) };


    protected:
      // The ID of the cloud account.
      shared_ptr<string> accountId_ {};
      // The code that is used for multi-cloud environments. Valid values:
      // 
      // *   qcloud: Tencent Cloud
      // *   aliyun: Alibaba Cloud
      // *   hcloud: Huawei Cloud
      shared_ptr<string> cloudCode_ {};
      // The ID of the data source. The value is obtained after the threat analysis feature calculates the MD5 hash value of a parameter.
      shared_ptr<string> dataSourceInstanceId_ {};
      // The logs of the data source.
      shared_ptr<vector<Data::DataSourceInstanceLogs>> dataSourceInstanceLogs_ {};
      // The name of the data source.
      shared_ptr<string> dataSourceInstanceName_ {};
      // The remarks of the data source.
      shared_ptr<string> dataSourceInstanceRemark_ {};
      // The ID of the Alibaba Cloud account.
      shared_ptr<int64_t> subUserId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListDataSourceLogsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListDataSourceLogsResponseBody::Data) };
    inline ListDataSourceLogsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListDataSourceLogsResponseBody::Data) };
    inline ListDataSourceLogsResponseBody& setData(const ListDataSourceLogsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListDataSourceLogsResponseBody& setData(ListDataSourceLogsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataSourceLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    shared_ptr<ListDataSourceLogsResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
