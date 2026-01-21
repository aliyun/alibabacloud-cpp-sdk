// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAGENTPLATFORMSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAGENTPLATFORMSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ADBAI20250812
{
namespace Models
{
  class CreateAgentPlatformShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAgentPlatformShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AiPlatformConfig, aiPlatformConfigShrink_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAgentPlatformShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AiPlatformConfig, aiPlatformConfigShrink_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CreateAgentPlatformShrinkRequest() = default ;
    CreateAgentPlatformShrinkRequest(const CreateAgentPlatformShrinkRequest &) = default ;
    CreateAgentPlatformShrinkRequest(CreateAgentPlatformShrinkRequest &&) = default ;
    CreateAgentPlatformShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAgentPlatformShrinkRequest() = default ;
    CreateAgentPlatformShrinkRequest& operator=(const CreateAgentPlatformShrinkRequest &) = default ;
    CreateAgentPlatformShrinkRequest& operator=(CreateAgentPlatformShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aiPlatformConfigShrink_ == nullptr
        && this->DBClusterId_ == nullptr && this->name_ == nullptr && this->regionId_ == nullptr; };
    // aiPlatformConfigShrink Field Functions 
    bool hasAiPlatformConfigShrink() const { return this->aiPlatformConfigShrink_ != nullptr;};
    void deleteAiPlatformConfigShrink() { this->aiPlatformConfigShrink_ = nullptr;};
    inline string getAiPlatformConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(aiPlatformConfigShrink_, "") };
    inline CreateAgentPlatformShrinkRequest& setAiPlatformConfigShrink(string aiPlatformConfigShrink) { DARABONBA_PTR_SET_VALUE(aiPlatformConfigShrink_, aiPlatformConfigShrink) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline CreateAgentPlatformShrinkRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateAgentPlatformShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateAgentPlatformShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    shared_ptr<string> aiPlatformConfigShrink_ {};
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ADBAI20250812
#endif
