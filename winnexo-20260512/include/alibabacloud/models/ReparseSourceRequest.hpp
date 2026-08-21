// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REPARSESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REPARSESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class ReparseSourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReparseSourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(forceSync, forceSync_);
      DARABONBA_PTR_TO_JSON(sourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ReparseSourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(forceSync, forceSync_);
      DARABONBA_PTR_FROM_JSON(sourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    ReparseSourceRequest() = default ;
    ReparseSourceRequest(const ReparseSourceRequest &) = default ;
    ReparseSourceRequest(ReparseSourceRequest &&) = default ;
    ReparseSourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReparseSourceRequest() = default ;
    ReparseSourceRequest& operator=(const ReparseSourceRequest &) = default ;
    ReparseSourceRequest& operator=(ReparseSourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->forceSync_ == nullptr
        && this->sourceId_ == nullptr && this->tenantId_ == nullptr; };
    // forceSync Field Functions 
    bool hasForceSync() const { return this->forceSync_ != nullptr;};
    void deleteForceSync() { this->forceSync_ = nullptr;};
    inline bool getForceSync() const { DARABONBA_PTR_GET_DEFAULT(forceSync_, false) };
    inline ReparseSourceRequest& setForceSync(bool forceSync) { DARABONBA_PTR_SET_VALUE(forceSync_, forceSync) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline ReparseSourceRequest& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ReparseSourceRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // Specifies whether to synchronously wait for the re-parsing to complete. Default value: false, which indicates asynchronous queuing.
    shared_ptr<bool> forceSync_ {};
    // The ID of the data source to re-parse. This ID is unique within the tenant.
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
