// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_USERQUOTAPERMISSION_HPP_
#define ALIBABACLOUD_MODELS_USERQUOTAPERMISSION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class UserQuotaPermission : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UserQuotaPermission& obj) { 
      DARABONBA_PTR_TO_JSON(Permissions, permissions_);
      DARABONBA_PTR_TO_JSON(QuotaId, quotaId_);
    };
    friend void from_json(const Darabonba::Json& j, UserQuotaPermission& obj) { 
      DARABONBA_PTR_FROM_JSON(Permissions, permissions_);
      DARABONBA_PTR_FROM_JSON(QuotaId, quotaId_);
    };
    UserQuotaPermission() = default ;
    UserQuotaPermission(const UserQuotaPermission &) = default ;
    UserQuotaPermission(UserQuotaPermission &&) = default ;
    UserQuotaPermission(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UserQuotaPermission() = default ;
    UserQuotaPermission& operator=(const UserQuotaPermission &) = default ;
    UserQuotaPermission& operator=(UserQuotaPermission &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->permissions_ == nullptr
        && this->quotaId_ == nullptr; };
    // permissions Field Functions 
    bool hasPermissions() const { return this->permissions_ != nullptr;};
    void deletePermissions() { this->permissions_ = nullptr;};
    inline const vector<string> & getPermissions() const { DARABONBA_PTR_GET_CONST(permissions_, vector<string>) };
    inline vector<string> getPermissions() { DARABONBA_PTR_GET(permissions_, vector<string>) };
    inline UserQuotaPermission& setPermissions(const vector<string> & permissions) { DARABONBA_PTR_SET_VALUE(permissions_, permissions) };
    inline UserQuotaPermission& setPermissions(vector<string> && permissions) { DARABONBA_PTR_SET_RVALUE(permissions_, permissions) };


    // quotaId Field Functions 
    bool hasQuotaId() const { return this->quotaId_ != nullptr;};
    void deleteQuotaId() { this->quotaId_ = nullptr;};
    inline string getQuotaId() const { DARABONBA_PTR_GET_DEFAULT(quotaId_, "") };
    inline UserQuotaPermission& setQuotaId(string quotaId) { DARABONBA_PTR_SET_VALUE(quotaId_, quotaId) };


  protected:
    shared_ptr<vector<string>> permissions_ {};
    shared_ptr<string> quotaId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
