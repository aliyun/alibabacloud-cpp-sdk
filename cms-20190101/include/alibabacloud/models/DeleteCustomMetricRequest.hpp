// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECUSTOMMETRICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECUSTOMMETRICREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DeleteCustomMetricRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCustomMetricRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Md5, md5_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(UUID, UUID_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCustomMetricRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Md5, md5_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(UUID, UUID_);
    };
    DeleteCustomMetricRequest() = default ;
    DeleteCustomMetricRequest(const DeleteCustomMetricRequest &) = default ;
    DeleteCustomMetricRequest(DeleteCustomMetricRequest &&) = default ;
    DeleteCustomMetricRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCustomMetricRequest() = default ;
    DeleteCustomMetricRequest& operator=(const DeleteCustomMetricRequest &) = default ;
    DeleteCustomMetricRequest& operator=(DeleteCustomMetricRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->groupId_ != nullptr
        && this->md5_ != nullptr && this->metricName_ != nullptr && this->regionId_ != nullptr && this->UUID_ != nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DeleteCustomMetricRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // md5 Field Functions 
    bool hasMd5() const { return this->md5_ != nullptr;};
    void deleteMd5() { this->md5_ = nullptr;};
    inline string md5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
    inline DeleteCustomMetricRequest& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline DeleteCustomMetricRequest& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteCustomMetricRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // UUID Field Functions 
    bool hasUUID() const { return this->UUID_ != nullptr;};
    void deleteUUID() { this->UUID_ = nullptr;};
    inline string UUID() const { DARABONBA_PTR_GET_DEFAULT(UUID_, "") };
    inline DeleteCustomMetricRequest& setUUID(string UUID) { DARABONBA_PTR_SET_VALUE(UUID_, UUID) };


  protected:
    // The ID of the application group.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupId_ = nullptr;
    // The MD5 value of the HTTP request body. The MD5 value is a 128-bit hash value used to verify the uniqueness of the reported monitoring data.
    // 
    // >  `Md5` is returned when you query the reported monitoring data of a metric.
    std::shared_ptr<string> md5_ = nullptr;
    // The name of the metric.
    // 
    // This parameter is required.
    std::shared_ptr<string> metricName_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the request for reporting monitoring data.
    // 
    // >  `UUID` is returned when you query the reported monitoring data of a metric. We recommend that you specify the `Md5` parameter.
    std::shared_ptr<string> UUID_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
