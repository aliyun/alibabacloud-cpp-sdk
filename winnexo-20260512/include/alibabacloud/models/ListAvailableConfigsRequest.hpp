// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAVAILABLECONFIGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAVAILABLECONFIGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class ListAvailableConfigsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAvailableConfigsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAvailableConfigsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    ListAvailableConfigsRequest() = default ;
    ListAvailableConfigsRequest(const ListAvailableConfigsRequest &) = default ;
    ListAvailableConfigsRequest(ListAvailableConfigsRequest &&) = default ;
    ListAvailableConfigsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAvailableConfigsRequest() = default ;
    ListAvailableConfigsRequest& operator=(const ListAvailableConfigsRequest &) = default ;
    ListAvailableConfigsRequest& operator=(ListAvailableConfigsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tenantId_ == nullptr; };
    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ListAvailableConfigsRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The tenant ID. This is a common parameter. Pass it explicitly through --tenant-id in winnexo-cli.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
