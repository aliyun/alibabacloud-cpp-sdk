// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDEDITINGPROJECTMATERIALSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDEDITINGPROJECTMATERIALSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddEditingProjectMaterialsResponseBodyLiveMaterials.hpp>
#include <alibabacloud/models/AddEditingProjectMaterialsResponseBodyMediaInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class AddEditingProjectMaterialsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddEditingProjectMaterialsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LiveMaterials, liveMaterials_);
      DARABONBA_PTR_TO_JSON(MediaInfos, mediaInfos_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ProjectMaterials, projectMaterials_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AddEditingProjectMaterialsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveMaterials, liveMaterials_);
      DARABONBA_PTR_FROM_JSON(MediaInfos, mediaInfos_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ProjectMaterials, projectMaterials_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AddEditingProjectMaterialsResponseBody() = default ;
    AddEditingProjectMaterialsResponseBody(const AddEditingProjectMaterialsResponseBody &) = default ;
    AddEditingProjectMaterialsResponseBody(AddEditingProjectMaterialsResponseBody &&) = default ;
    AddEditingProjectMaterialsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddEditingProjectMaterialsResponseBody() = default ;
    AddEditingProjectMaterialsResponseBody& operator=(const AddEditingProjectMaterialsResponseBody &) = default ;
    AddEditingProjectMaterialsResponseBody& operator=(AddEditingProjectMaterialsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->liveMaterials_ == nullptr
        && return this->mediaInfos_ == nullptr && return this->projectId_ == nullptr && return this->projectMaterials_ == nullptr && return this->requestId_ == nullptr; };
    // liveMaterials Field Functions 
    bool hasLiveMaterials() const { return this->liveMaterials_ != nullptr;};
    void deleteLiveMaterials() { this->liveMaterials_ = nullptr;};
    inline const vector<AddEditingProjectMaterialsResponseBodyLiveMaterials> & liveMaterials() const { DARABONBA_PTR_GET_CONST(liveMaterials_, vector<AddEditingProjectMaterialsResponseBodyLiveMaterials>) };
    inline vector<AddEditingProjectMaterialsResponseBodyLiveMaterials> liveMaterials() { DARABONBA_PTR_GET(liveMaterials_, vector<AddEditingProjectMaterialsResponseBodyLiveMaterials>) };
    inline AddEditingProjectMaterialsResponseBody& setLiveMaterials(const vector<AddEditingProjectMaterialsResponseBodyLiveMaterials> & liveMaterials) { DARABONBA_PTR_SET_VALUE(liveMaterials_, liveMaterials) };
    inline AddEditingProjectMaterialsResponseBody& setLiveMaterials(vector<AddEditingProjectMaterialsResponseBodyLiveMaterials> && liveMaterials) { DARABONBA_PTR_SET_RVALUE(liveMaterials_, liveMaterials) };


    // mediaInfos Field Functions 
    bool hasMediaInfos() const { return this->mediaInfos_ != nullptr;};
    void deleteMediaInfos() { this->mediaInfos_ = nullptr;};
    inline const vector<AddEditingProjectMaterialsResponseBodyMediaInfos> & mediaInfos() const { DARABONBA_PTR_GET_CONST(mediaInfos_, vector<AddEditingProjectMaterialsResponseBodyMediaInfos>) };
    inline vector<AddEditingProjectMaterialsResponseBodyMediaInfos> mediaInfos() { DARABONBA_PTR_GET(mediaInfos_, vector<AddEditingProjectMaterialsResponseBodyMediaInfos>) };
    inline AddEditingProjectMaterialsResponseBody& setMediaInfos(const vector<AddEditingProjectMaterialsResponseBodyMediaInfos> & mediaInfos) { DARABONBA_PTR_SET_VALUE(mediaInfos_, mediaInfos) };
    inline AddEditingProjectMaterialsResponseBody& setMediaInfos(vector<AddEditingProjectMaterialsResponseBodyMediaInfos> && mediaInfos) { DARABONBA_PTR_SET_RVALUE(mediaInfos_, mediaInfos) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline AddEditingProjectMaterialsResponseBody& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectMaterials Field Functions 
    bool hasProjectMaterials() const { return this->projectMaterials_ != nullptr;};
    void deleteProjectMaterials() { this->projectMaterials_ = nullptr;};
    inline const vector<string> & projectMaterials() const { DARABONBA_PTR_GET_CONST(projectMaterials_, vector<string>) };
    inline vector<string> projectMaterials() { DARABONBA_PTR_GET(projectMaterials_, vector<string>) };
    inline AddEditingProjectMaterialsResponseBody& setProjectMaterials(const vector<string> & projectMaterials) { DARABONBA_PTR_SET_VALUE(projectMaterials_, projectMaterials) };
    inline AddEditingProjectMaterialsResponseBody& setProjectMaterials(vector<string> && projectMaterials) { DARABONBA_PTR_SET_RVALUE(projectMaterials_, projectMaterials) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddEditingProjectMaterialsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The materials associated with the live stream.
    std::shared_ptr<vector<AddEditingProjectMaterialsResponseBodyLiveMaterials>> liveMaterials_ = nullptr;
    // The media assets that meet the specified conditions.
    std::shared_ptr<vector<AddEditingProjectMaterialsResponseBodyMediaInfos>> mediaInfos_ = nullptr;
    // The ID of the online editing project.
    std::shared_ptr<string> projectId_ = nullptr;
    // The materials associated with the editing project. A live stream editing project will be associated with a regular editing project after the live streaming ends.
    std::shared_ptr<vector<string>> projectMaterials_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
