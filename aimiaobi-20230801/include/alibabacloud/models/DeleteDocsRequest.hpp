// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDOCSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDOCSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class DeleteDocsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDocsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DocIds, docIds_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDocsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DocIds, docIds_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    DeleteDocsRequest() = default ;
    DeleteDocsRequest(const DeleteDocsRequest &) = default ;
    DeleteDocsRequest(DeleteDocsRequest &&) = default ;
    DeleteDocsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDocsRequest() = default ;
    DeleteDocsRequest& operator=(const DeleteDocsRequest &) = default ;
    DeleteDocsRequest& operator=(DeleteDocsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->docIds_ != nullptr
        && this->workspaceId_ != nullptr; };
    // docIds Field Functions 
    bool hasDocIds() const { return this->docIds_ != nullptr;};
    void deleteDocIds() { this->docIds_ = nullptr;};
    inline const vector<string> & docIds() const { DARABONBA_PTR_GET_CONST(docIds_, vector<string>) };
    inline vector<string> docIds() { DARABONBA_PTR_GET(docIds_, vector<string>) };
    inline DeleteDocsRequest& setDocIds(const vector<string> & docIds) { DARABONBA_PTR_SET_VALUE(docIds_, docIds) };
    inline DeleteDocsRequest& setDocIds(vector<string> && docIds) { DARABONBA_PTR_SET_RVALUE(docIds_, docIds) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline DeleteDocsRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<string>> docIds_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
