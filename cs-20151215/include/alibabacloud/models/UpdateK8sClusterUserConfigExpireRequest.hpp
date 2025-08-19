// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEK8SCLUSTERUSERCONFIGEXPIREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEK8SCLUSTERUSERCONFIGEXPIREREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class UpdateK8sClusterUserConfigExpireRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateK8sClusterUserConfigExpireRequest& obj) { 
      DARABONBA_PTR_TO_JSON(expire_hour, expireHour_);
      DARABONBA_PTR_TO_JSON(user, user_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateK8sClusterUserConfigExpireRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(expire_hour, expireHour_);
      DARABONBA_PTR_FROM_JSON(user, user_);
    };
    UpdateK8sClusterUserConfigExpireRequest() = default ;
    UpdateK8sClusterUserConfigExpireRequest(const UpdateK8sClusterUserConfigExpireRequest &) = default ;
    UpdateK8sClusterUserConfigExpireRequest(UpdateK8sClusterUserConfigExpireRequest &&) = default ;
    UpdateK8sClusterUserConfigExpireRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateK8sClusterUserConfigExpireRequest() = default ;
    UpdateK8sClusterUserConfigExpireRequest& operator=(const UpdateK8sClusterUserConfigExpireRequest &) = default ;
    UpdateK8sClusterUserConfigExpireRequest& operator=(UpdateK8sClusterUserConfigExpireRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->expireHour_ != nullptr
        && this->user_ != nullptr; };
    // expireHour Field Functions 
    bool hasExpireHour() const { return this->expireHour_ != nullptr;};
    void deleteExpireHour() { this->expireHour_ = nullptr;};
    inline int64_t expireHour() const { DARABONBA_PTR_GET_DEFAULT(expireHour_, 0L) };
    inline UpdateK8sClusterUserConfigExpireRequest& setExpireHour(int64_t expireHour) { DARABONBA_PTR_SET_VALUE(expireHour_, expireHour) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline string user() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
    inline UpdateK8sClusterUserConfigExpireRequest& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


  protected:
    // Specifies the expiration time of the kubeconfig file. Unit: hours.
    // 
    // Valid values: [1, 1876000]. The maximum value is 100 years.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> expireHour_ = nullptr;
    // The RAM user ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> user_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
