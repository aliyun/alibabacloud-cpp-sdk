// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTROLEUSERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTROLEUSERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class ListRoleUsersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRoleUsersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(pageToken, pageToken_);
      DARABONBA_PTR_TO_JSON(rolePrincipal, rolePrincipal_);
    };
    friend void from_json(const Darabonba::Json& j, ListRoleUsersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(pageToken, pageToken_);
      DARABONBA_PTR_FROM_JSON(rolePrincipal, rolePrincipal_);
    };
    ListRoleUsersRequest() = default ;
    ListRoleUsersRequest(const ListRoleUsersRequest &) = default ;
    ListRoleUsersRequest(ListRoleUsersRequest &&) = default ;
    ListRoleUsersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRoleUsersRequest() = default ;
    ListRoleUsersRequest& operator=(const ListRoleUsersRequest &) = default ;
    ListRoleUsersRequest& operator=(ListRoleUsersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->pageToken_ == nullptr && this->rolePrincipal_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListRoleUsersRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // pageToken Field Functions 
    bool hasPageToken() const { return this->pageToken_ != nullptr;};
    void deletePageToken() { this->pageToken_ = nullptr;};
    inline string getPageToken() const { DARABONBA_PTR_GET_DEFAULT(pageToken_, "") };
    inline ListRoleUsersRequest& setPageToken(string pageToken) { DARABONBA_PTR_SET_VALUE(pageToken_, pageToken) };


    // rolePrincipal Field Functions 
    bool hasRolePrincipal() const { return this->rolePrincipal_ != nullptr;};
    void deleteRolePrincipal() { this->rolePrincipal_ = nullptr;};
    inline string getRolePrincipal() const { DARABONBA_PTR_GET_DEFAULT(rolePrincipal_, "") };
    inline ListRoleUsersRequest& setRolePrincipal(string rolePrincipal) { DARABONBA_PTR_SET_VALUE(rolePrincipal_, rolePrincipal) };


  protected:
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> pageToken_ {};
    shared_ptr<string> rolePrincipal_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
