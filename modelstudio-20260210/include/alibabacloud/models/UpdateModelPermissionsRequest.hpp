// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMODELPERMISSIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMODELPERMISSIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ModelStudio20260210
{
namespace Models
{
  class UpdateModelPermissionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateModelPermissionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(accessAllEntities, accessAllEntities_);
      DARABONBA_PTR_TO_JSON(models, models_);
      DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateModelPermissionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(accessAllEntities, accessAllEntities_);
      DARABONBA_PTR_FROM_JSON(models, models_);
      DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
    };
    UpdateModelPermissionsRequest() = default ;
    UpdateModelPermissionsRequest(const UpdateModelPermissionsRequest &) = default ;
    UpdateModelPermissionsRequest(UpdateModelPermissionsRequest &&) = default ;
    UpdateModelPermissionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateModelPermissionsRequest() = default ;
    UpdateModelPermissionsRequest& operator=(const UpdateModelPermissionsRequest &) = default ;
    UpdateModelPermissionsRequest& operator=(UpdateModelPermissionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Models : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Models& obj) { 
        DARABONBA_PTR_TO_JSON(deploy, deploy_);
        DARABONBA_PTR_TO_JSON(fineTune, fineTune_);
        DARABONBA_PTR_TO_JSON(inference, inference_);
        DARABONBA_PTR_TO_JSON(model, model_);
      };
      friend void from_json(const Darabonba::Json& j, Models& obj) { 
        DARABONBA_PTR_FROM_JSON(deploy, deploy_);
        DARABONBA_PTR_FROM_JSON(fineTune, fineTune_);
        DARABONBA_PTR_FROM_JSON(inference, inference_);
        DARABONBA_PTR_FROM_JSON(model, model_);
      };
      Models() = default ;
      Models(const Models &) = default ;
      Models(Models &&) = default ;
      Models(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Models() = default ;
      Models& operator=(const Models &) = default ;
      Models& operator=(Models &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->deploy_ == nullptr
        && this->fineTune_ == nullptr && this->inference_ == nullptr && this->model_ == nullptr; };
      // deploy Field Functions 
      bool hasDeploy() const { return this->deploy_ != nullptr;};
      void deleteDeploy() { this->deploy_ = nullptr;};
      inline bool getDeploy() const { DARABONBA_PTR_GET_DEFAULT(deploy_, false) };
      inline Models& setDeploy(bool deploy) { DARABONBA_PTR_SET_VALUE(deploy_, deploy) };


      // fineTune Field Functions 
      bool hasFineTune() const { return this->fineTune_ != nullptr;};
      void deleteFineTune() { this->fineTune_ = nullptr;};
      inline bool getFineTune() const { DARABONBA_PTR_GET_DEFAULT(fineTune_, false) };
      inline Models& setFineTune(bool fineTune) { DARABONBA_PTR_SET_VALUE(fineTune_, fineTune) };


      // inference Field Functions 
      bool hasInference() const { return this->inference_ != nullptr;};
      void deleteInference() { this->inference_ = nullptr;};
      inline bool getInference() const { DARABONBA_PTR_GET_DEFAULT(inference_, false) };
      inline Models& setInference(bool inference) { DARABONBA_PTR_SET_VALUE(inference_, inference) };


      // model Field Functions 
      bool hasModel() const { return this->model_ != nullptr;};
      void deleteModel() { this->model_ = nullptr;};
      inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
      inline Models& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    protected:
      shared_ptr<bool> deploy_ {};
      shared_ptr<bool> fineTune_ {};
      shared_ptr<bool> inference_ {};
      // This parameter is required.
      shared_ptr<string> model_ {};
    };

    virtual bool empty() const override { return this->accessAllEntities_ == nullptr
        && this->models_ == nullptr && this->workspaceId_ == nullptr; };
    // accessAllEntities Field Functions 
    bool hasAccessAllEntities() const { return this->accessAllEntities_ != nullptr;};
    void deleteAccessAllEntities() { this->accessAllEntities_ = nullptr;};
    inline string getAccessAllEntities() const { DARABONBA_PTR_GET_DEFAULT(accessAllEntities_, "") };
    inline UpdateModelPermissionsRequest& setAccessAllEntities(string accessAllEntities) { DARABONBA_PTR_SET_VALUE(accessAllEntities_, accessAllEntities) };


    // models Field Functions 
    bool hasModels() const { return this->models_ != nullptr;};
    void deleteModels() { this->models_ = nullptr;};
    inline const vector<UpdateModelPermissionsRequest::Models> & getModels() const { DARABONBA_PTR_GET_CONST(models_, vector<UpdateModelPermissionsRequest::Models>) };
    inline vector<UpdateModelPermissionsRequest::Models> getModels() { DARABONBA_PTR_GET(models_, vector<UpdateModelPermissionsRequest::Models>) };
    inline UpdateModelPermissionsRequest& setModels(const vector<UpdateModelPermissionsRequest::Models> & models) { DARABONBA_PTR_SET_VALUE(models_, models) };
    inline UpdateModelPermissionsRequest& setModels(vector<UpdateModelPermissionsRequest::Models> && models) { DARABONBA_PTR_SET_RVALUE(models_, models) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline UpdateModelPermissionsRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> accessAllEntities_ {};
    shared_ptr<vector<UpdateModelPermissionsRequest::Models>> models_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ModelStudio20260210
#endif
