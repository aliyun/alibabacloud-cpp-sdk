// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTENANTCONFIGRESPONSEBODYTENANTCONFIGMODEL_HPP_
#define ALIBABACLOUD_MODELS_LISTTENANTCONFIGRESPONSEBODYTENANTCONFIGMODEL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListTenantConfigResponseBodyTenantConfigModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTenantConfigResponseBodyTenantConfigModel& obj) { 
      DARABONBA_PTR_TO_JSON(AppInstanceGroupExpireRemind, appInstanceGroupExpireRemind_);
    };
    friend void from_json(const Darabonba::Json& j, ListTenantConfigResponseBodyTenantConfigModel& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupExpireRemind, appInstanceGroupExpireRemind_);
    };
    ListTenantConfigResponseBodyTenantConfigModel() = default ;
    ListTenantConfigResponseBodyTenantConfigModel(const ListTenantConfigResponseBodyTenantConfigModel &) = default ;
    ListTenantConfigResponseBodyTenantConfigModel(ListTenantConfigResponseBodyTenantConfigModel &&) = default ;
    ListTenantConfigResponseBodyTenantConfigModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTenantConfigResponseBodyTenantConfigModel() = default ;
    ListTenantConfigResponseBodyTenantConfigModel& operator=(const ListTenantConfigResponseBodyTenantConfigModel &) = default ;
    ListTenantConfigResponseBodyTenantConfigModel& operator=(ListTenantConfigResponseBodyTenantConfigModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appInstanceGroupExpireRemind_ == nullptr; };
    // appInstanceGroupExpireRemind Field Functions 
    bool hasAppInstanceGroupExpireRemind() const { return this->appInstanceGroupExpireRemind_ != nullptr;};
    void deleteAppInstanceGroupExpireRemind() { this->appInstanceGroupExpireRemind_ = nullptr;};
    inline bool appInstanceGroupExpireRemind() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupExpireRemind_, false) };
    inline ListTenantConfigResponseBodyTenantConfigModel& setAppInstanceGroupExpireRemind(bool appInstanceGroupExpireRemind) { DARABONBA_PTR_SET_VALUE(appInstanceGroupExpireRemind_, appInstanceGroupExpireRemind) };


  protected:
    // Indicates whether the resource expiration reminder feature is enabled.
    // 
    // Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> appInstanceGroupExpireRemind_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
