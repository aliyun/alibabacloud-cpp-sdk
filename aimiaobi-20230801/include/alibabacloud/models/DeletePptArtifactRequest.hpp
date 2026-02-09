// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPPTARTIFACTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEPPTARTIFACTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class DeletePptArtifactRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeletePptArtifactRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PptArtifactId, pptArtifactId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, DeletePptArtifactRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PptArtifactId, pptArtifactId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    DeletePptArtifactRequest() = default ;
    DeletePptArtifactRequest(const DeletePptArtifactRequest &) = default ;
    DeletePptArtifactRequest(DeletePptArtifactRequest &&) = default ;
    DeletePptArtifactRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeletePptArtifactRequest() = default ;
    DeletePptArtifactRequest& operator=(const DeletePptArtifactRequest &) = default ;
    DeletePptArtifactRequest& operator=(DeletePptArtifactRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pptArtifactId_ == nullptr
        && this->workspaceId_ == nullptr; };
    // pptArtifactId Field Functions 
    bool hasPptArtifactId() const { return this->pptArtifactId_ != nullptr;};
    void deletePptArtifactId() { this->pptArtifactId_ = nullptr;};
    inline string getPptArtifactId() const { DARABONBA_PTR_GET_DEFAULT(pptArtifactId_, "") };
    inline DeletePptArtifactRequest& setPptArtifactId(string pptArtifactId) { DARABONBA_PTR_SET_VALUE(pptArtifactId_, pptArtifactId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline DeletePptArtifactRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> pptArtifactId_ {};
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
