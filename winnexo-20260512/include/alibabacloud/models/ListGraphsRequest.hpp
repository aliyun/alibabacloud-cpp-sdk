// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGRAPHSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTGRAPHSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class ListGraphsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGraphsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListGraphsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    ListGraphsRequest() = default ;
    ListGraphsRequest(const ListGraphsRequest &) = default ;
    ListGraphsRequest(ListGraphsRequest &&) = default ;
    ListGraphsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGraphsRequest() = default ;
    ListGraphsRequest& operator=(const ListGraphsRequest &) = default ;
    ListGraphsRequest& operator=(ListGraphsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tenantId_ == nullptr; };
    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ListGraphsRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // 租户ID，公共参数；winnexo-cli 通过 --tenant-id 显式传入
    // 
    // This parameter is required.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
