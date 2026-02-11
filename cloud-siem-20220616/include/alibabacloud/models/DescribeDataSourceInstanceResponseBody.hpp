// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATASOURCEINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATASOURCEINSTANCERESPONSEBODY_HPP_
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
  class DescribeDataSourceInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataSourceInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataSourceInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDataSourceInstanceResponseBody() = default ;
    DescribeDataSourceInstanceResponseBody(const DescribeDataSourceInstanceResponseBody &) = default ;
    DescribeDataSourceInstanceResponseBody(DescribeDataSourceInstanceResponseBody &&) = default ;
    DescribeDataSourceInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataSourceInstanceResponseBody() = default ;
    DescribeDataSourceInstanceResponseBody& operator=(const DescribeDataSourceInstanceResponseBody &) = default ;
    DescribeDataSourceInstanceResponseBody& operator=(DescribeDataSourceInstanceResponseBody &&) = default ;
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
        DARABONBA_PTR_TO_JSON(DataSourceInstanceParams, dataSourceInstanceParams_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
        DARABONBA_PTR_FROM_JSON(CloudCode, cloudCode_);
        DARABONBA_PTR_FROM_JSON(DataSourceInstanceId, dataSourceInstanceId_);
        DARABONBA_PTR_FROM_JSON(DataSourceInstanceParams, dataSourceInstanceParams_);
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
      class DataSourceInstanceParams : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataSourceInstanceParams& obj) { 
          DARABONBA_PTR_TO_JSON(ParaCode, paraCode_);
          DARABONBA_PTR_TO_JSON(ParaValue, paraValue_);
        };
        friend void from_json(const Darabonba::Json& j, DataSourceInstanceParams& obj) { 
          DARABONBA_PTR_FROM_JSON(ParaCode, paraCode_);
          DARABONBA_PTR_FROM_JSON(ParaValue, paraValue_);
        };
        DataSourceInstanceParams() = default ;
        DataSourceInstanceParams(const DataSourceInstanceParams &) = default ;
        DataSourceInstanceParams(DataSourceInstanceParams &&) = default ;
        DataSourceInstanceParams(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataSourceInstanceParams() = default ;
        DataSourceInstanceParams& operator=(const DataSourceInstanceParams &) = default ;
        DataSourceInstanceParams& operator=(DataSourceInstanceParams &&) = default ;
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
        inline DataSourceInstanceParams& setParaCode(string paraCode) { DARABONBA_PTR_SET_VALUE(paraCode_, paraCode) };


        // paraValue Field Functions 
        bool hasParaValue() const { return this->paraValue_ != nullptr;};
        void deleteParaValue() { this->paraValue_ = nullptr;};
        inline string getParaValue() const { DARABONBA_PTR_GET_DEFAULT(paraValue_, "") };
        inline DataSourceInstanceParams& setParaValue(string paraValue) { DARABONBA_PTR_SET_VALUE(paraValue_, paraValue) };


      protected:
        // The code of the parameter.
        shared_ptr<string> paraCode_ {};
        // The value of the parameter.
        shared_ptr<string> paraValue_ {};
      };

      virtual bool empty() const override { return this->accountId_ == nullptr
        && this->cloudCode_ == nullptr && this->dataSourceInstanceId_ == nullptr && this->dataSourceInstanceParams_ == nullptr; };
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


      // dataSourceInstanceParams Field Functions 
      bool hasDataSourceInstanceParams() const { return this->dataSourceInstanceParams_ != nullptr;};
      void deleteDataSourceInstanceParams() { this->dataSourceInstanceParams_ = nullptr;};
      inline const vector<Data::DataSourceInstanceParams> & getDataSourceInstanceParams() const { DARABONBA_PTR_GET_CONST(dataSourceInstanceParams_, vector<Data::DataSourceInstanceParams>) };
      inline vector<Data::DataSourceInstanceParams> getDataSourceInstanceParams() { DARABONBA_PTR_GET(dataSourceInstanceParams_, vector<Data::DataSourceInstanceParams>) };
      inline Data& setDataSourceInstanceParams(const vector<Data::DataSourceInstanceParams> & dataSourceInstanceParams) { DARABONBA_PTR_SET_VALUE(dataSourceInstanceParams_, dataSourceInstanceParams) };
      inline Data& setDataSourceInstanceParams(vector<Data::DataSourceInstanceParams> && dataSourceInstanceParams) { DARABONBA_PTR_SET_RVALUE(dataSourceInstanceParams_, dataSourceInstanceParams) };


    protected:
      // The ID of the cloud account.
      shared_ptr<string> accountId_ {};
      // The code of the cloud service provider. Valid values:
      // 
      // *   qcloud: Tencent Cloud
      // *   aliyun: Alibaba Cloud
      // *   hcloud: Huawei Cloud
      shared_ptr<string> cloudCode_ {};
      // The ID of the data source. The ID is an MD5 hash value that is calculated by the threat analysis feature based on specific parameters.
      shared_ptr<string> dataSourceInstanceId_ {};
      // The parameters of the data source.
      shared_ptr<vector<Data::DataSourceInstanceParams>> dataSourceInstanceParams_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeDataSourceInstanceResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeDataSourceInstanceResponseBody::Data) };
    inline DescribeDataSourceInstanceResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeDataSourceInstanceResponseBody::Data) };
    inline DescribeDataSourceInstanceResponseBody& setData(const DescribeDataSourceInstanceResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeDataSourceInstanceResponseBody& setData(DescribeDataSourceInstanceResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDataSourceInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    shared_ptr<DescribeDataSourceInstanceResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
