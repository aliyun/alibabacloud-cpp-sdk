// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCETYPERESPONSEBODYRESOURCETYPEHANDLERSUPDATE_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCETYPERESPONSEBODYRESOURCETYPEHANDLERSUPDATE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudcontrol20220830
{
namespace Models
{
  class GetResourceTypeResponseBodyResourceTypeHandlersUpdate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceTypeResponseBodyResourceTypeHandlersUpdate& obj) { 
      DARABONBA_PTR_TO_JSON(permissions, permissions_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceTypeResponseBodyResourceTypeHandlersUpdate& obj) { 
      DARABONBA_PTR_FROM_JSON(permissions, permissions_);
    };
    GetResourceTypeResponseBodyResourceTypeHandlersUpdate() = default ;
    GetResourceTypeResponseBodyResourceTypeHandlersUpdate(const GetResourceTypeResponseBodyResourceTypeHandlersUpdate &) = default ;
    GetResourceTypeResponseBodyResourceTypeHandlersUpdate(GetResourceTypeResponseBodyResourceTypeHandlersUpdate &&) = default ;
    GetResourceTypeResponseBodyResourceTypeHandlersUpdate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceTypeResponseBodyResourceTypeHandlersUpdate() = default ;
    GetResourceTypeResponseBodyResourceTypeHandlersUpdate& operator=(const GetResourceTypeResponseBodyResourceTypeHandlersUpdate &) = default ;
    GetResourceTypeResponseBodyResourceTypeHandlersUpdate& operator=(GetResourceTypeResponseBodyResourceTypeHandlersUpdate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->permissions_ != nullptr; };
    // permissions Field Functions 
    bool hasPermissions() const { return this->permissions_ != nullptr;};
    void deletePermissions() { this->permissions_ = nullptr;};
    inline const vector<string> & permissions() const { DARABONBA_PTR_GET_CONST(permissions_, vector<string>) };
    inline vector<string> permissions() { DARABONBA_PTR_GET(permissions_, vector<string>) };
    inline GetResourceTypeResponseBodyResourceTypeHandlersUpdate& setPermissions(const vector<string> & permissions) { DARABONBA_PTR_SET_VALUE(permissions_, permissions) };
    inline GetResourceTypeResponseBodyResourceTypeHandlersUpdate& setPermissions(vector<string> && permissions) { DARABONBA_PTR_SET_RVALUE(permissions_, permissions) };


  protected:
    // The information about the required RAM permissions.
    std::shared_ptr<vector<string>> permissions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudcontrol20220830
#endif
