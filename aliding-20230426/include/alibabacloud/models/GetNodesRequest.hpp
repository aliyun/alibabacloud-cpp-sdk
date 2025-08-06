// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNODESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETNODESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetNodesRequestOption.hpp>
#include <alibabacloud/models/GetNodesRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetNodesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNodesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NodeIds, nodeIds_);
      DARABONBA_PTR_TO_JSON(Option, option_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, GetNodesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeIds, nodeIds_);
      DARABONBA_PTR_FROM_JSON(Option, option_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    GetNodesRequest() = default ;
    GetNodesRequest(const GetNodesRequest &) = default ;
    GetNodesRequest(GetNodesRequest &&) = default ;
    GetNodesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNodesRequest() = default ;
    GetNodesRequest& operator=(const GetNodesRequest &) = default ;
    GetNodesRequest& operator=(GetNodesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nodeIds_ != nullptr
        && this->option_ != nullptr && this->tenantContext_ != nullptr; };
    // nodeIds Field Functions 
    bool hasNodeIds() const { return this->nodeIds_ != nullptr;};
    void deleteNodeIds() { this->nodeIds_ = nullptr;};
    inline const vector<string> & nodeIds() const { DARABONBA_PTR_GET_CONST(nodeIds_, vector<string>) };
    inline vector<string> nodeIds() { DARABONBA_PTR_GET(nodeIds_, vector<string>) };
    inline GetNodesRequest& setNodeIds(const vector<string> & nodeIds) { DARABONBA_PTR_SET_VALUE(nodeIds_, nodeIds) };
    inline GetNodesRequest& setNodeIds(vector<string> && nodeIds) { DARABONBA_PTR_SET_RVALUE(nodeIds_, nodeIds) };


    // option Field Functions 
    bool hasOption() const { return this->option_ != nullptr;};
    void deleteOption() { this->option_ = nullptr;};
    inline const GetNodesRequestOption & option() const { DARABONBA_PTR_GET_CONST(option_, GetNodesRequestOption) };
    inline GetNodesRequestOption option() { DARABONBA_PTR_GET(option_, GetNodesRequestOption) };
    inline GetNodesRequest& setOption(const GetNodesRequestOption & option) { DARABONBA_PTR_SET_VALUE(option_, option) };
    inline GetNodesRequest& setOption(GetNodesRequestOption && option) { DARABONBA_PTR_SET_RVALUE(option_, option) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const GetNodesRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, GetNodesRequestTenantContext) };
    inline GetNodesRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, GetNodesRequestTenantContext) };
    inline GetNodesRequest& setTenantContext(const GetNodesRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline GetNodesRequest& setTenantContext(GetNodesRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<string>> nodeIds_ = nullptr;
    std::shared_ptr<GetNodesRequestOption> option_ = nullptr;
    std::shared_ptr<GetNodesRequestTenantContext> tenantContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
