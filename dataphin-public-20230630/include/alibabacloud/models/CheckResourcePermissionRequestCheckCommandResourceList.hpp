// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKRESOURCEPERMISSIONREQUESTCHECKCOMMANDRESOURCELIST_HPP_
#define ALIBABACLOUD_MODELS_CHECKRESOURCEPERMISSIONREQUESTCHECKCOMMANDRESOURCELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CheckResourcePermissionRequestCheckCommandResourceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckResourcePermissionRequestCheckCommandResourceList& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckResourcePermissionRequestCheckCommandResourceList& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
    };
    CheckResourcePermissionRequestCheckCommandResourceList() = default ;
    CheckResourcePermissionRequestCheckCommandResourceList(const CheckResourcePermissionRequestCheckCommandResourceList &) = default ;
    CheckResourcePermissionRequestCheckCommandResourceList(CheckResourcePermissionRequestCheckCommandResourceList &&) = default ;
    CheckResourcePermissionRequestCheckCommandResourceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckResourcePermissionRequestCheckCommandResourceList() = default ;
    CheckResourcePermissionRequestCheckCommandResourceList& operator=(const CheckResourcePermissionRequestCheckCommandResourceList &) = default ;
    CheckResourcePermissionRequestCheckCommandResourceList& operator=(CheckResourcePermissionRequestCheckCommandResourceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resourceId_ != nullptr; };
    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline CheckResourcePermissionRequestCheckCommandResourceList& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> resourceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
