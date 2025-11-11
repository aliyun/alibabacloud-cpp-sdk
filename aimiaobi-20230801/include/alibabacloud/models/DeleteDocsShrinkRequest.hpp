// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDOCSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDOCSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class DeleteDocsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDocsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DocIds, docIdsShrink_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDocsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DocIds, docIdsShrink_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    DeleteDocsShrinkRequest() = default ;
    DeleteDocsShrinkRequest(const DeleteDocsShrinkRequest &) = default ;
    DeleteDocsShrinkRequest(DeleteDocsShrinkRequest &&) = default ;
    DeleteDocsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDocsShrinkRequest() = default ;
    DeleteDocsShrinkRequest& operator=(const DeleteDocsShrinkRequest &) = default ;
    DeleteDocsShrinkRequest& operator=(DeleteDocsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->docIdsShrink_ == nullptr
        && return this->workspaceId_ == nullptr; };
    // docIdsShrink Field Functions 
    bool hasDocIdsShrink() const { return this->docIdsShrink_ != nullptr;};
    void deleteDocIdsShrink() { this->docIdsShrink_ = nullptr;};
    inline string docIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(docIdsShrink_, "") };
    inline DeleteDocsShrinkRequest& setDocIdsShrink(string docIdsShrink) { DARABONBA_PTR_SET_VALUE(docIdsShrink_, docIdsShrink) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline DeleteDocsShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> docIdsShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
