// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOSTGROUPSRESPONSEBODYHOSTGROUPS_HPP_
#define ALIBABACLOUD_MODELS_LISTHOSTGROUPSRESPONSEBODYHOSTGROUPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ListHostGroupsResponseBodyHostGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHostGroupsResponseBodyHostGroups& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(HostGroupId, hostGroupId_);
      DARABONBA_PTR_TO_JSON(HostGroupName, hostGroupName_);
      DARABONBA_PTR_TO_JSON(MemberCount, memberCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListHostGroupsResponseBodyHostGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(HostGroupId, hostGroupId_);
      DARABONBA_PTR_FROM_JSON(HostGroupName, hostGroupName_);
      DARABONBA_PTR_FROM_JSON(MemberCount, memberCount_);
    };
    ListHostGroupsResponseBodyHostGroups() = default ;
    ListHostGroupsResponseBodyHostGroups(const ListHostGroupsResponseBodyHostGroups &) = default ;
    ListHostGroupsResponseBodyHostGroups(ListHostGroupsResponseBodyHostGroups &&) = default ;
    ListHostGroupsResponseBodyHostGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHostGroupsResponseBodyHostGroups() = default ;
    ListHostGroupsResponseBodyHostGroups& operator=(const ListHostGroupsResponseBodyHostGroups &) = default ;
    ListHostGroupsResponseBodyHostGroups& operator=(ListHostGroupsResponseBodyHostGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && return this->hostGroupId_ == nullptr && return this->hostGroupName_ == nullptr && return this->memberCount_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline ListHostGroupsResponseBodyHostGroups& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // hostGroupId Field Functions 
    bool hasHostGroupId() const { return this->hostGroupId_ != nullptr;};
    void deleteHostGroupId() { this->hostGroupId_ = nullptr;};
    inline string hostGroupId() const { DARABONBA_PTR_GET_DEFAULT(hostGroupId_, "") };
    inline ListHostGroupsResponseBodyHostGroups& setHostGroupId(string hostGroupId) { DARABONBA_PTR_SET_VALUE(hostGroupId_, hostGroupId) };


    // hostGroupName Field Functions 
    bool hasHostGroupName() const { return this->hostGroupName_ != nullptr;};
    void deleteHostGroupName() { this->hostGroupName_ = nullptr;};
    inline string hostGroupName() const { DARABONBA_PTR_GET_DEFAULT(hostGroupName_, "") };
    inline ListHostGroupsResponseBodyHostGroups& setHostGroupName(string hostGroupName) { DARABONBA_PTR_SET_VALUE(hostGroupName_, hostGroupName) };


    // memberCount Field Functions 
    bool hasMemberCount() const { return this->memberCount_ != nullptr;};
    void deleteMemberCount() { this->memberCount_ = nullptr;};
    inline int32_t memberCount() const { DARABONBA_PTR_GET_DEFAULT(memberCount_, 0) };
    inline ListHostGroupsResponseBodyHostGroups& setMemberCount(int32_t memberCount) { DARABONBA_PTR_SET_VALUE(memberCount_, memberCount) };


  protected:
    // The remarks of the asset group.
    std::shared_ptr<string> comment_ = nullptr;
    // The asset group ID.
    std::shared_ptr<string> hostGroupId_ = nullptr;
    // The name of the asset group.
    std::shared_ptr<string> hostGroupName_ = nullptr;
    // The number of hosts in the asset group.
    std::shared_ptr<int32_t> memberCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
