// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPIKEYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPIKEYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class CreateApiKeyShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApiKeyShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(KeyName, keyName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ServiceIds, serviceIdsShrink_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApiKeyShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(KeyName, keyName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ServiceIds, serviceIdsShrink_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateApiKeyShrinkRequest() = default ;
    CreateApiKeyShrinkRequest(const CreateApiKeyShrinkRequest &) = default ;
    CreateApiKeyShrinkRequest(CreateApiKeyShrinkRequest &&) = default ;
    CreateApiKeyShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApiKeyShrinkRequest() = default ;
    CreateApiKeyShrinkRequest& operator=(const CreateApiKeyShrinkRequest &) = default ;
    CreateApiKeyShrinkRequest& operator=(CreateApiKeyShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->keyName_ == nullptr && this->regionId_ == nullptr && this->serviceIdsShrink_ == nullptr && this->workspaceId_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateApiKeyShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // keyName Field Functions 
    bool hasKeyName() const { return this->keyName_ != nullptr;};
    void deleteKeyName() { this->keyName_ = nullptr;};
    inline string getKeyName() const { DARABONBA_PTR_GET_DEFAULT(keyName_, "") };
    inline CreateApiKeyShrinkRequest& setKeyName(string keyName) { DARABONBA_PTR_SET_VALUE(keyName_, keyName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateApiKeyShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // serviceIdsShrink Field Functions 
    bool hasServiceIdsShrink() const { return this->serviceIdsShrink_ != nullptr;};
    void deleteServiceIdsShrink() { this->serviceIdsShrink_ = nullptr;};
    inline string getServiceIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(serviceIdsShrink_, "") };
    inline CreateApiKeyShrinkRequest& setServiceIdsShrink(string serviceIdsShrink) { DARABONBA_PTR_SET_VALUE(serviceIdsShrink_, serviceIdsShrink) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateApiKeyShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> description_ {};
    // This parameter is required.
    shared_ptr<string> keyName_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<string> serviceIdsShrink_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
