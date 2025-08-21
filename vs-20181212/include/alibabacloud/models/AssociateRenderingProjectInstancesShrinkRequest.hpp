// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSOCIATERENDERINGPROJECTINSTANCESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASSOCIATERENDERINGPROJECTINSTANCESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class AssociateRenderingProjectInstancesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssociateRenderingProjectInstancesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RenderingInstanceIds, renderingInstanceIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, AssociateRenderingProjectInstancesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RenderingInstanceIds, renderingInstanceIdsShrink_);
    };
    AssociateRenderingProjectInstancesShrinkRequest() = default ;
    AssociateRenderingProjectInstancesShrinkRequest(const AssociateRenderingProjectInstancesShrinkRequest &) = default ;
    AssociateRenderingProjectInstancesShrinkRequest(AssociateRenderingProjectInstancesShrinkRequest &&) = default ;
    AssociateRenderingProjectInstancesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssociateRenderingProjectInstancesShrinkRequest() = default ;
    AssociateRenderingProjectInstancesShrinkRequest& operator=(const AssociateRenderingProjectInstancesShrinkRequest &) = default ;
    AssociateRenderingProjectInstancesShrinkRequest& operator=(AssociateRenderingProjectInstancesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->projectId_ != nullptr
        && this->renderingInstanceIdsShrink_ != nullptr; };
    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline AssociateRenderingProjectInstancesShrinkRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // renderingInstanceIdsShrink Field Functions 
    bool hasRenderingInstanceIdsShrink() const { return this->renderingInstanceIdsShrink_ != nullptr;};
    void deleteRenderingInstanceIdsShrink() { this->renderingInstanceIdsShrink_ = nullptr;};
    inline string renderingInstanceIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(renderingInstanceIdsShrink_, "") };
    inline AssociateRenderingProjectInstancesShrinkRequest& setRenderingInstanceIdsShrink(string renderingInstanceIdsShrink) { DARABONBA_PTR_SET_VALUE(renderingInstanceIdsShrink_, renderingInstanceIdsShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> projectId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> renderingInstanceIdsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
