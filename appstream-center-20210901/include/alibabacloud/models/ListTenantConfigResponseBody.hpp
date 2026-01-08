// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTENANTCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTENANTCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
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
    class TenantConfigModel : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TenantConfigModel& obj) { 
        DARABONBA_PTR_TO_JSON(AppInstanceGroupExpireRemind, appInstanceGroupExpireRemind_);
      };
      friend void from_json(const Darabonba::Json& j, TenantConfigModel& obj) { 
        DARABONBA_PTR_FROM_JSON(AppInstanceGroupExpireRemind, appInstanceGroupExpireRemind_);
      };
      TenantConfigModel() = default ;
      TenantConfigModel(const TenantConfigModel &) = default ;
      TenantConfigModel(TenantConfigModel &&) = default ;
      TenantConfigModel(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TenantConfigModel() = default ;
      TenantConfigModel& operator=(const TenantConfigModel &) = default ;
      TenantConfigModel& operator=(TenantConfigModel &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appInstanceGroupExpireRemind_ == nullptr; };
      // appInstanceGroupExpireRemind Field Functions 
      bool hasAppInstanceGroupExpireRemind() const { return this->appInstanceGroupExpireRemind_ != nullptr;};
      void deleteAppInstanceGroupExpireRemind() { this->appInstanceGroupExpireRemind_ = nullptr;};
      inline bool getAppInstanceGroupExpireRemind() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupExpireRemind_, false) };
      inline TenantConfigModel& setAppInstanceGroupExpireRemind(bool appInstanceGroupExpireRemind) { DARABONBA_PTR_SET_VALUE(appInstanceGroupExpireRemind_, appInstanceGroupExpireRemind) };


    protected:
      // Indicates whether the resource expiration reminder feature is enabled.
      // 
      // Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> appInstanceGroupExpireRemind_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->tenantConfigModel_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTenantConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tenantConfigModel Field Functions 
    bool hasTenantConfigModel() const { return this->tenantConfigModel_ != nullptr;};
    void deleteTenantConfigModel() { this->tenantConfigModel_ = nullptr;};
    inline const ListTenantConfigResponseBody::TenantConfigModel & getTenantConfigModel() const { DARABONBA_PTR_GET_CONST(tenantConfigModel_, ListTenantConfigResponseBody::TenantConfigModel) };
    inline ListTenantConfigResponseBody::TenantConfigModel getTenantConfigModel() { DARABONBA_PTR_GET(tenantConfigModel_, ListTenantConfigResponseBody::TenantConfigModel) };
    inline ListTenantConfigResponseBody& setTenantConfigModel(const ListTenantConfigResponseBody::TenantConfigModel & tenantConfigModel) { DARABONBA_PTR_SET_VALUE(tenantConfigModel_, tenantConfigModel) };
    inline ListTenantConfigResponseBody& setTenantConfigModel(ListTenantConfigResponseBody::TenantConfigModel && tenantConfigModel) { DARABONBA_PTR_SET_RVALUE(tenantConfigModel_, tenantConfigModel) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The user configurations.
    shared_ptr<ListTenantConfigResponseBody::TenantConfigModel> tenantConfigModel_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
