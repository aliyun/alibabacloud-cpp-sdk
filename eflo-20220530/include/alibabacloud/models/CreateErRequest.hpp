// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateErRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class CreateErRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateErRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ErName, erName_);
      DARABONBA_PTR_TO_JSON(MasterZoneId, masterZoneId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CreateErRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ErName, erName_);
      DARABONBA_PTR_FROM_JSON(MasterZoneId, masterZoneId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    CreateErRequest() = default ;
    CreateErRequest(const CreateErRequest &) = default ;
    CreateErRequest(CreateErRequest &&) = default ;
    CreateErRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateErRequest() = default ;
    CreateErRequest& operator=(const CreateErRequest &) = default ;
    CreateErRequest& operator=(CreateErRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->erName_ == nullptr && return this->masterZoneId_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->tag_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateErRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // erName Field Functions 
    bool hasErName() const { return this->erName_ != nullptr;};
    void deleteErName() { this->erName_ = nullptr;};
    inline string erName() const { DARABONBA_PTR_GET_DEFAULT(erName_, "") };
    inline CreateErRequest& setErName(string erName) { DARABONBA_PTR_SET_VALUE(erName_, erName) };


    // masterZoneId Field Functions 
    bool hasMasterZoneId() const { return this->masterZoneId_ != nullptr;};
    void deleteMasterZoneId() { this->masterZoneId_ = nullptr;};
    inline string masterZoneId() const { DARABONBA_PTR_GET_DEFAULT(masterZoneId_, "") };
    inline CreateErRequest& setMasterZoneId(string masterZoneId) { DARABONBA_PTR_SET_VALUE(masterZoneId_, masterZoneId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateErRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateErRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateErRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateErRequestTag>) };
    inline vector<CreateErRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateErRequestTag>) };
    inline CreateErRequest& setTag(const vector<CreateErRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateErRequest& setTag(vector<CreateErRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The description of the document.
    std::shared_ptr<string> description_ = nullptr;
    // Lingjun HUB Name
    // 
    // This parameter is required.
    std::shared_ptr<string> erName_ = nullptr;
    // Primary Zone
    // 
    // This parameter is required.
    std::shared_ptr<string> masterZoneId_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // Resource group instance ID
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // List of tags.
    std::shared_ptr<vector<CreateErRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
