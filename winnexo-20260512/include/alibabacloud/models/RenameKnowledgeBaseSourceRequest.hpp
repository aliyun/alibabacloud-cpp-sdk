// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RENAMEKNOWLEDGEBASESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RENAMEKNOWLEDGEBASESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class RenameKnowledgeBaseSourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RenameKnowledgeBaseSourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(newName, newName_);
      DARABONBA_PTR_TO_JSON(sourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, RenameKnowledgeBaseSourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(newName, newName_);
      DARABONBA_PTR_FROM_JSON(sourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    RenameKnowledgeBaseSourceRequest() = default ;
    RenameKnowledgeBaseSourceRequest(const RenameKnowledgeBaseSourceRequest &) = default ;
    RenameKnowledgeBaseSourceRequest(RenameKnowledgeBaseSourceRequest &&) = default ;
    RenameKnowledgeBaseSourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RenameKnowledgeBaseSourceRequest() = default ;
    RenameKnowledgeBaseSourceRequest& operator=(const RenameKnowledgeBaseSourceRequest &) = default ;
    RenameKnowledgeBaseSourceRequest& operator=(RenameKnowledgeBaseSourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->newName_ == nullptr
        && this->sourceId_ == nullptr && this->tenantId_ == nullptr; };
    // newName Field Functions 
    bool hasNewName() const { return this->newName_ != nullptr;};
    void deleteNewName() { this->newName_ = nullptr;};
    inline string getNewName() const { DARABONBA_PTR_GET_DEFAULT(newName_, "") };
    inline RenameKnowledgeBaseSourceRequest& setNewName(string newName) { DARABONBA_PTR_SET_VALUE(newName_, newName) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline RenameKnowledgeBaseSourceRequest& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline RenameKnowledgeBaseSourceRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The new name of the data source.
    // 
    // This parameter is required.
    shared_ptr<string> newName_ {};
    // The data source ID, which is unique within the tenant.
    // 
    // This parameter is required.
    shared_ptr<string> sourceId_ {};
    // The tenant ID. This is a common parameter. In winnexo-cli, pass this value explicitly by using --tenant-id.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
