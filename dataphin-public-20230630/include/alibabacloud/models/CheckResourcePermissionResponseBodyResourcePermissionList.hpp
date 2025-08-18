// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKRESOURCEPERMISSIONRESPONSEBODYRESOURCEPERMISSIONLIST_HPP_
#define ALIBABACLOUD_MODELS_CHECKRESOURCEPERMISSIONRESPONSEBODYRESOURCEPERMISSIONLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CheckResourcePermissionResponseBodyResourcePermissionList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckResourcePermissionResponseBodyResourcePermissionList& obj) { 
      DARABONBA_PTR_TO_JSON(HasPermission, hasPermission_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckResourcePermissionResponseBodyResourcePermissionList& obj) { 
      DARABONBA_PTR_FROM_JSON(HasPermission, hasPermission_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
    };
    CheckResourcePermissionResponseBodyResourcePermissionList() = default ;
    CheckResourcePermissionResponseBodyResourcePermissionList(const CheckResourcePermissionResponseBodyResourcePermissionList &) = default ;
    CheckResourcePermissionResponseBodyResourcePermissionList(CheckResourcePermissionResponseBodyResourcePermissionList &&) = default ;
    CheckResourcePermissionResponseBodyResourcePermissionList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckResourcePermissionResponseBodyResourcePermissionList() = default ;
    CheckResourcePermissionResponseBodyResourcePermissionList& operator=(const CheckResourcePermissionResponseBodyResourcePermissionList &) = default ;
    CheckResourcePermissionResponseBodyResourcePermissionList& operator=(CheckResourcePermissionResponseBodyResourcePermissionList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hasPermission_ != nullptr
        && this->resourceId_ != nullptr; };
    // hasPermission Field Functions 
    bool hasHasPermission() const { return this->hasPermission_ != nullptr;};
    void deleteHasPermission() { this->hasPermission_ = nullptr;};
    inline bool hasPermission() const { DARABONBA_PTR_GET_DEFAULT(hasPermission_, false) };
    inline CheckResourcePermissionResponseBodyResourcePermissionList& setHasPermission(bool hasPermission) { DARABONBA_PTR_SET_VALUE(hasPermission_, hasPermission) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline CheckResourcePermissionResponseBodyResourcePermissionList& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


  protected:
    std::shared_ptr<bool> hasPermission_ = nullptr;
    std::shared_ptr<string> resourceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
