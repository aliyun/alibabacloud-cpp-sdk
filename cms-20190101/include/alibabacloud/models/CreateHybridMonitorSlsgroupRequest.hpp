// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHYBRIDMONITORSLSGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEHYBRIDMONITORSLSGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateHybridMonitorSLSGroupRequestSLSGroupConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class CreateHybridMonitorSLSGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHybridMonitorSLSGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SLSGroupConfig, SLSGroupConfig_);
      DARABONBA_PTR_TO_JSON(SLSGroupDescription, SLSGroupDescription_);
      DARABONBA_PTR_TO_JSON(SLSGroupName, SLSGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHybridMonitorSLSGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SLSGroupConfig, SLSGroupConfig_);
      DARABONBA_PTR_FROM_JSON(SLSGroupDescription, SLSGroupDescription_);
      DARABONBA_PTR_FROM_JSON(SLSGroupName, SLSGroupName_);
    };
    CreateHybridMonitorSLSGroupRequest() = default ;
    CreateHybridMonitorSLSGroupRequest(const CreateHybridMonitorSLSGroupRequest &) = default ;
    CreateHybridMonitorSLSGroupRequest(CreateHybridMonitorSLSGroupRequest &&) = default ;
    CreateHybridMonitorSLSGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHybridMonitorSLSGroupRequest() = default ;
    CreateHybridMonitorSLSGroupRequest& operator=(const CreateHybridMonitorSLSGroupRequest &) = default ;
    CreateHybridMonitorSLSGroupRequest& operator=(CreateHybridMonitorSLSGroupRequest &&) = default ;
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
    inline CreateHybridMonitorSLSGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // SLSGroupConfig Field Functions 
    bool hasSLSGroupConfig() const { return this->SLSGroupConfig_ != nullptr;};
    void deleteSLSGroupConfig() { this->SLSGroupConfig_ = nullptr;};
    inline const vector<CreateHybridMonitorSLSGroupRequestSLSGroupConfig> & SLSGroupConfig() const { DARABONBA_PTR_GET_CONST(SLSGroupConfig_, vector<CreateHybridMonitorSLSGroupRequestSLSGroupConfig>) };
    inline vector<CreateHybridMonitorSLSGroupRequestSLSGroupConfig> SLSGroupConfig() { DARABONBA_PTR_GET(SLSGroupConfig_, vector<CreateHybridMonitorSLSGroupRequestSLSGroupConfig>) };
    inline CreateHybridMonitorSLSGroupRequest& setSLSGroupConfig(const vector<CreateHybridMonitorSLSGroupRequestSLSGroupConfig> & SLSGroupConfig) { DARABONBA_PTR_SET_VALUE(SLSGroupConfig_, SLSGroupConfig) };
    inline CreateHybridMonitorSLSGroupRequest& setSLSGroupConfig(vector<CreateHybridMonitorSLSGroupRequestSLSGroupConfig> && SLSGroupConfig) { DARABONBA_PTR_SET_RVALUE(SLSGroupConfig_, SLSGroupConfig) };


    // SLSGroupDescription Field Functions 
    bool hasSLSGroupDescription() const { return this->SLSGroupDescription_ != nullptr;};
    void deleteSLSGroupDescription() { this->SLSGroupDescription_ = nullptr;};
    inline string SLSGroupDescription() const { DARABONBA_PTR_GET_DEFAULT(SLSGroupDescription_, "") };
    inline CreateHybridMonitorSLSGroupRequest& setSLSGroupDescription(string SLSGroupDescription) { DARABONBA_PTR_SET_VALUE(SLSGroupDescription_, SLSGroupDescription) };


    // SLSGroupName Field Functions 
    bool hasSLSGroupName() const { return this->SLSGroupName_ != nullptr;};
    void deleteSLSGroupName() { this->SLSGroupName_ = nullptr;};
    inline string SLSGroupName() const { DARABONBA_PTR_GET_DEFAULT(SLSGroupName_, "") };
    inline CreateHybridMonitorSLSGroupRequest& setSLSGroupName(string SLSGroupName) { DARABONBA_PTR_SET_VALUE(SLSGroupName_, SLSGroupName) };


  protected:
    std::shared_ptr<string> regionId_ = nullptr;
    // The configurations of the Logstore group.
    // 
    // Valid values of N: 1 to 25.
    // 
    // This parameter is required.
    std::shared_ptr<vector<CreateHybridMonitorSLSGroupRequestSLSGroupConfig>> SLSGroupConfig_ = nullptr;
    // The description of the Logstore group.
    std::shared_ptr<string> SLSGroupDescription_ = nullptr;
    // The name of the Logstore group.
    // 
    // The name must be 2 to 32 characters in length and can contain uppercase letters, lowercase letters, digits, and underscores (_). The name must start with a letter.
    // 
    // This parameter is required.
    std::shared_ptr<string> SLSGroupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
