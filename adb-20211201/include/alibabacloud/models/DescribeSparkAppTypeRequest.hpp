// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESPARKAPPTYPEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESPARKAPPTYPEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeSparkAppTypeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSparkAppTypeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSparkAppTypeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeSparkAppTypeRequest() = default ;
    DescribeSparkAppTypeRequest(const DescribeSparkAppTypeRequest &) = default ;
    DescribeSparkAppTypeRequest(DescribeSparkAppTypeRequest &&) = default ;
    DescribeSparkAppTypeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSparkAppTypeRequest() = default ;
    DescribeSparkAppTypeRequest& operator=(const DescribeSparkAppTypeRequest &) = default ;
    DescribeSparkAppTypeRequest& operator=(DescribeSparkAppTypeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->DBClusterId_ != nullptr && this->regionId_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeSparkAppTypeRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeSparkAppTypeRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSparkAppTypeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The application ID.
    // 
    // >  You can call the [ListSparkApps](https://help.aliyun.com/document_detail/612475.html) operation to query the Spark application IDs.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The cluster ID.
    // 
    // >  You can call the [DescribeDBClusters](https://help.aliyun.com/document_detail/98094.html) operation to query the information about all AnalyticDB for MySQL clusters within a region, including cluster IDs.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The region ID.
    // 
    // >  You can call the [DescribeRegions](https://help.aliyun.com/document_detail/143074.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
