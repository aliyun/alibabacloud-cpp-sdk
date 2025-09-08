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
    virtual bool empty() const override { this->cloudCode_ != nullptr
        && this->dataSourceType_ != nullptr && this->regionId_ != nullptr; };
    // cloudCode Field Functions 
    bool hasCloudCode() const { return this->cloudCode_ != nullptr;};
    void deleteCloudCode() { this->cloudCode_ = nullptr;};
    inline string cloudCode() const { DARABONBA_PTR_GET_DEFAULT(cloudCode_, "") };
    inline DescribeDataSourceParametersRequest& setCloudCode(string cloudCode) { DARABONBA_PTR_SET_VALUE(cloudCode_, cloudCode) };


    // dataSourceType Field Functions 
    bool hasDataSourceType() const { return this->dataSourceType_ != nullptr;};
    void deleteDataSourceType() { this->dataSourceType_ = nullptr;};
    inline string dataSourceType() const { DARABONBA_PTR_GET_DEFAULT(dataSourceType_, "") };
    inline DescribeDataSourceParametersRequest& setDataSourceType(string dataSourceType) { DARABONBA_PTR_SET_VALUE(dataSourceType_, dataSourceType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDataSourceParametersRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The code of the cloud service provider.
    // 
    // Valid values:
    // 
    // *   qcloud
    // *   hcloud
    // *   aliyun
    // 
    // This parameter is required.
    std::shared_ptr<string> cloudCode_ = nullptr;
    // The type of the data source. Valid values:
    // 
    // *   **ckafka**: Tencent Cloud TDMQ for CKafka
    // *   **obs**: Huawei Cloud Object Storage Service (OBS)
    // *   **wafApi**: download API of Tencent Cloud Web Application Firewall (WAF)
    // 
    // This parameter is required.
    std::shared_ptr<string> dataSourceType_ = nullptr;
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
