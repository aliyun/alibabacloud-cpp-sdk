// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PREVIEWOUTPUTFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PREVIEWOUTPUTFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class PreviewOutputFileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PreviewOutputFileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(outputItemId, outputItemId_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(versionId, versionId_);
    };
    friend void from_json(const Darabonba::Json& j, PreviewOutputFileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(outputItemId, outputItemId_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(versionId, versionId_);
    };
    PreviewOutputFileRequest() = default ;
    PreviewOutputFileRequest(const PreviewOutputFileRequest &) = default ;
    PreviewOutputFileRequest(PreviewOutputFileRequest &&) = default ;
    PreviewOutputFileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PreviewOutputFileRequest() = default ;
    PreviewOutputFileRequest& operator=(const PreviewOutputFileRequest &) = default ;
    PreviewOutputFileRequest& operator=(PreviewOutputFileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->outputItemId_ == nullptr
        && this->tenantId_ == nullptr && this->versionId_ == nullptr; };
    // outputItemId Field Functions 
    bool hasOutputItemId() const { return this->outputItemId_ != nullptr;};
    void deleteOutputItemId() { this->outputItemId_ = nullptr;};
    inline string getOutputItemId() const { DARABONBA_PTR_GET_DEFAULT(outputItemId_, "") };
    inline PreviewOutputFileRequest& setOutputItemId(string outputItemId) { DARABONBA_PTR_SET_VALUE(outputItemId_, outputItemId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline PreviewOutputFileRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline string getVersionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
    inline PreviewOutputFileRequest& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


  protected:
    // The output item ID.
    // 
    // This parameter is required.
    shared_ptr<string> outputItemId_ {};
    // The tenant ID.
    shared_ptr<string> tenantId_ {};
    // The version referenced by the alias.
    shared_ptr<string> versionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
