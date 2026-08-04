// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYBINDSBYPKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYBINDSBYPKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class QueryBindsByPkShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryBindsByPkShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Pk, pk_);
      DARABONBA_PTR_TO_JSON(TenantIds, tenantIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, QueryBindsByPkShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Pk, pk_);
      DARABONBA_PTR_FROM_JSON(TenantIds, tenantIdsShrink_);
    };
    QueryBindsByPkShrinkRequest() = default ;
    QueryBindsByPkShrinkRequest(const QueryBindsByPkShrinkRequest &) = default ;
    QueryBindsByPkShrinkRequest(QueryBindsByPkShrinkRequest &&) = default ;
    QueryBindsByPkShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryBindsByPkShrinkRequest() = default ;
    QueryBindsByPkShrinkRequest& operator=(const QueryBindsByPkShrinkRequest &) = default ;
    QueryBindsByPkShrinkRequest& operator=(QueryBindsByPkShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && this->pk_ == nullptr && this->tenantIdsShrink_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline QueryBindsByPkShrinkRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // pk Field Functions 
    bool hasPk() const { return this->pk_ != nullptr;};
    void deletePk() { this->pk_ = nullptr;};
    inline string getPk() const { DARABONBA_PTR_GET_DEFAULT(pk_, "") };
    inline QueryBindsByPkShrinkRequest& setPk(string pk) { DARABONBA_PTR_SET_VALUE(pk_, pk) };


    // tenantIdsShrink Field Functions 
    bool hasTenantIdsShrink() const { return this->tenantIdsShrink_ != nullptr;};
    void deleteTenantIdsShrink() { this->tenantIdsShrink_ = nullptr;};
    inline string getTenantIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantIdsShrink_, "") };
    inline QueryBindsByPkShrinkRequest& setTenantIdsShrink(string tenantIdsShrink) { DARABONBA_PTR_SET_VALUE(tenantIdsShrink_, tenantIdsShrink) };


  protected:
    // This parameter is required.
    shared_ptr<string> appName_ {};
    // This parameter is required.
    shared_ptr<string> pk_ {};
    // This parameter is required.
    shared_ptr<string> tenantIdsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
