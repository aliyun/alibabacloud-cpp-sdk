// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEDITINGPROJECTMATERIALSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETEDITINGPROJECTMATERIALSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetEditingProjectMaterialsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEditingProjectMaterialsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, GetEditingProjectMaterialsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    GetEditingProjectMaterialsRequest() = default ;
    GetEditingProjectMaterialsRequest(const GetEditingProjectMaterialsRequest &) = default ;
    GetEditingProjectMaterialsRequest(GetEditingProjectMaterialsRequest &&) = default ;
    GetEditingProjectMaterialsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEditingProjectMaterialsRequest() = default ;
    GetEditingProjectMaterialsRequest& operator=(const GetEditingProjectMaterialsRequest &) = default ;
    GetEditingProjectMaterialsRequest& operator=(GetEditingProjectMaterialsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->projectId_ != nullptr; };
    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline GetEditingProjectMaterialsRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // The ID of the online editing project.
    // 
    // This parameter is required.
    std::shared_ptr<string> projectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
