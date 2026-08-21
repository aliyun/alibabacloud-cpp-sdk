// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECONVERSATIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECONVERSATIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class CreateConversationShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateConversationShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(metadata, metadata_);
      DARABONBA_PTR_TO_JSON(objectId, objectId_);
      DARABONBA_PTR_TO_JSON(operatingObjectName, operatingObjectNameShrink_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateConversationShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(objectId, objectId_);
      DARABONBA_PTR_FROM_JSON(operatingObjectName, operatingObjectNameShrink_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    CreateConversationShrinkRequest() = default ;
    CreateConversationShrinkRequest(const CreateConversationShrinkRequest &) = default ;
    CreateConversationShrinkRequest(CreateConversationShrinkRequest &&) = default ;
    CreateConversationShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateConversationShrinkRequest() = default ;
    CreateConversationShrinkRequest& operator=(const CreateConversationShrinkRequest &) = default ;
    CreateConversationShrinkRequest& operator=(CreateConversationShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->metadata_ == nullptr
        && this->objectId_ == nullptr && this->operatingObjectNameShrink_ == nullptr && this->tenantId_ == nullptr; };
    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline string getMetadata() const { DARABONBA_PTR_GET_DEFAULT(metadata_, "") };
    inline CreateConversationShrinkRequest& setMetadata(string metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };


    // objectId Field Functions 
    bool hasObjectId() const { return this->objectId_ != nullptr;};
    void deleteObjectId() { this->objectId_ = nullptr;};
    inline string getObjectId() const { DARABONBA_PTR_GET_DEFAULT(objectId_, "") };
    inline CreateConversationShrinkRequest& setObjectId(string objectId) { DARABONBA_PTR_SET_VALUE(objectId_, objectId) };


    // operatingObjectNameShrink Field Functions 
    bool hasOperatingObjectNameShrink() const { return this->operatingObjectNameShrink_ != nullptr;};
    void deleteOperatingObjectNameShrink() { this->operatingObjectNameShrink_ = nullptr;};
    inline string getOperatingObjectNameShrink() const { DARABONBA_PTR_GET_DEFAULT(operatingObjectNameShrink_, "") };
    inline CreateConversationShrinkRequest& setOperatingObjectNameShrink(string operatingObjectNameShrink) { DARABONBA_PTR_SET_VALUE(operatingObjectNameShrink_, operatingObjectNameShrink) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline CreateConversationShrinkRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // A reserved field.
    shared_ptr<string> metadata_ {};
    // The primary key ID of the associated variable.
    shared_ptr<string> objectId_ {};
    // The operating object name.
    shared_ptr<string> operatingObjectNameShrink_ {};
    // The tenant ID.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
