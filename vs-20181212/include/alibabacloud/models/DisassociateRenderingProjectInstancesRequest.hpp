// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISASSOCIATERENDERINGPROJECTINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISASSOCIATERENDERINGPROJECTINSTANCESREQUEST_HPP_
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
  class DisassociateRenderingProjectInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisassociateRenderingProjectInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RenderingInstanceIds, renderingInstanceIds_);
    };
    friend void from_json(const Darabonba::Json& j, DisassociateRenderingProjectInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RenderingInstanceIds, renderingInstanceIds_);
    };
    DisassociateRenderingProjectInstancesRequest() = default ;
    DisassociateRenderingProjectInstancesRequest(const DisassociateRenderingProjectInstancesRequest &) = default ;
    DisassociateRenderingProjectInstancesRequest(DisassociateRenderingProjectInstancesRequest &&) = default ;
    DisassociateRenderingProjectInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisassociateRenderingProjectInstancesRequest() = default ;
    DisassociateRenderingProjectInstancesRequest& operator=(const DisassociateRenderingProjectInstancesRequest &) = default ;
    DisassociateRenderingProjectInstancesRequest& operator=(DisassociateRenderingProjectInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->projectId_ != nullptr
        && this->renderingInstanceIds_ != nullptr; };
    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline DisassociateRenderingProjectInstancesRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // renderingInstanceIds Field Functions 
    bool hasRenderingInstanceIds() const { return this->renderingInstanceIds_ != nullptr;};
    void deleteRenderingInstanceIds() { this->renderingInstanceIds_ = nullptr;};
    inline const vector<string> & renderingInstanceIds() const { DARABONBA_PTR_GET_CONST(renderingInstanceIds_, vector<string>) };
    inline vector<string> renderingInstanceIds() { DARABONBA_PTR_GET(renderingInstanceIds_, vector<string>) };
    inline DisassociateRenderingProjectInstancesRequest& setRenderingInstanceIds(const vector<string> & renderingInstanceIds) { DARABONBA_PTR_SET_VALUE(renderingInstanceIds_, renderingInstanceIds) };
    inline DisassociateRenderingProjectInstancesRequest& setRenderingInstanceIds(vector<string> && renderingInstanceIds) { DARABONBA_PTR_SET_RVALUE(renderingInstanceIds_, renderingInstanceIds) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> projectId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<string>> renderingInstanceIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
