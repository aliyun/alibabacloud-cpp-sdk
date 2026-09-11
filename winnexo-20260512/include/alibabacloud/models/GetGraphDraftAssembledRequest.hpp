// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGRAPHDRAFTASSEMBLEDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETGRAPHDRAFTASSEMBLEDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class GetGraphDraftAssembledRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGraphDraftAssembledRequest& obj) { 
      DARABONBA_PTR_TO_JSON(graphName, graphName_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, GetGraphDraftAssembledRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(graphName, graphName_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    GetGraphDraftAssembledRequest() = default ;
    GetGraphDraftAssembledRequest(const GetGraphDraftAssembledRequest &) = default ;
    GetGraphDraftAssembledRequest(GetGraphDraftAssembledRequest &&) = default ;
    GetGraphDraftAssembledRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGraphDraftAssembledRequest() = default ;
    GetGraphDraftAssembledRequest& operator=(const GetGraphDraftAssembledRequest &) = default ;
    GetGraphDraftAssembledRequest& operator=(GetGraphDraftAssembledRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->graphName_ == nullptr
        && this->tenantId_ == nullptr; };
    // graphName Field Functions 
    bool hasGraphName() const { return this->graphName_ != nullptr;};
    void deleteGraphName() { this->graphName_ = nullptr;};
    inline string getGraphName() const { DARABONBA_PTR_GET_DEFAULT(graphName_, "") };
    inline GetGraphDraftAssembledRequest& setGraphName(string graphName) { DARABONBA_PTR_SET_VALUE(graphName_, graphName) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline GetGraphDraftAssembledRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The knowledge graph name.
    // 
    // This parameter is required.
    shared_ptr<string> graphName_ {};
    // The effective tenant ID.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
