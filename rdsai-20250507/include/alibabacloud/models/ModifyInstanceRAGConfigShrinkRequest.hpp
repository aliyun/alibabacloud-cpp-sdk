// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINSTANCERAGCONFIGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINSTANCERAGCONFIGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class ModifyInstanceRAGConfigShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInstanceRAGConfigShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ConfigList, configListShrink_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInstanceRAGConfigShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ConfigList, configListShrink_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ModifyInstanceRAGConfigShrinkRequest() = default ;
    ModifyInstanceRAGConfigShrinkRequest(const ModifyInstanceRAGConfigShrinkRequest &) = default ;
    ModifyInstanceRAGConfigShrinkRequest(ModifyInstanceRAGConfigShrinkRequest &&) = default ;
    ModifyInstanceRAGConfigShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInstanceRAGConfigShrinkRequest() = default ;
    ModifyInstanceRAGConfigShrinkRequest& operator=(const ModifyInstanceRAGConfigShrinkRequest &) = default ;
    ModifyInstanceRAGConfigShrinkRequest& operator=(ModifyInstanceRAGConfigShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->configListShrink_ == nullptr && this->instanceName_ == nullptr && this->regionId_ == nullptr && this->status_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyInstanceRAGConfigShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // configListShrink Field Functions 
    bool hasConfigListShrink() const { return this->configListShrink_ != nullptr;};
    void deleteConfigListShrink() { this->configListShrink_ = nullptr;};
    inline string getConfigListShrink() const { DARABONBA_PTR_GET_DEFAULT(configListShrink_, "") };
    inline ModifyInstanceRAGConfigShrinkRequest& setConfigListShrink(string configListShrink) { DARABONBA_PTR_SET_VALUE(configListShrink_, configListShrink) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ModifyInstanceRAGConfigShrinkRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyInstanceRAGConfigShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline bool getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, false) };
    inline ModifyInstanceRAGConfigShrinkRequest& setStatus(bool status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The value of the configuration item.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to enable the RAG agent. If you do not configure this parameter, the RAG agent state remains unchanged. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<string> configListShrink_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceName_ {};
    // The operation that you want to perform. Set the value to **ModifyInstanceRAGConfig**.
    shared_ptr<string> regionId_ {};
    // The ID of the RDS Supabase instance.
    shared_ptr<bool> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
