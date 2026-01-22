// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSOCIATERENDERINGPROJECTINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASSOCIATERENDERINGPROJECTINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class AssociateRenderingProjectInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssociateRenderingProjectInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RenderingInstanceIds, renderingInstanceIds_);
    };
    friend void from_json(const Darabonba::Json& j, AssociateRenderingProjectInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RenderingInstanceIds, renderingInstanceIds_);
    };
    AssociateRenderingProjectInstancesRequest() = default ;
    AssociateRenderingProjectInstancesRequest(const AssociateRenderingProjectInstancesRequest &) = default ;
    AssociateRenderingProjectInstancesRequest(AssociateRenderingProjectInstancesRequest &&) = default ;
    AssociateRenderingProjectInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssociateRenderingProjectInstancesRequest() = default ;
    AssociateRenderingProjectInstancesRequest& operator=(const AssociateRenderingProjectInstancesRequest &) = default ;
    AssociateRenderingProjectInstancesRequest& operator=(AssociateRenderingProjectInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->projectId_ == nullptr
        && this->renderingInstanceIds_ == nullptr; };
    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline AssociateRenderingProjectInstancesRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // renderingInstanceIds Field Functions 
    bool hasRenderingInstanceIds() const { return this->renderingInstanceIds_ != nullptr;};
    void deleteRenderingInstanceIds() { this->renderingInstanceIds_ = nullptr;};
    inline const vector<string> & getRenderingInstanceIds() const { DARABONBA_PTR_GET_CONST(renderingInstanceIds_, vector<string>) };
    inline vector<string> getRenderingInstanceIds() { DARABONBA_PTR_GET(renderingInstanceIds_, vector<string>) };
    inline AssociateRenderingProjectInstancesRequest& setRenderingInstanceIds(const vector<string> & renderingInstanceIds) { DARABONBA_PTR_SET_VALUE(renderingInstanceIds_, renderingInstanceIds) };
    inline AssociateRenderingProjectInstancesRequest& setRenderingInstanceIds(vector<string> && renderingInstanceIds) { DARABONBA_PTR_SET_RVALUE(renderingInstanceIds_, renderingInstanceIds) };


  protected:
    // This parameter is required.
    shared_ptr<string> projectId_ {};
    // This parameter is required.
    shared_ptr<vector<string>> renderingInstanceIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
