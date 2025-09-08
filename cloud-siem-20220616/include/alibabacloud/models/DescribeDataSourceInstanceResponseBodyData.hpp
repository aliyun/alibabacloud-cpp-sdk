// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATASOURCEINSTANCERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATASOURCEINSTANCERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDataSourceInstanceResponseBodyDataDataSourceInstanceParams.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeDataSourceInstanceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataSourceInstanceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(CloudCode, cloudCode_);
      DARABONBA_PTR_TO_JSON(DataSourceInstanceId, dataSourceInstanceId_);
      DARABONBA_PTR_TO_JSON(DataSourceInstanceParams, dataSourceInstanceParams_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataSourceInstanceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(CloudCode, cloudCode_);
      DARABONBA_PTR_FROM_JSON(DataSourceInstanceId, dataSourceInstanceId_);
      DARABONBA_PTR_FROM_JSON(DataSourceInstanceParams, dataSourceInstanceParams_);
    };
    DescribeDataSourceInstanceResponseBodyData() = default ;
    DescribeDataSourceInstanceResponseBodyData(const DescribeDataSourceInstanceResponseBodyData &) = default ;
    DescribeDataSourceInstanceResponseBodyData(DescribeDataSourceInstanceResponseBodyData &&) = default ;
    DescribeDataSourceInstanceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataSourceInstanceResponseBodyData() = default ;
    DescribeDataSourceInstanceResponseBodyData& operator=(const DescribeDataSourceInstanceResponseBodyData &) = default ;
    DescribeDataSourceInstanceResponseBodyData& operator=(DescribeDataSourceInstanceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountId_ != nullptr
        && this->cloudCode_ != nullptr && this->dataSourceInstanceId_ != nullptr && this->dataSourceInstanceParams_ != nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline DescribeDataSourceInstanceResponseBodyData& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // cloudCode Field Functions 
    bool hasCloudCode() const { return this->cloudCode_ != nullptr;};
    void deleteCloudCode() { this->cloudCode_ = nullptr;};
    inline string cloudCode() const { DARABONBA_PTR_GET_DEFAULT(cloudCode_, "") };
    inline DescribeDataSourceInstanceResponseBodyData& setCloudCode(string cloudCode) { DARABONBA_PTR_SET_VALUE(cloudCode_, cloudCode) };


    // dataSourceInstanceId Field Functions 
    bool hasDataSourceInstanceId() const { return this->dataSourceInstanceId_ != nullptr;};
    void deleteDataSourceInstanceId() { this->dataSourceInstanceId_ = nullptr;};
    inline string dataSourceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceInstanceId_, "") };
    inline DescribeDataSourceInstanceResponseBodyData& setDataSourceInstanceId(string dataSourceInstanceId) { DARABONBA_PTR_SET_VALUE(dataSourceInstanceId_, dataSourceInstanceId) };


    // dataSourceInstanceParams Field Functions 
    bool hasDataSourceInstanceParams() const { return this->dataSourceInstanceParams_ != nullptr;};
    void deleteDataSourceInstanceParams() { this->dataSourceInstanceParams_ = nullptr;};
    inline const vector<Models::DescribeDataSourceInstanceResponseBodyDataDataSourceInstanceParams> & dataSourceInstanceParams() const { DARABONBA_PTR_GET_CONST(dataSourceInstanceParams_, vector<Models::DescribeDataSourceInstanceResponseBodyDataDataSourceInstanceParams>) };
    inline vector<Models::DescribeDataSourceInstanceResponseBodyDataDataSourceInstanceParams> dataSourceInstanceParams() { DARABONBA_PTR_GET(dataSourceInstanceParams_, vector<Models::DescribeDataSourceInstanceResponseBodyDataDataSourceInstanceParams>) };
    inline DescribeDataSourceInstanceResponseBodyData& setDataSourceInstanceParams(const vector<Models::DescribeDataSourceInstanceResponseBodyDataDataSourceInstanceParams> & dataSourceInstanceParams) { DARABONBA_PTR_SET_VALUE(dataSourceInstanceParams_, dataSourceInstanceParams) };
    inline DescribeDataSourceInstanceResponseBodyData& setDataSourceInstanceParams(vector<Models::DescribeDataSourceInstanceResponseBodyDataDataSourceInstanceParams> && dataSourceInstanceParams) { DARABONBA_PTR_SET_RVALUE(dataSourceInstanceParams_, dataSourceInstanceParams) };


  protected:
    // The ID of the cloud account.
    std::shared_ptr<string> accountId_ = nullptr;
    // The code of the cloud service provider. Valid values:
    // 
    // *   qcloud: Tencent Cloud
    // *   aliyun: Alibaba Cloud
    // *   hcloud: Huawei Cloud
    std::shared_ptr<string> cloudCode_ = nullptr;
    // The ID of the data source. The ID is an MD5 hash value that is calculated by the threat analysis feature based on specific parameters.
    std::shared_ptr<string> dataSourceInstanceId_ = nullptr;
    // The parameters of the data source.
    std::shared_ptr<vector<Models::DescribeDataSourceInstanceResponseBodyDataDataSourceInstanceParams>> dataSourceInstanceParams_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
