// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSTYLEFEATUREANALYSISSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNSTYLEFEATUREANALYSISSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunStyleFeatureAnalysisShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunStyleFeatureAnalysisShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Contents, contentsShrink_);
      DARABONBA_PTR_TO_JSON(MaterialIds, materialIdsShrink_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, RunStyleFeatureAnalysisShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Contents, contentsShrink_);
      DARABONBA_PTR_FROM_JSON(MaterialIds, materialIdsShrink_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    RunStyleFeatureAnalysisShrinkRequest() = default ;
    RunStyleFeatureAnalysisShrinkRequest(const RunStyleFeatureAnalysisShrinkRequest &) = default ;
    RunStyleFeatureAnalysisShrinkRequest(RunStyleFeatureAnalysisShrinkRequest &&) = default ;
    RunStyleFeatureAnalysisShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunStyleFeatureAnalysisShrinkRequest() = default ;
    RunStyleFeatureAnalysisShrinkRequest& operator=(const RunStyleFeatureAnalysisShrinkRequest &) = default ;
    RunStyleFeatureAnalysisShrinkRequest& operator=(RunStyleFeatureAnalysisShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contentsShrink_ == nullptr
        && return this->materialIdsShrink_ == nullptr && return this->workspaceId_ == nullptr; };
    // contentsShrink Field Functions 
    bool hasContentsShrink() const { return this->contentsShrink_ != nullptr;};
    void deleteContentsShrink() { this->contentsShrink_ = nullptr;};
    inline string contentsShrink() const { DARABONBA_PTR_GET_DEFAULT(contentsShrink_, "") };
    inline RunStyleFeatureAnalysisShrinkRequest& setContentsShrink(string contentsShrink) { DARABONBA_PTR_SET_VALUE(contentsShrink_, contentsShrink) };


    // materialIdsShrink Field Functions 
    bool hasMaterialIdsShrink() const { return this->materialIdsShrink_ != nullptr;};
    void deleteMaterialIdsShrink() { this->materialIdsShrink_ = nullptr;};
    inline string materialIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(materialIdsShrink_, "") };
    inline RunStyleFeatureAnalysisShrinkRequest& setMaterialIdsShrink(string materialIdsShrink) { DARABONBA_PTR_SET_VALUE(materialIdsShrink_, materialIdsShrink) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline RunStyleFeatureAnalysisShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> contentsShrink_ = nullptr;
    std::shared_ptr<string> materialIdsShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
