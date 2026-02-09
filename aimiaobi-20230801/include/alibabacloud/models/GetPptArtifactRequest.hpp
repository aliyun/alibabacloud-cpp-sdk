// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPPTARTIFACTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPPTARTIFACTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetPptArtifactRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPptArtifactRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PptArtifactId, pptArtifactId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPptArtifactRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PptArtifactId, pptArtifactId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    GetPptArtifactRequest() = default ;
    GetPptArtifactRequest(const GetPptArtifactRequest &) = default ;
    GetPptArtifactRequest(GetPptArtifactRequest &&) = default ;
    GetPptArtifactRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPptArtifactRequest() = default ;
    GetPptArtifactRequest& operator=(const GetPptArtifactRequest &) = default ;
    GetPptArtifactRequest& operator=(GetPptArtifactRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pptArtifactId_ == nullptr
        && this->workspaceId_ == nullptr; };
    // pptArtifactId Field Functions 
    bool hasPptArtifactId() const { return this->pptArtifactId_ != nullptr;};
    void deletePptArtifactId() { this->pptArtifactId_ = nullptr;};
    inline int32_t getPptArtifactId() const { DARABONBA_PTR_GET_DEFAULT(pptArtifactId_, 0) };
    inline GetPptArtifactRequest& setPptArtifactId(int32_t pptArtifactId) { DARABONBA_PTR_SET_VALUE(pptArtifactId_, pptArtifactId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetPptArtifactRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<int32_t> pptArtifactId_ {};
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
