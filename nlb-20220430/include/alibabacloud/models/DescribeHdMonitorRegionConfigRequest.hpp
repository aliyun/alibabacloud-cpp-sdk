// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHDMONITORREGIONCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHDMONITORREGIONCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nlb20220430
{
namespace Models
{
  class DescribeHdMonitorRegionConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHdMonitorRegionConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHdMonitorRegionConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeHdMonitorRegionConfigRequest() = default ;
    DescribeHdMonitorRegionConfigRequest(const DescribeHdMonitorRegionConfigRequest &) = default ;
    DescribeHdMonitorRegionConfigRequest(DescribeHdMonitorRegionConfigRequest &&) = default ;
    DescribeHdMonitorRegionConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHdMonitorRegionConfigRequest() = default ;
    DescribeHdMonitorRegionConfigRequest& operator=(const DescribeHdMonitorRegionConfigRequest &) = default ;
    DescribeHdMonitorRegionConfigRequest& operator=(DescribeHdMonitorRegionConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->regionId_ != nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeHdMonitorRegionConfigRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the region where the resources are deployed.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nlb20220430
#endif
