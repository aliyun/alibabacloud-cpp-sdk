// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNODESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETNODESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetNodeShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNodeShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_TO_JSON(WithPermissionRole, withPermissionRole_);
      DARABONBA_PTR_TO_JSON(WithStatisticalInfo, withStatisticalInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetNodeShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_FROM_JSON(WithPermissionRole, withPermissionRole_);
      DARABONBA_PTR_FROM_JSON(WithStatisticalInfo, withStatisticalInfo_);
    };
    GetNodeShrinkRequest() = default ;
    GetNodeShrinkRequest(const GetNodeShrinkRequest &) = default ;
    GetNodeShrinkRequest(GetNodeShrinkRequest &&) = default ;
    GetNodeShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNodeShrinkRequest() = default ;
    GetNodeShrinkRequest& operator=(const GetNodeShrinkRequest &) = default ;
    GetNodeShrinkRequest& operator=(GetNodeShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nodeId_ == nullptr
        && this->tenantContextShrink_ == nullptr && this->withPermissionRole_ == nullptr && this->withStatisticalInfo_ == nullptr; };
    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline GetNodeShrinkRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string getTenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline GetNodeShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


    // withPermissionRole Field Functions 
    bool hasWithPermissionRole() const { return this->withPermissionRole_ != nullptr;};
    void deleteWithPermissionRole() { this->withPermissionRole_ = nullptr;};
    inline bool getWithPermissionRole() const { DARABONBA_PTR_GET_DEFAULT(withPermissionRole_, false) };
    inline GetNodeShrinkRequest& setWithPermissionRole(bool withPermissionRole) { DARABONBA_PTR_SET_VALUE(withPermissionRole_, withPermissionRole) };


    // withStatisticalInfo Field Functions 
    bool hasWithStatisticalInfo() const { return this->withStatisticalInfo_ != nullptr;};
    void deleteWithStatisticalInfo() { this->withStatisticalInfo_ = nullptr;};
    inline bool getWithStatisticalInfo() const { DARABONBA_PTR_GET_DEFAULT(withStatisticalInfo_, false) };
    inline GetNodeShrinkRequest& setWithStatisticalInfo(bool withStatisticalInfo) { DARABONBA_PTR_SET_VALUE(withStatisticalInfo_, withStatisticalInfo) };


  protected:
    // This parameter is required.
    shared_ptr<string> nodeId_ {};
    shared_ptr<string> tenantContextShrink_ {};
    shared_ptr<bool> withPermissionRole_ {};
    shared_ptr<bool> withStatisticalInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
