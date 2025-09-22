// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINSTANCEAUTHCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINSTANCEAUTHCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyInstanceAuthConfigRequestConfigList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class ModifyInstanceAuthConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInstanceAuthConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigList, configList_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInstanceAuthConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigList, configList_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyInstanceAuthConfigRequest() = default ;
    ModifyInstanceAuthConfigRequest(const ModifyInstanceAuthConfigRequest &) = default ;
    ModifyInstanceAuthConfigRequest(ModifyInstanceAuthConfigRequest &&) = default ;
    ModifyInstanceAuthConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInstanceAuthConfigRequest() = default ;
    ModifyInstanceAuthConfigRequest& operator=(const ModifyInstanceAuthConfigRequest &) = default ;
    ModifyInstanceAuthConfigRequest& operator=(ModifyInstanceAuthConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configList_ != nullptr
        && this->instanceName_ != nullptr && this->regionId_ != nullptr; };
    // configList Field Functions 
    bool hasConfigList() const { return this->configList_ != nullptr;};
    void deleteConfigList() { this->configList_ = nullptr;};
    inline const vector<ModifyInstanceAuthConfigRequestConfigList> & configList() const { DARABONBA_PTR_GET_CONST(configList_, vector<ModifyInstanceAuthConfigRequestConfigList>) };
    inline vector<ModifyInstanceAuthConfigRequestConfigList> configList() { DARABONBA_PTR_GET(configList_, vector<ModifyInstanceAuthConfigRequestConfigList>) };
    inline ModifyInstanceAuthConfigRequest& setConfigList(const vector<ModifyInstanceAuthConfigRequestConfigList> & configList) { DARABONBA_PTR_SET_VALUE(configList_, configList) };
    inline ModifyInstanceAuthConfigRequest& setConfigList(vector<ModifyInstanceAuthConfigRequestConfigList> && configList) { DARABONBA_PTR_SET_RVALUE(configList_, configList) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ModifyInstanceAuthConfigRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyInstanceAuthConfigRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    std::shared_ptr<vector<ModifyInstanceAuthConfigRequestConfigList>> configList_ = nullptr;
    std::shared_ptr<string> instanceName_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
