// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAGENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class ListAgentsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAgentsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAgentsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    ListAgentsRequest() = default ;
    ListAgentsRequest(const ListAgentsRequest &) = default ;
    ListAgentsRequest(ListAgentsRequest &&) = default ;
    ListAgentsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAgentsRequest() = default ;
    ListAgentsRequest& operator=(const ListAgentsRequest &) = default ;
    ListAgentsRequest& operator=(ListAgentsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tenantId_ == nullptr; };
    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ListAgentsRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The tenant ID. This is a common parameter. If not specified, the default tenant of the caller is used.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
