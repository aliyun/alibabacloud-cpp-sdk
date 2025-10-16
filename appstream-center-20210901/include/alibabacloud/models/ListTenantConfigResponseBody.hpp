// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTENANTCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTENANTCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListTenantConfigResponseBodyTenantConfigModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListTenantConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTenantConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TenantConfigModel, tenantConfigModel_);
    };
    friend void from_json(const Darabonba::Json& j, ListTenantConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TenantConfigModel, tenantConfigModel_);
    };
    ListTenantConfigResponseBody() = default ;
    ListTenantConfigResponseBody(const ListTenantConfigResponseBody &) = default ;
    ListTenantConfigResponseBody(ListTenantConfigResponseBody &&) = default ;
    ListTenantConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTenantConfigResponseBody() = default ;
    ListTenantConfigResponseBody& operator=(const ListTenantConfigResponseBody &) = default ;
    ListTenantConfigResponseBody& operator=(ListTenantConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->tenantConfigModel_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTenantConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tenantConfigModel Field Functions 
    bool hasTenantConfigModel() const { return this->tenantConfigModel_ != nullptr;};
    void deleteTenantConfigModel() { this->tenantConfigModel_ = nullptr;};
    inline const ListTenantConfigResponseBodyTenantConfigModel & tenantConfigModel() const { DARABONBA_PTR_GET_CONST(tenantConfigModel_, ListTenantConfigResponseBodyTenantConfigModel) };
    inline ListTenantConfigResponseBodyTenantConfigModel tenantConfigModel() { DARABONBA_PTR_GET(tenantConfigModel_, ListTenantConfigResponseBodyTenantConfigModel) };
    inline ListTenantConfigResponseBody& setTenantConfigModel(const ListTenantConfigResponseBodyTenantConfigModel & tenantConfigModel) { DARABONBA_PTR_SET_VALUE(tenantConfigModel_, tenantConfigModel) };
    inline ListTenantConfigResponseBody& setTenantConfigModel(ListTenantConfigResponseBodyTenantConfigModel && tenantConfigModel) { DARABONBA_PTR_SET_RVALUE(tenantConfigModel_, tenantConfigModel) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The user configurations.
    std::shared_ptr<ListTenantConfigResponseBodyTenantConfigModel> tenantConfigModel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
