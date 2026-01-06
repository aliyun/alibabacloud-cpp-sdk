// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETNODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetNodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(WithPermissionRole, withPermissionRole_);
      DARABONBA_PTR_TO_JSON(WithStatisticalInfo, withStatisticalInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetNodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(WithPermissionRole, withPermissionRole_);
      DARABONBA_PTR_FROM_JSON(WithStatisticalInfo, withStatisticalInfo_);
    };
    GetNodeRequest() = default ;
    GetNodeRequest(const GetNodeRequest &) = default ;
    GetNodeRequest(GetNodeRequest &&) = default ;
    GetNodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNodeRequest() = default ;
    GetNodeRequest& operator=(const GetNodeRequest &) = default ;
    GetNodeRequest& operator=(GetNodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TenantContext : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TenantContext& obj) { 
        DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      };
      friend void from_json(const Darabonba::Json& j, TenantContext& obj) { 
        DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      };
      TenantContext() = default ;
      TenantContext(const TenantContext &) = default ;
      TenantContext(TenantContext &&) = default ;
      TenantContext(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TenantContext() = default ;
      TenantContext& operator=(const TenantContext &) = default ;
      TenantContext& operator=(TenantContext &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->tenantId_ == nullptr; };
      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
      inline TenantContext& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    protected:
      shared_ptr<string> tenantId_ {};
    };

    virtual bool empty() const override { return this->nodeId_ == nullptr
        && this->tenantContext_ == nullptr && this->withPermissionRole_ == nullptr && this->withStatisticalInfo_ == nullptr; };
    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline GetNodeRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const GetNodeRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, GetNodeRequest::TenantContext) };
    inline GetNodeRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, GetNodeRequest::TenantContext) };
    inline GetNodeRequest& setTenantContext(const GetNodeRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline GetNodeRequest& setTenantContext(GetNodeRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // withPermissionRole Field Functions 
    bool hasWithPermissionRole() const { return this->withPermissionRole_ != nullptr;};
    void deleteWithPermissionRole() { this->withPermissionRole_ = nullptr;};
    inline bool getWithPermissionRole() const { DARABONBA_PTR_GET_DEFAULT(withPermissionRole_, false) };
    inline GetNodeRequest& setWithPermissionRole(bool withPermissionRole) { DARABONBA_PTR_SET_VALUE(withPermissionRole_, withPermissionRole) };


    // withStatisticalInfo Field Functions 
    bool hasWithStatisticalInfo() const { return this->withStatisticalInfo_ != nullptr;};
    void deleteWithStatisticalInfo() { this->withStatisticalInfo_ = nullptr;};
    inline bool getWithStatisticalInfo() const { DARABONBA_PTR_GET_DEFAULT(withStatisticalInfo_, false) };
    inline GetNodeRequest& setWithStatisticalInfo(bool withStatisticalInfo) { DARABONBA_PTR_SET_VALUE(withStatisticalInfo_, withStatisticalInfo) };


  protected:
    // This parameter is required.
    shared_ptr<string> nodeId_ {};
    shared_ptr<GetNodeRequest::TenantContext> tenantContext_ {};
    shared_ptr<bool> withPermissionRole_ {};
    shared_ptr<bool> withStatisticalInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
