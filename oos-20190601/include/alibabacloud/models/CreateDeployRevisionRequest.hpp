// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDEPLOYREVISIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDEPLOYREVISIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class CreateDeployRevisionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDeployRevisionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_TO_JSON(DeployResourceType, deployResourceType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Hooks, hooks_);
      DARABONBA_PTR_TO_JSON(Location, location_);
      DARABONBA_PTR_TO_JSON(RevisionType, revisionType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDeployRevisionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_FROM_JSON(DeployResourceType, deployResourceType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Hooks, hooks_);
      DARABONBA_PTR_FROM_JSON(Location, location_);
      DARABONBA_PTR_FROM_JSON(RevisionType, revisionType_);
    };
    CreateDeployRevisionRequest() = default ;
    CreateDeployRevisionRequest(const CreateDeployRevisionRequest &) = default ;
    CreateDeployRevisionRequest(CreateDeployRevisionRequest &&) = default ;
    CreateDeployRevisionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDeployRevisionRequest() = default ;
    CreateDeployRevisionRequest& operator=(const CreateDeployRevisionRequest &) = default ;
    CreateDeployRevisionRequest& operator=(CreateDeployRevisionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationName_ == nullptr
        && this->deployResourceType_ == nullptr && this->description_ == nullptr && this->hooks_ == nullptr && this->location_ == nullptr && this->revisionType_ == nullptr; };
    // applicationName Field Functions 
    bool hasApplicationName() const { return this->applicationName_ != nullptr;};
    void deleteApplicationName() { this->applicationName_ = nullptr;};
    inline string getApplicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
    inline CreateDeployRevisionRequest& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


    // deployResourceType Field Functions 
    bool hasDeployResourceType() const { return this->deployResourceType_ != nullptr;};
    void deleteDeployResourceType() { this->deployResourceType_ = nullptr;};
    inline string getDeployResourceType() const { DARABONBA_PTR_GET_DEFAULT(deployResourceType_, "") };
    inline CreateDeployRevisionRequest& setDeployResourceType(string deployResourceType) { DARABONBA_PTR_SET_VALUE(deployResourceType_, deployResourceType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateDeployRevisionRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // hooks Field Functions 
    bool hasHooks() const { return this->hooks_ != nullptr;};
    void deleteHooks() { this->hooks_ = nullptr;};
    inline string getHooks() const { DARABONBA_PTR_GET_DEFAULT(hooks_, "") };
    inline CreateDeployRevisionRequest& setHooks(string hooks) { DARABONBA_PTR_SET_VALUE(hooks_, hooks) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline CreateDeployRevisionRequest& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // revisionType Field Functions 
    bool hasRevisionType() const { return this->revisionType_ != nullptr;};
    void deleteRevisionType() { this->revisionType_ = nullptr;};
    inline string getRevisionType() const { DARABONBA_PTR_GET_DEFAULT(revisionType_, "") };
    inline CreateDeployRevisionRequest& setRevisionType(string revisionType) { DARABONBA_PTR_SET_VALUE(revisionType_, revisionType) };


  protected:
    // This parameter is required.
    shared_ptr<string> applicationName_ {};
    shared_ptr<string> deployResourceType_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> hooks_ {};
    shared_ptr<string> location_ {};
    shared_ptr<string> revisionType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
