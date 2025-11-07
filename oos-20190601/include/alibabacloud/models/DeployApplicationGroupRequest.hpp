// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYAPPLICATIONGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYAPPLICATIONGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class DeployApplicationGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeployApplicationGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_TO_JSON(DeployParameters, deployParameters_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RevisionId, revisionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeployApplicationGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_FROM_JSON(DeployParameters, deployParameters_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RevisionId, revisionId_);
    };
    DeployApplicationGroupRequest() = default ;
    DeployApplicationGroupRequest(const DeployApplicationGroupRequest &) = default ;
    DeployApplicationGroupRequest(DeployApplicationGroupRequest &&) = default ;
    DeployApplicationGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeployApplicationGroupRequest() = default ;
    DeployApplicationGroupRequest& operator=(const DeployApplicationGroupRequest &) = default ;
    DeployApplicationGroupRequest& operator=(DeployApplicationGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationName_ == nullptr
        && return this->deployParameters_ == nullptr && return this->name_ == nullptr && return this->regionId_ == nullptr && return this->revisionId_ == nullptr; };
    // applicationName Field Functions 
    bool hasApplicationName() const { return this->applicationName_ != nullptr;};
    void deleteApplicationName() { this->applicationName_ = nullptr;};
    inline string applicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
    inline DeployApplicationGroupRequest& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


    // deployParameters Field Functions 
    bool hasDeployParameters() const { return this->deployParameters_ != nullptr;};
    void deleteDeployParameters() { this->deployParameters_ = nullptr;};
    inline string deployParameters() const { DARABONBA_PTR_GET_DEFAULT(deployParameters_, "") };
    inline DeployApplicationGroupRequest& setDeployParameters(string deployParameters) { DARABONBA_PTR_SET_VALUE(deployParameters_, deployParameters) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DeployApplicationGroupRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeployApplicationGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // revisionId Field Functions 
    bool hasRevisionId() const { return this->revisionId_ != nullptr;};
    void deleteRevisionId() { this->revisionId_ = nullptr;};
    inline string revisionId() const { DARABONBA_PTR_GET_DEFAULT(revisionId_, "") };
    inline DeployApplicationGroupRequest& setRevisionId(string revisionId) { DARABONBA_PTR_SET_VALUE(revisionId_, revisionId) };


  protected:
    // The name of the application.
    // 
    // This parameter is required.
    std::shared_ptr<string> applicationName_ = nullptr;
    // The deployment information about the application group.
    // 
    // This parameter is required.
    std::shared_ptr<string> deployParameters_ = nullptr;
    // The name of the application group.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the region in which you want to deploy the application group.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> revisionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
