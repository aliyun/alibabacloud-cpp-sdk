// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATASOURCEPARAMETERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATASOURCEPARAMETERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeDataSourceParametersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataSourceParametersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CloudCode, cloudCode_);
      DARABONBA_PTR_TO_JSON(DataSourceType, dataSourceType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataSourceParametersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CloudCode, cloudCode_);
      DARABONBA_PTR_FROM_JSON(DataSourceType, dataSourceType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeDataSourceParametersRequest() = default ;
    DescribeDataSourceParametersRequest(const DescribeDataSourceParametersRequest &) = default ;
    DescribeDataSourceParametersRequest(DescribeDataSourceParametersRequest &&) = default ;
    DescribeDataSourceParametersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataSourceParametersRequest() = default ;
    DescribeDataSourceParametersRequest& operator=(const DescribeDataSourceParametersRequest &) = default ;
    DescribeDataSourceParametersRequest& operator=(DescribeDataSourceParametersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cloudCode_ == nullptr
        && this->dataSourceType_ == nullptr && this->regionId_ == nullptr; };
    // cloudCode Field Functions 
    bool hasCloudCode() const { return this->cloudCode_ != nullptr;};
    void deleteCloudCode() { this->cloudCode_ = nullptr;};
    inline string getCloudCode() const { DARABONBA_PTR_GET_DEFAULT(cloudCode_, "") };
    inline DescribeDataSourceParametersRequest& setCloudCode(string cloudCode) { DARABONBA_PTR_SET_VALUE(cloudCode_, cloudCode) };


    // dataSourceType Field Functions 
    bool hasDataSourceType() const { return this->dataSourceType_ != nullptr;};
    void deleteDataSourceType() { this->dataSourceType_ = nullptr;};
    inline string getDataSourceType() const { DARABONBA_PTR_GET_DEFAULT(dataSourceType_, "") };
    inline DescribeDataSourceParametersRequest& setDataSourceType(string dataSourceType) { DARABONBA_PTR_SET_VALUE(dataSourceType_, dataSourceType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDataSourceParametersRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The code for the multicloud environment.
    // 
    // This parameter is required.
    shared_ptr<string> cloudCode_ {};
    // The type of the data source. Valid values:
    // 
    // - **ckafka**: Tencent Cloud CKafka.
    // 
    // - **obs**: Huawei Cloud OBS.
    // 
    // - **wafApi**: Tencent Cloud WAF attack log download API.
    // 
    // This parameter is required.
    shared_ptr<string> dataSourceType_ {};
    // The region where the Data Management center for threat analysis is deployed. Select a region based on the region where your assets are located. Valid values:
    // 
    // - cn-hangzhou: Your assets are in the Chinese mainland or China (Hong Kong).
    // 
    // - ap-southeast-1: Your assets are outside China.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
