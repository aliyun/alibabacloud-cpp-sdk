// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERGROUPSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListUserGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AttributeValue, attributeValue_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PAPolicyId, PAPolicyId_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(UserGroupIds, userGroupIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AttributeValue, attributeValue_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PAPolicyId, PAPolicyId_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(UserGroupIds, userGroupIds_);
    };
    ListUserGroupsRequest() = default ;
    ListUserGroupsRequest(const ListUserGroupsRequest &) = default ;
    ListUserGroupsRequest(ListUserGroupsRequest &&) = default ;
    ListUserGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserGroupsRequest() = default ;
    ListUserGroupsRequest& operator=(const ListUserGroupsRequest &) = default ;
    ListUserGroupsRequest& operator=(ListUserGroupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attributeValue_ == nullptr
        && this->currentPage_ == nullptr && this->name_ == nullptr && this->PAPolicyId_ == nullptr && this->pageSize_ == nullptr && this->userGroupIds_ == nullptr; };
    // attributeValue Field Functions 
    bool hasAttributeValue() const { return this->attributeValue_ != nullptr;};
    void deleteAttributeValue() { this->attributeValue_ = nullptr;};
    inline string getAttributeValue() const { DARABONBA_PTR_GET_DEFAULT(attributeValue_, "") };
    inline ListUserGroupsRequest& setAttributeValue(string attributeValue) { DARABONBA_PTR_SET_VALUE(attributeValue_, attributeValue) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListUserGroupsRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListUserGroupsRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // PAPolicyId Field Functions 
    bool hasPAPolicyId() const { return this->PAPolicyId_ != nullptr;};
    void deletePAPolicyId() { this->PAPolicyId_ = nullptr;};
    inline string getPAPolicyId() const { DARABONBA_PTR_GET_DEFAULT(PAPolicyId_, "") };
    inline ListUserGroupsRequest& setPAPolicyId(string PAPolicyId) { DARABONBA_PTR_SET_VALUE(PAPolicyId_, PAPolicyId) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListUserGroupsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // userGroupIds Field Functions 
    bool hasUserGroupIds() const { return this->userGroupIds_ != nullptr;};
    void deleteUserGroupIds() { this->userGroupIds_ = nullptr;};
    inline const vector<string> & getUserGroupIds() const { DARABONBA_PTR_GET_CONST(userGroupIds_, vector<string>) };
    inline vector<string> getUserGroupIds() { DARABONBA_PTR_GET(userGroupIds_, vector<string>) };
    inline ListUserGroupsRequest& setUserGroupIds(const vector<string> & userGroupIds) { DARABONBA_PTR_SET_VALUE(userGroupIds_, userGroupIds) };
    inline ListUserGroupsRequest& setUserGroupIds(vector<string> && userGroupIds) { DARABONBA_PTR_SET_RVALUE(userGroupIds_, userGroupIds) };


  protected:
    // The value of a user group property. The value must be 1 to 128 characters in length.
    shared_ptr<string> attributeValue_ {};
    // The page number of the current page in a paged query. Valid values: 1 to 10000.
    // 
    // This parameter is required.
    shared_ptr<int32_t> currentPage_ {};
    // The name of the user group. The name must be 1 to 128 characters in length. It can contain letters, digits, periods (.), underscores (_), and hyphens (-). It supports both uppercase and lowercase letters and Chinese characters.
    shared_ptr<string> name_ {};
    // The ID of an internal network access policy. You can get this value from:
    // 
    // - [ListPrivateAccessPolices](~~ListPrivateAccessPolices~~): List internal network access policies.
    // 
    // - [CreatePrivateAccessPolicy](~~CreatePrivateAccessPolicy~~): Create an internal network access policy.
    shared_ptr<string> PAPolicyId_ {};
    // The number of entries per page in a paged query. Valid values: 1 to 1000.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    // A collection of user group IDs. You can specify up to 100 IDs.
    shared_ptr<vector<string>> userGroupIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
