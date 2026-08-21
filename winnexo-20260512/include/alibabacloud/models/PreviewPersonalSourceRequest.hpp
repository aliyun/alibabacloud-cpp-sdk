// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PREVIEWPERSONALSOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PREVIEWPERSONALSOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class PreviewPersonalSourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PreviewPersonalSourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(sourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, PreviewPersonalSourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(sourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    PreviewPersonalSourceRequest() = default ;
    PreviewPersonalSourceRequest(const PreviewPersonalSourceRequest &) = default ;
    PreviewPersonalSourceRequest(PreviewPersonalSourceRequest &&) = default ;
    PreviewPersonalSourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PreviewPersonalSourceRequest() = default ;
    PreviewPersonalSourceRequest& operator=(const PreviewPersonalSourceRequest &) = default ;
    PreviewPersonalSourceRequest& operator=(PreviewPersonalSourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sourceId_ == nullptr
        && this->tenantId_ == nullptr; };
    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline PreviewPersonalSourceRequest& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline PreviewPersonalSourceRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The data source ID, which is unique within the tenant.
    // 
    // This parameter is required.
    shared_ptr<string> sourceId_ {};
    // The tenant ID. This is a common parameter. The winnexo-cli passes this parameter explicitly by using --tenant-id.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
