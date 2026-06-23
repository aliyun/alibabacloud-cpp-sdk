// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLEANCLUSTERUSERPERMISSIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLEANCLUSTERUSERPERMISSIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class CleanClusterUserPermissionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CleanClusterUserPermissionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Force, force_);
    };
    friend void from_json(const Darabonba::Json& j, CleanClusterUserPermissionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Force, force_);
    };
    CleanClusterUserPermissionsRequest() = default ;
    CleanClusterUserPermissionsRequest(const CleanClusterUserPermissionsRequest &) = default ;
    CleanClusterUserPermissionsRequest(CleanClusterUserPermissionsRequest &&) = default ;
    CleanClusterUserPermissionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CleanClusterUserPermissionsRequest() = default ;
    CleanClusterUserPermissionsRequest& operator=(const CleanClusterUserPermissionsRequest &) = default ;
    CleanClusterUserPermissionsRequest& operator=(CleanClusterUserPermissionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->force_ == nullptr; };
    // force Field Functions 
    bool hasForce() const { return this->force_ != nullptr;};
    void deleteForce() { this->force_ = nullptr;};
    inline bool getForce() const { DARABONBA_PTR_GET_DEFAULT(force_, false) };
    inline CleanClusterUserPermissionsRequest& setForce(bool force) { DARABONBA_PTR_SET_VALUE(force_, force) };


  protected:
    // Specifies whether to force delete the specified KubeConfig. Valid values:
    // - false (default): Before deleting the KubeConfig, the system checks whether cluster access records exist within the last seven days. If access records exist or cannot be retrieved, the deletion is not allowed.
    // - true: Force deletes the KubeConfig without checking cluster access records.
    shared_ptr<bool> force_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
