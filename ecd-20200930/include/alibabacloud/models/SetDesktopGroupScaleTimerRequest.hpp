// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETDESKTOPGROUPSCALETIMERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETDESKTOPGROUPSCALETIMERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SetDesktopGroupScaleTimerRequestScaleTimerInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class SetDesktopGroupScaleTimerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetDesktopGroupScaleTimerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DesktopGroupId, desktopGroupId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ScaleTimerInfos, scaleTimerInfos_);
    };
    friend void from_json(const Darabonba::Json& j, SetDesktopGroupScaleTimerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DesktopGroupId, desktopGroupId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ScaleTimerInfos, scaleTimerInfos_);
    };
    SetDesktopGroupScaleTimerRequest() = default ;
    SetDesktopGroupScaleTimerRequest(const SetDesktopGroupScaleTimerRequest &) = default ;
    SetDesktopGroupScaleTimerRequest(SetDesktopGroupScaleTimerRequest &&) = default ;
    SetDesktopGroupScaleTimerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetDesktopGroupScaleTimerRequest() = default ;
    SetDesktopGroupScaleTimerRequest& operator=(const SetDesktopGroupScaleTimerRequest &) = default ;
    SetDesktopGroupScaleTimerRequest& operator=(SetDesktopGroupScaleTimerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->desktopGroupId_ != nullptr
        && this->regionId_ != nullptr && this->scaleTimerInfos_ != nullptr; };
    // desktopGroupId Field Functions 
    bool hasDesktopGroupId() const { return this->desktopGroupId_ != nullptr;};
    void deleteDesktopGroupId() { this->desktopGroupId_ = nullptr;};
    inline string desktopGroupId() const { DARABONBA_PTR_GET_DEFAULT(desktopGroupId_, "") };
    inline SetDesktopGroupScaleTimerRequest& setDesktopGroupId(string desktopGroupId) { DARABONBA_PTR_SET_VALUE(desktopGroupId_, desktopGroupId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SetDesktopGroupScaleTimerRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // scaleTimerInfos Field Functions 
    bool hasScaleTimerInfos() const { return this->scaleTimerInfos_ != nullptr;};
    void deleteScaleTimerInfos() { this->scaleTimerInfos_ = nullptr;};
    inline const vector<SetDesktopGroupScaleTimerRequestScaleTimerInfos> & scaleTimerInfos() const { DARABONBA_PTR_GET_CONST(scaleTimerInfos_, vector<SetDesktopGroupScaleTimerRequestScaleTimerInfos>) };
    inline vector<SetDesktopGroupScaleTimerRequestScaleTimerInfos> scaleTimerInfos() { DARABONBA_PTR_GET(scaleTimerInfos_, vector<SetDesktopGroupScaleTimerRequestScaleTimerInfos>) };
    inline SetDesktopGroupScaleTimerRequest& setScaleTimerInfos(const vector<SetDesktopGroupScaleTimerRequestScaleTimerInfos> & scaleTimerInfos) { DARABONBA_PTR_SET_VALUE(scaleTimerInfos_, scaleTimerInfos) };
    inline SetDesktopGroupScaleTimerRequest& setScaleTimerInfos(vector<SetDesktopGroupScaleTimerRequestScaleTimerInfos> && scaleTimerInfos) { DARABONBA_PTR_SET_RVALUE(scaleTimerInfos_, scaleTimerInfos) };


  protected:
    // The ID of the cloud computer pool.
    // 
    // This parameter is required.
    std::shared_ptr<string> desktopGroupId_ = nullptr;
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the regions supported by Elastic Desktop Service.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The information about the scheduled auto scaling task.
    std::shared_ptr<vector<SetDesktopGroupScaleTimerRequestScaleTimerInfos>> scaleTimerInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
