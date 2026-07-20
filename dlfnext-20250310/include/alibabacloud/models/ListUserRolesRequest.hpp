// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERROLESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERROLESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class ListUserRolesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserRolesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(pageToken, pageToken_);
      DARABONBA_PTR_TO_JSON(userPrincipal, userPrincipal_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserRolesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(pageToken, pageToken_);
      DARABONBA_PTR_FROM_JSON(userPrincipal, userPrincipal_);
    };
    ListUserRolesRequest() = default ;
    ListUserRolesRequest(const ListUserRolesRequest &) = default ;
    ListUserRolesRequest(ListUserRolesRequest &&) = default ;
    ListUserRolesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserRolesRequest() = default ;
    ListUserRolesRequest& operator=(const ListUserRolesRequest &) = default ;
    ListUserRolesRequest& operator=(ListUserRolesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->pageToken_ == nullptr && this->userPrincipal_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListUserRolesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // pageToken Field Functions 
    bool hasPageToken() const { return this->pageToken_ != nullptr;};
    void deletePageToken() { this->pageToken_ = nullptr;};
    inline string getPageToken() const { DARABONBA_PTR_GET_DEFAULT(pageToken_, "") };
    inline ListUserRolesRequest& setPageToken(string pageToken) { DARABONBA_PTR_SET_VALUE(pageToken_, pageToken) };


    // userPrincipal Field Functions 
    bool hasUserPrincipal() const { return this->userPrincipal_ != nullptr;};
    void deleteUserPrincipal() { this->userPrincipal_ = nullptr;};
    inline string getUserPrincipal() const { DARABONBA_PTR_GET_DEFAULT(userPrincipal_, "") };
    inline ListUserRolesRequest& setUserPrincipal(string userPrincipal) { DARABONBA_PTR_SET_VALUE(userPrincipal_, userPrincipal) };


  protected:
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> pageToken_ {};
    shared_ptr<string> userPrincipal_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
