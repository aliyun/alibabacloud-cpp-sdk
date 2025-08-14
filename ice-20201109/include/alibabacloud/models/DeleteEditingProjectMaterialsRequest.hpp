// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEEDITINGPROJECTMATERIALSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEEDITINGPROJECTMATERIALSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class DeleteEditingProjectMaterialsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteEditingProjectMaterialsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaterialIds, materialIds_);
      DARABONBA_PTR_TO_JSON(MaterialType, materialType_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteEditingProjectMaterialsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaterialIds, materialIds_);
      DARABONBA_PTR_FROM_JSON(MaterialType, materialType_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    DeleteEditingProjectMaterialsRequest() = default ;
    DeleteEditingProjectMaterialsRequest(const DeleteEditingProjectMaterialsRequest &) = default ;
    DeleteEditingProjectMaterialsRequest(DeleteEditingProjectMaterialsRequest &&) = default ;
    DeleteEditingProjectMaterialsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteEditingProjectMaterialsRequest() = default ;
    DeleteEditingProjectMaterialsRequest& operator=(const DeleteEditingProjectMaterialsRequest &) = default ;
    DeleteEditingProjectMaterialsRequest& operator=(DeleteEditingProjectMaterialsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->materialIds_ != nullptr
        && this->materialType_ != nullptr && this->projectId_ != nullptr; };
    // materialIds Field Functions 
    bool hasMaterialIds() const { return this->materialIds_ != nullptr;};
    void deleteMaterialIds() { this->materialIds_ = nullptr;};
    inline string materialIds() const { DARABONBA_PTR_GET_DEFAULT(materialIds_, "") };
    inline DeleteEditingProjectMaterialsRequest& setMaterialIds(string materialIds) { DARABONBA_PTR_SET_VALUE(materialIds_, materialIds) };


    // materialType Field Functions 
    bool hasMaterialType() const { return this->materialType_ != nullptr;};
    void deleteMaterialType() { this->materialType_ = nullptr;};
    inline string materialType() const { DARABONBA_PTR_GET_DEFAULT(materialType_, "") };
    inline DeleteEditingProjectMaterialsRequest& setMaterialType(string materialType) { DARABONBA_PTR_SET_VALUE(materialType_, materialType) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline DeleteEditingProjectMaterialsRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // The material ID. Separate multiple material IDs with commas (,). You can specify up to 10 IDs.
    // 
    // This parameter is required.
    std::shared_ptr<string> materialIds_ = nullptr;
    // The material type. Valid values:
    // 
    // \\- video
    // 
    // \\- image
    // 
    // \\- audio
    // 
    // \\- subtitle
    // 
    // \\- text
    // 
    // This parameter is required.
    std::shared_ptr<string> materialType_ = nullptr;
    // The ID of the online editing project.
    // 
    // This parameter is required.
    std::shared_ptr<string> projectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
