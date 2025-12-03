// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONMEMBERSRESPONSEBODYRECORDS_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONMEMBERSRESPONSEBODYRECORDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListApplicationMembersResponseBodyRecordsRoleList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListApplicationMembersResponseBodyRecords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationMembersResponseBodyRecords& obj) { 
      DARABONBA_PTR_TO_JSON(avatar, avatar_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(displayName, displayName_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(roleList, roleList_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationMembersResponseBodyRecords& obj) { 
      DARABONBA_PTR_FROM_JSON(avatar, avatar_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(displayName, displayName_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(roleList, roleList_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ListApplicationMembersResponseBodyRecords() = default ;
    ListApplicationMembersResponseBodyRecords(const ListApplicationMembersResponseBodyRecords &) = default ;
    ListApplicationMembersResponseBodyRecords(ListApplicationMembersResponseBodyRecords &&) = default ;
    ListApplicationMembersResponseBodyRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationMembersResponseBodyRecords() = default ;
    ListApplicationMembersResponseBodyRecords& operator=(const ListApplicationMembersResponseBodyRecords &) = default ;
    ListApplicationMembersResponseBodyRecords& operator=(ListApplicationMembersResponseBodyRecords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->avatar_ == nullptr
        && return this->description_ == nullptr && return this->displayName_ == nullptr && return this->id_ == nullptr && return this->roleList_ == nullptr && return this->type_ == nullptr; };
    // avatar Field Functions 
    bool hasAvatar() const { return this->avatar_ != nullptr;};
    void deleteAvatar() { this->avatar_ = nullptr;};
    inline string avatar() const { DARABONBA_PTR_GET_DEFAULT(avatar_, "") };
    inline ListApplicationMembersResponseBodyRecords& setAvatar(string avatar) { DARABONBA_PTR_SET_VALUE(avatar_, avatar) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListApplicationMembersResponseBodyRecords& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline ListApplicationMembersResponseBodyRecords& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListApplicationMembersResponseBodyRecords& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // roleList Field Functions 
    bool hasRoleList() const { return this->roleList_ != nullptr;};
    void deleteRoleList() { this->roleList_ = nullptr;};
    inline const vector<Models::ListApplicationMembersResponseBodyRecordsRoleList> & roleList() const { DARABONBA_PTR_GET_CONST(roleList_, vector<Models::ListApplicationMembersResponseBodyRecordsRoleList>) };
    inline vector<Models::ListApplicationMembersResponseBodyRecordsRoleList> roleList() { DARABONBA_PTR_GET(roleList_, vector<Models::ListApplicationMembersResponseBodyRecordsRoleList>) };
    inline ListApplicationMembersResponseBodyRecords& setRoleList(const vector<Models::ListApplicationMembersResponseBodyRecordsRoleList> & roleList) { DARABONBA_PTR_SET_VALUE(roleList_, roleList) };
    inline ListApplicationMembersResponseBodyRecords& setRoleList(vector<Models::ListApplicationMembersResponseBodyRecordsRoleList> && roleList) { DARABONBA_PTR_SET_RVALUE(roleList_, roleList) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListApplicationMembersResponseBodyRecords& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> avatar_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<vector<Models::ListApplicationMembersResponseBodyRecordsRoleList>> roleList_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
