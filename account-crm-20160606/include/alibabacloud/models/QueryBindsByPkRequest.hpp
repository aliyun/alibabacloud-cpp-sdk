// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYBINDSBYPKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYBINDSBYPKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class QueryBindsByPkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryBindsByPkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Pk, pk_);
      DARABONBA_ANY_TO_JSON(TenantIds, tenantIds_);
    };
    friend void from_json(const Darabonba::Json& j, QueryBindsByPkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Pk, pk_);
      DARABONBA_ANY_FROM_JSON(TenantIds, tenantIds_);
    };
    QueryBindsByPkRequest() = default ;
    QueryBindsByPkRequest(const QueryBindsByPkRequest &) = default ;
    QueryBindsByPkRequest(QueryBindsByPkRequest &&) = default ;
    QueryBindsByPkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryBindsByPkRequest() = default ;
    QueryBindsByPkRequest& operator=(const QueryBindsByPkRequest &) = default ;
    QueryBindsByPkRequest& operator=(QueryBindsByPkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && this->pk_ == nullptr && this->tenantIds_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline QueryBindsByPkRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // pk Field Functions 
    bool hasPk() const { return this->pk_ != nullptr;};
    void deletePk() { this->pk_ = nullptr;};
    inline string getPk() const { DARABONBA_PTR_GET_DEFAULT(pk_, "") };
    inline QueryBindsByPkRequest& setPk(string pk) { DARABONBA_PTR_SET_VALUE(pk_, pk) };


    // tenantIds Field Functions 
    bool hasTenantIds() const { return this->tenantIds_ != nullptr;};
    void deleteTenantIds() { this->tenantIds_ = nullptr;};
    inline     const Darabonba::Json & getTenantIds() const { DARABONBA_GET(tenantIds_) };
    Darabonba::Json & getTenantIds() { DARABONBA_GET(tenantIds_) };
    inline QueryBindsByPkRequest& setTenantIds(const Darabonba::Json & tenantIds) { DARABONBA_SET_VALUE(tenantIds_, tenantIds) };
    inline QueryBindsByPkRequest& setTenantIds(Darabonba::Json && tenantIds) { DARABONBA_SET_RVALUE(tenantIds_, tenantIds) };


  protected:
    // This parameter is required.
    shared_ptr<string> appName_ {};
    // This parameter is required.
    shared_ptr<string> pk_ {};
    // This parameter is required.
    Darabonba::Json tenantIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
