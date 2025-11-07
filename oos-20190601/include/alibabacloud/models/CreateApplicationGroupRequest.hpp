// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPLICATIONGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPLICATIONGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class CreateApplicationGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApplicationGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CmsGroupId, cmsGroupId_);
      DARABONBA_PTR_TO_JSON(DeployRegionId, deployRegionId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ImportTagKey, importTagKey_);
      DARABONBA_PTR_TO_JSON(ImportTagValue, importTagValue_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApplicationGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CmsGroupId, cmsGroupId_);
      DARABONBA_PTR_FROM_JSON(DeployRegionId, deployRegionId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ImportTagKey, importTagKey_);
      DARABONBA_PTR_FROM_JSON(ImportTagValue, importTagValue_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CreateApplicationGroupRequest() = default ;
    CreateApplicationGroupRequest(const CreateApplicationGroupRequest &) = default ;
    CreateApplicationGroupRequest(CreateApplicationGroupRequest &&) = default ;
    CreateApplicationGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApplicationGroupRequest() = default ;
    CreateApplicationGroupRequest& operator=(const CreateApplicationGroupRequest &) = default ;
    CreateApplicationGroupRequest& operator=(CreateApplicationGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationName_ == nullptr
        && return this->clientToken_ == nullptr && return this->cmsGroupId_ == nullptr && return this->deployRegionId_ == nullptr && return this->description_ == nullptr && return this->importTagKey_ == nullptr
        && return this->importTagValue_ == nullptr && return this->name_ == nullptr && return this->regionId_ == nullptr; };
    // applicationName Field Functions 
    bool hasApplicationName() const { return this->applicationName_ != nullptr;};
    void deleteApplicationName() { this->applicationName_ = nullptr;};
    inline string applicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
    inline CreateApplicationGroupRequest& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateApplicationGroupRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // cmsGroupId Field Functions 
    bool hasCmsGroupId() const { return this->cmsGroupId_ != nullptr;};
    void deleteCmsGroupId() { this->cmsGroupId_ = nullptr;};
    inline string cmsGroupId() const { DARABONBA_PTR_GET_DEFAULT(cmsGroupId_, "") };
    inline CreateApplicationGroupRequest& setCmsGroupId(string cmsGroupId) { DARABONBA_PTR_SET_VALUE(cmsGroupId_, cmsGroupId) };


    // deployRegionId Field Functions 
    bool hasDeployRegionId() const { return this->deployRegionId_ != nullptr;};
    void deleteDeployRegionId() { this->deployRegionId_ = nullptr;};
    inline string deployRegionId() const { DARABONBA_PTR_GET_DEFAULT(deployRegionId_, "") };
    inline CreateApplicationGroupRequest& setDeployRegionId(string deployRegionId) { DARABONBA_PTR_SET_VALUE(deployRegionId_, deployRegionId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateApplicationGroupRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // importTagKey Field Functions 
    bool hasImportTagKey() const { return this->importTagKey_ != nullptr;};
    void deleteImportTagKey() { this->importTagKey_ = nullptr;};
    inline string importTagKey() const { DARABONBA_PTR_GET_DEFAULT(importTagKey_, "") };
    inline CreateApplicationGroupRequest& setImportTagKey(string importTagKey) { DARABONBA_PTR_SET_VALUE(importTagKey_, importTagKey) };


    // importTagValue Field Functions 
    bool hasImportTagValue() const { return this->importTagValue_ != nullptr;};
    void deleteImportTagValue() { this->importTagValue_ = nullptr;};
    inline string importTagValue() const { DARABONBA_PTR_GET_DEFAULT(importTagValue_, "") };
    inline CreateApplicationGroupRequest& setImportTagValue(string importTagValue) { DARABONBA_PTR_SET_VALUE(importTagValue_, importTagValue) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateApplicationGroupRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateApplicationGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The application name.
    // 
    // This parameter is required.
    std::shared_ptr<string> applicationName_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The ID of the application group in CloudMonitor.
    std::shared_ptr<string> cmsGroupId_ = nullptr;
    // The ID of the region in which the related sources reside.
    // 
    // This parameter is required.
    std::shared_ptr<string> deployRegionId_ = nullptr;
    // The description of the application group.
    std::shared_ptr<string> description_ = nullptr;
    // The key of the tag. You must set both the ImportTagKey and the ImportTagValue parameters, or leave both of them empty. If you do not set the ImportTagKey and ImportTagValue parameters, the application name is used for this parameter by default.
    std::shared_ptr<string> importTagKey_ = nullptr;
    // The value of the tag. You must set both the ImportTagKey and the ImportTagValue parameters, or leave both of them empty. If you do not set the ImportTagKey and ImportTagValue parameters, the application group name is used for this parameter by default.
    std::shared_ptr<string> importTagValue_ = nullptr;
    // The name of the application group.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The region ID. Set the value to cn-hangzhou.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
