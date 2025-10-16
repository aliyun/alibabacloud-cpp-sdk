// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDESKTOPTIMERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDESKTOPTIMERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyDesktopTimerRequestDesktopTimers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ModifyDesktopTimerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDesktopTimerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_TO_JSON(DesktopTimers, desktopTimers_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(UseDesktopTimers, useDesktopTimers_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDesktopTimerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_FROM_JSON(DesktopTimers, desktopTimers_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(UseDesktopTimers, useDesktopTimers_);
    };
    ModifyDesktopTimerRequest() = default ;
    ModifyDesktopTimerRequest(const ModifyDesktopTimerRequest &) = default ;
    ModifyDesktopTimerRequest(ModifyDesktopTimerRequest &&) = default ;
    ModifyDesktopTimerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDesktopTimerRequest() = default ;
    ModifyDesktopTimerRequest& operator=(const ModifyDesktopTimerRequest &) = default ;
    ModifyDesktopTimerRequest& operator=(ModifyDesktopTimerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->desktopId_ == nullptr
        && return this->desktopTimers_ == nullptr && return this->regionId_ == nullptr && return this->useDesktopTimers_ == nullptr; };
    // desktopId Field Functions 
    bool hasDesktopId() const { return this->desktopId_ != nullptr;};
    void deleteDesktopId() { this->desktopId_ = nullptr;};
    inline const vector<string> & desktopId() const { DARABONBA_PTR_GET_CONST(desktopId_, vector<string>) };
    inline vector<string> desktopId() { DARABONBA_PTR_GET(desktopId_, vector<string>) };
    inline ModifyDesktopTimerRequest& setDesktopId(const vector<string> & desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };
    inline ModifyDesktopTimerRequest& setDesktopId(vector<string> && desktopId) { DARABONBA_PTR_SET_RVALUE(desktopId_, desktopId) };


    // desktopTimers Field Functions 
    bool hasDesktopTimers() const { return this->desktopTimers_ != nullptr;};
    void deleteDesktopTimers() { this->desktopTimers_ = nullptr;};
    inline const vector<ModifyDesktopTimerRequestDesktopTimers> & desktopTimers() const { DARABONBA_PTR_GET_CONST(desktopTimers_, vector<ModifyDesktopTimerRequestDesktopTimers>) };
    inline vector<ModifyDesktopTimerRequestDesktopTimers> desktopTimers() { DARABONBA_PTR_GET(desktopTimers_, vector<ModifyDesktopTimerRequestDesktopTimers>) };
    inline ModifyDesktopTimerRequest& setDesktopTimers(const vector<ModifyDesktopTimerRequestDesktopTimers> & desktopTimers) { DARABONBA_PTR_SET_VALUE(desktopTimers_, desktopTimers) };
    inline ModifyDesktopTimerRequest& setDesktopTimers(vector<ModifyDesktopTimerRequestDesktopTimers> && desktopTimers) { DARABONBA_PTR_SET_RVALUE(desktopTimers_, desktopTimers) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyDesktopTimerRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // useDesktopTimers Field Functions 
    bool hasUseDesktopTimers() const { return this->useDesktopTimers_ != nullptr;};
    void deleteUseDesktopTimers() { this->useDesktopTimers_ = nullptr;};
    inline bool useDesktopTimers() const { DARABONBA_PTR_GET_DEFAULT(useDesktopTimers_, false) };
    inline ModifyDesktopTimerRequest& setUseDesktopTimers(bool useDesktopTimers) { DARABONBA_PTR_SET_VALUE(useDesktopTimers_, useDesktopTimers) };


  protected:
    // The IDs of the cloud computers.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> desktopId_ = nullptr;
    // The details of the scheduled task on cloud computers.
    std::shared_ptr<vector<ModifyDesktopTimerRequestDesktopTimers>> desktopTimers_ = nullptr;
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // Specifies whether to use the `DesktopTimers`** parameter. Set the value to `true`**.
    std::shared_ptr<bool> useDesktopTimers_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
