// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYUSERDEFINEDSGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYUSERDEFINEDSGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class ModifyUserDefinedSgShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyUserDefinedSgShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SgIdList, sgIdListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyUserDefinedSgShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SgIdList, sgIdListShrink_);
    };
    ModifyUserDefinedSgShrinkRequest() = default ;
    ModifyUserDefinedSgShrinkRequest(const ModifyUserDefinedSgShrinkRequest &) = default ;
    ModifyUserDefinedSgShrinkRequest(ModifyUserDefinedSgShrinkRequest &&) = default ;
    ModifyUserDefinedSgShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyUserDefinedSgShrinkRequest() = default ;
    ModifyUserDefinedSgShrinkRequest& operator=(const ModifyUserDefinedSgShrinkRequest &) = default ;
    ModifyUserDefinedSgShrinkRequest& operator=(ModifyUserDefinedSgShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->regionId_ == nullptr && return this->sgIdListShrink_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyUserDefinedSgShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyUserDefinedSgShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sgIdListShrink Field Functions 
    bool hasSgIdListShrink() const { return this->sgIdListShrink_ != nullptr;};
    void deleteSgIdListShrink() { this->sgIdListShrink_ = nullptr;};
    inline string sgIdListShrink() const { DARABONBA_PTR_GET_DEFAULT(sgIdListShrink_, "") };
    inline ModifyUserDefinedSgShrinkRequest& setSgIdListShrink(string sgIdListShrink) { DARABONBA_PTR_SET_VALUE(sgIdListShrink_, sgIdListShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> sgIdListShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
