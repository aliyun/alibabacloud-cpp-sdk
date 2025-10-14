// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINDIVIDUATIONPROJECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEINDIVIDUATIONPROJECTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class CreateIndividuationProjectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIndividuationProjectRequest& obj) { 
      DARABONBA_PTR_TO_JSON(projectInfo, projectInfo_);
      DARABONBA_PTR_TO_JSON(projectName, projectName_);
      DARABONBA_PTR_TO_JSON(purpose, purpose_);
      DARABONBA_PTR_TO_JSON(sceneId, sceneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIndividuationProjectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(projectInfo, projectInfo_);
      DARABONBA_PTR_FROM_JSON(projectName, projectName_);
      DARABONBA_PTR_FROM_JSON(purpose, purpose_);
      DARABONBA_PTR_FROM_JSON(sceneId, sceneId_);
    };
    CreateIndividuationProjectRequest() = default ;
    CreateIndividuationProjectRequest(const CreateIndividuationProjectRequest &) = default ;
    CreateIndividuationProjectRequest(CreateIndividuationProjectRequest &&) = default ;
    CreateIndividuationProjectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIndividuationProjectRequest() = default ;
    CreateIndividuationProjectRequest& operator=(const CreateIndividuationProjectRequest &) = default ;
    CreateIndividuationProjectRequest& operator=(CreateIndividuationProjectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->projectInfo_ == nullptr
        && return this->projectName_ == nullptr && return this->purpose_ == nullptr && return this->sceneId_ == nullptr; };
    // projectInfo Field Functions 
    bool hasProjectInfo() const { return this->projectInfo_ != nullptr;};
    void deleteProjectInfo() { this->projectInfo_ = nullptr;};
    inline string projectInfo() const { DARABONBA_PTR_GET_DEFAULT(projectInfo_, "") };
    inline CreateIndividuationProjectRequest& setProjectInfo(string projectInfo) { DARABONBA_PTR_SET_VALUE(projectInfo_, projectInfo) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CreateIndividuationProjectRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // purpose Field Functions 
    bool hasPurpose() const { return this->purpose_ != nullptr;};
    void deletePurpose() { this->purpose_ = nullptr;};
    inline string purpose() const { DARABONBA_PTR_GET_DEFAULT(purpose_, "") };
    inline CreateIndividuationProjectRequest& setPurpose(string purpose) { DARABONBA_PTR_SET_VALUE(purpose_, purpose) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline CreateIndividuationProjectRequest& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


  protected:
    std::shared_ptr<string> projectInfo_ = nullptr;
    std::shared_ptr<string> projectName_ = nullptr;
    std::shared_ptr<string> purpose_ = nullptr;
    std::shared_ptr<string> sceneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
