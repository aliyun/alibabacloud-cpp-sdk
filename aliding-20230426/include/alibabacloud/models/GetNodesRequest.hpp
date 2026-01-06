// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNODESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETNODESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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

    class Option : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Option& obj) { 
        DARABONBA_PTR_TO_JSON(WithPermissionRole, withPermissionRole_);
        DARABONBA_PTR_TO_JSON(WithStatisticalInfo, withStatisticalInfo_);
      };
      friend void from_json(const Darabonba::Json& j, Option& obj) { 
        DARABONBA_PTR_FROM_JSON(WithPermissionRole, withPermissionRole_);
        DARABONBA_PTR_FROM_JSON(WithStatisticalInfo, withStatisticalInfo_);
      };
      Option() = default ;
      Option(const Option &) = default ;
      Option(Option &&) = default ;
      Option(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Option() = default ;
      Option& operator=(const Option &) = default ;
      Option& operator=(Option &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->withPermissionRole_ == nullptr
        && this->withStatisticalInfo_ == nullptr; };
      // withPermissionRole Field Functions 
      bool hasWithPermissionRole() const { return this->withPermissionRole_ != nullptr;};
      void deleteWithPermissionRole() { this->withPermissionRole_ = nullptr;};
      inline bool getWithPermissionRole() const { DARABONBA_PTR_GET_DEFAULT(withPermissionRole_, false) };
      inline Option& setWithPermissionRole(bool withPermissionRole) { DARABONBA_PTR_SET_VALUE(withPermissionRole_, withPermissionRole) };


      // withStatisticalInfo Field Functions 
      bool hasWithStatisticalInfo() const { return this->withStatisticalInfo_ != nullptr;};
      void deleteWithStatisticalInfo() { this->withStatisticalInfo_ = nullptr;};
      inline bool getWithStatisticalInfo() const { DARABONBA_PTR_GET_DEFAULT(withStatisticalInfo_, false) };
      inline Option& setWithStatisticalInfo(bool withStatisticalInfo) { DARABONBA_PTR_SET_VALUE(withStatisticalInfo_, withStatisticalInfo) };


    protected:
      shared_ptr<bool> withPermissionRole_ {};
      shared_ptr<bool> withStatisticalInfo_ {};
    };

    virtual bool empty() const override { return this->nodeIds_ == nullptr
        && this->option_ == nullptr && this->tenantContext_ == nullptr; };
    // nodeIds Field Functions 
    bool hasNodeIds() const { return this->nodeIds_ != nullptr;};
    void deleteNodeIds() { this->nodeIds_ = nullptr;};
    inline const vector<string> & getNodeIds() const { DARABONBA_PTR_GET_CONST(nodeIds_, vector<string>) };
    inline vector<string> getNodeIds() { DARABONBA_PTR_GET(nodeIds_, vector<string>) };
    inline GetNodesRequest& setNodeIds(const vector<string> & nodeIds) { DARABONBA_PTR_SET_VALUE(nodeIds_, nodeIds) };
    inline GetNodesRequest& setNodeIds(vector<string> && nodeIds) { DARABONBA_PTR_SET_RVALUE(nodeIds_, nodeIds) };


    // option Field Functions 
    bool hasOption() const { return this->option_ != nullptr;};
    void deleteOption() { this->option_ = nullptr;};
    inline const GetNodesRequest::Option & getOption() const { DARABONBA_PTR_GET_CONST(option_, GetNodesRequest::Option) };
    inline GetNodesRequest::Option getOption() { DARABONBA_PTR_GET(option_, GetNodesRequest::Option) };
    inline GetNodesRequest& setOption(const GetNodesRequest::Option & option) { DARABONBA_PTR_SET_VALUE(option_, option) };
    inline GetNodesRequest& setOption(GetNodesRequest::Option && option) { DARABONBA_PTR_SET_RVALUE(option_, option) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const GetNodesRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, GetNodesRequest::TenantContext) };
    inline GetNodesRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, GetNodesRequest::TenantContext) };
    inline GetNodesRequest& setTenantContext(const GetNodesRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline GetNodesRequest& setTenantContext(GetNodesRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    shared_ptr<vector<string>> nodeIds_ {};
    shared_ptr<GetNodesRequest::Option> option_ {};
    shared_ptr<GetNodesRequest::TenantContext> tenantContext_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
