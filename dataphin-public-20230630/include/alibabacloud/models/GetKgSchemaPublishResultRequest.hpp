// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETKGSCHEMAPUBLISHRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETKGSCHEMAPUBLISHRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetKgSchemaPublishResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetKgSchemaPublishResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(VersionId, versionId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetKgSchemaPublishResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    GetKgSchemaPublishResultRequest() = default ;
    GetKgSchemaPublishResultRequest(const GetKgSchemaPublishResultRequest &) = default ;
    GetKgSchemaPublishResultRequest(GetKgSchemaPublishResultRequest &&) = default ;
    GetKgSchemaPublishResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetKgSchemaPublishResultRequest() = default ;
    GetKgSchemaPublishResultRequest& operator=(const GetKgSchemaPublishResultRequest &) = default ;
    GetKgSchemaPublishResultRequest& operator=(GetKgSchemaPublishResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->versionId_ == nullptr && this->workspaceId_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetKgSchemaPublishResultRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline int32_t getVersionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, 0) };
    inline GetKgSchemaPublishResultRequest& setVersionId(int32_t versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetKgSchemaPublishResultRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    shared_ptr<int32_t> versionId_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
