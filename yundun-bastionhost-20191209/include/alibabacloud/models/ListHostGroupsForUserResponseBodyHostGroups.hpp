// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOSTGROUPSFORUSERRESPONSEBODYHOSTGROUPS_HPP_
#define ALIBABACLOUD_MODELS_LISTHOSTGROUPSFORUSERRESPONSEBODYHOSTGROUPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ListHostGroupsForUserResponseBodyHostGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHostGroupsForUserResponseBodyHostGroups& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(HostGroupId, hostGroupId_);
      DARABONBA_PTR_TO_JSON(HostGroupName, hostGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, ListHostGroupsForUserResponseBodyHostGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(HostGroupId, hostGroupId_);
      DARABONBA_PTR_FROM_JSON(HostGroupName, hostGroupName_);
    };
    ListHostGroupsForUserResponseBodyHostGroups() = default ;
    ListHostGroupsForUserResponseBodyHostGroups(const ListHostGroupsForUserResponseBodyHostGroups &) = default ;
    ListHostGroupsForUserResponseBodyHostGroups(ListHostGroupsForUserResponseBodyHostGroups &&) = default ;
    ListHostGroupsForUserResponseBodyHostGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHostGroupsForUserResponseBodyHostGroups() = default ;
    ListHostGroupsForUserResponseBodyHostGroups& operator=(const ListHostGroupsForUserResponseBodyHostGroups &) = default ;
    ListHostGroupsForUserResponseBodyHostGroups& operator=(ListHostGroupsForUserResponseBodyHostGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && return this->hostGroupId_ == nullptr && return this->hostGroupName_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline ListHostGroupsForUserResponseBodyHostGroups& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // hostGroupId Field Functions 
    bool hasHostGroupId() const { return this->hostGroupId_ != nullptr;};
    void deleteHostGroupId() { this->hostGroupId_ = nullptr;};
    inline string hostGroupId() const { DARABONBA_PTR_GET_DEFAULT(hostGroupId_, "") };
    inline ListHostGroupsForUserResponseBodyHostGroups& setHostGroupId(string hostGroupId) { DARABONBA_PTR_SET_VALUE(hostGroupId_, hostGroupId) };


    // hostGroupName Field Functions 
    bool hasHostGroupName() const { return this->hostGroupName_ != nullptr;};
    void deleteHostGroupName() { this->hostGroupName_ = nullptr;};
    inline string hostGroupName() const { DARABONBA_PTR_GET_DEFAULT(hostGroupName_, "") };
    inline ListHostGroupsForUserResponseBodyHostGroups& setHostGroupName(string hostGroupName) { DARABONBA_PTR_SET_VALUE(hostGroupName_, hostGroupName) };


  protected:
    // The remarks of the host group.
    std::shared_ptr<string> comment_ = nullptr;
    // The host group ID.
    std::shared_ptr<string> hostGroupId_ = nullptr;
    // The name of the host group.
    std::shared_ptr<string> hostGroupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
