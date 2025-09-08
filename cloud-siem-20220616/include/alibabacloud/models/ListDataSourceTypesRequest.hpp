// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASOURCETYPESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASOURCETYPESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class ListDataSourceTypesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataSourceTypesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CloudCode, cloudCode_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataSourceTypesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CloudCode, cloudCode_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ListDataSourceTypesRequest() = default ;
    ListDataSourceTypesRequest(const ListDataSourceTypesRequest &) = default ;
    ListDataSourceTypesRequest(ListDataSourceTypesRequest &&) = default ;
    ListDataSourceTypesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataSourceTypesRequest() = default ;
    ListDataSourceTypesRequest& operator=(const ListDataSourceTypesRequest &) = default ;
    ListDataSourceTypesRequest& operator=(ListDataSourceTypesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cloudCode_ != nullptr
        && this->regionId_ != nullptr; };
    // cloudCode Field Functions 
    bool hasCloudCode() const { return this->cloudCode_ != nullptr;};
    void deleteCloudCode() { this->cloudCode_ = nullptr;};
    inline string cloudCode() const { DARABONBA_PTR_GET_DEFAULT(cloudCode_, "") };
    inline ListDataSourceTypesRequest& setCloudCode(string cloudCode) { DARABONBA_PTR_SET_VALUE(cloudCode_, cloudCode) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListDataSourceTypesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The code of the third-party cloud service.
    // 
    // Valid values:
    // 
    // *   qcloud
    // *   hcloud
    // 
    // This parameter is required.
    std::shared_ptr<string> cloudCode_ = nullptr;
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
