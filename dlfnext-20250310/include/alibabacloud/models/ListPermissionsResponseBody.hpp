// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPERMISSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPERMISSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/DlfNext20250310.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class ListPermissionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPermissionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(nextPageToken, nextPageToken_);
      DARABONBA_PTR_TO_JSON(permissions, permissions_);
    };
    friend void from_json(const Darabonba::Json& j, ListPermissionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(nextPageToken, nextPageToken_);
      DARABONBA_PTR_FROM_JSON(permissions, permissions_);
    };
    ListPermissionsResponseBody() = default ;
    ListPermissionsResponseBody(const ListPermissionsResponseBody &) = default ;
    ListPermissionsResponseBody(ListPermissionsResponseBody &&) = default ;
    ListPermissionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPermissionsResponseBody() = default ;
    ListPermissionsResponseBody& operator=(const ListPermissionsResponseBody &) = default ;
    ListPermissionsResponseBody& operator=(ListPermissionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nextPageToken_ != nullptr
        && this->permissions_ != nullptr; };
    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline string nextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
    inline ListPermissionsResponseBody& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // permissions Field Functions 
    bool hasPermissions() const { return this->permissions_ != nullptr;};
    void deletePermissions() { this->permissions_ = nullptr;};
    inline const vector<Permission> & permissions() const { DARABONBA_PTR_GET_CONST(permissions_, vector<Permission>) };
    inline vector<Permission> permissions() { DARABONBA_PTR_GET(permissions_, vector<Permission>) };
    inline ListPermissionsResponseBody& setPermissions(const vector<Permission> & permissions) { DARABONBA_PTR_SET_VALUE(permissions_, permissions) };
    inline ListPermissionsResponseBody& setPermissions(vector<Permission> && permissions) { DARABONBA_PTR_SET_RVALUE(permissions_, permissions) };


  protected:
    std::shared_ptr<string> nextPageToken_ = nullptr;
    std::shared_ptr<vector<Permission>> permissions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
