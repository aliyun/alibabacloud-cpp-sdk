// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REVERTGRAPHDRAFTRESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REVERTGRAPHDRAFTRESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class RevertGraphDraftResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RevertGraphDraftResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(draftChangeId, draftChangeId_);
      DARABONBA_PTR_TO_JSON(graphName, graphName_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, RevertGraphDraftResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(draftChangeId, draftChangeId_);
      DARABONBA_PTR_FROM_JSON(graphName, graphName_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    RevertGraphDraftResourceRequest() = default ;
    RevertGraphDraftResourceRequest(const RevertGraphDraftResourceRequest &) = default ;
    RevertGraphDraftResourceRequest(RevertGraphDraftResourceRequest &&) = default ;
    RevertGraphDraftResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RevertGraphDraftResourceRequest() = default ;
    RevertGraphDraftResourceRequest& operator=(const RevertGraphDraftResourceRequest &) = default ;
    RevertGraphDraftResourceRequest& operator=(RevertGraphDraftResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->draftChangeId_ == nullptr
        && this->graphName_ == nullptr && this->tenantId_ == nullptr; };
    // draftChangeId Field Functions 
    bool hasDraftChangeId() const { return this->draftChangeId_ != nullptr;};
    void deleteDraftChangeId() { this->draftChangeId_ = nullptr;};
    inline int64_t getDraftChangeId() const { DARABONBA_PTR_GET_DEFAULT(draftChangeId_, 0L) };
    inline RevertGraphDraftResourceRequest& setDraftChangeId(int64_t draftChangeId) { DARABONBA_PTR_SET_VALUE(draftChangeId_, draftChangeId) };


    // graphName Field Functions 
    bool hasGraphName() const { return this->graphName_ != nullptr;};
    void deleteGraphName() { this->graphName_ = nullptr;};
    inline string getGraphName() const { DARABONBA_PTR_GET_DEFAULT(graphName_, "") };
    inline RevertGraphDraftResourceRequest& setGraphName(string graphName) { DARABONBA_PTR_SET_VALUE(graphName_, graphName) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline RevertGraphDraftResourceRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The draft change ID (the draftChangeId returned by listGraphDraftResources).
    // 
    // This parameter is required.
    shared_ptr<int64_t> draftChangeId_ {};
    // The knowledge graph name.
    shared_ptr<string> graphName_ {};
    // The tenant ID. This is a common parameter. Pass it explicitly by using --tenant-id in winnexo-cli.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
