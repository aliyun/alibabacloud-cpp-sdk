// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEKNOWLEDGEBASEDIRECTORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEKNOWLEDGEBASEDIRECTORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class UpdateKnowledgeBaseDirectoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateKnowledgeBaseDirectoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(directoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(parentDirectoryId, parentDirectoryId_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateKnowledgeBaseDirectoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(directoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(parentDirectoryId, parentDirectoryId_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    UpdateKnowledgeBaseDirectoryRequest() = default ;
    UpdateKnowledgeBaseDirectoryRequest(const UpdateKnowledgeBaseDirectoryRequest &) = default ;
    UpdateKnowledgeBaseDirectoryRequest(UpdateKnowledgeBaseDirectoryRequest &&) = default ;
    UpdateKnowledgeBaseDirectoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateKnowledgeBaseDirectoryRequest() = default ;
    UpdateKnowledgeBaseDirectoryRequest& operator=(const UpdateKnowledgeBaseDirectoryRequest &) = default ;
    UpdateKnowledgeBaseDirectoryRequest& operator=(UpdateKnowledgeBaseDirectoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->directoryId_ == nullptr && this->name_ == nullptr && this->parentDirectoryId_ == nullptr && this->tenantId_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateKnowledgeBaseDirectoryRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline UpdateKnowledgeBaseDirectoryRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateKnowledgeBaseDirectoryRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // parentDirectoryId Field Functions 
    bool hasParentDirectoryId() const { return this->parentDirectoryId_ != nullptr;};
    void deleteParentDirectoryId() { this->parentDirectoryId_ = nullptr;};
    inline string getParentDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(parentDirectoryId_, "") };
    inline UpdateKnowledgeBaseDirectoryRequest& setParentDirectoryId(string parentDirectoryId) { DARABONBA_PTR_SET_VALUE(parentDirectoryId_, parentDirectoryId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline UpdateKnowledgeBaseDirectoryRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The description of the to-do card type.
    shared_ptr<string> description_ {};
    // The directory ID.
    // 
    // This parameter is required.
    shared_ptr<string> directoryId_ {};
    // The name.
    shared_ptr<string> name_ {};
    // The directory ID.
    shared_ptr<string> parentDirectoryId_ {};
    // The tenant ID to take effect.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
