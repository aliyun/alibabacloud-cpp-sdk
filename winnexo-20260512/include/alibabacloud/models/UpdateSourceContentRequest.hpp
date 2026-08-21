// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESOURCECONTENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESOURCECONTENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class UpdateSourceContentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSourceContentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(forceSync, forceSync_);
      DARABONBA_PTR_TO_JSON(sourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSourceContentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(forceSync, forceSync_);
      DARABONBA_PTR_FROM_JSON(sourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    UpdateSourceContentRequest() = default ;
    UpdateSourceContentRequest(const UpdateSourceContentRequest &) = default ;
    UpdateSourceContentRequest(UpdateSourceContentRequest &&) = default ;
    UpdateSourceContentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSourceContentRequest() = default ;
    UpdateSourceContentRequest& operator=(const UpdateSourceContentRequest &) = default ;
    UpdateSourceContentRequest& operator=(UpdateSourceContentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && this->forceSync_ == nullptr && this->sourceId_ == nullptr && this->tenantId_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline UpdateSourceContentRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // forceSync Field Functions 
    bool hasForceSync() const { return this->forceSync_ != nullptr;};
    void deleteForceSync() { this->forceSync_ = nullptr;};
    inline bool getForceSync() const { DARABONBA_PTR_GET_DEFAULT(forceSync_, false) };
    inline UpdateSourceContentRequest& setForceSync(bool forceSync) { DARABONBA_PTR_SET_VALUE(forceSync_, forceSync) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline UpdateSourceContentRequest& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline UpdateSourceContentRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The returned content.
    // 
    // This parameter is required.
    shared_ptr<string> content_ {};
    // Specifies whether to force synchronous processing.
    shared_ptr<bool> forceSync_ {};
    // The ID of the data source.
    // 
    // This parameter is required.
    shared_ptr<string> sourceId_ {};
    // The ID of the effective tenant.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
