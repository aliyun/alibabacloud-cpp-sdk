// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHREVOKEPERMISSIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHREVOKEPERMISSIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Permission.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class BatchRevokePermissionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchRevokePermissionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(permissions, permissions_);
    };
    friend void from_json(const Darabonba::Json& j, BatchRevokePermissionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(permissions, permissions_);
    };
    BatchRevokePermissionsRequest() = default ;
    BatchRevokePermissionsRequest(const BatchRevokePermissionsRequest &) = default ;
    BatchRevokePermissionsRequest(BatchRevokePermissionsRequest &&) = default ;
    BatchRevokePermissionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchRevokePermissionsRequest() = default ;
    BatchRevokePermissionsRequest& operator=(const BatchRevokePermissionsRequest &) = default ;
    BatchRevokePermissionsRequest& operator=(BatchRevokePermissionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->permissions_ == nullptr; };
    // permissions Field Functions 
    bool hasPermissions() const { return this->permissions_ != nullptr;};
    void deletePermissions() { this->permissions_ = nullptr;};
    inline const vector<Permission> & permissions() const { DARABONBA_PTR_GET_CONST(permissions_, vector<Permission>) };
    inline vector<Permission> permissions() { DARABONBA_PTR_GET(permissions_, vector<Permission>) };
    inline BatchRevokePermissionsRequest& setPermissions(const vector<Permission> & permissions) { DARABONBA_PTR_SET_VALUE(permissions_, permissions) };
    inline BatchRevokePermissionsRequest& setPermissions(vector<Permission> && permissions) { DARABONBA_PTR_SET_RVALUE(permissions_, permissions) };


  protected:
    std::shared_ptr<vector<Permission>> permissions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
