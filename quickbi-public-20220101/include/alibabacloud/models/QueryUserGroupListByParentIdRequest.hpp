// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYUSERGROUPLISTBYPARENTIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYUSERGROUPLISTBYPARENTIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryUserGroupListByParentIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryUserGroupListByParentIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ParentUserGroupId, parentUserGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryUserGroupListByParentIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ParentUserGroupId, parentUserGroupId_);
    };
    QueryUserGroupListByParentIdRequest() = default ;
    QueryUserGroupListByParentIdRequest(const QueryUserGroupListByParentIdRequest &) = default ;
    QueryUserGroupListByParentIdRequest(QueryUserGroupListByParentIdRequest &&) = default ;
    QueryUserGroupListByParentIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryUserGroupListByParentIdRequest() = default ;
    QueryUserGroupListByParentIdRequest& operator=(const QueryUserGroupListByParentIdRequest &) = default ;
    QueryUserGroupListByParentIdRequest& operator=(QueryUserGroupListByParentIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->parentUserGroupId_ == nullptr; };
    // parentUserGroupId Field Functions 
    bool hasParentUserGroupId() const { return this->parentUserGroupId_ != nullptr;};
    void deleteParentUserGroupId() { this->parentUserGroupId_ = nullptr;};
    inline string getParentUserGroupId() const { DARABONBA_PTR_GET_DEFAULT(parentUserGroupId_, "") };
    inline QueryUserGroupListByParentIdRequest& setParentUserGroupId(string parentUserGroupId) { DARABONBA_PTR_SET_VALUE(parentUserGroupId_, parentUserGroupId) };


  protected:
    // The ID of the parent user group.
    // 
    // *   If you enter the ID of the parent user group, you can obtain the information of the child user group under this ID.
    // *   If you enter -1, you can obtain the sub-user group information under the root directory.
    // 
    // This parameter is required.
    shared_ptr<string> parentUserGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
