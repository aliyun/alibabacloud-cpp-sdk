// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASOURCETYPESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASOURCETYPESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class ListDataSourceTypesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataSourceTypesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CloudCode, cloudCode_);
      DARABONBA_PTR_TO_JSON(DataSourceType, dataSourceType_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataSourceTypesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CloudCode, cloudCode_);
      DARABONBA_PTR_FROM_JSON(DataSourceType, dataSourceType_);
    };
    ListDataSourceTypesResponseBodyData() = default ;
    ListDataSourceTypesResponseBodyData(const ListDataSourceTypesResponseBodyData &) = default ;
    ListDataSourceTypesResponseBodyData(ListDataSourceTypesResponseBodyData &&) = default ;
    ListDataSourceTypesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataSourceTypesResponseBodyData() = default ;
    ListDataSourceTypesResponseBodyData& operator=(const ListDataSourceTypesResponseBodyData &) = default ;
    ListDataSourceTypesResponseBodyData& operator=(ListDataSourceTypesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cloudCode_ != nullptr
        && this->dataSourceType_ != nullptr; };
    // cloudCode Field Functions 
    bool hasCloudCode() const { return this->cloudCode_ != nullptr;};
    void deleteCloudCode() { this->cloudCode_ = nullptr;};
    inline string cloudCode() const { DARABONBA_PTR_GET_DEFAULT(cloudCode_, "") };
    inline ListDataSourceTypesResponseBodyData& setCloudCode(string cloudCode) { DARABONBA_PTR_SET_VALUE(cloudCode_, cloudCode) };


    // dataSourceType Field Functions 
    bool hasDataSourceType() const { return this->dataSourceType_ != nullptr;};
    void deleteDataSourceType() { this->dataSourceType_ = nullptr;};
    inline string dataSourceType() const { DARABONBA_PTR_GET_DEFAULT(dataSourceType_, "") };
    inline ListDataSourceTypesResponseBodyData& setDataSourceType(string dataSourceType) { DARABONBA_PTR_SET_VALUE(dataSourceType_, dataSourceType) };


  protected:
    // The code of the third-party cloud service.
    std::shared_ptr<string> cloudCode_ = nullptr;
    // The type of the data source. Valid values:
    // 
    // *   obs: Huawei Cloud Object Storage Service (OBS)
    // *   wafApi: download API of Tencent Cloud Web Application Firewall (WAF)
    // *   ckafka: Tencent Cloud Kafka (CKafka)
    std::shared_ptr<string> dataSourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
