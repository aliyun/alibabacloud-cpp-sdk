// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYHYBRIDMONITORSLSGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYHYBRIDMONITORSLSGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyHybridMonitorSLSGroupRequestSLSGroupConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class ModifyHybridMonitorSLSGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyHybridMonitorSLSGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SLSGroupConfig, SLSGroupConfig_);
      DARABONBA_PTR_TO_JSON(SLSGroupDescription, SLSGroupDescription_);
      DARABONBA_PTR_TO_JSON(SLSGroupName, SLSGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyHybridMonitorSLSGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SLSGroupConfig, SLSGroupConfig_);
      DARABONBA_PTR_FROM_JSON(SLSGroupDescription, SLSGroupDescription_);
      DARABONBA_PTR_FROM_JSON(SLSGroupName, SLSGroupName_);
    };
    ModifyHybridMonitorSLSGroupRequest() = default ;
    ModifyHybridMonitorSLSGroupRequest(const ModifyHybridMonitorSLSGroupRequest &) = default ;
    ModifyHybridMonitorSLSGroupRequest(ModifyHybridMonitorSLSGroupRequest &&) = default ;
    ModifyHybridMonitorSLSGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyHybridMonitorSLSGroupRequest() = default ;
    ModifyHybridMonitorSLSGroupRequest& operator=(const ModifyHybridMonitorSLSGroupRequest &) = default ;
    ModifyHybridMonitorSLSGroupRequest& operator=(ModifyHybridMonitorSLSGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->regionId_ != nullptr
        && this->SLSGroupConfig_ != nullptr && this->SLSGroupDescription_ != nullptr && this->SLSGroupName_ != nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyHybridMonitorSLSGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // SLSGroupConfig Field Functions 
    bool hasSLSGroupConfig() const { return this->SLSGroupConfig_ != nullptr;};
    void deleteSLSGroupConfig() { this->SLSGroupConfig_ = nullptr;};
    inline const vector<ModifyHybridMonitorSLSGroupRequestSLSGroupConfig> & SLSGroupConfig() const { DARABONBA_PTR_GET_CONST(SLSGroupConfig_, vector<ModifyHybridMonitorSLSGroupRequestSLSGroupConfig>) };
    inline vector<ModifyHybridMonitorSLSGroupRequestSLSGroupConfig> SLSGroupConfig() { DARABONBA_PTR_GET(SLSGroupConfig_, vector<ModifyHybridMonitorSLSGroupRequestSLSGroupConfig>) };
    inline ModifyHybridMonitorSLSGroupRequest& setSLSGroupConfig(const vector<ModifyHybridMonitorSLSGroupRequestSLSGroupConfig> & SLSGroupConfig) { DARABONBA_PTR_SET_VALUE(SLSGroupConfig_, SLSGroupConfig) };
    inline ModifyHybridMonitorSLSGroupRequest& setSLSGroupConfig(vector<ModifyHybridMonitorSLSGroupRequestSLSGroupConfig> && SLSGroupConfig) { DARABONBA_PTR_SET_RVALUE(SLSGroupConfig_, SLSGroupConfig) };


    // SLSGroupDescription Field Functions 
    bool hasSLSGroupDescription() const { return this->SLSGroupDescription_ != nullptr;};
    void deleteSLSGroupDescription() { this->SLSGroupDescription_ = nullptr;};
    inline string SLSGroupDescription() const { DARABONBA_PTR_GET_DEFAULT(SLSGroupDescription_, "") };
    inline ModifyHybridMonitorSLSGroupRequest& setSLSGroupDescription(string SLSGroupDescription) { DARABONBA_PTR_SET_VALUE(SLSGroupDescription_, SLSGroupDescription) };


    // SLSGroupName Field Functions 
    bool hasSLSGroupName() const { return this->SLSGroupName_ != nullptr;};
    void deleteSLSGroupName() { this->SLSGroupName_ = nullptr;};
    inline string SLSGroupName() const { DARABONBA_PTR_GET_DEFAULT(SLSGroupName_, "") };
    inline ModifyHybridMonitorSLSGroupRequest& setSLSGroupName(string SLSGroupName) { DARABONBA_PTR_SET_VALUE(SLSGroupName_, SLSGroupName) };


  protected:
    std::shared_ptr<string> regionId_ = nullptr;
    // The configurations of the Logstore group.
    // 
    // Valid values of N: 1 to 25.
    // 
    // This parameter is required.
    std::shared_ptr<vector<ModifyHybridMonitorSLSGroupRequestSLSGroupConfig>> SLSGroupConfig_ = nullptr;
    // The description of the Logstore group.
    std::shared_ptr<string> SLSGroupDescription_ = nullptr;
    // The name of the Logstore group.
    // 
    // For information about how to obtain the name of a Logstore group, see [DescribeHybridMonitorSLSGroup](https://help.aliyun.com/document_detail/429526.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> SLSGroupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
