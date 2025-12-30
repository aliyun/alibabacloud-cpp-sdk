// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDEDITINGPROJECTMATERIALSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDEDITINGPROJECTMATERIALSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class AddEditingProjectMaterialsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddEditingProjectMaterialsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaterialMaps, materialMaps_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, AddEditingProjectMaterialsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaterialMaps, materialMaps_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    AddEditingProjectMaterialsRequest() = default ;
    AddEditingProjectMaterialsRequest(const AddEditingProjectMaterialsRequest &) = default ;
    AddEditingProjectMaterialsRequest(AddEditingProjectMaterialsRequest &&) = default ;
    AddEditingProjectMaterialsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddEditingProjectMaterialsRequest() = default ;
    AddEditingProjectMaterialsRequest& operator=(const AddEditingProjectMaterialsRequest &) = default ;
    AddEditingProjectMaterialsRequest& operator=(AddEditingProjectMaterialsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->materialMaps_ == nullptr
        && this->projectId_ == nullptr; };
    // materialMaps Field Functions 
    bool hasMaterialMaps() const { return this->materialMaps_ != nullptr;};
    void deleteMaterialMaps() { this->materialMaps_ = nullptr;};
    inline string getMaterialMaps() const { DARABONBA_PTR_GET_DEFAULT(materialMaps_, "") };
    inline AddEditingProjectMaterialsRequest& setMaterialMaps(string materialMaps) { DARABONBA_PTR_SET_VALUE(materialMaps_, materialMaps) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline AddEditingProjectMaterialsRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // The material ID. Separate multiple material IDs with commas (,). Each type supports up to 10 material IDs. The following material types are supported:
    // 
    // *   video
    // *   audio
    // *   image
    // *   liveStream
    // *   editingProject
    // 
    // This parameter is required.
    shared_ptr<string> materialMaps_ {};
    // The ID of the online editing project.
    // 
    // This parameter is required.
    shared_ptr<string> projectId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
