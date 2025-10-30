// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GRANTRESOURCEPERMISSIONREQUESTGRANTCOMMANDRESOURCELIST_HPP_
#define ALIBABACLOUD_MODELS_GRANTRESOURCEPERMISSIONREQUESTGRANTCOMMANDRESOURCELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GrantResourcePermissionRequestGrantCommandResourceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GrantResourcePermissionRequestGrantCommandResourceList& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
    };
    friend void from_json(const Darabonba::Json& j, GrantResourcePermissionRequestGrantCommandResourceList& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
    };
    GrantResourcePermissionRequestGrantCommandResourceList() = default ;
    GrantResourcePermissionRequestGrantCommandResourceList(const GrantResourcePermissionRequestGrantCommandResourceList &) = default ;
    GrantResourcePermissionRequestGrantCommandResourceList(GrantResourcePermissionRequestGrantCommandResourceList &&) = default ;
    GrantResourcePermissionRequestGrantCommandResourceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GrantResourcePermissionRequestGrantCommandResourceList() = default ;
    GrantResourcePermissionRequestGrantCommandResourceList& operator=(const GrantResourcePermissionRequestGrantCommandResourceList &) = default ;
    GrantResourcePermissionRequestGrantCommandResourceList& operator=(GrantResourcePermissionRequestGrantCommandResourceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceId_ == nullptr; };
    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline GrantResourcePermissionRequestGrantCommandResourceList& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


  protected:
    std::shared_ptr<string> resourceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
