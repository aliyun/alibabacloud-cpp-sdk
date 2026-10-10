// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGROUPSOURCECONTENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGROUPSOURCECONTENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class UpdateGroupSourceContentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGroupSourceContentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(forceSync, forceSync_);
      DARABONBA_PTR_TO_JSON(groupId, groupId_);
      DARABONBA_PTR_TO_JSON(sourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGroupSourceContentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(forceSync, forceSync_);
      DARABONBA_PTR_FROM_JSON(groupId, groupId_);
      DARABONBA_PTR_FROM_JSON(sourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    UpdateGroupSourceContentRequest() = default ;
    UpdateGroupSourceContentRequest(const UpdateGroupSourceContentRequest &) = default ;
    UpdateGroupSourceContentRequest(UpdateGroupSourceContentRequest &&) = default ;
    UpdateGroupSourceContentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGroupSourceContentRequest() = default ;
    UpdateGroupSourceContentRequest& operator=(const UpdateGroupSourceContentRequest &) = default ;
    UpdateGroupSourceContentRequest& operator=(UpdateGroupSourceContentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && this->forceSync_ == nullptr && this->groupId_ == nullptr && this->sourceId_ == nullptr && this->tenantId_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline UpdateGroupSourceContentRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // forceSync Field Functions 
    bool hasForceSync() const { return this->forceSync_ != nullptr;};
    void deleteForceSync() { this->forceSync_ = nullptr;};
    inline bool getForceSync() const { DARABONBA_PTR_GET_DEFAULT(forceSync_, false) };
    inline UpdateGroupSourceContentRequest& setForceSync(bool forceSync) { DARABONBA_PTR_SET_VALUE(forceSync_, forceSync) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline UpdateGroupSourceContentRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline UpdateGroupSourceContentRequest& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline UpdateGroupSourceContentRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The returned content.
    // 
    // This parameter is required.
    shared_ptr<string> content_ {};
    // Specifies whether to force synchronization.
    shared_ptr<bool> forceSync_ {};
    // The project group ID.
    // 
    // This parameter is required.
    shared_ptr<string> groupId_ {};
    // The original project ID.
    // 
    // This parameter is required.
    shared_ptr<string> sourceId_ {};
    // The tenant ID.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
