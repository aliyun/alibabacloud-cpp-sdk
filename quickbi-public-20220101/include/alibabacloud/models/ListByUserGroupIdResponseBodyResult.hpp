// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBYUSERGROUPIDRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTBYUSERGROUPIDRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListByUserGroupIdResponseBodyResultUserGroupModels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class ListByUserGroupIdResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListByUserGroupIdResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(FailedUserGroupIds, failedUserGroupIds_);
      DARABONBA_PTR_TO_JSON(UserGroupModels, userGroupModels_);
    };
    friend void from_json(const Darabonba::Json& j, ListByUserGroupIdResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedUserGroupIds, failedUserGroupIds_);
      DARABONBA_PTR_FROM_JSON(UserGroupModels, userGroupModels_);
    };
    ListByUserGroupIdResponseBodyResult() = default ;
    ListByUserGroupIdResponseBodyResult(const ListByUserGroupIdResponseBodyResult &) = default ;
    ListByUserGroupIdResponseBodyResult(ListByUserGroupIdResponseBodyResult &&) = default ;
    ListByUserGroupIdResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListByUserGroupIdResponseBodyResult() = default ;
    ListByUserGroupIdResponseBodyResult& operator=(const ListByUserGroupIdResponseBodyResult &) = default ;
    ListByUserGroupIdResponseBodyResult& operator=(ListByUserGroupIdResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->failedUserGroupIds_ != nullptr
        && this->userGroupModels_ != nullptr; };
    // failedUserGroupIds Field Functions 
    bool hasFailedUserGroupIds() const { return this->failedUserGroupIds_ != nullptr;};
    void deleteFailedUserGroupIds() { this->failedUserGroupIds_ = nullptr;};
    inline const vector<string> & failedUserGroupIds() const { DARABONBA_PTR_GET_CONST(failedUserGroupIds_, vector<string>) };
    inline vector<string> failedUserGroupIds() { DARABONBA_PTR_GET(failedUserGroupIds_, vector<string>) };
    inline ListByUserGroupIdResponseBodyResult& setFailedUserGroupIds(const vector<string> & failedUserGroupIds) { DARABONBA_PTR_SET_VALUE(failedUserGroupIds_, failedUserGroupIds) };
    inline ListByUserGroupIdResponseBodyResult& setFailedUserGroupIds(vector<string> && failedUserGroupIds) { DARABONBA_PTR_SET_RVALUE(failedUserGroupIds_, failedUserGroupIds) };


    // userGroupModels Field Functions 
    bool hasUserGroupModels() const { return this->userGroupModels_ != nullptr;};
    void deleteUserGroupModels() { this->userGroupModels_ = nullptr;};
    inline const vector<Models::ListByUserGroupIdResponseBodyResultUserGroupModels> & userGroupModels() const { DARABONBA_PTR_GET_CONST(userGroupModels_, vector<Models::ListByUserGroupIdResponseBodyResultUserGroupModels>) };
    inline vector<Models::ListByUserGroupIdResponseBodyResultUserGroupModels> userGroupModels() { DARABONBA_PTR_GET(userGroupModels_, vector<Models::ListByUserGroupIdResponseBodyResultUserGroupModels>) };
    inline ListByUserGroupIdResponseBodyResult& setUserGroupModels(const vector<Models::ListByUserGroupIdResponseBodyResultUserGroupModels> & userGroupModels) { DARABONBA_PTR_SET_VALUE(userGroupModels_, userGroupModels) };
    inline ListByUserGroupIdResponseBodyResult& setUserGroupModels(vector<Models::ListByUserGroupIdResponseBodyResultUserGroupModels> && userGroupModels) { DARABONBA_PTR_SET_RVALUE(userGroupModels_, userGroupModels) };


  protected:
    // List of failed user groups.
    std::shared_ptr<vector<string>> failedUserGroupIds_ = nullptr;
    // The details of the user group that was queried.
    std::shared_ptr<vector<Models::ListByUserGroupIdResponseBodyResultUserGroupModels>> userGroupModels_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
